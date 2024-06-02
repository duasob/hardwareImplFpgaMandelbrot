// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpixel_generator__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpixel_generator::Vpixel_generator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpixel_generator__Syms(contextp(), _vcname__, this)}
    , out_stream_aclk{vlSymsp->TOP.out_stream_aclk}
    , s_axi_lite_aclk{vlSymsp->TOP.s_axi_lite_aclk}
    , axi_resetn{vlSymsp->TOP.axi_resetn}
    , periph_resetn{vlSymsp->TOP.periph_resetn}
    , out_stream_tkeep{vlSymsp->TOP.out_stream_tkeep}
    , out_stream_tlast{vlSymsp->TOP.out_stream_tlast}
    , out_stream_tready{vlSymsp->TOP.out_stream_tready}
    , out_stream_tvalid{vlSymsp->TOP.out_stream_tvalid}
    , out_stream_tuser{vlSymsp->TOP.out_stream_tuser}
    , s_axi_lite_araddr{vlSymsp->TOP.s_axi_lite_araddr}
    , s_axi_lite_arready{vlSymsp->TOP.s_axi_lite_arready}
    , s_axi_lite_arvalid{vlSymsp->TOP.s_axi_lite_arvalid}
    , s_axi_lite_awaddr{vlSymsp->TOP.s_axi_lite_awaddr}
    , s_axi_lite_awready{vlSymsp->TOP.s_axi_lite_awready}
    , s_axi_lite_awvalid{vlSymsp->TOP.s_axi_lite_awvalid}
    , s_axi_lite_bready{vlSymsp->TOP.s_axi_lite_bready}
    , s_axi_lite_bresp{vlSymsp->TOP.s_axi_lite_bresp}
    , s_axi_lite_bvalid{vlSymsp->TOP.s_axi_lite_bvalid}
    , s_axi_lite_rready{vlSymsp->TOP.s_axi_lite_rready}
    , s_axi_lite_rresp{vlSymsp->TOP.s_axi_lite_rresp}
    , s_axi_lite_rvalid{vlSymsp->TOP.s_axi_lite_rvalid}
    , s_axi_lite_wready{vlSymsp->TOP.s_axi_lite_wready}
    , s_axi_lite_wvalid{vlSymsp->TOP.s_axi_lite_wvalid}
    , out_stream_tdata{vlSymsp->TOP.out_stream_tdata}
    , s_axi_lite_rdata{vlSymsp->TOP.s_axi_lite_rdata}
    , s_axi_lite_wdata{vlSymsp->TOP.s_axi_lite_wdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vpixel_generator::Vpixel_generator(const char* _vcname__)
    : Vpixel_generator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpixel_generator::~Vpixel_generator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpixel_generator___024root___eval_debug_assertions(Vpixel_generator___024root* vlSelf);
#endif  // VL_DEBUG
void Vpixel_generator___024root___eval_static(Vpixel_generator___024root* vlSelf);
void Vpixel_generator___024root___eval_initial(Vpixel_generator___024root* vlSelf);
void Vpixel_generator___024root___eval_settle(Vpixel_generator___024root* vlSelf);
void Vpixel_generator___024root___eval(Vpixel_generator___024root* vlSelf);

void Vpixel_generator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpixel_generator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpixel_generator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpixel_generator___024root___eval_static(&(vlSymsp->TOP));
        Vpixel_generator___024root___eval_initial(&(vlSymsp->TOP));
        Vpixel_generator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpixel_generator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpixel_generator::eventsPending() { return false; }

uint64_t Vpixel_generator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpixel_generator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpixel_generator___024root___eval_final(Vpixel_generator___024root* vlSelf);

VL_ATTR_COLD void Vpixel_generator::final() {
    Vpixel_generator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpixel_generator::hierName() const { return vlSymsp->name(); }
const char* Vpixel_generator::modelName() const { return "Vpixel_generator"; }
unsigned Vpixel_generator::threads() const { return 1; }
void Vpixel_generator::prepareClone() const { contextp()->prepareClone(); }
void Vpixel_generator::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpixel_generator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpixel_generator___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpixel_generator___024root__trace_init_top(Vpixel_generator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpixel_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpixel_generator___024root*>(voidSelf);
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpixel_generator___024root__trace_decl_types(tracep);
    Vpixel_generator___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpixel_generator___024root__trace_register(Vpixel_generator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpixel_generator::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpixel_generator::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpixel_generator___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
