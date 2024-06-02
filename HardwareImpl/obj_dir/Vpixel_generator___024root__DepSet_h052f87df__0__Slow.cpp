// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpixel_generator.h for the primary calling header

#include "Vpixel_generator__pch.h"
#include "Vpixel_generator___024root.h"

VL_ATTR_COLD void Vpixel_generator___024root___eval_static__TOP(Vpixel_generator___024root* vlSelf);

VL_ATTR_COLD void Vpixel_generator___024root___eval_static(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_static\n"); );
    // Body
    Vpixel_generator___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vpixel_generator___024root___eval_static__TOP(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->pixel_generator__DOT__readState = 0U;
    vlSelf->pixel_generator__DOT__writeState = 0U;
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__state_reg = 0U;
}

VL_ATTR_COLD void Vpixel_generator___024root___eval_initial__TOP(Vpixel_generator___024root* vlSelf);

VL_ATTR_COLD void Vpixel_generator___024root___eval_initial(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_initial\n"); );
    // Body
    Vpixel_generator___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__s_axi_lite_aclk__0 
        = vlSelf->s_axi_lite_aclk;
    vlSelf->__Vtrigprevexpr___TOP__out_stream_aclk__0 
        = vlSelf->out_stream_aclk;
}

VL_ATTR_COLD void Vpixel_generator___024root___eval_initial__TOP(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->out_stream_tkeep = 0xfU;
}

VL_ATTR_COLD void Vpixel_generator___024root___eval_final(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpixel_generator___024root___dump_triggers__stl(Vpixel_generator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpixel_generator___024root___eval_phase__stl(Vpixel_generator___024root* vlSelf);

VL_ATTR_COLD void Vpixel_generator___024root___eval_settle(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vpixel_generator___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("pixel_generator.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpixel_generator___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpixel_generator___024root___dump_triggers__stl(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpixel_generator___024root___stl_sequent__TOP__0(Vpixel_generator___024root* vlSelf);

VL_ATTR_COLD void Vpixel_generator___024root___eval_stl(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vpixel_generator___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vpixel_generator___024root___stl_sequent__TOP__0(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->out_stream_tlast = (0x3feU == (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal));
    vlSelf->out_stream_tuser = vlSelf->pixel_generator__DOT__pixel_packer__DOT__sof_reg;
    vlSelf->s_axi_lite_arready = (0U == (IData)(vlSelf->pixel_generator__DOT__readState));
    vlSelf->s_axi_lite_rvalid = (2U == (IData)(vlSelf->pixel_generator__DOT__readState));
    vlSelf->s_axi_lite_awready = ((0U == (IData)(vlSelf->pixel_generator__DOT__writeState)) 
                                  | (2U == (IData)(vlSelf->pixel_generator__DOT__writeState)));
    vlSelf->s_axi_lite_bvalid = (5U == (IData)(vlSelf->pixel_generator__DOT__writeState));
    vlSelf->s_axi_lite_wready = ((0U == (IData)(vlSelf->pixel_generator__DOT__writeState)) 
                                 | (1U == (IData)(vlSelf->pixel_generator__DOT__writeState)));
    vlSelf->s_axi_lite_bresp = ((8U > (IData)(vlSelf->pixel_generator__DOT__writeAddr))
                                 ? 0U : 2U);
    vlSelf->s_axi_lite_rdata = vlSelf->pixel_generator__DOT__readData;
    vlSelf->s_axi_lite_rresp = ((8U > (IData)(vlSelf->pixel_generator__DOT__readAddr))
                                 ? 0U : 2U);
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
    vlSelf->pixel_generator__DOT__first = ((0U == (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal)) 
                                           & (0U == (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal)));
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
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__state 
        = ((IData)(vlSelf->pixel_generator__DOT__first)
            ? 0U : (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state_reg));
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
    vlSelf->out_stream_tdata = vlSelf->pixel_generator__DOT__pixel_packer__DOT__tdata;
    vlSelf->out_stream_tvalid = vlSelf->pixel_generator__DOT__pixel_packer__DOT__tvalid;
}

VL_ATTR_COLD void Vpixel_generator___024root___eval_triggers__stl(Vpixel_generator___024root* vlSelf);

VL_ATTR_COLD bool Vpixel_generator___024root___eval_phase__stl(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpixel_generator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vpixel_generator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpixel_generator___024root___dump_triggers__ico(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpixel_generator___024root___dump_triggers__act(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge s_axi_lite_aclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge out_stream_aclk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpixel_generator___024root___dump_triggers__nba(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge s_axi_lite_aclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge out_stream_aclk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpixel_generator___024root___ctor_var_reset(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->out_stream_aclk = VL_RAND_RESET_I(1);
    vlSelf->s_axi_lite_aclk = VL_RAND_RESET_I(1);
    vlSelf->axi_resetn = VL_RAND_RESET_I(1);
    vlSelf->periph_resetn = VL_RAND_RESET_I(1);
    vlSelf->out_stream_tdata = VL_RAND_RESET_I(32);
    vlSelf->out_stream_tkeep = VL_RAND_RESET_I(4);
    vlSelf->out_stream_tlast = VL_RAND_RESET_I(1);
    vlSelf->out_stream_tready = VL_RAND_RESET_I(1);
    vlSelf->out_stream_tvalid = VL_RAND_RESET_I(1);
    vlSelf->out_stream_tuser = VL_RAND_RESET_I(1);
    vlSelf->s_axi_lite_araddr = VL_RAND_RESET_I(8);
    vlSelf->s_axi_lite_arready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_lite_arvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_lite_awaddr = VL_RAND_RESET_I(8);
    vlSelf->s_axi_lite_awready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_lite_awvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_lite_bready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_lite_bresp = VL_RAND_RESET_I(2);
    vlSelf->s_axi_lite_bvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_lite_rdata = VL_RAND_RESET_I(32);
    vlSelf->s_axi_lite_rready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_lite_rresp = VL_RAND_RESET_I(2);
    vlSelf->s_axi_lite_rvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_lite_wdata = VL_RAND_RESET_I(32);
    vlSelf->s_axi_lite_wready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_lite_wvalid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->pixel_generator__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pixel_generator__DOT__writeAddr = VL_RAND_RESET_I(6);
    vlSelf->pixel_generator__DOT__readAddr = VL_RAND_RESET_I(6);
    vlSelf->pixel_generator__DOT__readData = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__writeData = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__readState = VL_RAND_RESET_I(2);
    vlSelf->pixel_generator__DOT__writeState = VL_RAND_RESET_I(3);
    vlSelf->pixel_generator__DOT__first = VL_RAND_RESET_I(1);
    vlSelf->pixel_generator__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->pixel_generator__DOT__q = VL_RAND_RESET_I(1);
    vlSelf->pixel_generator__DOT__q_bar = VL_RAND_RESET_I(1);
    vlSelf->pixel_generator__DOT__r = VL_RAND_RESET_I(8);
    vlSelf->pixel_generator__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->pixel_generator__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->pixel_generator__DOT__ovf_it = VL_RAND_RESET_I(1);
    vlSelf->pixel_generator__DOT__or_out = VL_RAND_RESET_I(1);
    vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal = VL_RAND_RESET_I(10);
    vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal = VL_RAND_RESET_I(10);
    vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__intermediate = VL_RAND_RESET_Q(64);
    vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__twos_complement1 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__twos_complement2 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__result_reg = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__intermediate = VL_RAND_RESET_Q(64);
    vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__twos_complement1 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__twos_complement2 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__result_reg = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__s1 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__s2 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__muxout1 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__muxout2 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__intermediate = VL_RAND_RESET_Q(64);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement1 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement2 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__intermediate = VL_RAND_RESET_Q(64);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement1 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement2 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate = VL_RAND_RESET_Q(64);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement1 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement2 = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__counter_it__DOT__counter_reg = VL_RAND_RESET_I(24);
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__state_reg = VL_RAND_RESET_I(2);
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__sof_reg = VL_RAND_RESET_I(1);
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_r = VL_RAND_RESET_I(8);
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_g = VL_RAND_RESET_I(8);
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_b = VL_RAND_RESET_I(8);
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__tdata = VL_RAND_RESET_I(32);
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__tvalid = VL_RAND_RESET_I(1);
    vlSelf->pixel_generator__DOT__pixel_packer__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__s_axi_lite_aclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__out_stream_aclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
