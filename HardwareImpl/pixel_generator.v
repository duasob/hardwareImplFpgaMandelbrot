module pixel_generator(
    //input aresetn,
    //input aclk,

    input out_stream_aclk,
    input s_axi_lite_aclk,
    input axi_resetn,
    input periph_resetn,

    output [31:0]   out_stream_tdata,
    output [3:0]    out_stream_tkeep,
    output          out_stream_tlast,
    input           out_stream_tready,
    output          out_stream_tvalid,
    output [0:0]    out_stream_tuser,

    //AXI-Lite S
    input [AXI_LITE_ADDR_WIDTH-1:0]     s_axi_lite_araddr,
    output          s_axi_lite_arready,
    input           s_axi_lite_arvalid,

    input [AXI_LITE_ADDR_WIDTH-1:0]     s_axi_lite_awaddr,
    output          s_axi_lite_awready,
    input           s_axi_lite_awvalid,

    input           s_axi_lite_bready,
    output [1:0]    s_axi_lite_bresp,
    output          s_axi_lite_bvalid,

    output [31:0]   s_axi_lite_rdata,
    input           s_axi_lite_rready,
    output [1:0]    s_axi_lite_rresp,
    output          s_axi_lite_rvalid,

    input  [31:0]   s_axi_lite_wdata,
    output          s_axi_lite_wready,
    input           s_axi_lite_wvalid


);


localparam X_SIZE = 1023;
localparam Y_SIZE = 767;
localparam REG_FILE_SIZE = 8;

//axi lite parameters
parameter AXI_LITE_ADDR_WIDTH = 8;

localparam AWAIT_WADD_AND_DATA = 3'b000;
localparam AWAIT_WDATA = 3'b001;
localparam AWAIT_WADD = 3'b010;
localparam AWAIT_WRITE = 3'b100;
localparam AWAIT_RESP = 3'b101;

localparam AWAIT_RADD = 2'b00;
localparam AWAIT_FETCH = 2'b01;
localparam AWAIT_READ = 2'b10;

localparam AXI_OK = 2'b00;
localparam AXI_ERR = 2'b10;

reg [31:0]                          regfile [REG_FILE_SIZE-1:0];
reg [AXI_LITE_ADDR_WIDTH-3:0]       writeAddr, readAddr;
reg [31:0]                          readData, writeData;
reg [1:0]                           readState = AWAIT_RADD;
reg [2:0]                           writeState = AWAIT_WADD_AND_DATA;

//Read from the register file
always @(posedge s_axi_lite_aclk) begin
    
    readData <= regfile[readAddr];

    if (!axi_resetn) begin
    readState <= AWAIT_RADD;
    end

    else case (readState)

        AWAIT_RADD: begin
            if (s_axi_lite_arvalid) begin
                readAddr <= s_axi_lite_araddr[7:2];
                readState <= AWAIT_FETCH;
            end
        end

        AWAIT_FETCH: begin
            readState <= AWAIT_READ;
        end

        AWAIT_READ: begin
            if (s_axi_lite_rready) begin
                readState <= AWAIT_RADD;
            end
        end

        default: begin
            readState <= AWAIT_RADD;
        end

    endcase
end

assign s_axi_lite_arready = (readState == AWAIT_RADD);
assign s_axi_lite_rresp = (readAddr < REG_FILE_SIZE) ? AXI_OK : AXI_ERR;
assign s_axi_lite_rvalid = (readState == AWAIT_READ);
assign s_axi_lite_rdata = readData;

