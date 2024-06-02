// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpixel_generator.h for the primary calling header

#include "Vpixel_generator__pch.h"
#include "Vpixel_generator__Syms.h"
#include "Vpixel_generator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpixel_generator___024root___dump_triggers__stl(Vpixel_generator___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpixel_generator___024root___eval_triggers__stl(Vpixel_generator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpixel_generator___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
