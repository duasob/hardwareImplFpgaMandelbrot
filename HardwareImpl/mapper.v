module mapper(
    input aclk,
    input aresetn,
    input en,
    input [31:0] zoom_factor,
    input [31:0] re_lower,
    input [31:0] im_upper,
    output [31:0] re_position,
    output [31:0] im_position,
    output ovf,
    output [9:0] x,
    output [9:0] y
);

wire [9:0] x_internal;
wire [9:0] y_internal;
wire [31:0] XtimesZF;
wire [31:0] YtimesZF;

// Instantiate the dimensions module
dimensions Dimensions (
    .aclk(aclk),
    .en(en),
    .aresetn(aresetn),
    .OVF(ovf),
    .X(x_internal),
    .Y(y_internal)
);

// Instantiate the XtimesDELTA multiplier
multiplier XtimesDELTA (
    .a({ 1'b0 , x_internal, 21'b0}),
    .b(zoom_factor),
    .result(XtimesZF)
);

// Instantiate the YtimesDELTA multiplier
multiplier YtimesDELTA (
    .a({ 1'b0, y_internal, 21'b0}),
    .b(zoom_factor),
    .result(YtimesZF)
);

assign x = x_internal;
assign y = y_internal;
assign re_position = XtimesZF + re_lower;
assign im_position = YtimesZF + im_upper;

endmodule
