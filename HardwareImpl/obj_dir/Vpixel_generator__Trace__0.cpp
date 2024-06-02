// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpixel_generator__Syms.h"


void Vpixel_generator___024root__trace_chg_0_sub_0(Vpixel_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpixel_generator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root__trace_chg_0\n"); );
    // Init
    Vpixel_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpixel_generator___024root*>(voidSelf);
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpixel_generator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpixel_generator___024root__trace_chg_0_sub_0(Vpixel_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->pixel_generator__DOT__regfile[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->pixel_generator__DOT__regfile[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->pixel_generator__DOT__regfile[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->pixel_generator__DOT__regfile[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->pixel_generator__DOT__regfile[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->pixel_generator__DOT__regfile[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->pixel_generator__DOT__regfile[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->pixel_generator__DOT__regfile[7]),32);
        bufp->chgCData(oldp+8,(vlSelf->pixel_generator__DOT__writeAddr),6);
        bufp->chgCData(oldp+9,(vlSelf->pixel_generator__DOT__readAddr),6);
        bufp->chgIData(oldp+10,(vlSelf->pixel_generator__DOT__readData),32);
        bufp->chgIData(oldp+11,(vlSelf->pixel_generator__DOT__writeData),32);
        bufp->chgCData(oldp+12,(vlSelf->pixel_generator__DOT__readState),2);
        bufp->chgCData(oldp+13,(vlSelf->pixel_generator__DOT__writeState),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+14,(vlSelf->pixel_generator__DOT__first));
        bufp->chgBit(oldp+15,((0x2feU == (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal))));
        bufp->chgSData(oldp+16,(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal),10);
        bufp->chgSData(oldp+17,(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal),10);
        bufp->chgBit(oldp+18,(vlSelf->pixel_generator__DOT__ovf));
        bufp->chgIData(oldp+19,(((IData)(0xffc00000U) 
                                 + vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__result_reg)),32);
        bufp->chgIData(oldp+20,(((IData)(0xffd00000U) 
                                 + vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__result_reg)),32);
        bufp->chgBit(oldp+21,(vlSelf->pixel_generator__DOT__q));
        bufp->chgBit(oldp+22,(vlSelf->pixel_generator__DOT__q_bar));
        bufp->chgCData(oldp+23,(vlSelf->pixel_generator__DOT__r),8);
        bufp->chgCData(oldp+24,(vlSelf->pixel_generator__DOT__g),8);
        bufp->chgCData(oldp+25,(vlSelf->pixel_generator__DOT__b),8);
        bufp->chgBit(oldp+26,(vlSelf->pixel_generator__DOT__ovf_it));
        bufp->chgBit(oldp+27,(vlSelf->pixel_generator__DOT__or_out));
        bufp->chgBit(oldp+28,((0x800000U < (vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg 
                                            + vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg))));
        bufp->chgIData(oldp+29,(vlSelf->pixel_generator__DOT__Diverge__DOT__A),32);
        bufp->chgIData(oldp+30,(vlSelf->pixel_generator__DOT__Diverge__DOT__B),32);
        bufp->chgIData(oldp+31,((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg 
                                 + vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg)),32);
        bufp->chgIData(oldp+32,((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg 
                                 - vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg)),32);
        bufp->chgIData(oldp+33,(VL_SHIFTL_III(32,32,32, vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg, 1U)),32);
        bufp->chgIData(oldp+34,(vlSelf->pixel_generator__DOT__Diverge__DOT__s1),32);
        bufp->chgIData(oldp+35,(vlSelf->pixel_generator__DOT__Diverge__DOT__s2),32);
        bufp->chgIData(oldp+36,(vlSelf->pixel_generator__DOT__Diverge__DOT__muxout1),32);
        bufp->chgIData(oldp+37,(vlSelf->pixel_generator__DOT__Diverge__DOT__muxout2),32);
        bufp->chgIData(oldp+38,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg),32);
        bufp->chgIData(oldp+39,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg),32);
        bufp->chgIData(oldp+40,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg),32);
        bufp->chgIData(oldp+41,((0x7fffffffU & vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg)),31);
        bufp->chgQData(oldp+42,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__intermediate),64);
        bufp->chgIData(oldp+44,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement1),32);
        bufp->chgIData(oldp+45,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement2),32);
        bufp->chgQData(oldp+46,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate),64);
        bufp->chgIData(oldp+48,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement1),32);
        bufp->chgIData(oldp+49,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement2),32);
        bufp->chgQData(oldp+50,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__intermediate),64);
        bufp->chgIData(oldp+52,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement1),32);
        bufp->chgIData(oldp+53,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement2),32);
        bufp->chgIData(oldp+54,(vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__result_reg),32);
        bufp->chgIData(oldp+55,(vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__result_reg),32);
        bufp->chgIData(oldp+56,(((IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal) 
                                 << 0x15U)),32);
        bufp->chgQData(oldp+57,(vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__intermediate),64);
        bufp->chgIData(oldp+59,(vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__twos_complement1),32);
        bufp->chgIData(oldp+60,(((IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal) 
                                 << 0x15U)),32);
        bufp->chgQData(oldp+61,(vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__intermediate),64);
        bufp->chgIData(oldp+63,(vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__twos_complement1),32);
        bufp->chgIData(oldp+64,(vlSelf->pixel_generator__DOT__counter_it__DOT__counter_reg),24);
        bufp->chgCData(oldp+65,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state_reg),2);
        bufp->chgCData(oldp+66,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state),2);
        bufp->chgBit(oldp+67,((0U == (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state))));
        bufp->chgBit(oldp+68,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__sof_reg));
        bufp->chgCData(oldp+69,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_r),8);
        bufp->chgCData(oldp+70,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_g),8);
        bufp->chgCData(oldp+71,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_b),8);
        bufp->chgIData(oldp+72,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__tdata),32);
        bufp->chgBit(oldp+73,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__tvalid));
    }
    bufp->chgBit(oldp+74,(vlSelf->out_stream_aclk));
    bufp->chgBit(oldp+75,(vlSelf->s_axi_lite_aclk));
    bufp->chgBit(oldp+76,(vlSelf->axi_resetn));
    bufp->chgBit(oldp+77,(vlSelf->periph_resetn));
    bufp->chgIData(oldp+78,(vlSelf->out_stream_tdata),32);
    bufp->chgCData(oldp+79,(vlSelf->out_stream_tkeep),4);
    bufp->chgBit(oldp+80,(vlSelf->out_stream_tlast));
    bufp->chgBit(oldp+81,(vlSelf->out_stream_tready));
    bufp->chgBit(oldp+82,(vlSelf->out_stream_tvalid));
    bufp->chgBit(oldp+83,(vlSelf->out_stream_tuser));
    bufp->chgCData(oldp+84,(vlSelf->s_axi_lite_araddr),8);
    bufp->chgBit(oldp+85,(vlSelf->s_axi_lite_arready));
    bufp->chgBit(oldp+86,(vlSelf->s_axi_lite_arvalid));
    bufp->chgCData(oldp+87,(vlSelf->s_axi_lite_awaddr),8);
    bufp->chgBit(oldp+88,(vlSelf->s_axi_lite_awready));
    bufp->chgBit(oldp+89,(vlSelf->s_axi_lite_awvalid));
    bufp->chgBit(oldp+90,(vlSelf->s_axi_lite_bready));
    bufp->chgCData(oldp+91,(vlSelf->s_axi_lite_bresp),2);
    bufp->chgBit(oldp+92,(vlSelf->s_axi_lite_bvalid));
    bufp->chgIData(oldp+93,(vlSelf->s_axi_lite_rdata),32);
    bufp->chgBit(oldp+94,(vlSelf->s_axi_lite_rready));
    bufp->chgCData(oldp+95,(vlSelf->s_axi_lite_rresp),2);
    bufp->chgBit(oldp+96,(vlSelf->s_axi_lite_rvalid));
    bufp->chgIData(oldp+97,(vlSelf->s_axi_lite_wdata),32);
    bufp->chgBit(oldp+98,(vlSelf->s_axi_lite_wready));
    bufp->chgBit(oldp+99,(vlSelf->s_axi_lite_wvalid));
    bufp->chgBit(oldp+100,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__ready));
    bufp->chgBit(oldp+101,(((IData)(vlSelf->pixel_generator__DOT__q_bar) 
                            & ((IData)(vlSelf->pixel_generator__DOT__or_out) 
                               & (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__ready)))));
}

void Vpixel_generator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root__trace_cleanup\n"); );
    // Init
    Vpixel_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpixel_generator___024root*>(voidSelf);
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
