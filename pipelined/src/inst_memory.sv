/* verilator lint_off UNUSED */
module inst_memory (
	input logic clk_i, rst_ni,
	input logic [31:0] addr_i,

	output logic [31:0] rdata_o
);
    logic [31:0] memory [2**12-1:0];

    //read operation
    assign rdata_o = memory [addr_i[13:2]];
    
    //reset:
  //  always_ff @(posedge clk_i)
  //    if(!rst_ni)
  //      memory <= '{default: 32'b0};

  `ifdef VERILATOR
    initial begin
      $readmemh("../mem/instmem.data.sim", memory);
    end
  `else
    initial begin
      $readmemh("D:\\instmem.data.kit", memory);
    end
`endif
   
endmodule: inst_memory
/* verilator lint_off UNUSED */