//Write to the register file, use a state machine to track address write, data write and response read events
always @(posedge s_axi_lite_aclk) begin

    if (!axi_resetn) begin
        writeState <= AWAIT_WADD_AND_DATA;
    end

    else case (writeState)

        AWAIT_WADD_AND_DATA: begin  //Idle, awaiting a write address or data
            case ({s_axi_lite_awvalid, s_axi_lite_wvalid})
                2'b10: begin
                    writeAddr <= s_axi_lite_awaddr[7:2];
                    writeState <= AWAIT_WDATA;
                end
                2'b01: begin
                    writeData <= s_axi_lite_wdata;
                    writeState <= AWAIT_WADD;
                end
                2'b11: begin
                    writeData <= s_axi_lite_wdata;
                    writeAddr <= s_axi_lite_awaddr[7:2];
                    writeState <= AWAIT_WRITE;
                end
                default: begin
                    writeState <= AWAIT_WADD_AND_DATA;
                end
            endcase        
        end

        AWAIT_WDATA: begin //Received address, waiting for data
            if (s_axi_lite_wvalid) begin
                writeData <= s_axi_lite_wdata;
                writeState <= AWAIT_WRITE;
            end
        end

        AWAIT_WADD: begin //Received data, waiting for address
            if (s_axi_lite_awvalid) begin
                writeAddr <= s_axi_lite_awaddr[7:2];
                writeState <= AWAIT_WRITE;
            end
        end

        AWAIT_WRITE: begin //Perform the write
            regfile[writeAddr] <= writeData;
            writeState <= AWAIT_RESP;
        end

        AWAIT_RESP: begin //Wait to send response
            if (s_axi_lite_bready) begin
                writeState <= AWAIT_WADD_AND_DATA;
            end
        end

        default: begin
            writeState <= AWAIT_WADD_AND_DATA;
        end
    endcase
end

assign s_axi_lite_awready = (writeState == AWAIT_WADD_AND_DATA || writeState == AWAIT_WADD);
assign s_axi_lite_wready = (writeState == AWAIT_WADD_AND_DATA || writeState == AWAIT_WDATA);
assign s_axi_lite_bvalid = (writeState == AWAIT_RESP);
assign s_axi_lite_bresp = (writeAddr < REG_FILE_SIZE) ? AXI_OK : AXI_ERR;


wire ready;
wire first = (x_internal == 0) & (y_internal==0);
wire lastx = (x_internal == X_SIZE - 1);
wire lasty = (y_internal == Y_SIZE - 1);

// Internal signals
reg [9:0] x_internal;  // real coordinate
reg [9:0] y_internal;  // imag coordinate
wire ovf;  // overflow due to finish image generation 

wire [31:0] re_internal;
wire [31:0] im_internal;

wire q;   // top flipflop output 
wire q_bar;    // ~q
reg [7:0] r, g, b;  // out of the bottom counter
wire ovf_it; // overflow for iteration stop (size larger than 2) 

reg or_out;   // output of the or gate
wire div;  // diverged output 

// Always block for or_out logic
always @* begin
    or_out = div || ovf_it;
end
// Instantiate mapper module
mapper Mapper (
    .aclk(out_stream_aclk),
    .aresetn(periph_resetn),
    .en(q_bar & or_out & ready),  
    .zoom_factor(32'h00001000),
    .re_lower(32'hFFC00000),
    .im_upper(32'hFFD00000),
    .re_position(re_internal),
    .im_position(im_internal),
    .ovf(ovf),
    .x(x_internal),
    .y(y_internal)
);

// Instantiate diverge module
diverge Diverge(
    .a(re_internal),
    .b(im_internal),
    .ld(or_out),
    .aclk(out_stream_aclk),
    .diverged(div)
);



// Instantiate counter iteration module
Counter_iteration counter_it(
    .aclk(out_stream_aclk),
    .clr(or_out),   
    .r(r),
    .g(g),
    .b(b),
    .ovf(ovf_it)
);



// Instantiate top flip-flop module
ff_top top_f(
    .aclk(out_stream_aclk),
    .s(ovf),
    .aresetn(periph_resetn),
    .q(q),
    .q_bar(q_bar)
);





packer pixel_packer(  .aclk(out_stream_aclk),
                    .aresetn(periph_resetn),
                    .r(r), .g(g), .b(b),
                    .eol(lastx), .in_stream_ready(ready), .valid(or_out), .sof(first),
                    .out_stream_tdata(out_stream_tdata), .out_stream_tkeep(out_stream_tkeep),
                    .out_stream_tlast(out_stream_tlast), .out_stream_tready(out_stream_tready),
                    .out_stream_tvalid(out_stream_tvalid), .out_stream_tuser(out_stream_tuser) 
);


endmodule
