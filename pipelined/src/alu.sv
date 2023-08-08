
module alu
  (
	input logic [31:0] operand_a_i, operand_b_i,
	input logic [3:0] alu_op_i,
	output logic [31:0] alu_data_o
  );

  typedef enum logic[3:0] {
    A_ADD = 4'h0,
    A_SUB = 4'h1,
    A_SLT = 4'h2,
    A_SLTU= 4'h3,
    A_XOR = 4'h4,
    A_OR  = 4'h5,
    A_AND = 4'h6,
    A_SLL = 4'h7,
    A_SRL = 4'h8,
    A_SRA = 4'h9,
    A_RS2 = 4'hA
  } alu_op_e;
  alu_op_e alu_op;
    
  always_comb
    case (alu_op_i)
      4'h0: alu_op = A_ADD;
      4'h1: alu_op = A_SLL;
      4'h2: alu_op = A_SLT;
      4'h3: alu_op = A_SLTU;
      4'h4: alu_op = A_XOR;
      4'h5: alu_op = A_SRL;
      4'h6: alu_op = A_OR;
      4'h7: alu_op = A_AND;
      4'h8: alu_op = A_SUB;
      4'hD: alu_op = A_SRA;
      4'h9: alu_op = A_RS2;
      default: alu_op = A_ADD;
    endcase
  /* verilator lint_off UNUSED */
    logic [31:0] temp_shift;
    logic [4:0] shift_amt;
    logic br_unsigned;
    logic br_less, br_equal;
  /* verilator lint_off UNUSED */
  assign br_unsigned = alu_op == A_SLTU; //SLTU
  always_comb
    case(alu_op)
      A_ADD: alu_data_o = operand_a_i + operand_b_i;
      A_SUB: alu_data_o = operand_a_i + ~operand_b_i + 32'b1;
      A_SLT: alu_data_o = {31'b0, br_less};
      A_SLTU:alu_data_o = {31'b0, br_less};
      A_XOR: alu_data_o = operand_a_i ^ operand_b_i;
      A_OR:  alu_data_o = operand_a_i | operand_b_i;
      A_AND: alu_data_o = operand_a_i & operand_b_i;
      A_SLL: alu_data_o = operand_a_i << operand_b_i[4:0];
      A_SRL: alu_data_o = operand_a_i >> operand_b_i[4:0];
      A_SRA: alu_data_o = temp_shift;
      A_RS2: alu_data_o = operand_b_i;
    default: alu_data_o = operand_a_i + operand_b_i;
  endcase
  
      always_comb //SRA
        begin
          temp_shift = operand_a_i;
          shift_amt = operand_b_i[4:0];
            if(temp_shift[31])
             for(int i = 0; i < shift_amt; i++)
                begin
                  temp_shift = temp_shift >> 1;
                  temp_shift[31] = 1'b1;
                end
            else temp_shift = operand_a_i >> operand_b_i[4:0];
        end
      brcomp brcomp2 (
      	.operand_a_i(operand_a_i),
      	.operand_b_i(operand_b_i),
      	.br_unsigned_i(br_unsigned),
      	.br_less_o(br_less),
      	.br_equal_o(br_equal)
      );
endmodule: alu

// module alu (
//     //inputs
//     input signed [31:0] operand_a_i, operand_b_i,
//     input logic  [ 3:0] alu_op_i,  //4bits
//     //output
//     output logic [31:0] alu_data_o
// );
// logic signed [31:0] temp;
// always_comb begin
//     case (alu_op_i)
//         4'b0010: temp = ((operand_a_i + ((~operand_b_i) + 32'h1))&32'h80000000)>>31;
//         default: temp = '0;
//     endcase
// end
//     always_comb begin : alu
//         alu_data_o = '0;
//         case (alu_op_i)
//             4'b0000: alu_data_o = operand_a_i + operand_b_i; //ADD
//             4'b1000: alu_data_o = operand_a_i + ((~operand_b_i) + 32'h1); //SUB
//             4'b0010: begin //SLT
//                 if (temp==1) alu_data_o = {31'b0, 1'b1};
//                 else alu_data_o = 32'b0;
//             end
//             4'b0011: alu_data_o = {31'b0, $unsigned(operand_a_i) < $unsigned(operand_b_i)};
//             4'b0100: alu_data_o = operand_a_i ^ operand_b_i; //XOR
//             4'b0110: alu_data_o = operand_a_i | operand_b_i; // OR
//             4'b0111: alu_data_o = operand_a_i & operand_b_i; //AND
//             4'b0001: alu_data_o = operand_a_i << operand_b_i; //SLL
//             4'b0101: alu_data_o = operand_a_i >> operand_b_i; //SRL
//             4'b1101: alu_data_o = operand_a_i >>> operand_b_i; //SRA
//             default: alu_data_o = '0;
//         endcase
//     end
// endmodule
