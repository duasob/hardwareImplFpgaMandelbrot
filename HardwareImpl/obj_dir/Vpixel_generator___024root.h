// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpixel_generator.h for the primary calling header

#ifndef VERILATED_VPIXEL_GENERATOR___024ROOT_H_
#define VERILATED_VPIXEL_GENERATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vpixel_generator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpixel_generator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(out_stream_aclk,0,0);
        VL_IN8(s_axi_lite_aclk,0,0);
        VL_IN8(axi_resetn,0,0);
        VL_IN8(periph_resetn,0,0);
        VL_OUT8(out_stream_tkeep,3,0);
        VL_OUT8(out_stream_tlast,0,0);
        VL_IN8(out_stream_tready,0,0);
        VL_OUT8(out_stream_tvalid,0,0);
        VL_OUT8(out_stream_tuser,0,0);
        VL_IN8(s_axi_lite_araddr,7,0);
        VL_OUT8(s_axi_lite_arready,0,0);
        VL_IN8(s_axi_lite_arvalid,0,0);
        VL_IN8(s_axi_lite_awaddr,7,0);
        VL_OUT8(s_axi_lite_awready,0,0);
        VL_IN8(s_axi_lite_awvalid,0,0);
        VL_IN8(s_axi_lite_bready,0,0);
        VL_OUT8(s_axi_lite_bresp,1,0);
        VL_OUT8(s_axi_lite_bvalid,0,0);
        VL_IN8(s_axi_lite_rready,0,0);
        VL_OUT8(s_axi_lite_rresp,1,0);
        VL_OUT8(s_axi_lite_rvalid,0,0);
        VL_OUT8(s_axi_lite_wready,0,0);
        VL_IN8(s_axi_lite_wvalid,0,0);
        CData/*5:0*/ pixel_generator__DOT__writeAddr;
        CData/*5:0*/ pixel_generator__DOT__readAddr;
        CData/*1:0*/ pixel_generator__DOT__readState;
        CData/*2:0*/ pixel_generator__DOT__writeState;
        CData/*0:0*/ pixel_generator__DOT__first;
        CData/*0:0*/ pixel_generator__DOT__ovf;
        CData/*0:0*/ pixel_generator__DOT__q;
        CData/*0:0*/ pixel_generator__DOT__q_bar;
        CData/*7:0*/ pixel_generator__DOT__r;
        CData/*7:0*/ pixel_generator__DOT__g;
        CData/*7:0*/ pixel_generator__DOT__b;
        CData/*0:0*/ pixel_generator__DOT__ovf_it;
        CData/*0:0*/ pixel_generator__DOT__or_out;
        CData/*1:0*/ pixel_generator__DOT__pixel_packer__DOT__state_reg;
        CData/*1:0*/ pixel_generator__DOT__pixel_packer__DOT__state;
        CData/*0:0*/ pixel_generator__DOT__pixel_packer__DOT__sof_reg;
        CData/*7:0*/ pixel_generator__DOT__pixel_packer__DOT__last_r;
        CData/*7:0*/ pixel_generator__DOT__pixel_packer__DOT__last_g;
        CData/*7:0*/ pixel_generator__DOT__pixel_packer__DOT__last_b;
        CData/*0:0*/ pixel_generator__DOT__pixel_packer__DOT__tvalid;
        CData/*0:0*/ pixel_generator__DOT__pixel_packer__DOT__ready;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__s_axi_lite_aclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__out_stream_aclk__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ pixel_generator__DOT__Mapper__DOT__x_internal;
        SData/*9:0*/ pixel_generator__DOT__Mapper__DOT__y_internal;
        VL_OUT(out_stream_tdata,31,0);
        VL_OUT(s_axi_lite_rdata,31,0);
        VL_IN(s_axi_lite_wdata,31,0);
        IData/*31:0*/ pixel_generator__DOT__readData;
        IData/*31:0*/ pixel_generator__DOT__writeData;
        IData/*31:0*/ pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__twos_complement1;
        IData/*31:0*/ pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__twos_complement2;
        IData/*31:0*/ pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__result_reg;
        IData/*31:0*/ pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__twos_complement1;
        IData/*31:0*/ pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__twos_complement2;
        IData/*31:0*/ pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__result_reg;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__A;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__B;
    };
    struct {
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__s1;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__s2;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__muxout1;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__muxout2;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement1;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement2;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement1;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement2;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement1;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement2;
        IData/*31:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg;
        IData/*23:0*/ pixel_generator__DOT__counter_it__DOT__counter_reg;
        IData/*31:0*/ pixel_generator__DOT__pixel_packer__DOT__tdata;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__intermediate;
        QData/*63:0*/ pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__intermediate;
        QData/*63:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__intermediate;
        QData/*63:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__intermediate;
        QData/*63:0*/ pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate;
        VlUnpacked<IData/*31:0*/, 8> pixel_generator__DOT__regfile;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpixel_generator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpixel_generator___024root(Vpixel_generator__Syms* symsp, const char* v__name);
    ~Vpixel_generator___024root();
    VL_UNCOPYABLE(Vpixel_generator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
