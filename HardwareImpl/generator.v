module generator(
    input [31:0] a,
    input [31:0] b,
    output reg [31:0] aa_minus_bb,
    output reg [31:0] two_ab,
    output reg [31:0] aa_plus_bb
);

wire [31:0] aa;
wire [31:0] bb;
wire [31:0] ab;

multiplier a_a (
    .a(a),
    .b(a),
    .result(aa)
);

multiplier b_b (
    .a(b),
    .b(b),
    .result(bb)
);

multiplier a_b (
    .a(a),
    .b(b),
    .result(ab)
);

wire [30:0] ab_truncated;

assign ab_truncated = ab[30:0]; //moved outside of always comb block

always @* begin
    aa_minus_bb = aa - bb;
    aa_plus_bb = aa + bb;
    two_ab = {ab_truncated, 1'b0};
end

endmodule
