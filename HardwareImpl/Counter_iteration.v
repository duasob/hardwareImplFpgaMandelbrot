module Counter_iteration (
  input aclk,       // Clock input
  input clr,       // Reset input (assume active high for this example)
  output reg [7:0] r,g,b, // 24-bit counter output
  output reg ovf   // Overflow output
);

  // 24-bit counter register
  reg [23:0] counter_reg;

  always @(posedge aclk) begin
    if (clr) begin
      // Reset the counter and overflow signal
      counter_reg <= 24'd0;
      ovf <= 1'b0;
    end else begin
      if (counter_reg >= 24'h3FF) begin
        counter_reg <= 24'd0;
        ovf <= 1'b1;
      end else begin
        // Increment counter and clear overflow
        counter_reg <= counter_reg + 24'd4;
        ovf <= 1'b0;
      end
    end
    
    r <= counter_reg[23:16];
    g <= counter_reg[15:8];
    b <= counter_reg[7:0];
  end

endmodule
