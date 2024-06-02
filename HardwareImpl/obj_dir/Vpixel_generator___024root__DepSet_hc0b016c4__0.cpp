// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpixel_generator.h for the primary calling header

#include "Vpixel_generator__pch.h"
#include "Vpixel_generator__Syms.h"
#include "Vpixel_generator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpixel_generator___024root___dump_triggers__ico(Vpixel_generator___024root* vlSelf);
#endif  // VL_DEBUG

void Vpixel_generator___024root___eval_triggers__ico(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpixel_generator___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpixel_generator___024root___dump_triggers__act(Vpixel_generator___024root* vlSelf);
#endif  // VL_DEBUG

void Vpixel_generator___024root___eval_triggers__act(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->s_axi_lite_aclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__s_axi_lite_aclk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->out_stream_aclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__out_stream_aclk__0))));
    vlSelf->__Vtrigprevexpr___TOP__s_axi_lite_aclk__0 
        = vlSelf->s_axi_lite_aclk;
    vlSelf->__Vtrigprevexpr___TOP__out_stream_aclk__0 
        = vlSelf->out_stream_aclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpixel_generator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
