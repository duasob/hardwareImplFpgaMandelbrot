// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpixel_generator.h for the primary calling header

#include "Vpixel_generator__pch.h"
#include "Vpixel_generator___024root.h"

void Vpixel_generator___024root___ico_sequent__TOP__0(Vpixel_generator___024root* vlSelf);

void Vpixel_generator___024root___eval_ico(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vpixel_generator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vpixel_generator___024root___ico_sequent__TOP__0(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__ready 
        = ((2U & (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state))
            ? (IData)(vlSelf->out_stream_tready) : 
           ((1U & (~ (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state))) 
            || (IData)(vlSelf->out_stream_tready)));
}

void Vpixel_generator___024root___eval_triggers__ico(Vpixel_generator___024root* vlSelf);

bool Vpixel_generator___024root___eval_phase__ico(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vpixel_generator___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vpixel_generator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vpixel_generator___024root___eval_act(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_act\n"); );
}

void Vpixel_generator___024root___nba_sequent__TOP__0(Vpixel_generator___024root* vlSelf);
void Vpixel_generator___024root___nba_sequent__TOP__1(Vpixel_generator___024root* vlSelf);

void Vpixel_generator___024root___eval_nba(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpixel_generator___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpixel_generator___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vpixel_generator___024root___nba_sequent__TOP__0(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__pixel_generator__DOT__readState;
    __Vdly__pixel_generator__DOT__readState = 0;
    CData/*2:0*/ __Vdly__pixel_generator__DOT__writeState;
    __Vdly__pixel_generator__DOT__writeState = 0;
    CData/*2:0*/ __Vdlyvdim0__pixel_generator__DOT__regfile__v0;
    __Vdlyvdim0__pixel_generator__DOT__regfile__v0 = 0;
    IData/*31:0*/ __Vdlyvval__pixel_generator__DOT__regfile__v0;
    __Vdlyvval__pixel_generator__DOT__regfile__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pixel_generator__DOT__regfile__v0;
    __Vdlyvset__pixel_generator__DOT__regfile__v0 = 0;
    // Body
    __Vdly__pixel_generator__DOT__readState = vlSelf->pixel_generator__DOT__readState;
    __Vdlyvset__pixel_generator__DOT__regfile__v0 = 0U;
    __Vdly__pixel_generator__DOT__writeState = vlSelf->pixel_generator__DOT__writeState;
    vlSelf->pixel_generator__DOT__readData = vlSelf->pixel_generator__DOT__regfile
        [(7U & (IData)(vlSelf->pixel_generator__DOT__readAddr))];
    if (vlSelf->axi_resetn) {
        if ((4U & (IData)(vlSelf->pixel_generator__DOT__writeState))) {
            if ((2U & (IData)(vlSelf->pixel_generator__DOT__writeState))) {
                __Vdly__pixel_generator__DOT__writeState = 0U;
            } else if ((1U & (IData)(vlSelf->pixel_generator__DOT__writeState))) {
                if (vlSelf->s_axi_lite_bready) {
                    __Vdly__pixel_generator__DOT__writeState = 0U;
                }
            } else {
                __Vdlyvval__pixel_generator__DOT__regfile__v0 
                    = vlSelf->pixel_generator__DOT__writeData;
                __Vdlyvset__pixel_generator__DOT__regfile__v0 = 1U;
                __Vdlyvdim0__pixel_generator__DOT__regfile__v0 
                    = (7U & (IData)(vlSelf->pixel_generator__DOT__writeAddr));
                __Vdly__pixel_generator__DOT__writeState = 5U;
            }
        } else if ((2U & (IData)(vlSelf->pixel_generator__DOT__writeState))) {
            if ((1U & (IData)(vlSelf->pixel_generator__DOT__writeState))) {
                __Vdly__pixel_generator__DOT__writeState = 0U;
            } else if (vlSelf->s_axi_lite_awvalid) {
                vlSelf->pixel_generator__DOT__writeAddr 
                    = (0x3fU & ((IData)(vlSelf->s_axi_lite_awaddr) 
                                >> 2U));
                __Vdly__pixel_generator__DOT__writeState = 4U;
            }
        } else if ((1U & (IData)(vlSelf->pixel_generator__DOT__writeState))) {
            if (vlSelf->s_axi_lite_wvalid) {
                vlSelf->pixel_generator__DOT__writeData 
                    = vlSelf->s_axi_lite_wdata;
                __Vdly__pixel_generator__DOT__writeState = 4U;
            }
        } else if ((2U == (((IData)(vlSelf->s_axi_lite_awvalid) 
                            << 1U) | (IData)(vlSelf->s_axi_lite_wvalid)))) {
            vlSelf->pixel_generator__DOT__writeAddr 
                = (0x3fU & ((IData)(vlSelf->s_axi_lite_awaddr) 
                            >> 2U));
            __Vdly__pixel_generator__DOT__writeState = 1U;
        } else if ((1U == (((IData)(vlSelf->s_axi_lite_awvalid) 
                            << 1U) | (IData)(vlSelf->s_axi_lite_wvalid)))) {
            vlSelf->pixel_generator__DOT__writeData 
                = vlSelf->s_axi_lite_wdata;
            __Vdly__pixel_generator__DOT__writeState = 2U;
        } else if ((3U == (((IData)(vlSelf->s_axi_lite_awvalid) 
                            << 1U) | (IData)(vlSelf->s_axi_lite_wvalid)))) {
            vlSelf->pixel_generator__DOT__writeData 
                = vlSelf->s_axi_lite_wdata;
            vlSelf->pixel_generator__DOT__writeAddr 
                = (0x3fU & ((IData)(vlSelf->s_axi_lite_awaddr) 
                            >> 2U));
            __Vdly__pixel_generator__DOT__writeState = 4U;
        } else {
            __Vdly__pixel_generator__DOT__writeState = 0U;
        }
        if ((0U == (IData)(vlSelf->pixel_generator__DOT__readState))) {
            if (vlSelf->s_axi_lite_arvalid) {
                vlSelf->pixel_generator__DOT__readAddr 
                    = (0x3fU & ((IData)(vlSelf->s_axi_lite_araddr) 
                                >> 2U));
                __Vdly__pixel_generator__DOT__readState = 1U;
            }
        } else if ((1U == (IData)(vlSelf->pixel_generator__DOT__readState))) {
            __Vdly__pixel_generator__DOT__readState = 2U;
        } else if ((2U == (IData)(vlSelf->pixel_generator__DOT__readState))) {
            if (vlSelf->s_axi_lite_rready) {
                __Vdly__pixel_generator__DOT__readState = 0U;
            }
        } else {
            __Vdly__pixel_generator__DOT__readState = 0U;
        }
    } else {
        __Vdly__pixel_generator__DOT__writeState = 0U;
        __Vdly__pixel_generator__DOT__readState = 0U;
    }
    vlSelf->pixel_generator__DOT__writeState = __Vdly__pixel_generator__DOT__writeState;
    if (__Vdlyvset__pixel_generator__DOT__regfile__v0) {
        vlSelf->pixel_generator__DOT__regfile[__Vdlyvdim0__pixel_generator__DOT__regfile__v0] 
            = __Vdlyvval__pixel_generator__DOT__regfile__v0;
    }
    vlSelf->s_axi_lite_bresp = ((8U > (IData)(vlSelf->pixel_generator__DOT__writeAddr))
                                 ? 0U : 2U);
    vlSelf->s_axi_lite_awready = ((0U == (IData)(vlSelf->pixel_generator__DOT__writeState)) 
                                  | (2U == (IData)(vlSelf->pixel_generator__DOT__writeState)));
    vlSelf->s_axi_lite_bvalid = (5U == (IData)(vlSelf->pixel_generator__DOT__writeState));
    vlSelf->s_axi_lite_wready = ((0U == (IData)(vlSelf->pixel_generator__DOT__writeState)) 
                                 | (1U == (IData)(vlSelf->pixel_generator__DOT__writeState)));
    vlSelf->s_axi_lite_rdata = vlSelf->pixel_generator__DOT__readData;
    vlSelf->pixel_generator__DOT__readState = __Vdly__pixel_generator__DOT__readState;
    vlSelf->s_axi_lite_rresp = ((8U > (IData)(vlSelf->pixel_generator__DOT__readAddr))
                                 ? 0U : 2U);
    vlSelf->s_axi_lite_arready = (0U == (IData)(vlSelf->pixel_generator__DOT__readState));
    vlSelf->s_axi_lite_rvalid = (2U == (IData)(vlSelf->pixel_generator__DOT__readState));
}

VL_INLINE_OPT void Vpixel_generator___024root___nba_sequent__TOP__1(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*9:0*/ __Vdly__pixel_generator__DOT__Mapper__DOT__x_internal;
    __Vdly__pixel_generator__DOT__Mapper__DOT__x_internal = 0;
    SData/*9:0*/ __Vdly__pixel_generator__DOT__Mapper__DOT__y_internal;
    __Vdly__pixel_generator__DOT__Mapper__DOT__y_internal = 0;
    CData/*0:0*/ __Vdly__pixel_generator__DOT__ovf;
    __Vdly__pixel_generator__DOT__ovf = 0;
    IData/*23:0*/ __Vdly__pixel_generator__DOT__counter_it__DOT__counter_reg;
    __Vdly__pixel_generator__DOT__counter_it__DOT__counter_reg = 0;
    // Body
    __Vdly__pixel_generator__DOT__counter_it__DOT__counter_reg 
        = vlSelf->pixel_generator__DOT__counter_it__DOT__counter_reg;
    __Vdly__pixel_generator__DOT__ovf = vlSelf->pixel_generator__DOT__ovf;
    __Vdly__pixel_generator__DOT__Mapper__DOT__y_internal 
        = vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal;
    __Vdly__pixel_generator__DOT__Mapper__DOT__x_internal 
        = vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal;
    if (vlSelf->periph_resetn) {
        __Vdly__pixel_generator__DOT__Mapper__DOT__x_internal = 0U;
        __Vdly__pixel_generator__DOT__Mapper__DOT__y_internal = 0U;
        __Vdly__pixel_generator__DOT__ovf = 0U;
        if (vlSelf->pixel_generator__DOT__or_out) {
            if (vlSelf->pixel_generator__DOT__first) {
                vlSelf->pixel_generator__DOT__pixel_packer__DOT__sof_reg = 1U;
            } else if (((IData)(vlSelf->pixel_generator__DOT__or_out) 
                        & (IData)(vlSelf->out_stream_tready))) {
                vlSelf->pixel_generator__DOT__pixel_packer__DOT__sof_reg = 0U;
            }
            if (((0U == (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state)) 
                 | (IData)(vlSelf->out_stream_tready))) {
                vlSelf->pixel_generator__DOT__pixel_packer__DOT__state_reg 
                    = ((IData)(vlSelf->out_stream_tlast)
                        ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state))));
            }
            vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_g 
                = vlSelf->pixel_generator__DOT__g;
            vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_r 
                = vlSelf->pixel_generator__DOT__r;
            vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_b 
                = vlSelf->pixel_generator__DOT__b;
        }
    } else {
        if (((IData)(vlSelf->pixel_generator__DOT__q_bar) 
             & ((IData)(vlSelf->pixel_generator__DOT__or_out) 
                & (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__ready)))) {
            if ((0x3ffU == (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal))) {
                if ((0x2ffU <= (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal))) {
                    __Vdly__pixel_generator__DOT__ovf = 1U;
                    __Vdly__pixel_generator__DOT__Mapper__DOT__y_internal = 0U;
                    __Vdly__pixel_generator__DOT__Mapper__DOT__x_internal = 0U;
                } else {
                    __Vdly__pixel_generator__DOT__Mapper__DOT__y_internal 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal)));
                    __Vdly__pixel_generator__DOT__Mapper__DOT__x_internal = 0U;
                }
            } else {
                __Vdly__pixel_generator__DOT__Mapper__DOT__x_internal 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal)));
            }
        }
        vlSelf->pixel_generator__DOT__pixel_packer__DOT__sof_reg = 0U;
        vlSelf->pixel_generator__DOT__pixel_packer__DOT__state_reg = 0U;
    }
    vlSelf->pixel_generator__DOT__Diverge__DOT__B = vlSelf->pixel_generator__DOT__Diverge__DOT__muxout2;
    vlSelf->pixel_generator__DOT__Diverge__DOT__A = vlSelf->pixel_generator__DOT__Diverge__DOT__muxout1;
    vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal 
        = __Vdly__pixel_generator__DOT__Mapper__DOT__y_internal;
    vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal 
        = __Vdly__pixel_generator__DOT__Mapper__DOT__x_internal;
    if ((0x400U & (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal))) {
        vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__twos_complement1 
            = ((IData)(1U) + (~ ((IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal) 
                                 << 0x15U)));
        vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__intermediate 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__twos_complement1)), 0xcU);
        vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__intermediate 
            = (~ (vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__intermediate 
                  - 1ULL));
        vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__intermediate 
                       >> 0x15U));
    } else {
        vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__intermediate 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                      ((IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal) 
                                                       << 0x15U))), 0xcU);
        vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__intermediate 
                       >> 0x15U));
    }
    vlSelf->pixel_generator__DOT__q_bar = (1U & (~ (IData)(vlSelf->pixel_generator__DOT__q)));
    vlSelf->out_stream_tlast = (0x3feU == (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal));
    if ((0x400U & (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal))) {
        vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__twos_complement1 
            = ((IData)(1U) + (~ ((IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal) 
                                 << 0x15U)));
        vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__intermediate 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__twos_complement1)), 0xcU);
        vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__intermediate 
            = (~ (vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__intermediate 
                  - 1ULL));
        vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__intermediate 
                       >> 0x15U));
    } else {
        vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__intermediate 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                      ((IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal) 
                                                       << 0x15U))), 0xcU);
        vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__intermediate 
                       >> 0x15U));
    }
    vlSelf->pixel_generator__DOT__first = ((0U == (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal)) 
                                           & (0U == (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal)));
    vlSelf->out_stream_tuser = vlSelf->pixel_generator__DOT__pixel_packer__DOT__sof_reg;
    if ((vlSelf->pixel_generator__DOT__Diverge__DOT__B 
         >> 0x1fU)) {
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement1 
            = ((IData)(1U) + (~ vlSelf->pixel_generator__DOT__Diverge__DOT__B));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement2 
            = ((IData)(1U) + (~ vlSelf->pixel_generator__DOT__Diverge__DOT__B));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__intermediate 
            = ((QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement1)) 
               * (QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement2)));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__intermediate 
                       >> 0x15U));
    } else {
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__intermediate 
            = ((QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__B)) 
               * (QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__B)));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__intermediate 
                       >> 0x15U));
    }
    if (((vlSelf->pixel_generator__DOT__Diverge__DOT__A 
          >> 0x1fU) & (~ (vlSelf->pixel_generator__DOT__Diverge__DOT__B 
                          >> 0x1fU)))) {
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement1 
            = ((IData)(1U) + (~ vlSelf->pixel_generator__DOT__Diverge__DOT__A));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate 
            = ((QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement1)) 
               * (QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__B)));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate 
            = (~ (vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate 
                  - 1ULL));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate 
                       >> 0x15U));
    } else if (((~ (vlSelf->pixel_generator__DOT__Diverge__DOT__A 
                    >> 0x1fU)) & (vlSelf->pixel_generator__DOT__Diverge__DOT__B 
                                  >> 0x1fU))) {
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement2 
            = ((IData)(1U) + (~ vlSelf->pixel_generator__DOT__Diverge__DOT__B));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate 
            = ((QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement2)) 
               * (QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__A)));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate 
                       >> 0x15U));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg 
            = (~ (vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg 
                  - (IData)(1U)));
    } else if (((vlSelf->pixel_generator__DOT__Diverge__DOT__A 
                 & vlSelf->pixel_generator__DOT__Diverge__DOT__B) 
                >> 0x1fU)) {
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement1 
            = ((IData)(1U) + (~ vlSelf->pixel_generator__DOT__Diverge__DOT__A));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement2 
            = ((IData)(1U) + (~ vlSelf->pixel_generator__DOT__Diverge__DOT__B));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate 
            = ((QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement1)) 
               * (QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement2)));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate 
                       >> 0x15U));
    } else {
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate 
            = ((QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__A)) 
               * (QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__B)));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate 
                       >> 0x15U));
    }
    if ((vlSelf->pixel_generator__DOT__Diverge__DOT__A 
         >> 0x1fU)) {
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement1 
            = ((IData)(1U) + (~ vlSelf->pixel_generator__DOT__Diverge__DOT__A));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement2 
            = ((IData)(1U) + (~ vlSelf->pixel_generator__DOT__Diverge__DOT__A));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__intermediate 
            = ((QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement1)) 
               * (QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement2)));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__intermediate 
                       >> 0x15U));
    } else {
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__intermediate 
            = ((QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__A)) 
               * (QData)((IData)(vlSelf->pixel_generator__DOT__Diverge__DOT__A)));
        vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg 
            = (IData)((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__intermediate 
                       >> 0x15U));
    }
    vlSelf->pixel_generator__DOT__r = (0xffU & (vlSelf->pixel_generator__DOT__counter_it__DOT__counter_reg 
                                                >> 0x10U));
    vlSelf->pixel_generator__DOT__g = (0xffU & (vlSelf->pixel_generator__DOT__counter_it__DOT__counter_reg 
                                                >> 8U));
    vlSelf->pixel_generator__DOT__b = (0xffU & vlSelf->pixel_generator__DOT__counter_it__DOT__counter_reg);
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__state 
        = ((IData)(vlSelf->pixel_generator__DOT__first)
            ? 0U : (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state_reg));
    if (vlSelf->pixel_generator__DOT__or_out) {
        __Vdly__pixel_generator__DOT__counter_it__DOT__counter_reg = 0U;
        vlSelf->pixel_generator__DOT__ovf_it = 0U;
    } else if ((0x3ffU <= vlSelf->pixel_generator__DOT__counter_it__DOT__counter_reg)) {
        __Vdly__pixel_generator__DOT__counter_it__DOT__counter_reg = 0U;
        vlSelf->pixel_generator__DOT__ovf_it = 1U;
    } else {
        __Vdly__pixel_generator__DOT__counter_it__DOT__counter_reg 
            = (0xffffffU & ((IData)(4U) + vlSelf->pixel_generator__DOT__counter_it__DOT__counter_reg));
        vlSelf->pixel_generator__DOT__ovf_it = 0U;
    }
    vlSelf->pixel_generator__DOT__counter_it__DOT__counter_reg 
        = __Vdly__pixel_generator__DOT__counter_it__DOT__counter_reg;
    vlSelf->pixel_generator__DOT__q = ((~ (IData)(vlSelf->periph_resetn)) 
                                       & (IData)(vlSelf->pixel_generator__DOT__ovf));
    vlSelf->pixel_generator__DOT__or_out = ((0x800000U 
                                             < (vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg 
                                                + vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg)) 
                                            | (IData)(vlSelf->pixel_generator__DOT__ovf_it));
    if ((2U & (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state))) {
        vlSelf->pixel_generator__DOT__pixel_packer__DOT__ready 
            = vlSelf->out_stream_tready;
        vlSelf->pixel_generator__DOT__pixel_packer__DOT__tdata 
            = ((1U & (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state))
                ? (((IData)(vlSelf->pixel_generator__DOT__r) 
                    << 0x18U) | (((IData)(vlSelf->pixel_generator__DOT__b) 
                                  << 0x10U) | (((IData)(vlSelf->pixel_generator__DOT__g) 
                                                << 8U) 
                                               | (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_r))))
                : (((IData)(vlSelf->pixel_generator__DOT__b) 
                    << 0x18U) | (((IData)(vlSelf->pixel_generator__DOT__g) 
                                  << 0x10U) | (((IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_r) 
                                                << 8U) 
                                               | (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_b)))));
        vlSelf->pixel_generator__DOT__pixel_packer__DOT__tvalid 
            = vlSelf->pixel_generator__DOT__or_out;
    } else {
        vlSelf->pixel_generator__DOT__pixel_packer__DOT__ready 
            = ((1U & (~ (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state))) 
               || (IData)(vlSelf->out_stream_tready));
        vlSelf->pixel_generator__DOT__pixel_packer__DOT__tdata 
            = ((1U & (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state))
                ? (((IData)(vlSelf->pixel_generator__DOT__g) 
                    << 0x18U) | (((IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_r) 
                                  << 0x10U) | (((IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_b) 
                                                << 8U) 
                                               | (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_g))))
                : (((IData)(vlSelf->pixel_generator__DOT__g) 
                    << 0x18U) | (((IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_r) 
                                  << 0x10U) | (((IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_b) 
                                                << 8U) 
                                               | (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_g)))));
        vlSelf->pixel_generator__DOT__pixel_packer__DOT__tvalid 
            = ((1U & (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state)) 
               && (IData)(vlSelf->pixel_generator__DOT__or_out));
    }
    vlSelf->pixel_generator__DOT__ovf = __Vdly__pixel_generator__DOT__ovf;
    vlSelf->out_stream_tdata = vlSelf->pixel_generator__DOT__pixel_packer__DOT__tdata;
    vlSelf->pixel_generator__DOT__Diverge__DOT__s2 
        = ((IData)(0xffd00000U) + (VL_SHIFTL_III(32,32,32, vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg, 1U) 
                                   + vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__result_reg));
    vlSelf->pixel_generator__DOT__Diverge__DOT__s1 
        = ((IData)(0xffc00000U) + (vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__result_reg 
                                   + (vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg 
                                      - vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg)));
    if (vlSelf->pixel_generator__DOT__or_out) {
        vlSelf->pixel_generator__DOT__Diverge__DOT__muxout2 = 0U;
        vlSelf->pixel_generator__DOT__Diverge__DOT__muxout1 = 0U;
    } else {
        vlSelf->pixel_generator__DOT__Diverge__DOT__muxout2 
            = vlSelf->pixel_generator__DOT__Diverge__DOT__s2;
        vlSelf->pixel_generator__DOT__Diverge__DOT__muxout1 
            = vlSelf->pixel_generator__DOT__Diverge__DOT__s1;
    }
    vlSelf->out_stream_tvalid = vlSelf->pixel_generator__DOT__pixel_packer__DOT__tvalid;
}

