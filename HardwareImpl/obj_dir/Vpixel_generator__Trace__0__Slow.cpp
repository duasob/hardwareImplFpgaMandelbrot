// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpixel_generator__Syms.h"


VL_ATTR_COLD void Vpixel_generator___024root__trace_init_sub__TOP__0(Vpixel_generator___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+75,0,"out_stream_aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"s_axi_lite_aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"axi_resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"periph_resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"out_stream_tdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"out_stream_tkeep",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+81,0,"out_stream_tlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"out_stream_tready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"out_stream_tvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"out_stream_tuser",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+85,0,"s_axi_lite_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+86,0,"s_axi_lite_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"s_axi_lite_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"s_axi_lite_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+89,0,"s_axi_lite_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"s_axi_lite_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"s_axi_lite_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"s_axi_lite_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+93,0,"s_axi_lite_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"s_axi_lite_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"s_axi_lite_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"s_axi_lite_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+97,0,"s_axi_lite_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"s_axi_lite_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"s_axi_lite_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"s_axi_lite_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pixel_generator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"out_stream_aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"s_axi_lite_aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"axi_resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"periph_resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"out_stream_tdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"out_stream_tkeep",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+81,0,"out_stream_tlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"out_stream_tready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"out_stream_tvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"out_stream_tuser",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+85,0,"s_axi_lite_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+86,0,"s_axi_lite_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"s_axi_lite_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"s_axi_lite_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+89,0,"s_axi_lite_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"s_axi_lite_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"s_axi_lite_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"s_axi_lite_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+93,0,"s_axi_lite_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"s_axi_lite_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"s_axi_lite_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"s_axi_lite_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+97,0,"s_axi_lite_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"s_axi_lite_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"s_axi_lite_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"s_axi_lite_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"X_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"Y_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"REG_FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"AXI_LITE_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"AWAIT_WADD_AND_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+107,0,"AWAIT_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+108,0,"AWAIT_WADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+109,0,"AWAIT_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"AWAIT_RESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+111,0,"AWAIT_RADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"AWAIT_FETCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+113,0,"AWAIT_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+111,0,"AXI_OK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+113,0,"AXI_ERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+9,0,"writeAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+10,0,"readAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+11,0,"readData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"readState",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"writeState",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+101,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"lastx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"lasty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"x_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+18,0,"y_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+19,0,"ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"re_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"im_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"q_bar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+27,0,"ovf_it",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"or_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Diverge", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"ld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"diverged",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"aaplusbb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"aaminusbb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"twoab",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"muxout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"muxout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("GENERATOR", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"aa_minus_bb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"two_ab",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"aa_plus_bb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"aa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"bb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ab",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"ab_truncated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 30,0);
    tracep->pushPrefix("a_a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+43,0,"intermediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+45,0,"twos_complement1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"twos_complement2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"result_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("a_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+47,0,"intermediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+49,0,"twos_complement1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"twos_complement2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"result_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+51,0,"intermediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+53,0,"twos_complement1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"twos_complement2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"result_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("flip", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("flop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Mapper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"zoom_factor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"re_lower",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"im_upper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"re_position",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"im_position",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+18,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+17,0,"x_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+18,0,"y_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+55,0,"XtimesZF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"YtimesZF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Dimensions", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"OVF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+18,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("XtimesDELTA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+58,0,"intermediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+60,0,"twos_complement1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"twos_complement2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"result_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("YtimesDELTA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+62,0,"intermediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+64,0,"twos_complement1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"twos_complement2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"result_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("counter_it", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+27,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"counter_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->pushPrefix("pixel_packer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"g",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+81,0,"eol",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"in_stream_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"sof",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"out_stream_tdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"out_stream_tkeep",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+81,0,"out_stream_tlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"out_stream_tready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"out_stream_tvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"out_stream_tuser",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+66,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+67,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+68,0,"state0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"sof_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"last_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"last_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+72,0,"last_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"tdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"tvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("top_f", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"q_bar",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpixel_generator___024root__trace_init_top(Vpixel_generator___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root__trace_init_top\n"); );
    // Body
    Vpixel_generator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpixel_generator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vpixel_generator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpixel_generator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpixel_generator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpixel_generator___024root__trace_register(Vpixel_generator___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vpixel_generator___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vpixel_generator___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vpixel_generator___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vpixel_generator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpixel_generator___024root__trace_const_0_sub_0(Vpixel_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpixel_generator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root__trace_const_0\n"); );
    // Init
    Vpixel_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpixel_generator___024root*>(voidSelf);
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpixel_generator___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpixel_generator___024root__trace_const_0_sub_0(Vpixel_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+103,(0x3ffU),32);
    bufp->fullIData(oldp+104,(0x2ffU),32);
    bufp->fullIData(oldp+105,(8U),32);
    bufp->fullCData(oldp+106,(0U),3);
    bufp->fullCData(oldp+107,(1U),3);
    bufp->fullCData(oldp+108,(2U),3);
    bufp->fullCData(oldp+109,(4U),3);
    bufp->fullCData(oldp+110,(5U),3);
    bufp->fullCData(oldp+111,(0U),2);
    bufp->fullCData(oldp+112,(1U),2);
    bufp->fullCData(oldp+113,(2U),2);
    bufp->fullIData(oldp+114,(0x1000U),32);
    bufp->fullIData(oldp+115,(0xffc00000U),32);
    bufp->fullIData(oldp+116,(0xffd00000U),32);
    bufp->fullIData(oldp+117,(vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__twos_complement2),32);
    bufp->fullIData(oldp+118,(vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__twos_complement2),32);
}

VL_ATTR_COLD void Vpixel_generator___024root__trace_full_0_sub_0(Vpixel_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpixel_generator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root__trace_full_0\n"); );
    // Init
    Vpixel_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpixel_generator___024root*>(voidSelf);
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpixel_generator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpixel_generator___024root__trace_full_0_sub_0(Vpixel_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpixel_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_generator___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->pixel_generator__DOT__regfile[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->pixel_generator__DOT__regfile[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->pixel_generator__DOT__regfile[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->pixel_generator__DOT__regfile[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->pixel_generator__DOT__regfile[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->pixel_generator__DOT__regfile[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->pixel_generator__DOT__regfile[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->pixel_generator__DOT__regfile[7]),32);
    bufp->fullCData(oldp+9,(vlSelf->pixel_generator__DOT__writeAddr),6);
    bufp->fullCData(oldp+10,(vlSelf->pixel_generator__DOT__readAddr),6);
    bufp->fullIData(oldp+11,(vlSelf->pixel_generator__DOT__readData),32);
    bufp->fullIData(oldp+12,(vlSelf->pixel_generator__DOT__writeData),32);
    bufp->fullCData(oldp+13,(vlSelf->pixel_generator__DOT__readState),2);
    bufp->fullCData(oldp+14,(vlSelf->pixel_generator__DOT__writeState),3);
    bufp->fullBit(oldp+15,(vlSelf->pixel_generator__DOT__first));
    bufp->fullBit(oldp+16,((0x2feU == (IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal))));
    bufp->fullSData(oldp+17,(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal),10);
    bufp->fullSData(oldp+18,(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal),10);
    bufp->fullBit(oldp+19,(vlSelf->pixel_generator__DOT__ovf));
    bufp->fullIData(oldp+20,(((IData)(0xffc00000U) 
                              + vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__result_reg)),32);
    bufp->fullIData(oldp+21,(((IData)(0xffd00000U) 
                              + vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__result_reg)),32);
    bufp->fullBit(oldp+22,(vlSelf->pixel_generator__DOT__q));
    bufp->fullBit(oldp+23,(vlSelf->pixel_generator__DOT__q_bar));
    bufp->fullCData(oldp+24,(vlSelf->pixel_generator__DOT__r),8);
    bufp->fullCData(oldp+25,(vlSelf->pixel_generator__DOT__g),8);
    bufp->fullCData(oldp+26,(vlSelf->pixel_generator__DOT__b),8);
    bufp->fullBit(oldp+27,(vlSelf->pixel_generator__DOT__ovf_it));
    bufp->fullBit(oldp+28,(vlSelf->pixel_generator__DOT__or_out));
    bufp->fullBit(oldp+29,((0x800000U < (vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg 
                                         + vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg))));
    bufp->fullIData(oldp+30,(vlSelf->pixel_generator__DOT__Diverge__DOT__A),32);
    bufp->fullIData(oldp+31,(vlSelf->pixel_generator__DOT__Diverge__DOT__B),32);
    bufp->fullIData(oldp+32,((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg 
                              + vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg)),32);
    bufp->fullIData(oldp+33,((vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg 
                              - vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg)),32);
    bufp->fullIData(oldp+34,(VL_SHIFTL_III(32,32,32, vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg, 1U)),32);
    bufp->fullIData(oldp+35,(vlSelf->pixel_generator__DOT__Diverge__DOT__s1),32);
    bufp->fullIData(oldp+36,(vlSelf->pixel_generator__DOT__Diverge__DOT__s2),32);
    bufp->fullIData(oldp+37,(vlSelf->pixel_generator__DOT__Diverge__DOT__muxout1),32);
    bufp->fullIData(oldp+38,(vlSelf->pixel_generator__DOT__Diverge__DOT__muxout2),32);
    bufp->fullIData(oldp+39,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__result_reg),32);
    bufp->fullIData(oldp+40,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__result_reg),32);
    bufp->fullIData(oldp+41,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg),32);
    bufp->fullIData(oldp+42,((0x7fffffffU & vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__result_reg)),31);
    bufp->fullQData(oldp+43,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__intermediate),64);
    bufp->fullIData(oldp+45,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement1),32);
    bufp->fullIData(oldp+46,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_a__DOT__twos_complement2),32);
    bufp->fullQData(oldp+47,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__intermediate),64);
    bufp->fullIData(oldp+49,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement1),32);
    bufp->fullIData(oldp+50,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__a_b__DOT__twos_complement2),32);
    bufp->fullQData(oldp+51,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__intermediate),64);
    bufp->fullIData(oldp+53,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement1),32);
    bufp->fullIData(oldp+54,(vlSelf->pixel_generator__DOT__Diverge__DOT__GENERATOR__DOT__b_b__DOT__twos_complement2),32);
    bufp->fullIData(oldp+55,(vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__result_reg),32);
    bufp->fullIData(oldp+56,(vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__result_reg),32);
    bufp->fullIData(oldp+57,(((IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__x_internal) 
                              << 0x15U)),32);
    bufp->fullQData(oldp+58,(vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__intermediate),64);
    bufp->fullIData(oldp+60,(vlSelf->pixel_generator__DOT__Mapper__DOT__XtimesDELTA__DOT__twos_complement1),32);
    bufp->fullIData(oldp+61,(((IData)(vlSelf->pixel_generator__DOT__Mapper__DOT__y_internal) 
                              << 0x15U)),32);
    bufp->fullQData(oldp+62,(vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__intermediate),64);
    bufp->fullIData(oldp+64,(vlSelf->pixel_generator__DOT__Mapper__DOT__YtimesDELTA__DOT__twos_complement1),32);
    bufp->fullIData(oldp+65,(vlSelf->pixel_generator__DOT__counter_it__DOT__counter_reg),24);
    bufp->fullCData(oldp+66,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state_reg),2);
    bufp->fullCData(oldp+67,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state),2);
    bufp->fullBit(oldp+68,((0U == (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__state))));
    bufp->fullBit(oldp+69,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__sof_reg));
    bufp->fullCData(oldp+70,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_r),8);
    bufp->fullCData(oldp+71,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_g),8);
    bufp->fullCData(oldp+72,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__last_b),8);
    bufp->fullIData(oldp+73,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__tdata),32);
    bufp->fullBit(oldp+74,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__tvalid));
    bufp->fullBit(oldp+75,(vlSelf->out_stream_aclk));
    bufp->fullBit(oldp+76,(vlSelf->s_axi_lite_aclk));
    bufp->fullBit(oldp+77,(vlSelf->axi_resetn));
    bufp->fullBit(oldp+78,(vlSelf->periph_resetn));
    bufp->fullIData(oldp+79,(vlSelf->out_stream_tdata),32);
    bufp->fullCData(oldp+80,(vlSelf->out_stream_tkeep),4);
    bufp->fullBit(oldp+81,(vlSelf->out_stream_tlast));
    bufp->fullBit(oldp+82,(vlSelf->out_stream_tready));
    bufp->fullBit(oldp+83,(vlSelf->out_stream_tvalid));
    bufp->fullBit(oldp+84,(vlSelf->out_stream_tuser));
    bufp->fullCData(oldp+85,(vlSelf->s_axi_lite_araddr),8);
    bufp->fullBit(oldp+86,(vlSelf->s_axi_lite_arready));
    bufp->fullBit(oldp+87,(vlSelf->s_axi_lite_arvalid));
    bufp->fullCData(oldp+88,(vlSelf->s_axi_lite_awaddr),8);
    bufp->fullBit(oldp+89,(vlSelf->s_axi_lite_awready));
    bufp->fullBit(oldp+90,(vlSelf->s_axi_lite_awvalid));
    bufp->fullBit(oldp+91,(vlSelf->s_axi_lite_bready));
    bufp->fullCData(oldp+92,(vlSelf->s_axi_lite_bresp),2);
    bufp->fullBit(oldp+93,(vlSelf->s_axi_lite_bvalid));
    bufp->fullIData(oldp+94,(vlSelf->s_axi_lite_rdata),32);
    bufp->fullBit(oldp+95,(vlSelf->s_axi_lite_rready));
    bufp->fullCData(oldp+96,(vlSelf->s_axi_lite_rresp),2);
    bufp->fullBit(oldp+97,(vlSelf->s_axi_lite_rvalid));
    bufp->fullIData(oldp+98,(vlSelf->s_axi_lite_wdata),32);
    bufp->fullBit(oldp+99,(vlSelf->s_axi_lite_wready));
    bufp->fullBit(oldp+100,(vlSelf->s_axi_lite_wvalid));
    bufp->fullBit(oldp+101,(vlSelf->pixel_generator__DOT__pixel_packer__DOT__ready));
    bufp->fullBit(oldp+102,(((IData)(vlSelf->pixel_generator__DOT__q_bar) 
                             & ((IData)(vlSelf->pixel_generator__DOT__or_out) 
                                & (IData)(vlSelf->pixel_generator__DOT__pixel_packer__DOT__ready)))));
}
