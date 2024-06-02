module ff_top(
    input aclk,
    input s,
    input aresetn,
    output reg q,
    output reg q_bar
);

always @(posedge aclk) begin
    if (aresetn)
        q <= 1'b0;
    else
        q <= s;
    q_bar <= ~q;
end

endmodule
