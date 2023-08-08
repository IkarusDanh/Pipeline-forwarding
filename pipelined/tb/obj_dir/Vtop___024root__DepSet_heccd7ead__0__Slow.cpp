// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h8a53a859__0;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__0 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1 
        = (1U & VL_RAND_RESET_I(1));
    __Vilp = 0U;
    while ((__Vilp <= 0xffU)) {
        vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__memory[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT____Vxrand_h96ff575f__0 
        = (0xfU & VL_RAND_RESET_I(4));
    vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96ff2746__0 
        = (7U & VL_RAND_RESET_I(3));
    __Vtemp_h8a53a859__0[0U] = 0x2e73696dU;
    __Vtemp_h8a53a859__0[1U] = 0x64617461U;
    __Vtemp_h8a53a859__0[2U] = 0x6d656d2eU;
    __Vtemp_h8a53a859__0[3U] = 0x696e7374U;
    __Vtemp_h8a53a859__0[4U] = 0x6d656d2fU;
    __Vtemp_h8a53a859__0[5U] = 0x2e2e2fU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_h8a53a859__0)
                 ,  &(vlSelf->top__DOT__pipelined__DOT__inst_memory1__DOT__memory)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*3:0*/, 16> Vtop__ConstPool__TABLE_h03feb407_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hcc735a85_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h136716ca_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h9804456b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h3d14eb25_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h2774721d_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    // Body
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri 
        = vlSelf->io_sw_i;
    vlSelf->top__DOT__pipelined__DOT__is_rs2[1U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_rs2_o;
    vlSelf->top__DOT__pipelined__DOT__is_load[1U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_load_o;
    vlSelf->top__DOT__pipelined__DOT__is_load[2U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__is_load_o;
    vlSelf->top__DOT__pipelined__DOT__is_load[3U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__is_load_o;
    vlSelf->top__DOT__pipelined__DOT__alu_op[1U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__alu_op_o;
    vlSelf->top__DOT__pipelined__DOT__br_unsigned[1U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__br_unsigned_o;
    vlSelf->top__DOT__pipelined__DOT__op_b_sel[1U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_b_sel_o;
    vlSelf->top__DOT__pipelined__DOT__op_a_sel[1U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_a_sel_o;
    vlSelf->top__DOT__pipelined__DOT__rs1_data[1U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs1_data_o;
    vlSelf->top__DOT__pipelined__DOT__rs2_data[1U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs2_data_o;
    vlSelf->top__DOT__pipelined__DOT__rs2_data[2U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rs2_data_o;
    vlSelf->top__DOT__pipelined__DOT__ld_data[1U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__ld_data_o;
    vlSelf->top__DOT__pipelined__DOT__wb_sel[1U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__wb_sel_o;
    vlSelf->top__DOT__pipelined__DOT__wb_sel[2U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__wb_sel_o;
    vlSelf->top__DOT__pipelined__DOT__wb_sel[3U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__wb_sel_o;
    vlSelf->top__DOT__pipelined__DOT__rd_wren[1U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rd_wren_o;
    vlSelf->top__DOT__pipelined__DOT__rd_wren[2U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rd_wren_o;
    vlSelf->top__DOT__pipelined__DOT__rd_wren[3U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__rd_wren_o;
    vlSelf->top__DOT__pipelined__DOT__mem_wren[1U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_wren_o;
    vlSelf->top__DOT__pipelined__DOT__mem_wren[2U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_wren_o;
    vlSelf->top__DOT__pipelined__DOT__mem_wren[3U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__mem_wren_o;
    vlSelf->top__DOT__pipelined__DOT__mem_op[1U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_op_o;
    vlSelf->top__DOT__pipelined__DOT__mem_op[2U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_op_o;
    vlSelf->top__DOT__pipelined__DOT__instr[1U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__instr_o;
    vlSelf->top__DOT__pipelined__DOT__instr[2U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__instr_o;
    vlSelf->top__DOT__pipelined__DOT__instr[3U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__instr_o;
    vlSelf->top__DOT__pipelined__DOT__instr[4U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__instr_o;
    vlSelf->top__DOT__pipelined__DOT__pc[1U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__pc_o;
    vlSelf->top__DOT__pipelined__DOT__pc[2U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__pc_o;
    vlSelf->top__DOT__pipelined__DOT__pc[3U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__pc_o;
    vlSelf->top__DOT__pipelined__DOT__pc[4U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__pc_o;
    vlSelf->io_lcd_o = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
        [0x28U];
    vlSelf->io_ledg_o = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
        [0x24U];
    vlSelf->io_ledr_o = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
        [0x20U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
        [0x1cU];
    vlSelf->io_hex6_o = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
        [0x18U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
        [0x14U];
    vlSelf->io_hex4_o = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
        [0x10U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
        [0xcU];
    vlSelf->io_hex2_o = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
        [8U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
        [4U];
    vlSelf->io_hex0_o = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
        [0U];
    vlSelf->pc_debug_o = vlSelf->top__DOT__pipelined__DOT__pc
        [4U];
    vlSelf->top__DOT__pipelined__DOT__instr[0U] = vlSelf->top__DOT__pipelined__DOT__inst_memory1__DOT__memory
        [(0xfffU & (vlSelf->top__DOT__pipelined__DOT__pc
                    [0U] >> 2U))];
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_rs2_o = 0U;
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_load_o = 0U;
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__alu_op_o = 0U;
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__br_unsigned_o 
        = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__0;
    vlSelf->top__DOT__pipelined__DOT__imm = ((0x40U 
                                              & vlSelf->top__DOT__pipelined__DOT__instr
                                              [2U])
                                              ? ((0x20U 
                                                  & vlSelf->top__DOT__pipelined__DOT__instr
                                                  [2U])
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->top__DOT__pipelined__DOT__instr
                                                   [2U])
                                                   ? 
                                                  ((vlSelf->top__DOT__pipelined__DOT__instr
                                                    [2U] 
                                                    >> 0x1fU)
                                                    ? 
                                                   (0xfffff000U 
                                                    | (vlSelf->top__DOT__pipelined__DOT__instr
                                                       [2U] 
                                                       >> 0x14U))
                                                    : 
                                                   (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [2U] 
                                                    >> 0x14U))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->top__DOT__pipelined__DOT__instr
                                                    [2U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U])
                                                     ? 
                                                    ((vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xffe00000U 
                                                      | ((0x100000U 
                                                          & (vlSelf->top__DOT__pipelined__DOT__instr
                                                             [2U] 
                                                             >> 0xbU)) 
                                                         | ((0xff000U 
                                                             & vlSelf->top__DOT__pipelined__DOT__instr
                                                             [2U]) 
                                                            | ((0x800U 
                                                                & (vlSelf->top__DOT__pipelined__DOT__instr
                                                                   [2U] 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->top__DOT__pipelined__DOT__instr
                                                                     [2U] 
                                                                     >> 0x14U))))))
                                                      : 
                                                     ((0x100000U 
                                                       & (vlSelf->top__DOT__pipelined__DOT__instr
                                                          [2U] 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->top__DOT__pipelined__DOT__instr
                                                          [2U]) 
                                                         | ((0x800U 
                                                             & (vlSelf->top__DOT__pipelined__DOT__instr
                                                                [2U] 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->top__DOT__pipelined__DOT__instr
                                                                  [2U] 
                                                                  >> 0x14U))))))
                                                     : 
                                                    ((vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xfffff000U 
                                                      | (vlSelf->top__DOT__pipelined__DOT__instr
                                                         [2U] 
                                                         >> 0x14U))
                                                      : 
                                                     (vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x14U)))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U])
                                                     ? 
                                                    ((vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xfffff000U 
                                                      | (vlSelf->top__DOT__pipelined__DOT__instr
                                                         [2U] 
                                                         >> 0x14U))
                                                      : 
                                                     (vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x14U))
                                                     : 
                                                    ((vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xffffe000U 
                                                      | ((0x1000U 
                                                          & (vlSelf->top__DOT__pipelined__DOT__instr
                                                             [2U] 
                                                             >> 0x13U)) 
                                                         | ((0x800U 
                                                             & (vlSelf->top__DOT__pipelined__DOT__instr
                                                                [2U] 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->top__DOT__pipelined__DOT__instr
                                                                   [2U] 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->top__DOT__pipelined__DOT__instr
                                                                     [2U] 
                                                                     >> 7U))))))
                                                      : 
                                                     ((0x1000U 
                                                       & (vlSelf->top__DOT__pipelined__DOT__instr
                                                          [2U] 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (vlSelf->top__DOT__pipelined__DOT__instr
                                                             [2U] 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->top__DOT__pipelined__DOT__instr
                                                                [2U] 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->top__DOT__pipelined__DOT__instr
                                                                  [2U] 
                                                                  >> 7U)))))))))
                                                  : 
                                                 ((vlSelf->top__DOT__pipelined__DOT__instr
                                                   [2U] 
                                                   >> 0x1fU)
                                                   ? 
                                                  (0xfffff000U 
                                                   | (vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x14U))
                                                   : 
                                                  (vlSelf->top__DOT__pipelined__DOT__instr
                                                   [2U] 
                                                   >> 0x14U)))
                                              : ((0x20U 
                                                  & vlSelf->top__DOT__pipelined__DOT__instr
                                                  [2U])
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->top__DOT__pipelined__DOT__instr
                                                   [2U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->top__DOT__pipelined__DOT__instr
                                                    [2U])
                                                    ? 
                                                   ((vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U] 
                                                     >> 0x1fU)
                                                     ? 
                                                    (0xfffff000U 
                                                     | (vlSelf->top__DOT__pipelined__DOT__instr
                                                        [2U] 
                                                        >> 0x14U))
                                                     : 
                                                    (vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U] 
                                                     >> 0x14U))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U])
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U])
                                                     : 
                                                    ((vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xfffff000U 
                                                      | (vlSelf->top__DOT__pipelined__DOT__instr
                                                         [2U] 
                                                         >> 0x14U))
                                                      : 
                                                     (vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x14U))))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->top__DOT__pipelined__DOT__instr
                                                    [2U])
                                                    ? 
                                                   ((vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U] 
                                                     >> 0x1fU)
                                                     ? 
                                                    (0xfffff000U 
                                                     | (vlSelf->top__DOT__pipelined__DOT__instr
                                                        [2U] 
                                                        >> 0x14U))
                                                     : 
                                                    (vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U] 
                                                     >> 0x14U))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U])
                                                     ? 
                                                    ((vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xfffff000U 
                                                      | (vlSelf->top__DOT__pipelined__DOT__instr
                                                         [2U] 
                                                         >> 0x14U))
                                                      : 
                                                     (vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x14U))
                                                     : 
                                                    ((vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xfffff000U 
                                                      | ((0xfe0U 
                                                          & (vlSelf->top__DOT__pipelined__DOT__instr
                                                             [2U] 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->top__DOT__pipelined__DOT__instr
                                                               [2U] 
                                                               >> 7U))))
                                                      : 
                                                     ((0xfe0U 
                                                       & (vlSelf->top__DOT__pipelined__DOT__instr
                                                          [2U] 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__instr
                                                            [2U] 
                                                            >> 7U)))))))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelf->top__DOT__pipelined__DOT__instr
                                                   [2U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->top__DOT__pipelined__DOT__instr
                                                    [2U])
                                                    ? 
                                                   ((vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U] 
                                                     >> 0x1fU)
                                                     ? 
                                                    (0xfffff000U 
                                                     | (vlSelf->top__DOT__pipelined__DOT__instr
                                                        [2U] 
                                                        >> 0x14U))
                                                     : 
                                                    (vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U] 
                                                     >> 0x14U))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U])
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U])
                                                     : 
                                                    (((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__pipelined__DOT__instr
                                                           [2U] 
                                                           >> 0xcU))) 
                                                      | (5U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__pipelined__DOT__instr
                                                             [2U] 
                                                             >> 0xcU))))
                                                      ? 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__pipelined__DOT__instr
                                                         [2U] 
                                                         >> 0x14U))
                                                      : 
                                                     ((vlSelf->top__DOT__pipelined__DOT__instr
                                                       [2U] 
                                                       >> 0x1fU)
                                                       ? 
                                                      (0xfffff000U 
                                                       | (vlSelf->top__DOT__pipelined__DOT__instr
                                                          [2U] 
                                                          >> 0x14U))
                                                       : 
                                                      (vlSelf->top__DOT__pipelined__DOT__instr
                                                       [2U] 
                                                       >> 0x14U)))))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->top__DOT__pipelined__DOT__instr
                                                    [2U])
                                                    ? 
                                                   ((vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U] 
                                                     >> 0x1fU)
                                                     ? 
                                                    (0xfffff000U 
                                                     | (vlSelf->top__DOT__pipelined__DOT__instr
                                                        [2U] 
                                                        >> 0x14U))
                                                     : 
                                                    (vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U] 
                                                     >> 0x14U))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U])
                                                     ? 
                                                    ((vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xfffff000U 
                                                      | (vlSelf->top__DOT__pipelined__DOT__instr
                                                         [2U] 
                                                         >> 0x14U))
                                                      : 
                                                     (vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x14U))
                                                     : 
                                                    ((vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xfffff000U 
                                                      | (vlSelf->top__DOT__pipelined__DOT__instr
                                                         [2U] 
                                                         >> 0x14U))
                                                      : 
                                                     (vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U] 
                                                      >> 0x14U)))))));
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o = 0U;
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_a_sel_o = 0U;
    vlSelf->top__DOT__pipelined__DOT__rs1_data[0U] 
        = vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory
        [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                   [1U] >> 0xfU))];
    vlSelf->top__DOT__pipelined__DOT__rs2_data[0U] 
        = vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory
        [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                   [1U] >> 0x14U))];
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__wb_sel_o = 0U;
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o = 0U;
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o = 0U;
    if ((0x40U & vlSelf->top__DOT__pipelined__DOT__instr
         [1U])) {
        if ((0x20U & vlSelf->top__DOT__pipelined__DOT__instr
             [1U])) {
            if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                          [1U] >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                                  [1U] >> 2U)))) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_rs2_o = 1U;
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__br_unsigned_o 
                            = ((6U == (7U & (vlSelf->top__DOT__pipelined__DOT__instr
                                             [1U] >> 0xcU))) 
                               | (7U == (7U & (vlSelf->top__DOT__pipelined__DOT__instr
                                               [1U] 
                                               >> 0xcU))));
                    }
                }
                if ((8U & vlSelf->top__DOT__pipelined__DOT__instr
                     [1U])) {
                    if ((4U & vlSelf->top__DOT__pipelined__DOT__instr
                         [1U])) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o = 1U;
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_a_sel_o = 1U;
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__wb_sel_o = 2U;
                    }
                } else {
                    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o = 1U;
                    if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                                  [1U] >> 2U)))) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_a_sel_o = 1U;
                    }
                    if ((4U & vlSelf->top__DOT__pipelined__DOT__instr
                         [1U])) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__wb_sel_o = 2U;
                    }
                }
            }
            if ((0x10U & vlSelf->top__DOT__pipelined__DOT__instr
                 [1U])) {
                vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o 
                    = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1;
                vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o 
                    = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2;
            } else if ((8U & vlSelf->top__DOT__pipelined__DOT__instr
                        [1U])) {
                vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o 
                    = (1U & ((vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 2U) | (IData)(vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1)));
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 2U)))) {
                    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o 
                        = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2;
                }
            } else if ((4U & vlSelf->top__DOT__pipelined__DOT__instr
                        [1U])) {
                vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o = 1U;
            }
        } else {
            vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o 
                = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1;
            vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o 
                = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2;
        }
    } else {
        if ((0x20U & vlSelf->top__DOT__pipelined__DOT__instr
             [1U])) {
            if ((0x10U & vlSelf->top__DOT__pipelined__DOT__instr
                 [1U])) {
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                                  [1U] >> 2U)))) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_rs2_o = 1U;
                    }
                    if ((4U & vlSelf->top__DOT__pipelined__DOT__instr
                         [1U])) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o = 1U;
                    }
                }
                vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o 
                    = (1U & ((~ (vlSelf->top__DOT__pipelined__DOT__instr
                                 [1U] >> 3U)) | (IData)(vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1)));
                if ((8U & vlSelf->top__DOT__pipelined__DOT__instr
                     [1U])) {
                    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o 
                        = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2;
                }
            } else {
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                                  [1U] >> 2U)))) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_rs2_o = 1U;
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o = 1U;
                    }
                }
                if ((8U & vlSelf->top__DOT__pipelined__DOT__instr
                     [1U])) {
                    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o 
                        = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1;
                    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o 
                        = (1U & (IData)(vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2));
                } else {
                    if ((4U & vlSelf->top__DOT__pipelined__DOT__instr
                         [1U])) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o 
                            = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1;
                    }
                    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o 
                        = (1U & ((~ (vlSelf->top__DOT__pipelined__DOT__instr
                                     [1U] >> 2U)) | (IData)(vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2)));
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                          [1U] >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                                  [1U] >> 2U)))) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_a_sel_o = 0U;
                    }
                }
            }
        } else if ((0x10U & vlSelf->top__DOT__pipelined__DOT__instr
                    [1U])) {
            if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                          [1U] >> 3U)))) {
                vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o = 1U;
                if ((4U & vlSelf->top__DOT__pipelined__DOT__instr
                     [1U])) {
                    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_a_sel_o = 1U;
                }
            }
            vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o 
                = (1U & ((~ (vlSelf->top__DOT__pipelined__DOT__instr
                             [1U] >> 3U)) | (IData)(vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1)));
            if ((8U & vlSelf->top__DOT__pipelined__DOT__instr
                 [1U])) {
                vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o 
                    = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2;
            }
        } else {
            if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                          [1U] >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 2U)))) {
                    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o = 1U;
                }
            }
            if ((8U & vlSelf->top__DOT__pipelined__DOT__instr
                 [1U])) {
                vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o 
                    = (1U & (IData)(vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1));
                vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o 
                    = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2;
            } else {
                vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o 
                    = (1U & ((~ (vlSelf->top__DOT__pipelined__DOT__instr
                                 [1U] >> 2U)) | (IData)(vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1)));
                if ((4U & vlSelf->top__DOT__pipelined__DOT__instr
                     [1U])) {
                    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o 
                        = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2;
                }
            }
        }
        if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                      [1U] >> 5U)))) {
            if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                          [1U] >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                                  [1U] >> 2U)))) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__wb_sel_o = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_op_o 
        = vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96ff2746__0;
    if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                  [1U] >> 6U)))) {
        if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                      [1U] >> 5U)))) {
            if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                          [1U] >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                                  [1U] >> 2U)))) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_load_o = 1U;
                    }
                }
            }
        }
        if ((0x20U & vlSelf->top__DOT__pipelined__DOT__instr
             [1U])) {
            if ((0x10U & vlSelf->top__DOT__pipelined__DOT__instr
                 [1U])) {
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 3U)))) {
                    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__alu_op_o 
                        = ((4U & vlSelf->top__DOT__pipelined__DOT__instr
                            [1U]) ? 9U : ((8U & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [1U] 
                                                 >> 0x1bU)) 
                                          | (7U & (
                                                   vlSelf->top__DOT__pipelined__DOT__instr
                                                   [1U] 
                                                   >> 0xcU))));
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                          [1U] >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                                  [1U] >> 2U)))) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_op_o 
                            = (7U & (vlSelf->top__DOT__pipelined__DOT__instr
                                     [1U] >> 0xcU));
                    }
                }
            }
        } else {
            if ((0x10U & vlSelf->top__DOT__pipelined__DOT__instr
                 [1U])) {
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                                  [1U] >> 2U)))) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__alu_op_o 
                            = ((0x18U & ((((1U == (7U 
                                                   & (vlSelf->top__DOT__pipelined__DOT__instr
                                                      [1U] 
                                                      >> 0xcU))) 
                                           | (5U == 
                                              (7U & 
                                               (vlSelf->top__DOT__pipelined__DOT__instr
                                                [1U] 
                                                >> 0xcU)))) 
                                          << 3U) & 
                                         (vlSelf->top__DOT__pipelined__DOT__instr
                                          [1U] >> 0x1bU))) 
                               | (7U & (vlSelf->top__DOT__pipelined__DOT__instr
                                        [1U] >> 0xcU)));
                    }
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                          [1U] >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                              [1U] >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__pipelined__DOT__instr
                                  [1U] >> 2U)))) {
                        vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_op_o 
                            = (7U & (vlSelf->top__DOT__pipelined__DOT__instr
                                     [1U] >> 0xcU));
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__pipelined__DOT__is_rs2[0U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_rs2_o;
    vlSelf->top__DOT__pipelined__DOT__is_load[0U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_load_o;
    vlSelf->top__DOT__pipelined__DOT__alu_op[0U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__alu_op_o;
    vlSelf->top__DOT__pipelined__DOT__br_unsigned[0U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__br_unsigned_o;
    vlSelf->top__DOT__pipelined__DOT__op_b_sel[0U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o;
    vlSelf->top__DOT__pipelined__DOT__op_a_sel[0U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_a_sel_o;
    vlSelf->top__DOT__pipelined__DOT__wb_sel[0U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__wb_sel_o;
    vlSelf->top__DOT__pipelined__DOT__rd_wren[0U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o;
    vlSelf->top__DOT__pipelined__DOT__mem_wren[0U] 
        = vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o;
    vlSelf->top__DOT__pipelined__DOT__mem_op[0U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_op_o;
    __Vtableidx2 = vlSelf->top__DOT__pipelined__DOT__alu_op
        [1U];
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op 
        = Vtop__ConstPool__TABLE_h03feb407_0[__Vtableidx2];
    vlSelf->top__DOT__pipelined__DOT__forward_a = (
                                                   ((vlSelf->top__DOT__pipelined__DOT__rd_wren
                                                     [2U] 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__instr
                                                            [3U] 
                                                            >> 7U)))) 
                                                    & ((0x1fU 
                                                        & (vlSelf->top__DOT__pipelined__DOT__instr
                                                           [3U] 
                                                           >> 7U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__pipelined__DOT__instr
                                                           [2U] 
                                                           >> 0xfU))))
                                                    ? 2U
                                                    : 
                                                   (((vlSelf->top__DOT__pipelined__DOT__rd_wren
                                                      [3U] 
                                                      & (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__pipelined__DOT__instr
                                                             [4U] 
                                                             >> 7U)))) 
                                                     & ((0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__instr
                                                            [4U] 
                                                            >> 7U)) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__instr
                                                            [2U] 
                                                            >> 0xfU))))
                                                     ? 3U
                                                     : 0U));
    vlSelf->top__DOT__pipelined__DOT__forward_b = (
                                                   ((vlSelf->top__DOT__pipelined__DOT__rd_wren
                                                     [2U] 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__instr
                                                            [3U] 
                                                            >> 7U)))) 
                                                    & ((0x1fU 
                                                        & (vlSelf->top__DOT__pipelined__DOT__instr
                                                           [3U] 
                                                           >> 7U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__pipelined__DOT__instr
                                                           [2U] 
                                                           >> 0x14U))))
                                                    ? 2U
                                                    : 
                                                   (((vlSelf->top__DOT__pipelined__DOT__rd_wren
                                                      [3U] 
                                                      & (0U 
                                                         != 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__pipelined__DOT__instr
                                                             [4U] 
                                                             >> 7U)))) 
                                                     & ((0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__instr
                                                            [4U] 
                                                            >> 7U)) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__instr
                                                            [2U] 
                                                            >> 0x14U))))
                                                     ? 3U
                                                     : 0U));
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask 
        = ((0U == (3U & vlSelf->top__DOT__pipelined__DOT__mem_op
                   [2U])) ? ((0U == (3U & vlSelf->top__DOT__pipelined__DOT__mem_alu_data))
                              ? 1U : ((1U == (3U & vlSelf->top__DOT__pipelined__DOT__mem_alu_data))
                                       ? 2U : ((2U 
                                                == 
                                                (3U 
                                                 & vlSelf->top__DOT__pipelined__DOT__mem_alu_data))
                                                ? 4U
                                                : 8U)))
            : ((1U == (3U & vlSelf->top__DOT__pipelined__DOT__mem_op
                       [2U])) ? ((0U == (3U & vlSelf->top__DOT__pipelined__DOT__mem_alu_data))
                                  ? 3U : ((1U == (3U 
                                                  & vlSelf->top__DOT__pipelined__DOT__mem_alu_data))
                                           ? 3U : 0xcU))
                : ((2U == (3U & vlSelf->top__DOT__pipelined__DOT__mem_op
                           [2U])) ? 0xfU : (IData)(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT____Vxrand_h96ff575f__0))));
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3 = 0U;
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2 = 0U;
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1 = 0U;
    if (vlSelf->top__DOT__pipelined__DOT__mem_wren[2U]) {
        vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3 = 0U;
        vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2 = 0U;
        vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1 = 0U;
    } else if ((0U == (3U & vlSelf->top__DOT__pipelined__DOT__mem_op
                       [2U]))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3) 
                   | (0xffU & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2) 
                   | (0xffU & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1) 
                   | (0xffU & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                 >> 2U))]));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3) 
                   | (0xffU & (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri 
                               >> 8U)));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2) 
                   | (0xffU & (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
                               [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                          >> 2U))] 
                               >> 8U)));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1) 
                   | (0xffU & (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__memory
                               [(0xffU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                          >> 2U))] 
                               >> 8U)));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3) 
                   | (0xffU & (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri 
                               >> 0x10U)));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2) 
                   | (0xffU & (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
                               [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                          >> 2U))] 
                               >> 0x10U)));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1) 
                   | (0xffU & (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__memory
                               [(0xffU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                          >> 2U))] 
                               >> 0x10U)));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3) 
                   | (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri 
                      >> 0x18U));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2) 
                   | (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                 >> 2U))] >> 0x18U));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1) 
                   | (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                 >> 2U))] >> 0x18U));
        }
    } else if ((1U == (3U & vlSelf->top__DOT__pipelined__DOT__mem_op
                       [2U]))) {
        if ((3U == (3U & (IData)(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3 
                = ((0xffff0000U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3) 
                   | (0xffffU & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2 
                = ((0xffff0000U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2) 
                   | (0xffffU & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1 
                = ((0xffff0000U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1) 
                   | (0xffffU & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                 >> 2U))]));
        }
        if ((0xcU == (0xcU & (IData)(vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3 
                = ((0xffff0000U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3) 
                   | (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri 
                      >> 0x10U));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2 
                = ((0xffff0000U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2) 
                   | (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                 >> 2U))] >> 0x10U));
            vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1 
                = ((0xffff0000U & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1) 
                   | (vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                                 >> 2U))] >> 0x10U));
        }
    } else {
        vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3 
            = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri;
        vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2 
            = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri
            [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                       >> 2U))];
        vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1 
            = vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__memory
            [(0xffU & (vlSelf->top__DOT__pipelined__DOT__mem_alu_data 
                       >> 2U))];
    }
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data 
        = ((0x400U & vlSelf->top__DOT__pipelined__DOT__mem_alu_data)
            ? ((0x200U & vlSelf->top__DOT__pipelined__DOT__mem_alu_data)
                ? vlSelf->top__DOT__pipelined__DOT__lsu1__DOT____Vxrand_h96fd10a2__0
                : ((0x100U & vlSelf->top__DOT__pipelined__DOT__mem_alu_data)
                    ? vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3
                    : vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2))
            : vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1);
    vlSelf->top__DOT__pipelined__DOT__ld_data[0U] = 
        ((1U & ((~ (vlSelf->top__DOT__pipelined__DOT__mem_op
                    [2U] >> 2U)) & (~ vlSelf->top__DOT__pipelined__DOT__mem_wren
                                    [2U]))) ? ((0U 
                                                == 
                                                vlSelf->top__DOT__pipelined__DOT__mem_op
                                                [2U])
                                                ? (
                                                   (((0x80U 
                                                      & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)
                                                      ? 0xffffffU
                                                      : 0U) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
                                                : (
                                                   (1U 
                                                    == 
                                                    vlSelf->top__DOT__pipelined__DOT__mem_op
                                                    [2U])
                                                    ? 
                                                   ((((0x8000U 
                                                       & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data)
                                                       ? 0xffffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
                                                    : vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data))
          : vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data);
    vlSelf->top__DOT__pipelined__DOT__wb_data[0U] = 
        ((0U == vlSelf->top__DOT__pipelined__DOT__wb_sel
          [3U]) ? vlSelf->top__DOT__pipelined__DOT__wb_alu_data
          : ((1U == vlSelf->top__DOT__pipelined__DOT__wb_sel
              [3U]) ? vlSelf->top__DOT__pipelined__DOT__ld_data
             [1U] : ((2U == vlSelf->top__DOT__pipelined__DOT__wb_sel
                      [3U]) ? ((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__pc
                               [4U]) : 0U)));
    vlSelf->top__DOT__pipelined__DOT__wb_rs1_data = 
        ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__forward_a))
          ? vlSelf->top__DOT__pipelined__DOT__rs1_data
         [1U] : ((2U == (IData)(vlSelf->top__DOT__pipelined__DOT__forward_a))
                  ? vlSelf->top__DOT__pipelined__DOT__mem_alu_data
                  : ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__forward_a))
                      ? vlSelf->top__DOT__pipelined__DOT__wb_data
                     [0U] : 0U)));
    vlSelf->top__DOT__pipelined__DOT__wb_rs2_data = 
        ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__forward_b))
          ? vlSelf->top__DOT__pipelined__DOT__rs2_data
         [1U] : ((2U == (IData)(vlSelf->top__DOT__pipelined__DOT__forward_b))
                  ? vlSelf->top__DOT__pipelined__DOT__mem_alu_data
                  : ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__forward_b))
                      ? vlSelf->top__DOT__pipelined__DOT__wb_data
                     [0U] : 0U)));
    vlSelf->top__DOT__pipelined__DOT__operand_a = (
                                                   vlSelf->top__DOT__pipelined__DOT__op_a_sel
                                                   [1U]
                                                    ? 
                                                   (vlSelf->top__DOT__pipelined__DOT__op_a_sel
                                                    [1U]
                                                     ? 
                                                    vlSelf->top__DOT__pipelined__DOT__pc
                                                    [2U]
                                                     : vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)
                                                    : vlSelf->top__DOT__pipelined__DOT__wb_rs1_data);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                    & (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 4U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                  >> 4U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 5U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 6U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 7U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 8U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                  >> 8U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 9U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0xaU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0xbU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0xcU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0xcU)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0xdU)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0xeU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0xfU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x10U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0x10U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x14U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0x14U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x18U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0x18U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x1cU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 4U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 5U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 6U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 7U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 8U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 9U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0xaU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0xbU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 0xcU))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0xdU)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0xeU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0xfU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 0x10U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 0x14U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 0x18U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 0x1cU))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                    & (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 4U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                  >> 4U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 5U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 6U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 7U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 8U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                  >> 8U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 9U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0xaU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                   >> 0xbU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0xcU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                    >> 0xcU)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0xdU)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0xeU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0xfU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x10U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0x10U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x14U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0x14U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x18U) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0x18U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x1cU) & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                    & (~ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                    & ((~ (7U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                 >> 1U))) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                    & ((~ (3U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                 >> 2U))) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                    & ((~ (1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                 >> 3U))) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 4U) & (~ (0xfffU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                            >> 4U))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 4U) & ((~ (0x7ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                             >> 5U))) 
                               << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 4U) & ((~ (0x3ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                             >> 6U))) 
                               << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 4U) & ((~ (0x1ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                             >> 7U))) 
                               << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 8U) & (~ (0xffU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 8U))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 8U) & ((~ (0x7fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                            >> 9U))) 
                               << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 8U) & ((~ (0x3fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                            >> 0xaU))) 
                               << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 8U) & ((~ (0x1fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                            >> 0xbU))) 
                               << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0xcU) & (~ (0xfU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                            >> 0xcU))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0xcU) & ((~ (7U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0xdU))) 
                                 << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0xcU) & ((~ (3U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0xeU))) 
                                 << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0xcU) & ((~ (1U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                           >> 0xfU))) 
                                 << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x10U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                     >> 0x10U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x14U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                     >> 0x14U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x18U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                     >> 0x18U)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x1cU) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                       ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 4U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 5U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 6U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 7U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 8U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 9U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0xaU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0xbU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 0xcU))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0xdU)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0xeU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0xfU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 0x10U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 0x14U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 0x18U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                        ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                       >> 0x1cU))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                         ^ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                       ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((7U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                               >> 1U)) ^ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 1U)))) 
                    << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((3U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                               >> 2U)) ^ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 2U)))) 
                    << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                               >> 3U)) ^ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 3U)))) 
                    << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((0xfffU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                  >> 4U)) ^ (0xfffU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 4U))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((0x7ffU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                   >> 5U)) ^ (0x7ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                 >> 5U)))) 
                    << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((0x3ffU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                   >> 6U)) ^ (0x3ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                 >> 6U)))) 
                    << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((0x1ffU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                   >> 7U)) ^ (0x1ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                 >> 7U)))) 
                    << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((0xffU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                 >> 8U)) ^ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                             >> 8U))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((0x7fU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                  >> 9U)) ^ (0x7fU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                >> 9U)))) 
                    << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((0x3fU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                  >> 0xaU)) ^ (0x3fU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                  >> 0xaU)))) 
                    << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((0x1fU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                  >> 0xbU)) ^ (0x1fU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                  >> 0xbU)))) 
                    << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((0xfU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                                >> 0xcU)) ^ (0xfU & 
                                             (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                              >> 0xcU))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((7U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                               >> 0xdU)) ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                  >> 0xdU)))) 
                    << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((3U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                               >> 0xeU)) ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                  >> 0xeU)))) 
                    << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                               >> 0xfU)) ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)) 
                                                  >> 0xfU)))) 
                    << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                       >> 0x10U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                       >> 0x14U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                       >> 0x18U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                       >> 0x1cU))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__wb_rs2_data))) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__operand_b = (
                                                   vlSelf->top__DOT__pipelined__DOT__op_b_sel
                                                   [1U]
                                                    ? 
                                                   (vlSelf->top__DOT__pipelined__DOT__op_b_sel
                                                    [1U]
                                                     ? vlSelf->top__DOT__pipelined__DOT__imm
                                                     : vlSelf->top__DOT__pipelined__DOT__wb_rs2_data)
                                                    : vlSelf->top__DOT__pipelined__DOT__wb_rs2_data);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift 
        = vlSelf->top__DOT__pipelined__DOT__operand_a;
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__shift_amt 
        = (0x1fU & vlSelf->top__DOT__pipelined__DOT__operand_b);
    if ((vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift 
         >> 0x1fU)) {
        vlSelf->top__DOT__pipelined__DOT__alu1__DOT__unnamedblk1__DOT__i = 0U;
        while ((vlSelf->top__DOT__pipelined__DOT__alu1__DOT__unnamedblk1__DOT__i 
                < (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__shift_amt))) {
            vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift 
                = (vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift 
                   >> 1U);
            vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift 
                = (0x80000000U | vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift);
            vlSelf->top__DOT__pipelined__DOT__alu1__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__pipelined__DOT__alu1__DOT__unnamedblk1__DOT__i);
        }
    } else {
        vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift 
            = (vlSelf->top__DOT__pipelined__DOT__operand_a 
               >> (0x1fU & vlSelf->top__DOT__pipelined__DOT__operand_b));
    }
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                    & (~ vlSelf->top__DOT__pipelined__DOT__operand_b))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 4U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                  >> 4U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 5U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 6U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 7U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 8U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                  >> 8U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 9U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xaU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xbU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0xcU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xcU)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0xdU)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0xeU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0xfU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x10U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0x10U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x14U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0x14U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x18U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0x18U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x1cU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 4U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 5U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 6U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 7U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 8U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 9U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0xaU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0xbU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 0xcU))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0xdU)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0xeU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0xfU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 0x10U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 0x14U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 0x18U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 0x1cU))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                    & (~ vlSelf->top__DOT__pipelined__DOT__operand_b))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (vlSelf->top__DOT__pipelined__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 4U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                  >> 4U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 5U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 6U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 4U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 7U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 8U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                  >> 8U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 9U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xaU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 8U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                   >> 0xbU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0xcU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                    >> 0xcU)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0xdU)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0xeU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0xfU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x10U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0x10U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x14U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0x14U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x18U) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0x18U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x1cU) & (~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                    & (~ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                    & ((~ (7U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                 >> 1U))) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                    & ((~ (3U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                 >> 2U))) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                    & ((~ (1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                 >> 3U))) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 4U) & (~ (0xfffU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                            >> 4U))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 4U) & ((~ (0x7ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 5U))) 
                               << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 4U) & ((~ (0x3ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 6U))) 
                               << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 4U) & ((~ (0x1ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 7U))) 
                               << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 8U) & (~ (0xffU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                           >> 8U))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 8U) & ((~ (0x7fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                            >> 9U))) 
                               << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 8U) & ((~ (0x3fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                            >> 0xaU))) 
                               << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 8U) & ((~ (0x1fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                            >> 0xbU))) 
                               << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0xcU) & (~ (0xfU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                            >> 0xcU))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0xcU) & ((~ (7U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                           >> 0xdU))) 
                                 << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0xcU) & ((~ (3U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                           >> 0xeU))) 
                                 << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0xcU) & ((~ (1U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                           >> 0xfU))) 
                                 << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x10U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                     >> 0x10U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x14U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                     >> 0x14U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x18U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                     >> 0x18U)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x1cU) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (vlSelf->top__DOT__pipelined__DOT__operand_a 
                       ^ vlSelf->top__DOT__pipelined__DOT__operand_b))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 4U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 5U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 6U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 7U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 8U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 9U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0xaU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0xbU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 0xcU))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0xdU)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0xeU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0xfU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 0x10U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 0x14U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 0x18U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                        ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                       >> 0x1cU))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                       ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((7U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                               >> 1U)) ^ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                >> 1U)))) 
                    << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((3U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                               >> 2U)) ^ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                >> 2U)))) 
                    << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                               >> 3U)) ^ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                >> 3U)))) 
                    << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((0xfffU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                  >> 4U)) ^ (0xfffU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                >> 4U))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((0x7ffU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 5U)) ^ (0x7ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                 >> 5U)))) 
                    << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((0x3ffU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 6U)) ^ (0x3ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                 >> 6U)))) 
                    << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((0x1ffU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                   >> 7U)) ^ (0x1ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                 >> 7U)))) 
                    << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((0xffU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                 >> 8U)) ^ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                             >> 8U))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((0x7fU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                  >> 9U)) ^ (0x7fU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                >> 9U)))) 
                    << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((0x3fU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                  >> 0xaU)) ^ (0x3fU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xaU)))) 
                    << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((0x1fU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                  >> 0xbU)) ^ (0x1fU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xbU)))) 
                    << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((0xfU & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                                >> 0xcU)) ^ (0xfU & 
                                             (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                              >> 0xcU))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((7U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                               >> 0xdU)) ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xdU)))) 
                    << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((3U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                               >> 0xeU)) ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xeU)))) 
                    << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((1U & (((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                               >> 0xfU)) ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__pipelined__DOT__operand_b)) 
                                                  >> 0xfU)))) 
                    << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                       >> 0x10U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                       >> 0x14U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                       >> 0x18U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                       >> 0x1cU))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__pipelined__DOT__operand_b))) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t)) 
           | (3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t)) 
           | ((IData)((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t 
        = (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o) 
            << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__al_t 
        = (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o) 
            << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__al_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__al_t)) 
           | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__al_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__eq_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__eq_t)) 
           | (3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__eq_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__eq_t)) 
           | ((IData)((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o 
        = (1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__al_t) 
                  >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__al_t) 
                            & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t) 
                               >> 1U))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal_s 
        = (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
                  >> 0x1fU) ? ((vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                                >> 0x1fU) & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t) 
                                             >> 1U))
                  : ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                         >> 0x1fU)) & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o 
        = (1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__al_t) 
                  >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__al_t) 
                            & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t) 
                               >> 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t 
        = (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o) 
            << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__al_t 
        = (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o) 
            << 1U) | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__al_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__al_t)) 
           | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__al_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t)) 
           | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t)) 
           | (1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                       | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o)))));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t)) 
           | (2U & ((~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                        | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))) 
                    << 1U)));
    if ((vlSelf->top__DOT__pipelined__DOT__wb_rs1_data 
         >> 0x1fU)) {
        vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__alarger_o 
            = (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                      >> 0x1fU) & (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t) 
                                      >> 1U))));
        vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less_s 
            = (1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                         >> 0x1fU)) | (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t) 
                                          >> 1U))));
    } else {
        vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__alarger_o 
            = (1U & ((vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                      >> 0x1fU) | (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t)));
        vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less_s 
            = (1U & ((~ (vlSelf->top__DOT__pipelined__DOT__wb_rs2_data 
                         >> 0x1fU)) & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t)));
    }
    if (vlSelf->top__DOT__pipelined__DOT__br_unsigned
        [1U]) {
        vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal 
            = (3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t));
        vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less 
            = (1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t)) 
                        | (((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                            >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t) 
                                      & ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t) 
                                         >> 1U))))));
    } else {
        vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal 
            = vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal_s;
        vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less 
            = (1U & (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less_s));
    }
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o 
        = (1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__al_t) 
                  >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__al_t) 
                            & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t) 
                               >> 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o 
        = (1U & (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__al_t) 
                  >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__al_t) 
                            & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t) 
                               >> 1U))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__al_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__al_t)) 
           | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__bl_t 
        = ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__bl_t)) 
           | (1U & (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                       | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o)))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__al_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o) 
              << 1U));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__bl_t 
        = ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__bl_t)) 
           | (2U & ((~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                        | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))) 
                    << 1U)));
    if ((vlSelf->top__DOT__pipelined__DOT__operand_a 
         >> 0x1fU)) {
        vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_equal_s 
            = (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_b 
                      >> 0x1fU) & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__eq_t) 
                                   >> 1U)));
        vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__alarger_o 
            = (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_b 
                      >> 0x1fU) & (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__al_t) 
                                      >> 1U))));
        vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_less_s 
            = (1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                         >> 0x1fU)) | (~ ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__bl_t) 
                                          >> 1U))));
    } else {
        vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_equal_s 
            = (1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                         >> 0x1fU)) & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__eq_t)));
        vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__alarger_o 
            = (1U & ((vlSelf->top__DOT__pipelined__DOT__operand_b 
                      >> 0x1fU) | (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__al_t)));
        vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_less_s 
            = (1U & ((~ (vlSelf->top__DOT__pipelined__DOT__operand_b 
                         >> 0x1fU)) & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__bl_t)));
    }
    vlSelf->top__DOT__pipelined__DOT__br_sel = (1U 
                                                & ((0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__pipelined__DOT__instr
                                                        [2U] 
                                                        >> 2U)))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->top__DOT__pipelined__DOT__instr
                                                     [2U])
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->top__DOT__pipelined__DOT__instr
                                                      [2U])
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__pipelined__DOT__instr
                                                       [2U])
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal) 
                                                       | (~ (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less)))
                                                       : (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__pipelined__DOT__instr
                                                       [2U])
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal) 
                                                       | (~ (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less)))
                                                       : (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less)))
                                                     : 
                                                    ((~ 
                                                      (vlSelf->top__DOT__pipelined__DOT__instr
                                                       [2U] 
                                                       >> 0xdU)) 
                                                     & ((0x1000U 
                                                         & vlSelf->top__DOT__pipelined__DOT__instr
                                                         [2U])
                                                         ? 
                                                        (~ (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal))
                                                         : (IData)(vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal))))
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__pipelined__DOT__instr
                                                         [2U] 
                                                         >> 2U))) 
                                                    | (0x19U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__pipelined__DOT__instr
                                                           [2U] 
                                                           >> 2U))))));
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__br_less 
        = (1U & ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                  ? (~ ((3U == (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t)) 
                        | (((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                            >> 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t) 
                                      & ((IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t) 
                                         >> 1U)))))
                  : (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_less_s)));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel) 
                     << 3U) | (((((((vlSelf->top__DOT__pipelined__DOT__is_load
                                     [1U] & vlSelf->top__DOT__pipelined__DOT__is_load
                                     [2U]) & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [2U] 
                                                  >> 7U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__instr
                                                [3U] 
                                                >> 7U)))) 
                                  & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr
                                                [2U] 
                                                >> 7U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__pipelined__DOT__instr
                                                   [1U] 
                                                   >> 0xfU))) 
                                     | (((0x1fU & (
                                                   vlSelf->top__DOT__pipelined__DOT__instr
                                                   [2U] 
                                                   >> 7U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__instr
                                                [1U] 
                                                >> 0x14U))) 
                                        & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                        [0U]))) & (
                                                   ((0x1fU 
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
                                                      [0U]))) 
                                << 2U) | ((((vlSelf->top__DOT__pipelined__DOT__rd_wren
                                             [3U] & 
                                             (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [4U] 
                                                  >> 7U)))) 
                                            & (((0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [4U] 
                                                    >> 7U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [1U] 
                                                    >> 0xfU))) 
                                               | (((0x1fU 
                                                    & (vlSelf->top__DOT__pipelined__DOT__instr
                                                       [4U] 
                                                       >> 7U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__pipelined__DOT__instr
                                                       [1U] 
                                                       >> 0x14U))) 
                                                  & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                                  [0U]))) 
                                           << 1U) | 
                                          (((vlSelf->top__DOT__pipelined__DOT__rd_wren
                                             [1U] & 
                                             (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr
                                                  [2U] 
                                                  >> 7U)))) 
                                            & vlSelf->top__DOT__pipelined__DOT__is_load
                                            [1U]) & 
                                           (((0x1fU 
                                              & (vlSelf->top__DOT__pipelined__DOT__instr
                                                 [2U] 
                                                 >> 7U)) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [1U] 
                                                    >> 0xfU))) 
                                            | (((0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [2U] 
                                                    >> 7U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr
                                                    [1U] 
                                                    >> 0x14U))) 
                                               & vlSelf->top__DOT__pipelined__DOT__is_rs2
                                               [0U]))))));
    vlSelf->top__DOT__pipelined__DOT__pc_enable = Vtop__ConstPool__TABLE_hcc735a85_0
        [__Vtableidx1];
    vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__id_enable_o 
        = Vtop__ConstPool__TABLE_h136716ca_0[__Vtableidx1];
    vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__ex_enable_o 
        = Vtop__ConstPool__TABLE_h9804456b_0[__Vtableidx1];
    vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__mem_enable_o 
        = Vtop__ConstPool__TABLE_h9804456b_0[__Vtableidx1];
    vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__wb_enable_o 
        = Vtop__ConstPool__TABLE_h9804456b_0[__Vtableidx1];
    vlSelf->top__DOT__pipelined__DOT__id_reset_n = 
        Vtop__ConstPool__TABLE_h3d14eb25_0[__Vtableidx1];
    vlSelf->top__DOT__pipelined__DOT__ex_reset_n = 
        Vtop__ConstPool__TABLE_h2774721d_0[__Vtableidx1];
    vlSelf->top__DOT__pipelined__DOT__mem_reset_n = 
        Vtop__ConstPool__TABLE_h9804456b_0[__Vtableidx1];
    vlSelf->top__DOT__pipelined__DOT__wb_reset_n = 
        Vtop__ConstPool__TABLE_h9804456b_0[__Vtableidx1];
    vlSelf->top__DOT__pipelined__DOT__ex_alu_data = 
        ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
          ? ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
              ? (vlSelf->top__DOT__pipelined__DOT__operand_a 
                 + vlSelf->top__DOT__pipelined__DOT__operand_b)
              : ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                  ? ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                      ? (vlSelf->top__DOT__pipelined__DOT__operand_a 
                         + vlSelf->top__DOT__pipelined__DOT__operand_b)
                      : vlSelf->top__DOT__pipelined__DOT__operand_b)
                  : ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                      ? vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift
                      : (vlSelf->top__DOT__pipelined__DOT__operand_a 
                         >> (0x1fU & vlSelf->top__DOT__pipelined__DOT__operand_b)))))
          : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
              ? ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                  ? ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                      ? (vlSelf->top__DOT__pipelined__DOT__operand_a 
                         << (0x1fU & vlSelf->top__DOT__pipelined__DOT__operand_b))
                      : (vlSelf->top__DOT__pipelined__DOT__operand_a 
                         & vlSelf->top__DOT__pipelined__DOT__operand_b))
                  : ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                      ? (vlSelf->top__DOT__pipelined__DOT__operand_a 
                         | vlSelf->top__DOT__pipelined__DOT__operand_b)
                      : (vlSelf->top__DOT__pipelined__DOT__operand_a 
                         ^ vlSelf->top__DOT__pipelined__DOT__operand_b)))
              : ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                  ? (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__br_less)
                  : ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op))
                      ? ((IData)(1U) + (vlSelf->top__DOT__pipelined__DOT__operand_a 
                                        + (~ vlSelf->top__DOT__pipelined__DOT__operand_b)))
                      : (vlSelf->top__DOT__pipelined__DOT__operand_a 
                         + vlSelf->top__DOT__pipelined__DOT__operand_b)))));
    vlSelf->top__DOT__pipelined__DOT__enable[0U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__id_enable_o;
    vlSelf->top__DOT__pipelined__DOT__enable[1U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__ex_enable_o;
    vlSelf->top__DOT__pipelined__DOT__enable[2U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__mem_enable_o;
    vlSelf->top__DOT__pipelined__DOT__enable[3U] = vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__wb_enable_o;
    vlSelf->top__DOT__pipelined__DOT__nxt_pc = ((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel)
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel)
                                                  ? vlSelf->top__DOT__pipelined__DOT__ex_alu_data
                                                  : 
                                                 ((IData)(4U) 
                                                  + 
                                                  vlSelf->top__DOT__pipelined__DOT__pc
                                                  [0U]))
                                                 : 
                                                ((IData)(4U) 
                                                 + 
                                                 vlSelf->top__DOT__pipelined__DOT__pc
                                                 [0U]));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->pc_debug_o = VL_RAND_RESET_I(32);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__id_reset_n = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__ex_reset_n = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__mem_reset_n = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__wb_reset_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__instr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__pc[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__pc_enable = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__rs1_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__rs2_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__rd_wren[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__pipelined__DOT__ex_alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__mem_alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__wb_alu_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__alu_op[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__op_a_sel[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__op_b_sel[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__pipelined__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__forward_a = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__forward_b = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__mem_op[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__mem_wren[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__is_load[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__ld_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__wb_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__wb_sel[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__pipelined__DOT__nxt_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__imm = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__br_unsigned[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__pipelined__DOT__br_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__wb_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__wb_rs2_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__is_rs2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__pc_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__id_reg1__instr_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_rs2_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__wb_sel_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__is_load_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_wren_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__mem_op_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__br_unsigned_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_b_sel_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__op_a_sel_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__alu_op_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rd_wren_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs2_data_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__rs1_data_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__pc_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ex_reg1__instr_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__wb_sel_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__is_load_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_wren_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__mem_op_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rd_wren_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__rs2_data_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__pc_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__mem_reg1__instr_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__wb_sel_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__ld_data_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__is_load_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__mem_wren_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__rd_wren_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__pc_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__wb_reg1__instr_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__wb_enable_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__mem_enable_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__ex_enable_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__hazard_detect1__id_enable_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_rs2_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__wb_sel_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_op_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__alu_op_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__is_load_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__mem_wren_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_b_sel_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__op_a_sel_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__br_unsigned_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellout__ctr_unit1__rd_wren_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__inst_memory1__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__regfile1__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__br_equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__eq_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__bl_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__brcomp1__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__temp_shift = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__shift_amt = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__br_less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_less_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__br_equal_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__eq_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__bl_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__alu1__DOT__brcomp2__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT____Vxrand_h96ff575f__0 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__input_peri = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__output_peri[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__dataout_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__temp_ld_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__lsu1__DOT__mask = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__ctr_unit1__DOT____Vxrand_h96ff2746__0 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
