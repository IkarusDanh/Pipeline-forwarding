// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1286,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1287,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1288,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1289,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1290,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1291,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1292,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1293,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1294,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1295,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1296,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1297,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1298,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1299,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1300,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+1286,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1287,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1288,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1289,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1290,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1291,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1292,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1293,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1294,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1295,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1296,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1297,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1298,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1299,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1300,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("pipelined ");
    tracep->declBit(c+1299,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1300,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1286,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1298,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1287,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1288,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1289,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1290,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1291,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1292,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1293,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1294,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1295,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1296,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1297,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1301,"PL_IF",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1302,"PL_ID",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1303,"PL_EX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1304,"PL_MEM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1305,"PL_WB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+186,"id_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+187,"ex_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+188,"mem_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+189,"wb_reset_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+190+i*1,"enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+6+i*1,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+194,"pc_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+13+i*1,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+16+i*1,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    tracep->declBus(c+195,"ex_alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,"mem_alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,"wb_alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+22+i*1,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+24+i*1,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+26+i*1,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    tracep->declBus(c+196,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,"forward_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,"forward_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+30+i*1,"mem_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+33+i*1,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+37+i*1,"is_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+180+i*1,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+3), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+198+i*1,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+4), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+41+i*1,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 1,0);
    }
    tracep->declBus(c+45,"pc_IF_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,"pc_WB_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+48+i*1,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    tracep->declBit(c+199,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+200,"wb_rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,"wb_rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+50+i*1,"is_rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));
    }
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+196,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+195,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"A_ADD", "A_SUB", "A_SLT", "A_SLTU", "A_XOR", 
                                "A_OR", "A_AND", "A_SLL", 
                                "A_SRL", "A_SRA", "A_RS2"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010"};
        tracep->declDTypeEnum(1, "alu.alu_op_e", 11, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+53,"alu_op",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+202,"temp_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,"shift_amt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+54,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+204,"br_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+183,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("brcomp2 ");
    tracep->declBus(c+196,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+54,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+204,"br_less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"br_equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"br_less_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+206,"br_less_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+207,"br_equal_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+208,"br_equal_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare32_s ");
    tracep->declBus(c+196,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+208,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+210,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+211,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+212,"bl_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+213,"a_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,"b_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare32u_0 ");
    tracep->declBus(c+196,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+215,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+218,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+219,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+220,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+221,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+222,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+225,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+227,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+228,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+229,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+232,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+233,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+234,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+239,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+244,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+249,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+254,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+255,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+256,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+259,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+260,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+261,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+266,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+271,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+276,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+281,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+282,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+283,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+286,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+287,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+288,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+293,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+295,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+298,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+301,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+303,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+308,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+309,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+310,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+311,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+314,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+315,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+316,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+320,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+325,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+330,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+335,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+336,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+337,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+339,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+340,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+341,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+342,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+343,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+344,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+347,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+348,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+349,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+354,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+359,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+362,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+364,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+367,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+369,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+370,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+371,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+374,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+375,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+376,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+381,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+386,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+389,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+391,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+396,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+397,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+398,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+399,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+401,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+402,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+403,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+408,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+413,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+418,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+423,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+424,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+425,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+428,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+429,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+430,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+434,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+435,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+439,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+440,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+444,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+445,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("compare32u_1 ");
    tracep->declBus(c+213,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+214,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+450,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+453,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+454,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+455,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+456,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+457,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+460,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+461,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+462,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+463,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+464,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+467,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+468,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+469,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+474,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+479,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+482,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+484,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+487,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+488,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+489,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+490,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+491,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+494,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+495,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+496,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+498,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+499,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+501,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+502,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+504,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+506,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+507,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+508,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+509,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+510,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+511,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+512,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+514,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+515,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+516,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+517,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+518,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+519,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+521,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+522,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+523,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+524,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+526,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+528,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+530,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+531,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+533,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+534,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+538,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+543,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+544,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+545,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+546,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+547,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+548,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+549,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+550,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+551,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+554,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+555,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+558,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+559,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+560,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+562,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+563,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+564,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+565,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+570,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+571,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+572,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+574,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+575,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+576,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+577,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+578,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+579,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+582,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+583,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+584,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+587,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+588,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+589,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+590,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+594,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+595,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+597,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+598,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+599,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+602,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+603,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+604,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+605,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+606,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+608,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+609,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+610,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+611,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+612,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+613,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+614,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+615,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+616,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+617,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+618,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+619,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+620,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+621,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+622,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+623,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+624,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+625,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+626,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+628,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+629,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+630,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+631,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+632,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+633,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+634,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+635,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+636,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+637,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+638,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+639,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+640,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+641,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+642,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+643,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+644,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+645,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+648,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+649,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+650,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+651,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+653,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+654,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+655,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+656,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+657,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+658,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+659,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+660,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+661,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+662,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+663,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+664,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+665,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+666,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+667,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+668,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+669,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+670,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+672,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+673,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+674,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+675,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+677,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+678,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+679,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+680,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+681,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+682,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+683,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+684,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("compare32_u ");
    tracep->declBus(c+196,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+207,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+685,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+686,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+687,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+220,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+221,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+688,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+689,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+690,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+691,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+692,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+227,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+228,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+693,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+694,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+695,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+696,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+697,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+234,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+239,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+244,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+249,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+254,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+255,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+698,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+699,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+700,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+701,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+702,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+261,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+266,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+271,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+276,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+281,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+282,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+703,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+704,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+705,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+706,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+707,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+288,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+293,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+295,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+298,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+301,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+303,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+308,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+309,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+708,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+709,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+710,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+711,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+712,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+315,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+316,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+320,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+325,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+330,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+335,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+336,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+713,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+714,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+715,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+716,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+717,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+342,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+343,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+718,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+719,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+720,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+721,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+722,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+349,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+354,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+359,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+362,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+364,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+367,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+369,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+370,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+723,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+724,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+725,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+726,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+727,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+376,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+381,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+386,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+389,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+391,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+396,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+397,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+728,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+729,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+730,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+731,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+732,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+403,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+408,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+413,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+418,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+423,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+424,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+733,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+734,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+736,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+737,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+430,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+434,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+435,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+439,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+440,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+444,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+445,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+738,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("brcomp1 ");
    tracep->declBus(c+55,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+200,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+56,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"br_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+739,"br_less_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+740,"br_less_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+741,"br_equal_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+742,"br_equal_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+743,"br_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+744,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare32_s ");
    tracep->declBus(c+200,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+742,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+745,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+740,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+746,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+747,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+748,"bl_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+749,"a_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+750,"b_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare32u_0 ");
    tracep->declBus(c+200,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+751,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+752,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+753,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+754,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+755,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+756,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+757,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+758,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+759,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+760,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+761,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+762,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+763,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+764,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+765,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+766,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+767,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+768,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+769,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+770,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+771,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+772,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+773,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+774,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+775,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+776,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+777,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+778,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+779,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+780,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+781,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+782,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+783,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+784,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+785,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+786,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+787,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+790,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+791,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+792,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+793,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+794,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+795,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+796,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+797,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+798,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+799,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+800,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+801,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+802,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+804,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+805,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+806,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+807,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+808,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+809,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+810,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+811,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+812,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+813,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+814,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+815,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+816,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+817,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+818,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+819,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+820,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+821,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+822,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+823,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+824,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+825,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+826,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+827,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+828,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+829,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+831,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+832,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+834,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+835,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+837,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+838,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+839,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+840,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+841,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+842,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+843,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+844,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+845,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+846,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+847,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+848,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+849,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+850,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+851,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+852,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+853,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+854,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+855,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+856,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+857,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+858,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+859,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+860,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+861,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+862,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+863,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+864,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+865,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+866,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+867,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+868,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+869,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+870,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+871,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+872,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+873,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+874,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+875,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+876,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+877,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+878,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+879,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+880,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+881,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+882,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+883,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+884,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+885,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+886,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+887,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+888,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+889,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+890,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+891,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+892,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+893,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+894,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+895,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+896,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+897,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+899,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+900,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+901,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+902,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+903,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+904,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+905,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+906,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+907,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+908,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+909,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+910,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+911,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+912,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+913,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+914,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+915,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+916,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+917,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+918,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+919,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+920,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+921,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+922,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+923,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+924,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+926,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+927,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+930,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+931,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+932,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+933,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+934,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+935,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+936,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+937,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+938,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+939,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+940,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+941,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+942,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+943,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+944,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+945,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+946,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+947,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+948,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+949,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+950,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+951,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+952,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+953,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+954,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+955,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+956,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+957,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+958,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+959,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+960,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+961,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+962,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+963,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+964,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+965,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+966,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+967,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+968,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+969,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+970,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+971,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+972,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+973,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+974,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+975,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+976,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+977,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+978,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+979,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+980,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+981,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+982,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+983,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+984,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+985,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("compare32u_1 ");
    tracep->declBus(c+749,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+750,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+986,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+987,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+988,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+989,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+990,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+991,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+992,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+993,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+994,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+995,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+996,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+997,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+998,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+999,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1000,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1001,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1002,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1003,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1004,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1005,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1006,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1007,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1008,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1009,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1010,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1011,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1012,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1013,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1014,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1015,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1016,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1017,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1018,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1019,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1020,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1021,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1022,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1023,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1024,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+1025,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1026,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1027,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1028,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1029,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1030,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1031,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1032,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1033,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1034,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1035,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1036,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1037,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1038,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1039,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1040,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1041,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1042,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1043,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1044,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1046,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1047,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1048,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1049,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1050,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1051,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+1052,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1053,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1054,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1055,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1056,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1057,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1058,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1059,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1060,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1061,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1062,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1063,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1064,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1065,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1066,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1067,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1068,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1069,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1070,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1071,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1072,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1073,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1074,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1075,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1076,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1077,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1078,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+1079,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1080,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1081,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1082,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1083,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1084,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1085,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1086,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1087,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1088,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1089,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1090,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1091,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1092,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1093,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1094,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1095,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1096,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1097,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1098,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1099,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1100,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1101,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1102,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1103,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1104,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1105,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+1106,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1107,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+1108,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1109,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1110,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1111,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1112,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+1113,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1114,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1115,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1116,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1117,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1118,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1119,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1120,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1121,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1122,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1123,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1124,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1125,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1126,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1127,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1128,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1129,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1130,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1131,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1132,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1133,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1134,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1135,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1136,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1137,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1138,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1139,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+1140,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1141,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1142,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1143,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1144,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1145,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1146,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1147,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1148,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1149,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1150,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1151,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1152,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1153,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1154,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1155,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1156,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1157,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1158,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1159,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1160,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1161,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1162,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1163,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1164,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1165,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+1167,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1168,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1169,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1170,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1171,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1172,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1173,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1174,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1175,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1176,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1177,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1178,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1179,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1180,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1181,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1182,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1183,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1184,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1185,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1186,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1187,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1188,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1189,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1190,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1191,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1192,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1193,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+1194,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1195,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1196,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1197,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1198,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1199,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1200,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+1201,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1202,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1203,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1204,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1205,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+1206,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1207,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1208,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1209,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1210,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+1211,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1212,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1213,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1214,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1215,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+1216,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1217,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1219,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1220,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("compare32_u ");
    tracep->declBus(c+200,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+741,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1221,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+739,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1222,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1223,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+756,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+757,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+1224,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1225,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1226,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1227,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1228,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+763,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+764,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1229,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1230,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1231,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1232,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1233,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+770,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+771,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+772,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+773,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+774,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+775,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+776,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+777,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+778,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+779,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+780,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+781,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+782,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+783,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+784,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+785,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+786,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+787,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+790,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+791,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1234,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1235,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1236,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1237,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1238,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+797,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+798,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+799,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+800,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+801,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+802,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+804,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+805,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+806,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+807,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+808,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+809,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+810,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+811,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+812,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+813,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+814,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+815,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+816,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+817,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+818,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1239,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1240,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1241,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1242,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1243,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+824,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+825,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+826,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+827,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+828,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+829,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+831,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+832,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+834,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+835,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+837,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+838,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+839,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+840,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+841,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+842,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+843,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+844,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+845,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1244,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1245,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1246,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1247,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1248,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+851,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+852,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+853,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+854,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+855,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+856,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+857,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+858,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+859,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+860,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+861,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+862,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+863,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+864,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+865,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+866,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+867,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+868,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+869,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+870,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+871,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+872,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+1249,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1250,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1251,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1252,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1253,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+878,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+879,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1254,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1256,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1257,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1258,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+885,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+886,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+887,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+888,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+889,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+890,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+891,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+892,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+893,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+894,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+895,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+896,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+897,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+899,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+900,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+901,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+902,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+903,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+904,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+905,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+906,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1259,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1260,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1261,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1262,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1263,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+912,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+913,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+914,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+915,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+916,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+917,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+918,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+919,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+920,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+921,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+922,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+923,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+924,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+926,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+927,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+930,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+931,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+932,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+933,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1264,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1265,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1266,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1267,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1268,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+939,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+940,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+941,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+942,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+943,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+944,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+945,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+946,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+947,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+948,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+949,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+950,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+951,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+952,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+953,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+954,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+955,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+956,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+957,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+958,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+959,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+960,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1269,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1270,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1271,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1272,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1273,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+966,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+967,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+968,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+969,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+970,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+971,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+972,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+973,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+974,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+975,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+976,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+977,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+978,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+979,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+980,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+981,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+982,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+983,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+984,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+985,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("ctr_unit1 ");
    tracep->declBus(c+57,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"is_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"br_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"is_rs2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+66,"mem_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+67,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+68,"func3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_reg1 ");
    tracep->declBit(c+1299,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1274,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+57,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+72,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+74,"op_a_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"op_b_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+77,"mem_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+78,"mem_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+80,"wb_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+81,"is_rs2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+82,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+88,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"br_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"mem_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+92,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"is_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+94,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+95,"is_rs2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forwarding_unit1 ");
    tracep->declBit(c+96,"mem_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"wb_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"mem_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"wb_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+100,"ex_rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+101,"ex_rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+28,"forward_a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+29,"forward_b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_detect1 ");
    tracep->declBit(c+102,"ex_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"mem_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"wb_rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"ex_is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"mem_is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"wb_is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"br_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"id_is_rs2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"ex_is_rs2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+107,"ex_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+98,"mem_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"wb_rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+100,"ex_rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+101,"ex_rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+108,"id_rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+109,"id_rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+194,"pc_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1275,"id_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1276,"ex_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1277,"mem_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1278,"wb_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"id_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"ex_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"mem_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"wb_reset_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"hazard_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+111,"hazard_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+112,"hazard_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_reg1 ");
    tracep->declBit(c+1299,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1279,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+113,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen1 ");
    tracep->declBus(c+55,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_memory1 ");
    tracep->declBit(c+1299,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1300,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+114,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu1 ");
    tracep->declBit(c+1299,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1300,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1286,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"mem_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+184,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1287,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1288,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1289,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1290,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1291,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1292,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1293,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1294,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1295,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1296,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1297,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1280,"input_peri",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,"dataout_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,"dataout_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1281,"dataout_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1282,"temp_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,"mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_reg1 ");
    tracep->declBit(c+1299,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1283,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+102,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+195,"alu_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"mem_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+126,"mem_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+127,"wb_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+128,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+131,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"mem_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+133,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"is_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+135,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile1 ");
    tracep->declBit(c+1299,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1300,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+108,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+109,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1284,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+138+i*1,"memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_reg1 ");
    tracep->declBit(c+1299,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"reset_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1285,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+170,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+171,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+96,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"alu_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+118,"mem_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+185,"ld_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+172,"wb_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+173,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+174,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+175,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+176,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"is_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+178,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+179,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__pipelined__DOT__instr[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__pipelined__DOT__instr[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__pipelined__DOT__instr[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__pipelined__DOT__instr[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__pipelined__DOT__instr[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__pipelined__DOT__pc[0]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__pipelined__DOT__pc[1]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__pipelined__DOT__pc[2]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__pipelined__DOT__pc[3]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__pipelined__DOT__pc[4]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__pipelined__DOT__rs1_data[0]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__pipelined__DOT__rs1_data[1]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__pipelined__DOT__rs2_data[0]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__pipelined__DOT__rs2_data[1]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__pipelined__DOT__rs2_data[2]),32);
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__pipelined__DOT__rd_wren[0]));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__pipelined__DOT__rd_wren[1]));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__pipelined__DOT__rd_wren[2]));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__pipelined__DOT__rd_wren[3]));
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__pipelined__DOT__mem_alu_data),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__pipelined__DOT__wb_alu_data),32);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__pipelined__DOT__alu_op[0]),4);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__pipelined__DOT__alu_op[1]),4);
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__pipelined__DOT__op_a_sel[0]));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__pipelined__DOT__op_a_sel[1]));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__pipelined__DOT__op_b_sel[0]));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__pipelined__DOT__op_b_sel[1]));
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__pipelined__DOT__forward_a),2);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__pipelined__DOT__forward_b),2);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__pipelined__DOT__mem_op[0]),3);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__pipelined__DOT__mem_op[1]),3);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__pipelined__DOT__mem_op[2]),3);
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__pipelined__DOT__mem_wren[0]));
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__pipelined__DOT__mem_wren[1]));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__pipelined__DOT__mem_wren[2]));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__pipelined__DOT__mem_wren[3]));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__pipelined__DOT__is_load[0]));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__pipelined__DOT__is_load[1]));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__pipelined__DOT__is_load[2]));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__pipelined__DOT__is_load[3]));
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__pipelined__DOT__wb_sel[0]),2);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__pipelined__DOT__wb_sel[1]),2);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__pipelined__DOT__wb_sel[2]),2);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__pipelined__DOT__wb_sel[3]),2);
    bufp->fullIData(oldp+45,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc
                              [0U])),32);
    bufp->fullIData(oldp+46,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc
                              [4U])),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__pipelined__DOT__imm),32);
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__pipelined__DOT__br_unsigned[0]));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__pipelined__DOT__br_unsigned[1]));
    bufp->fullBit(oldp+50,(vlSelf->top__DOT__pipelined__DOT__is_rs2[0]));
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__pipelined__DOT__is_rs2[1]));
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__pipelined__DOT__alu_op
                             [1U]),4);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op),4);
    bufp->fullBit(oldp+54,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))));
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__pipelined__DOT__instr
                             [2U]),32);
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__pipelined__DOT__br_unsigned
                           [1U]));
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__pipelined__DOT__instr
                             [1U]),32);
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_a_sel_o));
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o));
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o));
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_load_o));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__br_unsigned_o));
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_rs2_o));
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__alu_op_o),4);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_op_o),3);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__wb_sel_o),2);
    bufp->fullCData(oldp+68,((7U & (vlSelf->top__DOT__pipelined__DOT__instr
                                    [1U] >> 0xcU))),3);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__pipelined__DOT__pc
                             [1U]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__pipelined__DOT__rs1_data
                             [0U]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__pipelined__DOT__rs2_data
                             [0U]),32);
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                           [0U]));
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__pipelined__DOT__alu_op
                             [0U]),4);
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__pipelined__DOT__op_a_sel
                           [0U]));
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__pipelined__DOT__op_b_sel
                           [0U]));
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__pipelined__DOT__br_unsigned
                           [0U]));
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__pipelined__DOT__mem_op
                             [0U]),3);
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                           [0U]));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__pipelined__DOT__is_load
                           [0U]));
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                             [0U]),2);
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__pipelined__DOT__is_rs2
                           [0U]));
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__instr_o),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__pc_o),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs1_data_o),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs2_data_o),32);
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rd_wren_o));
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__alu_op_o),4);
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_a_sel_o));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_b_sel_o));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__br_unsigned_o));
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_op_o),3);
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_wren_o));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_load_o));
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__wb_sel_o),2);
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_rs2_o));
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                           [2U]));
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                           [3U]));
    bufp->fullCData(oldp+98,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                       [3U] >> 7U))),5);
    bufp->fullCData(oldp+99,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                       [4U] >> 7U))),5);
    bufp->fullCData(oldp+100,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                        [2U] >> 0xfU))),5);
    bufp->fullCData(oldp+101,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                        [2U] >> 0x14U))),5);
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                            [1U]));
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__pipelined__DOT__is_load
                            [1U]));
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__pipelined__DOT__is_load
                            [2U]));
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__pipelined__DOT__is_load
                            [3U]));
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__pipelined__DOT__is_rs2
                            [1U]));
    bufp->fullCData(oldp+107,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                        [2U] >> 7U))),5);
    bufp->fullCData(oldp+108,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                        [1U] >> 0xfU))),5);
    bufp->fullCData(oldp+109,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                        [1U] >> 0x14U))),5);
    bufp->fullBit(oldp+110,((((vlSelf->top__DOT__pipelined__DOT__rd_wren
                               [1U] & (0U != (0x1fU 
                                              & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [2U] 
                                                 >> 7U)))) 
                              & vlSelf->top__DOT__pipelined__DOT__is_load
                              [1U]) & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [2U] 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr
                                             [1U] >> 0xfU))) 
                                       | (((0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr
                                             [2U] >> 7U)) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [1U] 
                                                  >> 0x14U))) 
                                          & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                          [0U])))));
    bufp->fullBit(oldp+111,(((vlSelf->top__DOT__pipelined__DOT__rd_wren
                              [3U] & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__instr
                                                [4U] 
                                                >> 7U)))) 
                             & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                           [4U] >> 7U)) 
                                 == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                              [1U] 
                                              >> 0xfU))) 
                                | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                              [4U] 
                                              >> 7U)) 
                                    == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [1U] 
                                                 >> 0x14U))) 
                                   & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                   [0U])))));
    bufp->fullBit(oldp+112,((((((vlSelf->top__DOT__pipelined__DOT__is_load
                                 [1U] & vlSelf->top__DOT__pipelined__DOT__is_load
                                 [2U]) & (0U != (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [2U] 
                                                    >> 7U)))) 
                               & (0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [3U] 
                                                  >> 7U)))) 
                              & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                            [2U] >> 7U)) 
                                  == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [1U] 
                                               >> 0xfU))) 
                                 | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [2U] 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [1U] 
                                                  >> 0x14U))) 
                                    & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                    [0U]))) & (((0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [3U] 
                                                    >> 7U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [1U] 
                                                    >> 0xfU))) 
                                               | (((0x1fU 
                                                    & (vlSelf->top__DOT__pipelined__DOT__instr
                                                       [3U] 
                                                       >> 7U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__pipelined__DOT__instr
                                                       [1U] 
                                                       >> 0x14U))) 
                                                  & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                                  [0U])))));
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__pipelined__DOT__instr
                              [0U]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__pipelined__DOT__pc
                              [0U]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__instr_o),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__pc_o),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__pipelined__DOT__inst_memory1__DOT__memory
                              [(0xfffU & (vlSelf->top__DOT__pipelined__DOT__pc
                                          [0U] >> 2U))]),32);
    bufp->fullBit(oldp+118,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                            [2U]));
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__pipelined__DOT__rs2_data
                              [2U]),32);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__pipelined__DOT__mem_op
                              [2U]),3);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2),32);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask),4);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__pipelined__DOT__pc
                              [2U]),32);
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__pipelined__DOT__mem_op
                              [1U]),3);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                            [1U]));
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                              [1U]),2);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__instr_o),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__pc_o),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rs2_data_o),32);
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rd_wren_o));
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_op_o),3);
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_wren_o));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__is_load_o));
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__wb_sel_o),2);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory
                              [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                         [1U] >> 0xfU))]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory
                              [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                         [1U] >> 0x14U))]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[0]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[1]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[2]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[3]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[4]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[5]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[6]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[7]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[8]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[9]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[10]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[11]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[12]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[13]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[14]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[15]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[16]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[17]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[18]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[19]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[20]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[21]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[22]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[23]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[24]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[25]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[26]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[27]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[28]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[29]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[30]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[31]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__pipelined__DOT__instr
                              [3U]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__pipelined__DOT__pc
                              [3U]),32);
    bufp->fullCData(oldp+172,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                              [2U]),2);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__instr_o),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__pc_o),32);
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__rd_wren_o));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__mem_wren_o));
    bufp->fullBit(oldp+177,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__is_load_o));
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__ld_data_o),32);
    bufp->fullCData(oldp+179,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__wb_sel_o),2);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__pipelined__DOT__ld_data[0]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__pipelined__DOT__ld_data[1]),32);
    bufp->fullIData(oldp+182,(((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel)
                                ? ((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel)
                                    ? vlSelf->top__DOT__pipelined__DOT__ex_alu_data
                                    : ((IData)(4U) 
                                       + vlSelf->top__DOT__pipelined__DOT__pc
                                       [0U])) : ((IData)(4U) 
                                                 + 
                                                 vlSelf->top__DOT__pipelined__DOT__pc
                                                 [0U]))),32);
    bufp->fullBit(oldp+183,(((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                              ? (3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t))
                              : (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_equal_s))));
    bufp->fullIData(oldp+184,(((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__mem_op
                                          [2U] >> 2U)) 
                                      & (~ vlSelf->top__DOT__pipelined__DOT__mem_wren
                                         [2U]))) ? 
                               ((0U == vlSelf->top__DOT__pipelined__DOT__mem_op
                                 [2U]) ? ((((0x80U 
                                             & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)
                                             ? 0xffffffU
                                             : 0U) 
                                           << 8U) | 
                                          (0xffU & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
                                 : ((1U == vlSelf->top__DOT__pipelined__DOT__mem_op
                                     [2U]) ? ((((0x8000U 
                                                 & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)
                                                 ? 0xffffU
                                                 : 0U) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
                                     : vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
                                : vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__pipelined__DOT__ld_data
                              [0U]),32);
    bufp->fullBit(oldp+186,(vlSelf->top__DOT__pipelined__DOT__id_reset_n));
    bufp->fullBit(oldp+187,(vlSelf->top__DOT__pipelined__DOT__ex_reset_n));
    bufp->fullBit(oldp+188,(vlSelf->top__DOT__pipelined__DOT__mem_reset_n));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__pipelined__DOT__wb_reset_n));
    bufp->fullBit(oldp+190,(vlSelf->top__DOT__pipelined__DOT__enable[0]));
    bufp->fullBit(oldp+191,(vlSelf->top__DOT__pipelined__DOT__enable[1]));
    bufp->fullBit(oldp+192,(vlSelf->top__DOT__pipelined__DOT__enable[2]));
    bufp->fullBit(oldp+193,(vlSelf->top__DOT__pipelined__DOT__enable[3]));
    bufp->fullBit(oldp+194,(vlSelf->top__DOT__pipelined__DOT__pc_enable));
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__pipelined__DOT__ex_alu_data),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__pipelined__DOT__operand_a),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__pipelined__DOT__operand_b),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__pipelined__DOT__wb_data[0]),32);
    bufp->fullBit(oldp+199,(vlSelf->top__DOT__pipelined__DOT__br_sel));
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__pipelined__DOT__wb_rs1_data),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__pipelined__DOT__wb_rs2_data),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift),32);
    bufp->fullCData(oldp+203,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__shift_amt),5);
    bufp->fullBit(oldp+204,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__br_less));
    bufp->fullBit(oldp+205,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t)) 
                                      | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                          >> 1U) | 
                                         ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                          & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t) 
                                             >> 1U))))))));
    bufp->fullBit(oldp+206,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_less_s));
    bufp->fullBit(oldp+207,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t))));
    bufp->fullBit(oldp+208,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_equal_s));
    bufp->fullBit(oldp+209,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__alarger_o));
    bufp->fullCData(oldp+210,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__eq_t),2);
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__al_t),2);
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__bl_t),2);
    bufp->fullIData(oldp+213,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a))),32);
    bufp->fullIData(oldp+214,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))),32);
    bufp->fullBit(oldp+215,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
    bufp->fullBit(oldp+216,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
    bufp->fullBit(oldp+217,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
    bufp->fullCData(oldp+218,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
    bufp->fullCData(oldp+219,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
    bufp->fullSData(oldp+220,((0xffffU & vlSelf->top__DOT__pipelined__DOT__operand_a)),16);
    bufp->fullSData(oldp+221,((0xffffU & vlSelf->top__DOT__pipelined__DOT__operand_b)),16);
    bufp->fullBit(oldp+222,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+223,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+224,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+225,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+226,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+227,((0xfU & vlSelf->top__DOT__pipelined__DOT__operand_a)),4);
    bufp->fullCData(oldp+228,((0xfU & vlSelf->top__DOT__pipelined__DOT__operand_b)),4);
    bufp->fullBit(oldp+229,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+231,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+232,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+233,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+234,((1U & vlSelf->top__DOT__pipelined__DOT__operand_a)));
    bufp->fullBit(oldp+235,((1U & vlSelf->top__DOT__pipelined__DOT__operand_b)));
    bufp->fullBit(oldp+236,((1U & (~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      ^ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
    bufp->fullBit(oldp+237,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   & (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
    bufp->fullBit(oldp+238,((1U & ((~ vlSelf->top__DOT__pipelined__DOT__operand_a) 
                                   & vlSelf->top__DOT__pipelined__DOT__operand_b))));
    bufp->fullBit(oldp+239,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 1U))));
    bufp->fullBit(oldp+240,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 1U))));
    bufp->fullBit(oldp+241,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 1U)))));
    bufp->fullBit(oldp+242,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 1U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+243,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 1U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 1U)))));
    bufp->fullBit(oldp+244,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 2U))));
    bufp->fullBit(oldp+245,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 2U))));
    bufp->fullBit(oldp+246,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 2U)))));
    bufp->fullBit(oldp+247,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 2U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+248,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 2U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 2U)))));
    bufp->fullBit(oldp+249,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 3U))));
    bufp->fullBit(oldp+250,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 3U))));
    bufp->fullBit(oldp+251,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 3U)))));
    bufp->fullBit(oldp+252,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 3U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+253,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 3U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 3U)))));
    bufp->fullCData(oldp+254,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 4U))),4);
    bufp->fullCData(oldp+255,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 4U))),4);
    bufp->fullBit(oldp+256,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+257,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+258,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+259,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+260,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+261,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 4U))));
    bufp->fullBit(oldp+262,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 4U))));
    bufp->fullBit(oldp+263,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 4U)))));
    bufp->fullBit(oldp+264,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 4U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+265,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 4U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 4U)))));
    bufp->fullBit(oldp+266,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 5U))));
    bufp->fullBit(oldp+267,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 5U))));
    bufp->fullBit(oldp+268,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 5U)))));
    bufp->fullBit(oldp+269,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 5U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+270,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 5U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 5U)))));
    bufp->fullBit(oldp+271,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 6U))));
    bufp->fullBit(oldp+272,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 6U))));
    bufp->fullBit(oldp+273,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 6U)))));
    bufp->fullBit(oldp+274,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 6U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+275,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 6U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 6U)))));
    bufp->fullBit(oldp+276,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 7U))));
    bufp->fullBit(oldp+277,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 7U))));
    bufp->fullBit(oldp+278,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 7U)))));
    bufp->fullBit(oldp+279,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 7U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+280,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 7U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 7U)))));
    bufp->fullCData(oldp+281,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 8U))),4);
    bufp->fullCData(oldp+282,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 8U))),4);
    bufp->fullBit(oldp+283,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+285,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+286,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+287,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+288,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 8U))));
    bufp->fullBit(oldp+289,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 8U))));
    bufp->fullBit(oldp+290,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 8U)))));
    bufp->fullBit(oldp+291,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 8U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+292,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 8U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 8U)))));
    bufp->fullBit(oldp+293,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 9U))));
    bufp->fullBit(oldp+294,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 9U))));
    bufp->fullBit(oldp+295,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 9U)))));
    bufp->fullBit(oldp+296,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 9U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+297,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 9U)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 9U)))));
    bufp->fullBit(oldp+298,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xaU))));
    bufp->fullBit(oldp+299,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+300,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+301,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+302,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xaU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+303,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xbU))));
    bufp->fullBit(oldp+304,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+305,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+306,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+307,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xbU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xbU)))));
    bufp->fullCData(oldp+308,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+309,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+310,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+311,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+312,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+313,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+314,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+315,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xcU))));
    bufp->fullBit(oldp+316,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+317,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+318,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+319,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xcU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+320,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xdU))));
    bufp->fullBit(oldp+321,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+322,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+323,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+324,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xdU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+325,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xeU))));
    bufp->fullBit(oldp+326,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+327,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+328,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+329,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xeU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+330,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0xfU))));
    bufp->fullBit(oldp+331,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+332,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+333,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+334,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xfU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xfU)))));
    bufp->fullSData(oldp+335,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+336,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+337,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+338,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+339,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+340,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+341,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+342,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+343,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+344,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+345,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+346,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+347,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+348,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+349,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x10U))));
    bufp->fullBit(oldp+350,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+351,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+352,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+353,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x10U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+354,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x11U))));
    bufp->fullBit(oldp+355,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+356,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+357,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+358,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x11U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+359,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x12U))));
    bufp->fullBit(oldp+360,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+361,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+362,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+363,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x12U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+364,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x13U))));
    bufp->fullBit(oldp+365,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+366,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+367,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+368,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x13U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x13U)))));
    bufp->fullCData(oldp+369,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+370,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+371,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+372,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+373,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+374,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+375,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+376,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x14U))));
    bufp->fullBit(oldp+377,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+378,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+379,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+380,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x14U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+381,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x15U))));
    bufp->fullBit(oldp+382,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+383,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+384,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+385,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x15U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+386,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x16U))));
    bufp->fullBit(oldp+387,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+388,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+389,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+390,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x16U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+391,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x17U))));
    bufp->fullBit(oldp+392,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+393,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+394,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+395,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x17U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x17U)))));
    bufp->fullCData(oldp+396,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+397,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+398,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+399,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+400,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+401,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+402,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+403,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x18U))));
    bufp->fullBit(oldp+404,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+405,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+406,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+407,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x18U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+408,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x19U))));
    bufp->fullBit(oldp+409,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+410,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+411,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+412,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x19U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+413,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+414,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+415,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+416,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+417,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1aU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+418,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+419,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+420,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+421,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+422,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1bU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x1bU)))));
    bufp->fullCData(oldp+423,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+424,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+425,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+426,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+427,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+428,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+429,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+430,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+431,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+432,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+433,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+434,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1cU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+435,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+436,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+437,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+438,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+439,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1dU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+440,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+441,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+442,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+443,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+444,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1eU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+445,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                             >> 0x1fU)));
    bufp->fullBit(oldp+446,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+447,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+448,(((vlSelf->top__DOT__pipelined__DOT__operand_a 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+449,(((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                 >> 0x1fU)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+450,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
    bufp->fullBit(oldp+451,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
    bufp->fullBit(oldp+452,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
    bufp->fullCData(oldp+453,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
    bufp->fullCData(oldp+454,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
    bufp->fullSData(oldp+455,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))),16);
    bufp->fullSData(oldp+456,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))),16);
    bufp->fullBit(oldp+457,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+458,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+459,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+460,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+461,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+462,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))),4);
    bufp->fullCData(oldp+463,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))),4);
    bufp->fullBit(oldp+464,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+465,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+466,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+467,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+468,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+469,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))));
    bufp->fullBit(oldp+470,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
    bufp->fullBit(oldp+471,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      ^ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))))));
    bufp->fullBit(oldp+472,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   & (~ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))))));
    bufp->fullBit(oldp+473,((1U & ((~ ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a))) 
                                   & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b))))));
    bufp->fullBit(oldp+474,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 1U))));
    bufp->fullBit(oldp+475,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 1U))));
    bufp->fullBit(oldp+476,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 1U)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 1U)))))));
    bufp->fullBit(oldp+477,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 1U) & (~ (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 1U)))))));
    bufp->fullBit(oldp+478,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 1U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 1U)))));
    bufp->fullBit(oldp+479,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 2U))));
    bufp->fullBit(oldp+480,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 2U))));
    bufp->fullBit(oldp+481,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 2U)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 2U)))))));
    bufp->fullBit(oldp+482,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 2U) & (~ (3U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 2U)))))));
    bufp->fullBit(oldp+483,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 2U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 2U)))));
    bufp->fullBit(oldp+484,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 3U))));
    bufp->fullBit(oldp+485,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 3U))));
    bufp->fullBit(oldp+486,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 3U)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 3U)))))));
    bufp->fullBit(oldp+487,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 3U) & (~ (1U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 3U)))))));
    bufp->fullBit(oldp+488,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 3U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 3U)))));
    bufp->fullCData(oldp+489,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+490,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+491,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+492,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+493,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+494,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+495,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+496,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 4U))));
    bufp->fullBit(oldp+497,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 4U))));
    bufp->fullBit(oldp+498,((1U & (~ ((0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 4U)) 
                                      ^ (0xfffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+499,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 4U) & (~ (0xfffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 4U)))))));
    bufp->fullBit(oldp+500,((1U & ((~ (0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 4U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 4U)))));
    bufp->fullBit(oldp+501,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 5U))));
    bufp->fullBit(oldp+502,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 5U))));
    bufp->fullBit(oldp+503,((1U & (~ ((0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 5U)) 
                                      ^ (0x7ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+504,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 5U) & (~ (0x7ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 5U)))))));
    bufp->fullBit(oldp+505,((1U & ((~ (0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 5U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 5U)))));
    bufp->fullBit(oldp+506,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 6U))));
    bufp->fullBit(oldp+507,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 6U))));
    bufp->fullBit(oldp+508,((1U & (~ ((0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 6U)) 
                                      ^ (0x3ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+509,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 6U) & (~ (0x3ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 6U)))))));
    bufp->fullBit(oldp+510,((1U & ((~ (0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 6U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 6U)))));
    bufp->fullBit(oldp+511,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 7U))));
    bufp->fullBit(oldp+512,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 7U))));
    bufp->fullBit(oldp+513,((1U & (~ ((0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 7U)) 
                                      ^ (0x1ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+514,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 7U) & (~ (0x1ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 7U)))))));
    bufp->fullBit(oldp+515,((1U & ((~ (0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                 >> 7U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 7U)))));
    bufp->fullCData(oldp+516,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+517,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 8U))),4);
    bufp->fullBit(oldp+518,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+519,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+520,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+521,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+522,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+523,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 8U))));
    bufp->fullBit(oldp+524,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 8U))));
    bufp->fullBit(oldp+525,((1U & (~ ((0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 8U)) 
                                      ^ (0xffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+526,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 8U) & (~ (0xffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 8U)))))));
    bufp->fullBit(oldp+527,((1U & ((~ (0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 8U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 8U)))));
    bufp->fullBit(oldp+528,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 9U))));
    bufp->fullBit(oldp+529,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 9U))));
    bufp->fullBit(oldp+530,((1U & (~ ((0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 9U)) 
                                      ^ (0x7fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+531,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 9U) & (~ (0x7fU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                    >> 9U)))))));
    bufp->fullBit(oldp+532,((1U & ((~ (0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 9U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 9U)))));
    bufp->fullBit(oldp+533,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+534,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+535,((1U & (~ ((0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xaU)) 
                                      ^ (0x3fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+536,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xaU) & (~ (0x3fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xaU)))))));
    bufp->fullBit(oldp+537,((1U & ((~ (0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xaU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+538,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+539,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+540,((1U & (~ ((0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xbU)) 
                                      ^ (0x1fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+541,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xbU) & (~ (0x1fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xbU)))))));
    bufp->fullBit(oldp+542,((1U & ((~ (0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xbU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xbU)))));
    bufp->fullCData(oldp+543,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+544,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+545,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+546,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+547,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+548,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+549,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+550,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+551,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+552,((1U & (~ ((0xfU & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                               >> 0xcU)) 
                                      ^ (0xfU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                 >> 0xcU)))))));
    bufp->fullBit(oldp+553,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xcU) & (~ (0xfU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xcU)))))));
    bufp->fullBit(oldp+554,((1U & ((~ (0xfU & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                               >> 0xcU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+555,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+556,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+557,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xdU)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 0xdU)))))));
    bufp->fullBit(oldp+558,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xdU) & (~ (7U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xdU)))))));
    bufp->fullBit(oldp+559,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xdU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+560,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+561,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+562,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xeU)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 0xeU)))))));
    bufp->fullBit(oldp+563,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xeU) & (~ (3U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xeU)))))));
    bufp->fullBit(oldp+564,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xeU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+565,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+566,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+567,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xfU)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 0xfU)))))));
    bufp->fullBit(oldp+568,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0xfU) & (~ (1U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                      >> 0xfU)))))));
    bufp->fullBit(oldp+569,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                             >> 0xfU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xfU)))));
    bufp->fullSData(oldp+570,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+571,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+572,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+573,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+574,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+575,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+576,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+577,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+578,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+579,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+580,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+581,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+582,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+583,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+584,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+585,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+586,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+587,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x10U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+588,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x10U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+589,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+590,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+591,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+592,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x11U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+593,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x11U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+594,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+595,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+596,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+597,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x12U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+598,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x12U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+599,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+600,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+601,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+602,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x13U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+603,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x13U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x13U)))));
    bufp->fullCData(oldp+604,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+605,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+606,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+607,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+608,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+609,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+610,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+611,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+612,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+613,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+614,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x14U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+615,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x14U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+616,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+617,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+618,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+619,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x15U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+620,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x15U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+621,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+622,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+623,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+624,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x16U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+625,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x16U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+626,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+627,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+628,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+629,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x17U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+630,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x17U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x17U)))));
    bufp->fullCData(oldp+631,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+632,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+633,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+634,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+635,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+636,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+637,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+638,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+639,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+640,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+641,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x18U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+642,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x18U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+643,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+644,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+645,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+646,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x19U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+647,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x19U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+648,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+649,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+650,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+651,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1aU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+652,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1aU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+653,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+654,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+655,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+656,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1bU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+657,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1bU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1bU)))));
    bufp->fullCData(oldp+658,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+659,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+660,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+661,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+662,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+663,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+664,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+665,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+666,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+667,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+668,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1cU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+669,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1cU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+670,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+671,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+672,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+673,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1dU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+674,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1dU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+675,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+676,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+677,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+678,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1eU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+679,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1eU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+680,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+681,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+682,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+683,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                    >> 0x1fU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0x1fU))))));
    bufp->fullBit(oldp+684,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1fU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+685,((1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                    >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                              & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t) 
                                                 >> 1U))))));
    bufp->fullCData(oldp+686,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t),2);
    bufp->fullCData(oldp+687,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t),2);
    bufp->fullBit(oldp+688,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+689,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+690,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+691,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+692,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
    bufp->fullBit(oldp+693,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+694,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+695,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+696,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+697,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+698,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+699,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+700,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+701,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+702,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+703,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+704,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+705,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+706,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+707,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+708,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+709,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+710,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+711,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+712,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+713,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+714,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+715,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+716,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+717,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
    bufp->fullBit(oldp+718,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+719,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+720,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+721,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+722,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+723,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+724,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+725,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+726,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+727,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+728,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+729,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+730,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+731,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+732,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+733,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+734,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+735,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+736,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+737,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullIData(oldp+738,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+739,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t)) 
                                      | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                          >> 1U) | 
                                         ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                          & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t) 
                                             >> 1U))))))));
    bufp->fullBit(oldp+740,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less_s));
    bufp->fullBit(oldp+741,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t))));
    bufp->fullBit(oldp+742,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal_s));
    bufp->fullBit(oldp+743,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less));
    bufp->fullBit(oldp+744,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal));
    bufp->fullBit(oldp+745,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__alarger_o));
    bufp->fullCData(oldp+746,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t),2);
    bufp->fullCData(oldp+747,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t),2);
    bufp->fullCData(oldp+748,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t),2);
    bufp->fullIData(oldp+749,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data))),32);
    bufp->fullIData(oldp+750,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))),32);
    bufp->fullBit(oldp+751,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
    bufp->fullBit(oldp+752,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
    bufp->fullBit(oldp+753,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
    bufp->fullCData(oldp+754,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
    bufp->fullCData(oldp+755,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
    bufp->fullSData(oldp+756,((0xffffU & vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)),16);
    bufp->fullSData(oldp+757,((0xffffU & vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)),16);
    bufp->fullBit(oldp+758,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+759,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+760,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+761,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+762,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+763,((0xfU & vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)),4);
    bufp->fullCData(oldp+764,((0xfU & vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)),4);
    bufp->fullBit(oldp+765,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+766,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+767,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+768,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+769,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+770,((1U & vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)));
    bufp->fullBit(oldp+771,((1U & vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)));
    bufp->fullBit(oldp+772,((1U & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))));
    bufp->fullBit(oldp+773,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   & (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))));
    bufp->fullBit(oldp+774,((1U & ((~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data) 
                                   & vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))));
    bufp->fullBit(oldp+775,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 1U))));
    bufp->fullBit(oldp+776,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 1U))));
    bufp->fullBit(oldp+777,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 1U)))));
    bufp->fullBit(oldp+778,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 1U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                 >> 1U))))));
    bufp->fullBit(oldp+779,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 1U)) & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 1U)))));
    bufp->fullBit(oldp+780,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 2U))));
    bufp->fullBit(oldp+781,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 2U))));
    bufp->fullBit(oldp+782,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 2U)))));
    bufp->fullBit(oldp+783,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 2U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                 >> 2U))))));
    bufp->fullBit(oldp+784,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 2U)) & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 2U)))));
    bufp->fullBit(oldp+785,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 3U))));
    bufp->fullBit(oldp+786,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 3U))));
    bufp->fullBit(oldp+787,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 3U)))));
    bufp->fullBit(oldp+788,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 3U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                 >> 3U))))));
    bufp->fullBit(oldp+789,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 3U)) & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 3U)))));
    bufp->fullCData(oldp+790,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 4U))),4);
    bufp->fullCData(oldp+791,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 4U))),4);
    bufp->fullBit(oldp+792,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+793,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+794,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+795,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+796,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+797,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 4U))));
    bufp->fullBit(oldp+798,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 4U))));
    bufp->fullBit(oldp+799,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 4U)))));
    bufp->fullBit(oldp+800,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 4U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                 >> 4U))))));
    bufp->fullBit(oldp+801,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 4U)) & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 4U)))));
    bufp->fullBit(oldp+802,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 5U))));
    bufp->fullBit(oldp+803,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 5U))));
    bufp->fullBit(oldp+804,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 5U)))));
    bufp->fullBit(oldp+805,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 5U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                 >> 5U))))));
    bufp->fullBit(oldp+806,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 5U)) & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 5U)))));
    bufp->fullBit(oldp+807,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 6U))));
    bufp->fullBit(oldp+808,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 6U))));
    bufp->fullBit(oldp+809,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 6U)))));
    bufp->fullBit(oldp+810,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 6U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                 >> 6U))))));
    bufp->fullBit(oldp+811,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 6U)) & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 6U)))));
    bufp->fullBit(oldp+812,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 7U))));
    bufp->fullBit(oldp+813,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 7U))));
    bufp->fullBit(oldp+814,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 7U)))));
    bufp->fullBit(oldp+815,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 7U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                 >> 7U))))));
    bufp->fullBit(oldp+816,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 7U)) & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 7U)))));
    bufp->fullCData(oldp+817,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 8U))),4);
    bufp->fullCData(oldp+818,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 8U))),4);
    bufp->fullBit(oldp+819,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+820,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+821,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+822,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+823,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+824,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 8U))));
    bufp->fullBit(oldp+825,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 8U))));
    bufp->fullBit(oldp+826,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 8U)))));
    bufp->fullBit(oldp+827,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 8U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                 >> 8U))))));
    bufp->fullBit(oldp+828,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 8U)) & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 8U)))));
    bufp->fullBit(oldp+829,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 9U))));
    bufp->fullBit(oldp+830,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 9U))));
    bufp->fullBit(oldp+831,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 9U)))));
    bufp->fullBit(oldp+832,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 9U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                 >> 9U))))));
    bufp->fullBit(oldp+833,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 9U)) & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 9U)))));
    bufp->fullBit(oldp+834,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0xaU))));
    bufp->fullBit(oldp+835,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0xaU))));
    bufp->fullBit(oldp+836,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+837,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+838,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xaU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+839,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0xbU))));
    bufp->fullBit(oldp+840,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0xbU))));
    bufp->fullBit(oldp+841,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+842,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+843,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xbU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0xbU)))));
    bufp->fullCData(oldp+844,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+845,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+846,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+847,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+848,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+849,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+850,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+851,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0xcU))));
    bufp->fullBit(oldp+852,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0xcU))));
    bufp->fullBit(oldp+853,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+854,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+855,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xcU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+856,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0xdU))));
    bufp->fullBit(oldp+857,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0xdU))));
    bufp->fullBit(oldp+858,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+859,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+860,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xdU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+861,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0xeU))));
    bufp->fullBit(oldp+862,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0xeU))));
    bufp->fullBit(oldp+863,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+864,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+865,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xeU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+866,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0xfU))));
    bufp->fullBit(oldp+867,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0xfU))));
    bufp->fullBit(oldp+868,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+869,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+870,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xfU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0xfU)))));
    bufp->fullSData(oldp+871,((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+872,((vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+873,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+874,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+875,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+876,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+877,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+878,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+879,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+880,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+881,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+882,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+883,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+884,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+885,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x10U))));
    bufp->fullBit(oldp+886,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x10U))));
    bufp->fullBit(oldp+887,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+888,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+889,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x10U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+890,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x11U))));
    bufp->fullBit(oldp+891,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x11U))));
    bufp->fullBit(oldp+892,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+893,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+894,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x11U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+895,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x12U))));
    bufp->fullBit(oldp+896,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x12U))));
    bufp->fullBit(oldp+897,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+898,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+899,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x12U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+900,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x13U))));
    bufp->fullBit(oldp+901,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x13U))));
    bufp->fullBit(oldp+902,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+903,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+904,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x13U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x13U)))));
    bufp->fullCData(oldp+905,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+906,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+907,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+908,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+909,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+910,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+911,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+912,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x14U))));
    bufp->fullBit(oldp+913,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x14U))));
    bufp->fullBit(oldp+914,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+915,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+916,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x14U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+917,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x15U))));
    bufp->fullBit(oldp+918,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x15U))));
    bufp->fullBit(oldp+919,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+920,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+921,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x15U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+922,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x16U))));
    bufp->fullBit(oldp+923,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x16U))));
    bufp->fullBit(oldp+924,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+925,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+926,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x16U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+927,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x17U))));
    bufp->fullBit(oldp+928,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x17U))));
    bufp->fullBit(oldp+929,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+930,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+931,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x17U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x17U)))));
    bufp->fullCData(oldp+932,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+933,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+934,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+935,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+936,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+937,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+938,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+939,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x18U))));
    bufp->fullBit(oldp+940,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x18U))));
    bufp->fullBit(oldp+941,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+942,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+943,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x18U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+944,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x19U))));
    bufp->fullBit(oldp+945,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x19U))));
    bufp->fullBit(oldp+946,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+947,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+948,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x19U)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+949,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+950,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+951,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+952,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+953,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x1aU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+954,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+955,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+956,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+957,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+958,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x1bU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x1bU)))));
    bufp->fullCData(oldp+959,((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+960,((vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+961,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+962,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+963,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+964,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+965,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+966,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+967,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+968,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+969,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+970,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x1cU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+971,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+972,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+973,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+974,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+975,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x1dU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+976,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+977,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+978,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+979,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+980,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x1eU)) & 
                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+981,((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+982,((vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+983,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+984,(((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+985,(((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                 >> 0x1fU)) & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+986,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
    bufp->fullBit(oldp+987,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
    bufp->fullBit(oldp+988,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
    bufp->fullCData(oldp+989,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
    bufp->fullCData(oldp+990,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
    bufp->fullSData(oldp+991,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)))),16);
    bufp->fullSData(oldp+992,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))),16);
    bufp->fullBit(oldp+993,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+994,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+995,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+996,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+997,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+998,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)))),4);
    bufp->fullCData(oldp+999,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))),4);
    bufp->fullBit(oldp+1000,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+1001,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+1002,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+1003,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+1004,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+1005,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)))));
    bufp->fullBit(oldp+1006,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))));
    bufp->fullBit(oldp+1007,((1U & (~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))))));
    bufp->fullBit(oldp+1008,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    & (~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))))));
    bufp->fullBit(oldp+1009,((1U & ((~ ((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data))) 
                                    & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))))));
    bufp->fullBit(oldp+1010,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 1U))));
    bufp->fullBit(oldp+1011,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 1U))));
    bufp->fullBit(oldp+1012,((1U & (~ ((7U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 1U)) 
                                       ^ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 1U)))))));
    bufp->fullBit(oldp+1013,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 1U) & (~ (7U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 1U)))))));
    bufp->fullBit(oldp+1014,((1U & ((~ (7U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 1U))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1015,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 2U))));
    bufp->fullBit(oldp+1016,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 2U))));
    bufp->fullBit(oldp+1017,((1U & (~ ((3U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 2U)) 
                                       ^ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 2U)))))));
    bufp->fullBit(oldp+1018,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 2U) & (~ (3U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 2U)))))));
    bufp->fullBit(oldp+1019,((1U & ((~ (3U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 2U))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1020,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 3U))));
    bufp->fullBit(oldp+1021,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 3U))));
    bufp->fullBit(oldp+1022,((1U & (~ ((1U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 3U)) 
                                       ^ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 3U)))))));
    bufp->fullBit(oldp+1023,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 3U) & (~ (1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 3U)))))));
    bufp->fullBit(oldp+1024,((1U & ((~ (1U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 3U))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 3U)))));
    bufp->fullCData(oldp+1025,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1026,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                        >> 4U))),4);
    bufp->fullBit(oldp+1027,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+1028,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+1029,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+1030,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+1031,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+1032,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 4U))));
    bufp->fullBit(oldp+1033,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 4U))));
    bufp->fullBit(oldp+1034,((1U & (~ ((0xfffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                  >> 4U)) 
                                       ^ (0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 4U)))))));
    bufp->fullBit(oldp+1035,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 4U) & (~ (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 4U)))))));
    bufp->fullBit(oldp+1036,((1U & ((~ (0xfffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                  >> 4U))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 4U)))));
    bufp->fullBit(oldp+1037,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 5U))));
    bufp->fullBit(oldp+1038,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 5U))));
    bufp->fullBit(oldp+1039,((1U & (~ ((0x7ffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                  >> 5U)) 
                                       ^ (0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 5U)))))));
    bufp->fullBit(oldp+1040,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 5U) & (~ (0x7ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 5U)))))));
    bufp->fullBit(oldp+1041,((1U & ((~ (0x7ffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                  >> 5U))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 5U)))));
    bufp->fullBit(oldp+1042,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 6U))));
    bufp->fullBit(oldp+1043,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 6U))));
    bufp->fullBit(oldp+1044,((1U & (~ ((0x3ffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                  >> 6U)) 
                                       ^ (0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 6U)))))));
    bufp->fullBit(oldp+1045,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 6U) & (~ (0x3ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 6U)))))));
    bufp->fullBit(oldp+1046,((1U & ((~ (0x3ffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                  >> 6U))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 6U)))));
    bufp->fullBit(oldp+1047,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 7U))));
    bufp->fullBit(oldp+1048,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 7U))));
    bufp->fullBit(oldp+1049,((1U & (~ ((0x1ffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                  >> 7U)) 
                                       ^ (0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 7U)))))));
    bufp->fullBit(oldp+1050,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 7U) & (~ (0x1ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 7U)))))));
    bufp->fullBit(oldp+1051,((1U & ((~ (0x1ffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                  >> 7U))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 7U)))));
    bufp->fullCData(oldp+1052,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1053,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                        >> 8U))),4);
    bufp->fullBit(oldp+1054,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+1055,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+1056,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+1057,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+1058,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+1059,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 8U))));
    bufp->fullBit(oldp+1060,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 8U))));
    bufp->fullBit(oldp+1061,((1U & (~ ((0xffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 8U)) 
                                       ^ (0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+1062,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 8U) & (~ (0xffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 8U)))))));
    bufp->fullBit(oldp+1063,((1U & ((~ (0xffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 8U))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 8U)))));
    bufp->fullBit(oldp+1064,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 9U))));
    bufp->fullBit(oldp+1065,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 9U))));
    bufp->fullBit(oldp+1066,((1U & (~ ((0x7fU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 9U)) 
                                       ^ (0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 9U)))))));
    bufp->fullBit(oldp+1067,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 9U) & (~ (0x7fU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 9U)))))));
    bufp->fullBit(oldp+1068,((1U & ((~ (0x7fU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 9U))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 9U)))));
    bufp->fullBit(oldp+1069,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1070,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1071,((1U & (~ ((0x3fU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 0xaU)) 
                                       ^ (0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+1072,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0xaU) & (~ 
                                                 (0x3fU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+1073,((1U & ((~ (0x3fU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 0xaU))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xaU)))));
    bufp->fullBit(oldp+1074,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1075,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1076,((1U & (~ ((0x1fU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 0xbU)) 
                                       ^ (0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+1077,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0xbU) & (~ 
                                                 (0x1fU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 0xbU)))))));
    bufp->fullBit(oldp+1078,((1U & ((~ (0x1fU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 0xbU))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xbU)))));
    bufp->fullCData(oldp+1079,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+1080,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                        >> 0xcU))),4);
    bufp->fullBit(oldp+1081,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+1082,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+1083,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+1084,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+1085,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+1086,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1087,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1088,((1U & (~ ((0xfU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                >> 0xcU)) 
                                       ^ (0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+1089,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0xcU) & (~ 
                                                 (0xfU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 0xcU)))))));
    bufp->fullBit(oldp+1090,((1U & ((~ (0xfU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                >> 0xcU))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+1091,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1092,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1093,((1U & (~ ((7U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 0xdU)) 
                                       ^ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 0xdU)))))));
    bufp->fullBit(oldp+1094,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0xdU) & (~ 
                                                 (7U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 0xdU)))))));
    bufp->fullBit(oldp+1095,((1U & ((~ (7U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 0xdU))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1096,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1097,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1098,((1U & (~ ((3U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 0xeU)) 
                                       ^ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 0xeU)))))));
    bufp->fullBit(oldp+1099,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0xeU) & (~ 
                                                 (3U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 0xeU)))))));
    bufp->fullBit(oldp+1100,((1U & ((~ (3U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 0xeU))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1101,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1102,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1103,((1U & (~ ((1U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 0xfU)) 
                                       ^ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 0xfU)))))));
    bufp->fullBit(oldp+1104,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0xfU) & (~ 
                                                 (1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                     >> 0xfU)))))));
    bufp->fullBit(oldp+1105,((1U & ((~ (1U & (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                              >> 0xfU))) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xfU)))));
    bufp->fullSData(oldp+1106,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                >> 0x10U)),16);
    bufp->fullSData(oldp+1107,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                >> 0x10U)),16);
    bufp->fullBit(oldp+1108,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+1109,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+1110,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+1111,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+1112,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+1113,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x10U))),4);
    bufp->fullCData(oldp+1114,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                        >> 0x10U))),4);
    bufp->fullBit(oldp+1115,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+1116,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+1117,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+1118,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+1119,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+1120,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1121,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1122,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x10U)))));
    bufp->fullBit(oldp+1123,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x10U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x10U))))));
    bufp->fullBit(oldp+1124,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x10U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x10U)))));
    bufp->fullBit(oldp+1125,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1126,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1127,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x11U)))));
    bufp->fullBit(oldp+1128,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x11U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x11U))))));
    bufp->fullBit(oldp+1129,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x11U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x11U)))));
    bufp->fullBit(oldp+1130,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1131,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1132,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x12U)))));
    bufp->fullBit(oldp+1133,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x12U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x12U))))));
    bufp->fullBit(oldp+1134,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x12U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x12U)))));
    bufp->fullBit(oldp+1135,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1136,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1137,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x13U)))));
    bufp->fullBit(oldp+1138,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x13U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x13U))))));
    bufp->fullBit(oldp+1139,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x13U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x13U)))));
    bufp->fullCData(oldp+1140,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x14U))),4);
    bufp->fullCData(oldp+1141,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                        >> 0x14U))),4);
    bufp->fullBit(oldp+1142,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+1143,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+1144,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+1145,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+1146,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+1147,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1148,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1149,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+1150,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x14U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x14U))))));
    bufp->fullBit(oldp+1151,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x14U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+1152,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1153,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1154,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x15U)))));
    bufp->fullBit(oldp+1155,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x15U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x15U))))));
    bufp->fullBit(oldp+1156,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x15U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x15U)))));
    bufp->fullBit(oldp+1157,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1158,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1159,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x16U)))));
    bufp->fullBit(oldp+1160,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x16U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x16U))))));
    bufp->fullBit(oldp+1161,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x16U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x16U)))));
    bufp->fullBit(oldp+1162,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1163,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1164,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x17U)))));
    bufp->fullBit(oldp+1165,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x17U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x17U))))));
    bufp->fullBit(oldp+1166,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x17U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x17U)))));
    bufp->fullCData(oldp+1167,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x18U))),4);
    bufp->fullCData(oldp+1168,((0xfU & (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                        >> 0x18U))),4);
    bufp->fullBit(oldp+1169,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+1170,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+1171,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+1172,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+1173,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+1174,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1175,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1176,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x18U)))));
    bufp->fullBit(oldp+1177,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x18U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x18U))))));
    bufp->fullBit(oldp+1178,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x18U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x18U)))));
    bufp->fullBit(oldp+1179,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1180,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1181,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+1182,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x19U) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x19U))))));
    bufp->fullBit(oldp+1183,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x19U)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+1184,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1185,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1186,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x1aU)))));
    bufp->fullBit(oldp+1187,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x1aU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x1aU))))));
    bufp->fullBit(oldp+1188,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1aU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x1aU)))));
    bufp->fullBit(oldp+1189,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1190,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1191,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x1bU)))));
    bufp->fullBit(oldp+1192,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x1bU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+1193,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1bU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x1bU)))));
    bufp->fullCData(oldp+1194,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                >> 0x1cU)),4);
    bufp->fullCData(oldp+1195,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1196,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+1197,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+1198,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+1199,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+1200,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+1201,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1202,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1203,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x1cU)))));
    bufp->fullBit(oldp+1204,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x1cU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x1cU))))));
    bufp->fullBit(oldp+1205,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1cU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x1cU)))));
    bufp->fullBit(oldp+1206,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1207,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1208,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x1dU)))));
    bufp->fullBit(oldp+1209,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x1dU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x1dU))))));
    bufp->fullBit(oldp+1210,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1dU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x1dU)))));
    bufp->fullBit(oldp+1211,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1212,((1U & (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1213,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x1eU)))));
    bufp->fullBit(oldp+1214,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x1eU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x1eU))))));
    bufp->fullBit(oldp+1215,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1eU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x1eU)))));
    bufp->fullBit(oldp+1216,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1217,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1218,((1U & (~ ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        ^ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1219,((1U & ((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                     >> 0x1fU) & (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0x1fU))))));
    bufp->fullBit(oldp+1220,((1U & ((~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1fU)) 
                                    & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1221,((1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                     >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                               & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t) 
                                                  >> 1U))))));
    bufp->fullCData(oldp+1222,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t),2);
    bufp->fullCData(oldp+1223,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t),2);
    bufp->fullBit(oldp+1224,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+1225,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+1226,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+1227,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+1228,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
    bufp->fullBit(oldp+1229,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+1230,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+1231,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+1232,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+1233,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+1234,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+1235,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+1236,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+1237,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+1238,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+1239,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+1240,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+1241,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+1242,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+1243,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+1244,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+1245,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+1246,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+1247,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+1248,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+1249,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+1250,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+1251,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+1252,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+1253,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
    bufp->fullBit(oldp+1254,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+1255,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+1256,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+1257,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+1258,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+1259,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+1260,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+1261,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+1262,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+1263,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+1264,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+1265,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+1266,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+1267,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+1268,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+1269,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+1270,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+1271,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+1272,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+1273,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+1274,(vlSelf->top__DOT__pipelined__DOT__enable
                             [1U]));
    bufp->fullBit(oldp+1275,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__id_enable_o));
    bufp->fullBit(oldp+1276,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__ex_enable_o));
    bufp->fullBit(oldp+1277,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__mem_enable_o));
    bufp->fullBit(oldp+1278,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__wb_enable_o));
    bufp->fullBit(oldp+1279,(vlSelf->top__DOT__pipelined__DOT__enable
                             [0U]));
    bufp->fullIData(oldp+1280,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri),32);
    bufp->fullIData(oldp+1281,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3),32);
    bufp->fullIData(oldp+1282,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data),32);
    bufp->fullBit(oldp+1283,(vlSelf->top__DOT__pipelined__DOT__enable
                             [2U]));
    bufp->fullIData(oldp+1284,(vlSelf->top__DOT__pipelined__DOT__wb_data
                               [0U]),32);
    bufp->fullBit(oldp+1285,(vlSelf->top__DOT__pipelined__DOT__enable
                             [3U]));
    bufp->fullIData(oldp+1286,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+1287,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+1288,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+1289,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+1290,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+1291,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+1292,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+1293,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+1294,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+1295,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+1296,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+1297,(vlSelf->io_hex7_o),32);
    bufp->fullIData(oldp+1298,(vlSelf->pc_debug_o),32);
    bufp->fullBit(oldp+1299,(vlSelf->clk_i));
    bufp->fullBit(oldp+1300,(vlSelf->rst_ni));
    bufp->fullIData(oldp+1301,(0U),32);
    bufp->fullIData(oldp+1302,(1U),32);
    bufp->fullIData(oldp+1303,(2U),32);
    bufp->fullIData(oldp+1304,(3U),32);
    bufp->fullIData(oldp+1305,(4U),32);
}
