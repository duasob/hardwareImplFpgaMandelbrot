// Performs raster pattern
// Overflow is only high when it is finished generating the image

module dimensions (
    input aclk,  
    input en,
    input aresetn,
    output reg OVF,
    output reg [9:0] X,
    output reg [9:0] Y
);

always @(posedge aclk) begin
    if (aresetn) begin
        X <= 10'b0;
        Y <= 10'b0;
        OVF <= 1'b0;
    end else if (en) begin
        if (X == 10'h3FF) begin        // 3FF = 1023
            if (Y >= 10'h2FF) begin    // 2FF = 767
                OVF <= 1;
                Y <= 10'b0;
                X <= 10'b0;
            end else begin
                Y <= Y + 10'b01;
                X <= 10'b0;
            end
        end else begin
            X <= X + 10'b01;
        end
    end
end

endmodule
