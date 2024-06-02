module ff_div(
    input aclk,
    input [31:0] s,
    output reg [31:0] q
);

always @(posedge aclk) begin
    q <= s;
end

endmodule