void Vpixel_generator___024root___eval_triggers__act(Vpixel_generator___024root* vlSelf);

bool Vpixel_generator___024root___eval_phase__act(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpixel_generator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vpixel_generator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpixel_generator___024root___eval_phase__nba(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpixel_generator___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpixel_generator___024root___dump_triggers__ico(Vpixel_generator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpixel_generator___024root___dump_triggers__nba(Vpixel_generator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpixel_generator___024root___dump_triggers__act(Vpixel_generator___024root* vlSelf);
#endif  // VL_DEBUG

void Vpixel_generator___024root___eval(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vpixel_generator___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("pixel_generator.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vpixel_generator___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpixel_generator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("pixel_generator.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vpixel_generator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("pixel_generator.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vpixel_generator___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vpixel_generator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpixel_generator___024root___eval_debug_assertions(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->out_stream_aclk & 0xfeU))) {
        Verilated::overWidthError("out_stream_aclk");}
    if (VL_UNLIKELY((vlSelf->s_axi_lite_aclk & 0xfeU))) {
        Verilated::overWidthError("s_axi_lite_aclk");}
    if (VL_UNLIKELY((vlSelf->axi_resetn & 0xfeU))) {
        Verilated::overWidthError("axi_resetn");}
    if (VL_UNLIKELY((vlSelf->periph_resetn & 0xfeU))) {
        Verilated::overWidthError("periph_resetn");}
    if (VL_UNLIKELY((vlSelf->out_stream_tready & 0xfeU))) {
        Verilated::overWidthError("out_stream_tready");}
    if (VL_UNLIKELY((vlSelf->s_axi_lite_arvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_lite_arvalid");}
    if (VL_UNLIKELY((vlSelf->s_axi_lite_awvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_lite_awvalid");}
    if (VL_UNLIKELY((vlSelf->s_axi_lite_bready & 0xfeU))) {
        Verilated::overWidthError("s_axi_lite_bready");}
    if (VL_UNLIKELY((vlSelf->s_axi_lite_rready & 0xfeU))) {
        Verilated::overWidthError("s_axi_lite_rready");}
    if (VL_UNLIKELY((vlSelf->s_axi_lite_wvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_lite_wvalid");}
}
#endif  // VL_DEBUG
