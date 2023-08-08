// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__pipelined__DOT__instr[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__pipelined__DOT__instr[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__pipelined__DOT__instr[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__pipelined__DOT__instr[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__pipelined__DOT__instr[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__pipelined__DOT__pc[0]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__pipelined__DOT__pc[1]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__pipelined__DOT__pc[2]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__pipelined__DOT__pc[3]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__pipelined__DOT__pc[4]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__pipelined__DOT__rs1_data[0]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__pipelined__DOT__rs1_data[1]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__pipelined__DOT__rs2_data[0]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__pipelined__DOT__rs2_data[1]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__pipelined__DOT__rs2_data[2]),32);
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__pipelined__DOT__rd_wren[0]));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__pipelined__DOT__rd_wren[1]));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__pipelined__DOT__rd_wren[2]));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__pipelined__DOT__rd_wren[3]));
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__pipelined__DOT__mem_alu_data),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__pipelined__DOT__wb_alu_data),32);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__pipelined__DOT__alu_op[0]),4);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__pipelined__DOT__alu_op[1]),4);
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__pipelined__DOT__op_a_sel[0]));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__pipelined__DOT__op_a_sel[1]));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__pipelined__DOT__op_b_sel[0]));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__pipelined__DOT__op_b_sel[1]));
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__pipelined__DOT__forward_a),2);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__pipelined__DOT__forward_b),2);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__pipelined__DOT__mem_op[0]),3);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__pipelined__DOT__mem_op[1]),3);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__pipelined__DOT__mem_op[2]),3);
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__pipelined__DOT__mem_wren[0]));
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__pipelined__DOT__mem_wren[1]));
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__pipelined__DOT__mem_wren[2]));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__pipelined__DOT__mem_wren[3]));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__pipelined__DOT__is_load[0]));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__pipelined__DOT__is_load[1]));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__pipelined__DOT__is_load[2]));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__pipelined__DOT__is_load[3]));
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__pipelined__DOT__wb_sel[0]),2);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__pipelined__DOT__wb_sel[1]),2);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__pipelined__DOT__wb_sel[2]),2);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__pipelined__DOT__wb_sel[3]),2);
        bufp->chgIData(oldp+44,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc
                                 [0U])),32);
        bufp->chgIData(oldp+45,(((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc
                                 [4U])),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__pipelined__DOT__imm),32);
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__pipelined__DOT__br_unsigned[0]));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__pipelined__DOT__br_unsigned[1]));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__pipelined__DOT__is_rs2[0]));
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__pipelined__DOT__is_rs2[1]));
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__pipelined__DOT__alu_op
                                [1U]),4);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op),4);
        bufp->chgBit(oldp+53,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))));
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__pipelined__DOT__instr
                                [2U]),32);
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__pipelined__DOT__br_unsigned
                              [1U]));
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__pipelined__DOT__instr
                                [1U]),32);
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_a_sel_o));
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o));
        bufp->chgBit(oldp+60,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o));
        bufp->chgBit(oldp+61,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_load_o));
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__br_unsigned_o));
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_rs2_o));
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__alu_op_o),4);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_op_o),3);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__wb_sel_o),2);
        bufp->chgCData(oldp+67,((7U & (vlSelf->top__DOT__pipelined__DOT__instr
                                       [1U] >> 0xcU))),3);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__pipelined__DOT__pc
                                [1U]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__pipelined__DOT__rs1_data
                                [0U]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__pipelined__DOT__rs2_data
                                [0U]),32);
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                              [0U]));
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__pipelined__DOT__alu_op
                                [0U]),4);
        bufp->chgBit(oldp+73,(vlSelf->top__DOT__pipelined__DOT__op_a_sel
                              [0U]));
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__pipelined__DOT__op_b_sel
                              [0U]));
        bufp->chgBit(oldp+75,(vlSelf->top__DOT__pipelined__DOT__br_unsigned
                              [0U]));
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__pipelined__DOT__mem_op
                                [0U]),3);
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                              [0U]));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__pipelined__DOT__is_load
                              [0U]));
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                                [0U]),2);
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__pipelined__DOT__is_rs2
                              [0U]));
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__instr_o),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__pc_o),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs1_data_o),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs2_data_o),32);
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rd_wren_o));
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__alu_op_o),4);
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_a_sel_o));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_b_sel_o));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__br_unsigned_o));
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_op_o),3);
        bufp->chgBit(oldp+91,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_wren_o));
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_load_o));
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__wb_sel_o),2);
        bufp->chgBit(oldp+94,(vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_rs2_o));
        bufp->chgBit(oldp+95,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                              [2U]));
        bufp->chgBit(oldp+96,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                              [3U]));
        bufp->chgCData(oldp+97,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                          [3U] >> 7U))),5);
        bufp->chgCData(oldp+98,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                          [4U] >> 7U))),5);
        bufp->chgCData(oldp+99,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                          [2U] >> 0xfU))),5);
        bufp->chgCData(oldp+100,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                           [2U] >> 0x14U))),5);
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__pipelined__DOT__rd_wren
                               [1U]));
        bufp->chgBit(oldp+102,(vlSelf->top__DOT__pipelined__DOT__is_load
                               [1U]));
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__pipelined__DOT__is_load
                               [2U]));
        bufp->chgBit(oldp+104,(vlSelf->top__DOT__pipelined__DOT__is_load
                               [3U]));
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__pipelined__DOT__is_rs2
                               [1U]));
        bufp->chgCData(oldp+106,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                           [2U] >> 7U))),5);
        bufp->chgCData(oldp+107,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                           [1U] >> 0xfU))),5);
        bufp->chgCData(oldp+108,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                           [1U] >> 0x14U))),5);
        bufp->chgBit(oldp+109,((((vlSelf->top__DOT__pipelined__DOT__rd_wren
                                  [1U] & (0U != (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [2U] 
                                                    >> 7U)))) 
                                 & vlSelf->top__DOT__pipelined__DOT__is_load
                                 [1U]) & (((0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr
                                             [2U] >> 7U)) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [1U] 
                                                  >> 0xfU))) 
                                          | (((0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [2U] 
                                                  >> 7U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__pipelined__DOT__instr
                                                     [1U] 
                                                     >> 0x14U))) 
                                             & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                             [0U])))));
        bufp->chgBit(oldp+110,(((vlSelf->top__DOT__pipelined__DOT__rd_wren
                                 [3U] & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__pipelined__DOT__instr
                                                   [4U] 
                                                   >> 7U)))) 
                                & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                              [4U] 
                                              >> 7U)) 
                                    == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [1U] 
                                                 >> 0xfU))) 
                                   | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [4U] 
                                                 >> 7U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__pipelined__DOT__instr
                                            [1U] >> 0x14U))) 
                                      & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                      [0U])))));
        bufp->chgBit(oldp+111,((((((vlSelf->top__DOT__pipelined__DOT__is_load
                                    [1U] & vlSelf->top__DOT__pipelined__DOT__is_load
                                    [2U]) & (0U != 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [2U] 
                                                 >> 7U)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr
                                             [3U] >> 7U)))) 
                                 & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [2U] 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [1U] 
                                                  >> 0xfU))) 
                                    | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [2U] 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr
                                             [1U] >> 0x14U))) 
                                       & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                       [0U]))) & ((
                                                   (0x1fU 
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
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__pipelined__DOT__instr
                                 [0U]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__pipelined__DOT__pc
                                 [0U]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__instr_o),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__pc_o),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__pipelined__DOT__inst_memory1__DOT__memory
                                 [(0xfffU & (vlSelf->top__DOT__pipelined__DOT__pc
                                             [0U] >> 2U))]),32);
        bufp->chgBit(oldp+117,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                               [2U]));
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__pipelined__DOT__rs2_data
                                 [2U]),32);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__pipelined__DOT__mem_op
                                 [2U]),3);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2),32);
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask),4);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__pipelined__DOT__pc
                                 [2U]),32);
        bufp->chgCData(oldp+124,(vlSelf->top__DOT__pipelined__DOT__mem_op
                                 [1U]),3);
        bufp->chgBit(oldp+125,(vlSelf->top__DOT__pipelined__DOT__mem_wren
                               [1U]));
        bufp->chgCData(oldp+126,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                                 [1U]),2);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__instr_o),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__pc_o),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rs2_data_o),32);
        bufp->chgBit(oldp+130,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rd_wren_o));
        bufp->chgCData(oldp+131,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_op_o),3);
        bufp->chgBit(oldp+132,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_wren_o));
        bufp->chgBit(oldp+133,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__is_load_o));
        bufp->chgCData(oldp+134,(vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__wb_sel_o),2);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory
                                 [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                            [1U] >> 0xfU))]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory
                                 [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                            [1U] >> 0x14U))]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[0]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[1]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[2]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[3]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[4]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[5]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[6]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[7]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[8]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[9]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[10]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[11]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[12]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[13]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[14]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[15]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[16]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[17]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[18]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[19]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[20]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[21]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[22]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[23]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[24]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[25]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[26]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[27]),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[28]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[29]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[30]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[31]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__pipelined__DOT__instr
                                 [3U]),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__pipelined__DOT__pc
                                 [3U]),32);
        bufp->chgCData(oldp+171,(vlSelf->top__DOT__pipelined__DOT__wb_sel
                                 [2U]),2);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__instr_o),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__pc_o),32);
        bufp->chgBit(oldp+174,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__rd_wren_o));
        bufp->chgBit(oldp+175,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__mem_wren_o));
        bufp->chgBit(oldp+176,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__is_load_o));
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__ld_data_o),32);
        bufp->chgCData(oldp+178,(vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__wb_sel_o),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__pipelined__DOT__ld_data[0]),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__pipelined__DOT__ld_data[1]),32);
        bufp->chgIData(oldp+181,(((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel)
                                   ? ((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel)
                                       ? vlSelf->top__DOT__pipelined__DOT__ex_alu_data
                                       : ((IData)(4U) 
                                          + vlSelf->top__DOT__pipelined__DOT__pc
                                          [0U])) : 
                                  ((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc
                                   [0U]))),32);
        bufp->chgBit(oldp+182,(((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                                 ? (3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t))
                                 : (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_equal_s))));
        bufp->chgIData(oldp+183,(((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__mem_op
                                             [2U] >> 2U)) 
                                         & (~ vlSelf->top__DOT__pipelined__DOT__mem_wren
                                            [2U])))
                                   ? ((0U == vlSelf->top__DOT__pipelined__DOT__mem_op
                                       [2U]) ? ((((0x80U 
                                                   & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)
                                                   ? 0xffffffU
                                                   : 0U) 
                                                 << 8U) 
                                                | (0xffU 
                                                   & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
                                       : ((1U == vlSelf->top__DOT__pipelined__DOT__mem_op
                                           [2U]) ? 
                                          ((((0x8000U 
                                              & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)
                                              ? 0xffffU
                                              : 0U) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
                                           : vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
                                   : vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)),32);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__pipelined__DOT__ld_data
                                 [0U]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+185,(vlSelf->top__DOT__pipelined__DOT__id_reset_n));
        bufp->chgBit(oldp+186,(vlSelf->top__DOT__pipelined__DOT__ex_reset_n));
        bufp->chgBit(oldp+187,(vlSelf->top__DOT__pipelined__DOT__mem_reset_n));
        bufp->chgBit(oldp+188,(vlSelf->top__DOT__pipelined__DOT__wb_reset_n));
        bufp->chgBit(oldp+189,(vlSelf->top__DOT__pipelined__DOT__enable[0]));
        bufp->chgBit(oldp+190,(vlSelf->top__DOT__pipelined__DOT__enable[1]));
        bufp->chgBit(oldp+191,(vlSelf->top__DOT__pipelined__DOT__enable[2]));
        bufp->chgBit(oldp+192,(vlSelf->top__DOT__pipelined__DOT__enable[3]));
        bufp->chgBit(oldp+193,(vlSelf->top__DOT__pipelined__DOT__pc_enable));
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__pipelined__DOT__ex_alu_data),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__pipelined__DOT__operand_a),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__pipelined__DOT__operand_b),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__pipelined__DOT__wb_data[0]),32);
        bufp->chgBit(oldp+198,(vlSelf->top__DOT__pipelined__DOT__br_sel));
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__pipelined__DOT__wb_rs1_data),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__pipelined__DOT__wb_rs2_data),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift),32);
        bufp->chgCData(oldp+202,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__shift_amt),5);
        bufp->chgBit(oldp+203,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__br_less));
        bufp->chgBit(oldp+204,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t)) 
                                         | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                               & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t) 
                                                  >> 1U))))))));
        bufp->chgBit(oldp+205,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_less_s));
        bufp->chgBit(oldp+206,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t))));
        bufp->chgBit(oldp+207,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_equal_s));
        bufp->chgBit(oldp+208,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__alarger_o));
        bufp->chgCData(oldp+209,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__eq_t),2);
        bufp->chgCData(oldp+210,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__al_t),2);
        bufp->chgCData(oldp+211,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__bl_t),2);
        bufp->chgIData(oldp+212,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a))),32);
        bufp->chgIData(oldp+213,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))),32);
        bufp->chgBit(oldp+214,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
        bufp->chgBit(oldp+215,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
        bufp->chgBit(oldp+216,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
        bufp->chgCData(oldp+217,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
        bufp->chgCData(oldp+218,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
        bufp->chgSData(oldp+219,((0xffffU & vlSelf->top__DOT__pipelined__DOT__operand_a)),16);
        bufp->chgSData(oldp+220,((0xffffU & vlSelf->top__DOT__pipelined__DOT__operand_b)),16);
        bufp->chgBit(oldp+221,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+222,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+223,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+224,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+225,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+226,((0xfU & vlSelf->top__DOT__pipelined__DOT__operand_a)),4);
        bufp->chgCData(oldp+227,((0xfU & vlSelf->top__DOT__pipelined__DOT__operand_b)),4);
        bufp->chgBit(oldp+228,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+229,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+230,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+231,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+232,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+233,((1U & vlSelf->top__DOT__pipelined__DOT__operand_a)));
        bufp->chgBit(oldp+234,((1U & vlSelf->top__DOT__pipelined__DOT__operand_b)));
        bufp->chgBit(oldp+235,((1U & (~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
        bufp->chgBit(oldp+236,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      & (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
        bufp->chgBit(oldp+237,((1U & ((~ vlSelf->top__DOT__pipelined__DOT__operand_a) 
                                      & vlSelf->top__DOT__pipelined__DOT__operand_b))));
        bufp->chgBit(oldp+238,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 1U))));
        bufp->chgBit(oldp+239,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 1U))));
        bufp->chgBit(oldp+240,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 1U)))));
        bufp->chgBit(oldp+241,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 1U))))));
        bufp->chgBit(oldp+242,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 1U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 1U)))));
        bufp->chgBit(oldp+243,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 2U))));
        bufp->chgBit(oldp+244,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 2U))));
        bufp->chgBit(oldp+245,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 2U)))));
        bufp->chgBit(oldp+246,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 2U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 2U))))));
        bufp->chgBit(oldp+247,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 2U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 2U)))));
        bufp->chgBit(oldp+248,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 3U))));
        bufp->chgBit(oldp+249,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 3U))));
        bufp->chgBit(oldp+250,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 3U)))));
        bufp->chgBit(oldp+251,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 3U))))));
        bufp->chgBit(oldp+252,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 3U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 3U)))));
        bufp->chgCData(oldp+253,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 4U))),4);
        bufp->chgCData(oldp+254,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 4U))),4);
        bufp->chgBit(oldp+255,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+256,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+257,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+258,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+259,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+260,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 4U))));
        bufp->chgBit(oldp+261,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 4U))));
        bufp->chgBit(oldp+262,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 4U)))));
        bufp->chgBit(oldp+263,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 4U))))));
        bufp->chgBit(oldp+264,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 4U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 4U)))));
        bufp->chgBit(oldp+265,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 5U))));
        bufp->chgBit(oldp+266,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 5U))));
        bufp->chgBit(oldp+267,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 5U)))));
        bufp->chgBit(oldp+268,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 5U))))));
        bufp->chgBit(oldp+269,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 5U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 5U)))));
        bufp->chgBit(oldp+270,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 6U))));
        bufp->chgBit(oldp+271,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 6U))));
        bufp->chgBit(oldp+272,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 6U)))));
        bufp->chgBit(oldp+273,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 6U))))));
        bufp->chgBit(oldp+274,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 6U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 6U)))));
        bufp->chgBit(oldp+275,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 7U))));
        bufp->chgBit(oldp+276,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 7U))));
        bufp->chgBit(oldp+277,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 7U)))));
        bufp->chgBit(oldp+278,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 7U))))));
        bufp->chgBit(oldp+279,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 7U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 7U)))));
        bufp->chgCData(oldp+280,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 8U))),4);
        bufp->chgCData(oldp+281,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 8U))),4);
        bufp->chgBit(oldp+282,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+283,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+284,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+285,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+286,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+287,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 8U))));
        bufp->chgBit(oldp+288,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 8U))));
        bufp->chgBit(oldp+289,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 8U)))));
        bufp->chgBit(oldp+290,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 8U))))));
        bufp->chgBit(oldp+291,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 8U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 8U)))));
        bufp->chgBit(oldp+292,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 9U))));
        bufp->chgBit(oldp+293,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 9U))));
        bufp->chgBit(oldp+294,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 9U)))));
        bufp->chgBit(oldp+295,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 9U))))));
        bufp->chgBit(oldp+296,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 9U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                       >> 9U)))));
        bufp->chgBit(oldp+297,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xaU))));
        bufp->chgBit(oldp+298,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+299,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+300,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+301,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xaU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+302,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xbU))));
        bufp->chgBit(oldp+303,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+304,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+305,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+306,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xbU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+307,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+308,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+309,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+310,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+311,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+312,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+313,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+314,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xcU))));
        bufp->chgBit(oldp+315,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+316,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+317,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+318,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xcU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+319,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xdU))));
        bufp->chgBit(oldp+320,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+321,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+322,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+323,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xdU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+324,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xeU))));
        bufp->chgBit(oldp+325,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+326,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+327,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+328,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xeU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+329,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0xfU))));
        bufp->chgBit(oldp+330,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+331,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+332,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+333,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0xfU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+334,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+335,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+336,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+337,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+338,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+339,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+340,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+341,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+342,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+343,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+344,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+345,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+346,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+347,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+348,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x10U))));
        bufp->chgBit(oldp+349,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+350,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+351,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+352,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x10U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+353,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x11U))));
        bufp->chgBit(oldp+354,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+355,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+356,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+357,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x11U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+358,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x12U))));
        bufp->chgBit(oldp+359,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+360,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+361,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+362,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x12U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+363,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x13U))));
        bufp->chgBit(oldp+364,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+365,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+366,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+367,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x13U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x13U)))));
        bufp->chgCData(oldp+368,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+369,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+370,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+371,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+372,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+373,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+374,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+375,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x14U))));
        bufp->chgBit(oldp+376,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+377,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+378,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+379,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x14U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+380,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x15U))));
        bufp->chgBit(oldp+381,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+382,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+383,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+384,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x15U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+385,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x16U))));
        bufp->chgBit(oldp+386,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+387,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+388,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+389,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x16U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+390,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x17U))));
        bufp->chgBit(oldp+391,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+392,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+393,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+394,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x17U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x17U)))));
        bufp->chgCData(oldp+395,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+396,((0xfU & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+397,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+398,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+399,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+400,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+401,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+402,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x18U))));
        bufp->chgBit(oldp+403,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+404,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+405,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+406,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x18U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+407,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x19U))));
        bufp->chgBit(oldp+408,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+409,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+410,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+411,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x19U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+412,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+413,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+414,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+415,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+416,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x1aU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+417,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+418,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+419,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+420,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+421,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x1bU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x1bU)))));
        bufp->chgCData(oldp+422,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+423,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+424,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+425,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+426,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+427,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+428,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+429,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+430,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+431,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+432,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+433,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x1cU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+434,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+435,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+436,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+437,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+438,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x1dU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+439,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+440,((1U & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+441,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+442,((1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+443,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          >> 0x1eU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+444,((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                >> 0x1fU)));
        bufp->chgBit(oldp+445,((vlSelf->top__DOT__pipelined__DOT__operand_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+446,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                          ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+447,(((vlSelf->top__DOT__pipelined__DOT__operand_a 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+448,(((~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                    >> 0x1fU)) & (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+449,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
        bufp->chgBit(oldp+450,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
        bufp->chgBit(oldp+451,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
        bufp->chgCData(oldp+452,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
        bufp->chgCData(oldp+453,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
        bufp->chgSData(oldp+454,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))),16);
        bufp->chgSData(oldp+455,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))),16);
        bufp->chgBit(oldp+456,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+457,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+458,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+459,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+460,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+461,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))),4);
        bufp->chgCData(oldp+462,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))),4);
        bufp->chgBit(oldp+463,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+464,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+465,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+466,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+467,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+468,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_a)))));
        bufp->chgBit(oldp+469,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))));
        bufp->chgBit(oldp+470,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                         ^ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))))));
        bufp->chgBit(oldp+471,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      & (~ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))))));
        bufp->chgBit(oldp+472,((1U & ((~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_a))) 
                                      & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))))));
        bufp->chgBit(oldp+473,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 1U))));
        bufp->chgBit(oldp+474,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 1U))));
        bufp->chgBit(oldp+475,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 1U)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 1U)))))));
        bufp->chgBit(oldp+476,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 1U) & (~ 
                                                 (7U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+477,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 1U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 1U)))));
        bufp->chgBit(oldp+478,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 2U))));
        bufp->chgBit(oldp+479,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 2U))));
        bufp->chgBit(oldp+480,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 2U)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 2U)))))));
        bufp->chgBit(oldp+481,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 2U) & (~ 
                                                 (3U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+482,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 2U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 2U)))));
        bufp->chgBit(oldp+483,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 3U))));
        bufp->chgBit(oldp+484,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 3U))));
        bufp->chgBit(oldp+485,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 3U)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 3U)))))));
        bufp->chgBit(oldp+486,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 3U) & (~ 
                                                 (1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+487,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 3U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 3U)))));
        bufp->chgCData(oldp+488,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+489,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+490,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+491,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+492,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+493,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+494,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+495,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 4U))));
        bufp->chgBit(oldp+496,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 4U))));
        bufp->chgBit(oldp+497,((1U & (~ ((0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 4U)) 
                                         ^ (0xfffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 4U)))))));
        bufp->chgBit(oldp+498,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 4U) & (~ 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+499,((1U & ((~ (0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 4U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 4U)))));
        bufp->chgBit(oldp+500,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 5U))));
        bufp->chgBit(oldp+501,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 5U))));
        bufp->chgBit(oldp+502,((1U & (~ ((0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 5U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+503,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 5U) & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+504,((1U & ((~ (0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 5U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 5U)))));
        bufp->chgBit(oldp+505,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 6U))));
        bufp->chgBit(oldp+506,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 6U))));
        bufp->chgBit(oldp+507,((1U & (~ ((0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 6U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 6U)))))));
        bufp->chgBit(oldp+508,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 6U) & (~ 
                                                 (0x3ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+509,((1U & ((~ (0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 6U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 6U)))));
        bufp->chgBit(oldp+510,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 7U))));
        bufp->chgBit(oldp+511,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 7U))));
        bufp->chgBit(oldp+512,((1U & (~ ((0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 7U)) 
                                         ^ (0x1ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+513,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 7U) & (~ 
                                                 (0x1ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+514,((1U & ((~ (0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                           >> 7U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 7U)))));
        bufp->chgCData(oldp+515,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 8U))),4);
        bufp->chgCData(oldp+516,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 8U))),4);
        bufp->chgBit(oldp+517,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+518,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+519,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+520,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+521,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+522,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 8U))));
        bufp->chgBit(oldp+523,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 8U))));
        bufp->chgBit(oldp+524,((1U & (~ ((0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 8U)) 
                                         ^ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 8U)))))));
        bufp->chgBit(oldp+525,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 8U) & (~ 
                                                 (0xffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+526,((1U & ((~ (0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 8U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 8U)))));
        bufp->chgBit(oldp+527,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 9U))));
        bufp->chgBit(oldp+528,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 9U))));
        bufp->chgBit(oldp+529,((1U & (~ ((0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 9U)) 
                                         ^ (0x7fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 9U)))))));
        bufp->chgBit(oldp+530,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 9U) & (~ 
                                                 (0x7fU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+531,((1U & ((~ (0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 9U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 9U)))));
        bufp->chgBit(oldp+532,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+533,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+534,((1U & (~ ((0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 0xaU)) 
                                         ^ (0x3fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 0xaU)))))));
        bufp->chgBit(oldp+535,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xaU) & (~ 
                                                   (0x3fU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+536,((1U & ((~ (0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 0xaU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+537,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+538,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+539,((1U & (~ ((0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 0xbU)) 
                                         ^ (0x1fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 0xbU)))))));
        bufp->chgBit(oldp+540,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xbU) & (~ 
                                                   (0x1fU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+541,((1U & ((~ (0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                   >> 0xbU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+542,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+543,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+544,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+545,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+546,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+547,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+548,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+549,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+550,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+551,((1U & (~ ((0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                  >> 0xcU)) 
                                         ^ (0xfU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 0xcU)))))));
        bufp->chgBit(oldp+552,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xcU) & (~ 
                                                   (0xfU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+553,((1U & ((~ (0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                  >> 0xcU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+554,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+555,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+556,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xdU)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xdU)))))));
        bufp->chgBit(oldp+557,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xdU) & (~ 
                                                   (7U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+558,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xdU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+559,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+560,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+561,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xeU)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xeU)))))));
        bufp->chgBit(oldp+562,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xeU) & (~ 
                                                   (3U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+563,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xeU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+564,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+565,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+566,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xfU)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xfU)))))));
        bufp->chgBit(oldp+567,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0xfU) & (~ 
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                       >> 0xfU)))))));
        bufp->chgBit(oldp+568,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                                >> 0xfU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+569,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+570,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+571,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+572,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+573,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+574,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+575,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+576,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+577,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+578,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+579,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+580,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+581,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+582,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+583,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+584,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+585,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+586,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x10U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+587,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x10U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+588,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+589,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+590,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+591,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x11U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+592,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x11U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+593,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+594,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+595,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+596,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x12U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+597,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x12U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+598,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+599,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+600,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+601,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x13U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+602,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x13U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x13U)))));
        bufp->chgCData(oldp+603,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+604,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+605,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+606,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+607,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+608,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+609,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+610,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+611,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+612,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+613,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x14U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+614,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x14U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+615,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+616,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+617,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+618,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x15U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+619,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x15U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+620,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+621,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+622,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+623,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x16U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+624,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x16U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+625,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+626,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+627,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+628,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x17U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+629,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x17U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x17U)))));
        bufp->chgCData(oldp+630,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+631,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+632,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+633,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+634,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+635,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+636,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+637,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+638,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+639,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+640,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x18U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+641,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x18U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+642,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+643,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+644,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+645,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x19U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+646,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x19U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+647,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+648,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+649,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+650,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1aU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+651,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1aU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+652,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+653,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+654,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+655,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1bU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+656,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1bU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1bU)))));
        bufp->chgCData(oldp+657,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+658,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+659,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+660,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+661,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+662,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+663,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+664,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+665,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+666,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+667,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1cU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+668,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1cU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+669,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+670,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+671,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+672,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1dU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+673,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1dU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+674,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+675,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+676,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+677,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1eU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+678,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1eU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+679,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+680,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+681,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+682,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                       >> 0x1fU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+683,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                          >> 0x1fU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+684,((1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                       >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                                 & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t) 
                                                    >> 1U))))));
        bufp->chgCData(oldp+685,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t),2);
        bufp->chgCData(oldp+686,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t),2);
        bufp->chgBit(oldp+687,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+688,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+689,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+690,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+691,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
        bufp->chgBit(oldp+692,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+693,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+694,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+695,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+696,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+697,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+698,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+699,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+700,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+701,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+702,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+703,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+704,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+705,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+706,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+707,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+708,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+709,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+710,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+711,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+712,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+713,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+714,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+715,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+716,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
        bufp->chgBit(oldp+717,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+718,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+719,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+720,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+721,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+722,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+723,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+724,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+725,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+726,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+727,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+728,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+729,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+730,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+731,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+732,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+733,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+734,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+735,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+736,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgIData(oldp+737,(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+738,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t)) 
                                         | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                               & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t) 
                                                  >> 1U))))))));
        bufp->chgBit(oldp+739,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less_s));
        bufp->chgBit(oldp+740,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t))));
        bufp->chgBit(oldp+741,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal_s));
        bufp->chgBit(oldp+742,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less));
        bufp->chgBit(oldp+743,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal));
        bufp->chgBit(oldp+744,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__alarger_o));
        bufp->chgCData(oldp+745,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t),2);
        bufp->chgCData(oldp+746,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t),2);
        bufp->chgCData(oldp+747,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t),2);
        bufp->chgIData(oldp+748,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data))),32);
        bufp->chgIData(oldp+749,(((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))),32);
        bufp->chgBit(oldp+750,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
        bufp->chgBit(oldp+751,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
        bufp->chgBit(oldp+752,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
        bufp->chgCData(oldp+753,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
        bufp->chgCData(oldp+754,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
        bufp->chgSData(oldp+755,((0xffffU & vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)),16);
        bufp->chgSData(oldp+756,((0xffffU & vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)),16);
        bufp->chgBit(oldp+757,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+758,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+759,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+760,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+761,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+762,((0xfU & vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)),4);
        bufp->chgCData(oldp+763,((0xfU & vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)),4);
        bufp->chgBit(oldp+764,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+765,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+766,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+767,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+768,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+769,((1U & vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)));
        bufp->chgBit(oldp+770,((1U & vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)));
        bufp->chgBit(oldp+771,((1U & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))));
        bufp->chgBit(oldp+772,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      & (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))));
        bufp->chgBit(oldp+773,((1U & ((~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data) 
                                      & vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))));
        bufp->chgBit(oldp+774,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 1U))));
        bufp->chgBit(oldp+775,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 1U))));
        bufp->chgBit(oldp+776,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 1U)))));
        bufp->chgBit(oldp+777,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 1U))))));
        bufp->chgBit(oldp+778,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 1U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 1U)))));
        bufp->chgBit(oldp+779,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 2U))));
        bufp->chgBit(oldp+780,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 2U))));
        bufp->chgBit(oldp+781,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 2U)))));
        bufp->chgBit(oldp+782,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 2U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 2U))))));
        bufp->chgBit(oldp+783,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 2U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 2U)))));
        bufp->chgBit(oldp+784,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 3U))));
        bufp->chgBit(oldp+785,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 3U))));
        bufp->chgBit(oldp+786,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 3U)))));
        bufp->chgBit(oldp+787,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 3U))))));
        bufp->chgBit(oldp+788,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 3U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 3U)))));
        bufp->chgCData(oldp+789,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 4U))),4);
        bufp->chgCData(oldp+790,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 4U))),4);
        bufp->chgBit(oldp+791,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+792,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+793,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+794,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+795,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+796,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 4U))));
        bufp->chgBit(oldp+797,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 4U))));
        bufp->chgBit(oldp+798,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 4U)))));
        bufp->chgBit(oldp+799,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 4U))))));
        bufp->chgBit(oldp+800,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 4U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 4U)))));
        bufp->chgBit(oldp+801,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 5U))));
        bufp->chgBit(oldp+802,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 5U))));
        bufp->chgBit(oldp+803,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 5U)))));
        bufp->chgBit(oldp+804,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 5U))))));
        bufp->chgBit(oldp+805,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 5U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 5U)))));
        bufp->chgBit(oldp+806,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 6U))));
        bufp->chgBit(oldp+807,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 6U))));
        bufp->chgBit(oldp+808,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 6U)))));
        bufp->chgBit(oldp+809,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 6U))))));
        bufp->chgBit(oldp+810,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 6U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 6U)))));
        bufp->chgBit(oldp+811,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 7U))));
        bufp->chgBit(oldp+812,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 7U))));
        bufp->chgBit(oldp+813,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 7U)))));
        bufp->chgBit(oldp+814,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 7U))))));
        bufp->chgBit(oldp+815,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 7U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 7U)))));
        bufp->chgCData(oldp+816,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 8U))),4);
        bufp->chgCData(oldp+817,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 8U))),4);
        bufp->chgBit(oldp+818,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+819,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+820,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+821,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+822,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+823,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 8U))));
        bufp->chgBit(oldp+824,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 8U))));
        bufp->chgBit(oldp+825,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 8U)))));
        bufp->chgBit(oldp+826,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 8U))))));
        bufp->chgBit(oldp+827,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 8U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 8U)))));
        bufp->chgBit(oldp+828,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 9U))));
        bufp->chgBit(oldp+829,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 9U))));
        bufp->chgBit(oldp+830,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 9U)))));
        bufp->chgBit(oldp+831,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 9U))))));
        bufp->chgBit(oldp+832,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 9U)) & 
                                      (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                       >> 9U)))));
        bufp->chgBit(oldp+833,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0xaU))));
        bufp->chgBit(oldp+834,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0xaU))));
        bufp->chgBit(oldp+835,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+836,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+837,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0xaU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+838,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0xbU))));
        bufp->chgBit(oldp+839,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0xbU))));
        bufp->chgBit(oldp+840,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+841,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+842,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0xbU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+843,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+844,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+845,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+846,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+847,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+848,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+849,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+850,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0xcU))));
        bufp->chgBit(oldp+851,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0xcU))));
        bufp->chgBit(oldp+852,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+853,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+854,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0xcU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+855,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0xdU))));
        bufp->chgBit(oldp+856,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0xdU))));
        bufp->chgBit(oldp+857,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+858,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+859,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0xdU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+860,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0xeU))));
        bufp->chgBit(oldp+861,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0xeU))));
        bufp->chgBit(oldp+862,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+863,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+864,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0xeU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+865,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0xfU))));
        bufp->chgBit(oldp+866,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0xfU))));
        bufp->chgBit(oldp+867,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+868,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+869,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0xfU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+870,((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+871,((vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+872,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+873,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+874,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+875,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+876,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+877,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+878,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+879,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+880,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+881,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+882,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+883,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+884,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x10U))));
        bufp->chgBit(oldp+885,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x10U))));
        bufp->chgBit(oldp+886,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+887,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+888,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x10U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+889,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x11U))));
        bufp->chgBit(oldp+890,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x11U))));
        bufp->chgBit(oldp+891,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+892,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+893,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x11U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+894,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x12U))));
        bufp->chgBit(oldp+895,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x12U))));
        bufp->chgBit(oldp+896,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+897,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+898,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x12U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+899,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x13U))));
        bufp->chgBit(oldp+900,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x13U))));
        bufp->chgBit(oldp+901,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+902,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+903,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x13U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x13U)))));
        bufp->chgCData(oldp+904,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+905,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+906,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+907,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+908,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+909,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+910,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+911,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x14U))));
        bufp->chgBit(oldp+912,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x14U))));
        bufp->chgBit(oldp+913,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+914,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+915,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x14U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+916,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x15U))));
        bufp->chgBit(oldp+917,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x15U))));
        bufp->chgBit(oldp+918,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+919,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+920,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x15U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+921,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x16U))));
        bufp->chgBit(oldp+922,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x16U))));
        bufp->chgBit(oldp+923,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+924,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+925,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x16U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+926,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x17U))));
        bufp->chgBit(oldp+927,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x17U))));
        bufp->chgBit(oldp+928,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+929,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+930,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x17U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x17U)))));
        bufp->chgCData(oldp+931,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+932,((0xfU & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+933,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+934,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+935,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+936,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+937,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+938,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x18U))));
        bufp->chgBit(oldp+939,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x18U))));
        bufp->chgBit(oldp+940,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+941,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+942,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x18U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+943,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x19U))));
        bufp->chgBit(oldp+944,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x19U))));
        bufp->chgBit(oldp+945,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+946,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+947,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x19U)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+948,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+949,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+950,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+951,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+952,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x1aU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+953,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+954,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+955,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+956,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+957,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x1bU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x1bU)))));
        bufp->chgCData(oldp+958,((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+959,((vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+960,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+961,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+962,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+963,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+964,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+965,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+966,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+967,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+968,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+969,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x1cU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+970,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+971,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+972,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+973,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+974,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x1dU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+975,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+976,((1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+977,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+978,((1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+979,((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          >> 0x1eU)) 
                                      & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+980,((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+981,((vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+982,((1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                          ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+983,(((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+984,(((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                                    >> 0x1fU)) & (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+985,((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
        bufp->chgBit(oldp+986,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
        bufp->chgBit(oldp+987,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
        bufp->chgCData(oldp+988,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
        bufp->chgCData(oldp+989,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
        bufp->chgSData(oldp+990,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)))),16);
        bufp->chgSData(oldp+991,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))),16);
        bufp->chgBit(oldp+992,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+993,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+994,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+995,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+996,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+997,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)))),4);
        bufp->chgCData(oldp+998,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))),4);
        bufp->chgBit(oldp+999,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+1000,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+1001,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+1002,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+1003,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+1004,((1U & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)))));
        bufp->chgBit(oldp+1005,((1U & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))));
        bufp->chgBit(oldp+1006,((1U & (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))))));
        bufp->chgBit(oldp+1007,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       & (~ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)))))));
        bufp->chgBit(oldp+1008,((1U & ((~ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data))) 
                                       & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))))));
        bufp->chgBit(oldp+1009,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 1U))));
        bufp->chgBit(oldp+1010,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 1U))));
        bufp->chgBit(oldp+1011,((1U & (~ ((7U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 1U)) 
                                          ^ (7U & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 1U)))))));
        bufp->chgBit(oldp+1012,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 1U) & (~ 
                                                  (7U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                      >> 1U)))))));
        bufp->chgBit(oldp+1013,((1U & ((~ (7U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 1U))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1014,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 2U))));
        bufp->chgBit(oldp+1015,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 2U))));
        bufp->chgBit(oldp+1016,((1U & (~ ((3U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 2U)) 
                                          ^ (3U & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 2U)))))));
        bufp->chgBit(oldp+1017,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 2U) & (~ 
                                                  (3U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                      >> 2U)))))));
        bufp->chgBit(oldp+1018,((1U & ((~ (3U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 2U))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1019,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 3U))));
        bufp->chgBit(oldp+1020,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 3U))));
        bufp->chgBit(oldp+1021,((1U & (~ ((1U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 3U)) 
                                          ^ (1U & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 3U)))))));
        bufp->chgBit(oldp+1022,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 3U) & (~ 
                                                  (1U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                      >> 3U)))))));
        bufp->chgBit(oldp+1023,((1U & ((~ (1U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 3U))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 3U)))));
        bufp->chgCData(oldp+1024,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 4U))),4);
        bufp->chgCData(oldp+1025,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 4U))),4);
        bufp->chgBit(oldp+1026,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+1027,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+1028,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+1029,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+1030,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+1031,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 4U))));
        bufp->chgBit(oldp+1032,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 4U))));
        bufp->chgBit(oldp+1033,((1U & (~ ((0xfffU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 4U)) 
                                          ^ (0xfffU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 4U)))))));
        bufp->chgBit(oldp+1034,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 4U) & (~ 
                                                  (0xfffU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                      >> 4U)))))));
        bufp->chgBit(oldp+1035,((1U & ((~ (0xfffU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 4U))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 4U)))));
        bufp->chgBit(oldp+1036,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 5U))));
        bufp->chgBit(oldp+1037,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 5U))));
        bufp->chgBit(oldp+1038,((1U & (~ ((0x7ffU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 5U)) 
                                          ^ (0x7ffU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 5U)))))));
        bufp->chgBit(oldp+1039,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 5U) & (~ 
                                                  (0x7ffU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                      >> 5U)))))));
        bufp->chgBit(oldp+1040,((1U & ((~ (0x7ffU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 5U))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 5U)))));
        bufp->chgBit(oldp+1041,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 6U))));
        bufp->chgBit(oldp+1042,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 6U))));
        bufp->chgBit(oldp+1043,((1U & (~ ((0x3ffU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 6U)) 
                                          ^ (0x3ffU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 6U)))))));
        bufp->chgBit(oldp+1044,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 6U) & (~ 
                                                  (0x3ffU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                      >> 6U)))))));
        bufp->chgBit(oldp+1045,((1U & ((~ (0x3ffU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 6U))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 6U)))));
        bufp->chgBit(oldp+1046,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 7U))));
        bufp->chgBit(oldp+1047,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 7U))));
        bufp->chgBit(oldp+1048,((1U & (~ ((0x1ffU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 7U)) 
                                          ^ (0x1ffU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 7U)))))));
        bufp->chgBit(oldp+1049,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 7U) & (~ 
                                                  (0x1ffU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                      >> 7U)))))));
        bufp->chgBit(oldp+1050,((1U & ((~ (0x1ffU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 7U))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 7U)))));
        bufp->chgCData(oldp+1051,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 8U))),4);
        bufp->chgCData(oldp+1052,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 8U))),4);
        bufp->chgBit(oldp+1053,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+1054,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+1055,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+1056,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+1057,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+1058,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 8U))));
        bufp->chgBit(oldp+1059,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 8U))));
        bufp->chgBit(oldp+1060,((1U & (~ ((0xffU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 8U)) 
                                          ^ (0xffU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 8U)))))));
        bufp->chgBit(oldp+1061,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 8U) & (~ 
                                                  (0xffU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                      >> 8U)))))));
        bufp->chgBit(oldp+1062,((1U & ((~ (0xffU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 8U))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 8U)))));
        bufp->chgBit(oldp+1063,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 9U))));
        bufp->chgBit(oldp+1064,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 9U))));
        bufp->chgBit(oldp+1065,((1U & (~ ((0x7fU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 9U)) 
                                          ^ (0x7fU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 9U)))))));
        bufp->chgBit(oldp+1066,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 9U) & (~ 
                                                  (0x7fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                      >> 9U)))))));
        bufp->chgBit(oldp+1067,((1U & ((~ (0x7fU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 9U))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 9U)))));
        bufp->chgBit(oldp+1068,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1069,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1070,((1U & (~ ((0x3fU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 0xaU)) 
                                          ^ (0x3fU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 0xaU)))))));
        bufp->chgBit(oldp+1071,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0xaU) & 
                                       (~ (0x3fU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                            >> 0xaU)))))));
        bufp->chgBit(oldp+1072,((1U & ((~ (0x3fU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 0xaU))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0xaU)))));
        bufp->chgBit(oldp+1073,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1074,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1075,((1U & (~ ((0x1fU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 0xbU)) 
                                          ^ (0x1fU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 0xbU)))))));
        bufp->chgBit(oldp+1076,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0xbU) & 
                                       (~ (0x1fU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                            >> 0xbU)))))));
        bufp->chgBit(oldp+1077,((1U & ((~ (0x1fU & 
                                           (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                            >> 0xbU))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0xbU)))));
        bufp->chgCData(oldp+1078,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1079,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0xcU))),4);
        bufp->chgBit(oldp+1080,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+1081,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+1082,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+1083,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+1084,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+1085,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1086,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1087,((1U & (~ ((0xfU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                   >> 0xcU)) 
                                          ^ (0xfU & 
                                             (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                              >> 0xcU)))))));
        bufp->chgBit(oldp+1088,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0xcU) & 
                                       (~ (0xfU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0xcU)))))));
        bufp->chgBit(oldp+1089,((1U & ((~ (0xfU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                   >> 0xcU))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+1090,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1091,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1092,((1U & (~ ((7U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 0xdU)) 
                                          ^ (7U & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0xdU)))))));
        bufp->chgBit(oldp+1093,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0xdU) & 
                                       (~ (7U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                 >> 0xdU)))))));
        bufp->chgBit(oldp+1094,((1U & ((~ (7U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 0xdU))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+1095,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1096,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1097,((1U & (~ ((3U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 0xeU)) 
                                          ^ (3U & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0xeU)))))));
        bufp->chgBit(oldp+1098,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0xeU) & 
                                       (~ (3U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                 >> 0xeU)))))));
        bufp->chgBit(oldp+1099,((1U & ((~ (3U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 0xeU))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+1100,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1101,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1102,((1U & (~ ((1U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 0xfU)) 
                                          ^ (1U & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                   >> 0xfU)))))));
        bufp->chgBit(oldp+1103,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0xfU) & 
                                       (~ (1U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                 >> 0xfU)))))));
        bufp->chgBit(oldp+1104,((1U & ((~ (1U & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                                 >> 0xfU))) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+1105,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                   >> 0x10U)),16);
        bufp->chgSData(oldp+1106,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                   >> 0x10U)),16);
        bufp->chgBit(oldp+1107,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+1108,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+1109,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+1110,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+1111,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+1112,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x10U))),4);
        bufp->chgCData(oldp+1113,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x10U))),4);
        bufp->chgBit(oldp+1114,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+1115,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+1116,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+1117,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+1118,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+1119,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1120,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1121,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x10U)))));
        bufp->chgBit(oldp+1122,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x10U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x10U))))));
        bufp->chgBit(oldp+1123,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x10U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x10U)))));
        bufp->chgBit(oldp+1124,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1125,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1126,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x11U)))));
        bufp->chgBit(oldp+1127,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x11U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x11U))))));
        bufp->chgBit(oldp+1128,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x11U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x11U)))));
        bufp->chgBit(oldp+1129,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1130,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1131,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+1132,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x12U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x12U))))));
        bufp->chgBit(oldp+1133,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x12U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+1134,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1135,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1136,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x13U)))));
        bufp->chgBit(oldp+1137,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x13U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x13U))))));
        bufp->chgBit(oldp+1138,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x13U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x13U)))));
        bufp->chgCData(oldp+1139,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1140,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x14U))),4);
        bufp->chgBit(oldp+1141,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+1142,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+1143,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+1144,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+1145,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+1146,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1147,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1148,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1149,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x14U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x14U))))));
        bufp->chgBit(oldp+1150,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x14U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1151,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1152,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1153,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1154,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x15U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x15U))))));
        bufp->chgBit(oldp+1155,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x15U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1156,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1157,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1158,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1159,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x16U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x16U))))));
        bufp->chgBit(oldp+1160,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x16U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1161,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1162,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1163,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x17U)))));
        bufp->chgBit(oldp+1164,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x17U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x17U))))));
        bufp->chgBit(oldp+1165,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x17U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x17U)))));
        bufp->chgCData(oldp+1166,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x18U))),4);
        bufp->chgCData(oldp+1167,((0xfU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x18U))),4);
        bufp->chgBit(oldp+1168,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+1169,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+1170,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+1171,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+1172,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+1173,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1174,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1175,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1176,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x18U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x18U))))));
        bufp->chgBit(oldp+1177,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x18U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1178,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1179,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1180,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1181,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x19U) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x19U))))));
        bufp->chgBit(oldp+1182,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x19U)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1183,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1184,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1185,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1186,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1aU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x1aU))))));
        bufp->chgBit(oldp+1187,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x1aU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1188,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1189,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1190,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x1bU)))));
        bufp->chgBit(oldp+1191,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1bU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x1bU))))));
        bufp->chgBit(oldp+1192,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x1bU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x1bU)))));
        bufp->chgCData(oldp+1193,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                   >> 0x1cU)),4);
        bufp->chgCData(oldp+1194,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                   >> 0x1cU)),4);
        bufp->chgBit(oldp+1195,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+1196,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+1197,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+1198,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+1199,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+1200,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1201,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1202,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1203,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1cU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x1cU))))));
        bufp->chgBit(oldp+1204,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x1cU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1205,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1206,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1207,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1208,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1dU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x1dU))))));
        bufp->chgBit(oldp+1209,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x1dU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1210,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1211,((1U & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1212,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1213,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1eU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x1eU))))));
        bufp->chgBit(oldp+1214,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x1eU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1215,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1216,((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1217,((1U & (~ ((((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           ^ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+1218,((1U & ((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                        >> 0x1fU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0x1fU))))));
        bufp->chgBit(oldp+1219,((1U & ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                           >> 0x1fU)) 
                                       & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+1220,((1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                        >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                                  & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t) 
                                                     >> 1U))))));
        bufp->chgCData(oldp+1221,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t),2);
        bufp->chgCData(oldp+1222,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t),2);
        bufp->chgBit(oldp+1223,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+1224,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+1225,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+1226,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+1227,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
        bufp->chgBit(oldp+1228,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+1229,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+1230,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+1231,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+1232,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+1233,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+1234,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+1235,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+1236,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+1237,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+1238,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+1239,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+1240,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+1241,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+1242,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+1243,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+1244,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+1245,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+1246,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+1247,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+1248,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+1249,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+1250,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+1251,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+1252,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
        bufp->chgBit(oldp+1253,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+1254,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+1255,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+1256,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+1257,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+1258,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+1259,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+1260,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+1261,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+1262,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+1263,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+1264,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+1265,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+1266,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+1267,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+1268,((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+1269,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+1270,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                          | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+1271,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+1272,(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+1273,(vlSelf->top__DOT__pipelined__DOT__enable
                                [1U]));
        bufp->chgBit(oldp+1274,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__id_enable_o));
        bufp->chgBit(oldp+1275,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__ex_enable_o));
        bufp->chgBit(oldp+1276,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__mem_enable_o));
        bufp->chgBit(oldp+1277,(vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__wb_enable_o));
        bufp->chgBit(oldp+1278,(vlSelf->top__DOT__pipelined__DOT__enable
                                [0U]));
        bufp->chgIData(oldp+1279,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri),32);
        bufp->chgIData(oldp+1280,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3),32);
        bufp->chgIData(oldp+1281,(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data),32);
        bufp->chgBit(oldp+1282,(vlSelf->top__DOT__pipelined__DOT__enable
                                [2U]));
        bufp->chgIData(oldp+1283,(vlSelf->top__DOT__pipelined__DOT__wb_data
                                  [0U]),32);
        bufp->chgBit(oldp+1284,(vlSelf->top__DOT__pipelined__DOT__enable
                                [3U]));
    }
    bufp->chgIData(oldp+1285,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+1286,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+1287,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+1288,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+1289,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+1290,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+1291,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+1292,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+1293,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+1294,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+1295,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+1296,(vlSelf->io_hex7_o),32);
    bufp->chgIData(oldp+1297,(vlSelf->pc_debug_o),32);
    bufp->chgBit(oldp+1298,(vlSelf->clk_i));
    bufp->chgBit(oldp+1299,(vlSelf->rst_ni));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
