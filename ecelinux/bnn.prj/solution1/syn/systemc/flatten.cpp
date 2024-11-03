// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "flatten.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic flatten::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic flatten::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> flatten::ap_ST_fsm_state1 = "1";
const sc_lv<5> flatten::ap_ST_fsm_state2 = "10";
const sc_lv<5> flatten::ap_ST_fsm_state3 = "100";
const sc_lv<5> flatten::ap_ST_fsm_state4 = "1000";
const sc_lv<5> flatten::ap_ST_fsm_state5 = "10000";
const sc_lv<32> flatten::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> flatten::ap_const_lv32_1 = "1";
const sc_lv<1> flatten::ap_const_lv1_0 = "0";
const sc_lv<32> flatten::ap_const_lv32_2 = "10";
const sc_lv<32> flatten::ap_const_lv32_3 = "11";
const sc_lv<6> flatten::ap_const_lv6_0 = "000000";
const sc_lv<1> flatten::ap_const_lv1_1 = "1";
const sc_lv<3> flatten::ap_const_lv3_0 = "000";
const sc_lv<32> flatten::ap_const_lv32_4 = "100";
const sc_lv<6> flatten::ap_const_lv6_20 = "100000";
const sc_lv<6> flatten::ap_const_lv6_1 = "1";
const sc_lv<2> flatten::ap_const_lv2_0 = "00";
const sc_lv<3> flatten::ap_const_lv3_4 = "100";
const sc_lv<3> flatten::ap_const_lv3_1 = "1";
const sc_lv<5> flatten::ap_const_lv5_0 = "00000";
const bool flatten::ap_const_boolean_1 = true;

flatten::flatten(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln115_fu_181_p2);
    sensitive << ( shl_ln_reg_248 );
    sensitive << ( zext_ln115_fu_177_p1 );

    SC_METHOD(thread_add_ln116_1_fu_203_p2);
    sensitive << ( tmp_21_cast_reg_243 );
    sensitive << ( zext_ln116_1_fu_199_p1 );

    SC_METHOD(thread_add_ln116_fu_140_p2);
    sensitive << ( zext_ln113_reg_230 );
    sensitive << ( zext_ln116_fu_136_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln112_fu_100_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln112_fu_100_p2 );

    SC_METHOD(thread_c_fu_106_p2);
    sensitive << ( c_0_reg_63 );

    SC_METHOD(thread_icmp_ln112_fu_100_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( c_0_reg_63 );

    SC_METHOD(thread_icmp_ln113_fu_124_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( y_0_reg_74 );

    SC_METHOD(thread_icmp_ln114_fu_165_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( x_0_reg_85 );

    SC_METHOD(thread_input_r_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln116_2_fu_208_p1 );

    SC_METHOD(thread_input_r_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_o_index_fu_194_p2);
    sensitive << ( zext_ln112_reg_217 );
    sensitive << ( shl_ln115_1_fu_186_p3 );

    SC_METHOD(thread_output_r_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( zext_ln116_3_fu_213_p1 );

    SC_METHOD(thread_output_r_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_output_r_d0);
    sensitive << ( input_r_q0 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_output_r_we0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_shl_ln115_1_fu_186_p3);
    sensitive << ( add_ln115_fu_181_p2 );

    SC_METHOD(thread_shl_ln_fu_157_p3);
    sensitive << ( trunc_ln115_fu_153_p1 );

    SC_METHOD(thread_tmp_21_cast_fu_145_p3);
    sensitive << ( add_ln116_fu_140_p2 );

    SC_METHOD(thread_tmp_fu_112_p3);
    sensitive << ( c_0_reg_63 );

    SC_METHOD(thread_trunc_ln115_fu_153_p1);
    sensitive << ( y_0_reg_74 );

    SC_METHOD(thread_x_fu_171_p2);
    sensitive << ( x_0_reg_85 );

    SC_METHOD(thread_y_fu_130_p2);
    sensitive << ( y_0_reg_74 );

    SC_METHOD(thread_zext_ln112_fu_96_p1);
    sensitive << ( c_0_reg_63 );

    SC_METHOD(thread_zext_ln113_fu_120_p1);
    sensitive << ( tmp_fu_112_p3 );

    SC_METHOD(thread_zext_ln115_fu_177_p1);
    sensitive << ( x_0_reg_85 );

    SC_METHOD(thread_zext_ln116_1_fu_199_p1);
    sensitive << ( x_0_reg_85 );

    SC_METHOD(thread_zext_ln116_2_fu_208_p1);
    sensitive << ( add_ln116_1_fu_203_p2 );

    SC_METHOD(thread_zext_ln116_3_fu_213_p1);
    sensitive << ( o_index_reg_261 );

    SC_METHOD(thread_zext_ln116_fu_136_p1);
    sensitive << ( y_0_reg_74 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln112_fu_100_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln113_fu_124_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln114_fu_165_p2 );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "flatten_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, input_r_address0, "(port)input_r_address0");
    sc_trace(mVcdFile, input_r_ce0, "(port)input_r_ce0");
    sc_trace(mVcdFile, input_r_q0, "(port)input_r_q0");
    sc_trace(mVcdFile, output_r_address0, "(port)output_r_address0");
    sc_trace(mVcdFile, output_r_ce0, "(port)output_r_ce0");
    sc_trace(mVcdFile, output_r_we0, "(port)output_r_we0");
    sc_trace(mVcdFile, output_r_d0, "(port)output_r_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, zext_ln112_fu_96_p1, "zext_ln112_fu_96_p1");
    sc_trace(mVcdFile, zext_ln112_reg_217, "zext_ln112_reg_217");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, c_fu_106_p2, "c_fu_106_p2");
    sc_trace(mVcdFile, c_reg_225, "c_reg_225");
    sc_trace(mVcdFile, zext_ln113_fu_120_p1, "zext_ln113_fu_120_p1");
    sc_trace(mVcdFile, zext_ln113_reg_230, "zext_ln113_reg_230");
    sc_trace(mVcdFile, icmp_ln112_fu_100_p2, "icmp_ln112_fu_100_p2");
    sc_trace(mVcdFile, y_fu_130_p2, "y_fu_130_p2");
    sc_trace(mVcdFile, y_reg_238, "y_reg_238");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_21_cast_fu_145_p3, "tmp_21_cast_fu_145_p3");
    sc_trace(mVcdFile, tmp_21_cast_reg_243, "tmp_21_cast_reg_243");
    sc_trace(mVcdFile, icmp_ln113_fu_124_p2, "icmp_ln113_fu_124_p2");
    sc_trace(mVcdFile, shl_ln_fu_157_p3, "shl_ln_fu_157_p3");
    sc_trace(mVcdFile, shl_ln_reg_248, "shl_ln_reg_248");
    sc_trace(mVcdFile, x_fu_171_p2, "x_fu_171_p2");
    sc_trace(mVcdFile, x_reg_256, "x_reg_256");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, o_index_fu_194_p2, "o_index_fu_194_p2");
    sc_trace(mVcdFile, o_index_reg_261, "o_index_reg_261");
    sc_trace(mVcdFile, icmp_ln114_fu_165_p2, "icmp_ln114_fu_165_p2");
    sc_trace(mVcdFile, c_0_reg_63, "c_0_reg_63");
    sc_trace(mVcdFile, y_0_reg_74, "y_0_reg_74");
    sc_trace(mVcdFile, x_0_reg_85, "x_0_reg_85");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, zext_ln116_2_fu_208_p1, "zext_ln116_2_fu_208_p1");
    sc_trace(mVcdFile, zext_ln116_3_fu_213_p1, "zext_ln116_3_fu_213_p1");
    sc_trace(mVcdFile, tmp_fu_112_p3, "tmp_fu_112_p3");
    sc_trace(mVcdFile, zext_ln116_fu_136_p1, "zext_ln116_fu_136_p1");
    sc_trace(mVcdFile, add_ln116_fu_140_p2, "add_ln116_fu_140_p2");
    sc_trace(mVcdFile, trunc_ln115_fu_153_p1, "trunc_ln115_fu_153_p1");
    sc_trace(mVcdFile, zext_ln115_fu_177_p1, "zext_ln115_fu_177_p1");
    sc_trace(mVcdFile, add_ln115_fu_181_p2, "add_ln115_fu_181_p2");
    sc_trace(mVcdFile, shl_ln115_1_fu_186_p3, "shl_ln115_1_fu_186_p3");
    sc_trace(mVcdFile, zext_ln116_1_fu_199_p1, "zext_ln116_1_fu_199_p1");
    sc_trace(mVcdFile, add_ln116_1_fu_203_p2, "add_ln116_1_fu_203_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

flatten::~flatten() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void flatten::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln113_fu_124_p2.read(), ap_const_lv1_1))) {
        c_0_reg_63 = c_reg_225.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        c_0_reg_63 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln113_fu_124_p2.read()))) {
        x_0_reg_85 = ap_const_lv3_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        x_0_reg_85 = x_reg_256.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln114_fu_165_p2.read(), ap_const_lv1_1))) {
        y_0_reg_74 = y_reg_238.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln112_fu_100_p2.read(), ap_const_lv1_0))) {
        y_0_reg_74 = ap_const_lv3_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        c_reg_225 = c_fu_106_p2.read();
        zext_ln112_reg_217 = zext_ln112_fu_96_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln114_fu_165_p2.read()))) {
        o_index_reg_261 = o_index_fu_194_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln113_fu_124_p2.read()))) {
        shl_ln_reg_248 = shl_ln_fu_157_p3.read();
        tmp_21_cast_reg_243 = tmp_21_cast_fu_145_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        x_reg_256 = x_fu_171_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        y_reg_238 = y_fu_130_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln112_fu_100_p2.read(), ap_const_lv1_0))) {
        zext_ln113_reg_230 = zext_ln113_fu_120_p1.read();
    }
}

void flatten::thread_add_ln115_fu_181_p2() {
    add_ln115_fu_181_p2 = (!shl_ln_reg_248.read().is_01() || !zext_ln115_fu_177_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(shl_ln_reg_248.read()) + sc_biguint<4>(zext_ln115_fu_177_p1.read()));
}

void flatten::thread_add_ln116_1_fu_203_p2() {
    add_ln116_1_fu_203_p2 = (!zext_ln116_1_fu_199_p1.read().is_01() || !tmp_21_cast_reg_243.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln116_1_fu_199_p1.read()) + sc_biguint<11>(tmp_21_cast_reg_243.read()));
}

void flatten::thread_add_ln116_fu_140_p2() {
    add_ln116_fu_140_p2 = (!zext_ln116_fu_136_p1.read().is_01() || !zext_ln113_reg_230.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln116_fu_136_p1.read()) + sc_biguint<9>(zext_ln113_reg_230.read()));
}

void flatten::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void flatten::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void flatten::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void flatten::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void flatten::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void flatten::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln112_fu_100_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void flatten::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void flatten::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln112_fu_100_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void flatten::thread_c_fu_106_p2() {
    c_fu_106_p2 = (!c_0_reg_63.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(c_0_reg_63.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void flatten::thread_icmp_ln112_fu_100_p2() {
    icmp_ln112_fu_100_p2 = (!c_0_reg_63.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(c_0_reg_63.read() == ap_const_lv6_20);
}

void flatten::thread_icmp_ln113_fu_124_p2() {
    icmp_ln113_fu_124_p2 = (!y_0_reg_74.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_reg_74.read() == ap_const_lv3_4);
}

void flatten::thread_icmp_ln114_fu_165_p2() {
    icmp_ln114_fu_165_p2 = (!x_0_reg_85.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_reg_85.read() == ap_const_lv3_4);
}

void flatten::thread_input_r_address0() {
    input_r_address0 =  (sc_lv<9>) (zext_ln116_2_fu_208_p1.read());
}

void flatten::thread_input_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        input_r_ce0 = ap_const_logic_1;
    } else {
        input_r_ce0 = ap_const_logic_0;
    }
}

void flatten::thread_o_index_fu_194_p2() {
    o_index_fu_194_p2 = (!shl_ln115_1_fu_186_p3.read().is_01() || !zext_ln112_reg_217.read().is_01())? sc_lv<9>(): (sc_biguint<9>(shl_ln115_1_fu_186_p3.read()) + sc_biguint<9>(zext_ln112_reg_217.read()));
}

void flatten::thread_output_r_address0() {
    output_r_address0 =  (sc_lv<9>) (zext_ln116_3_fu_213_p1.read());
}

void flatten::thread_output_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        output_r_ce0 = ap_const_logic_1;
    } else {
        output_r_ce0 = ap_const_logic_0;
    }
}

void flatten::thread_output_r_d0() {
    output_r_d0 = input_r_q0.read();
}

void flatten::thread_output_r_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        output_r_we0 = ap_const_logic_1;
    } else {
        output_r_we0 = ap_const_logic_0;
    }
}

void flatten::thread_shl_ln115_1_fu_186_p3() {
    shl_ln115_1_fu_186_p3 = esl_concat<4,5>(add_ln115_fu_181_p2.read(), ap_const_lv5_0);
}

void flatten::thread_shl_ln_fu_157_p3() {
    shl_ln_fu_157_p3 = esl_concat<2,2>(trunc_ln115_fu_153_p1.read(), ap_const_lv2_0);
}

void flatten::thread_tmp_21_cast_fu_145_p3() {
    tmp_21_cast_fu_145_p3 = esl_concat<9,2>(add_ln116_fu_140_p2.read(), ap_const_lv2_0);
}

void flatten::thread_tmp_fu_112_p3() {
    tmp_fu_112_p3 = esl_concat<6,2>(c_0_reg_63.read(), ap_const_lv2_0);
}

void flatten::thread_trunc_ln115_fu_153_p1() {
    trunc_ln115_fu_153_p1 = y_0_reg_74.read().range(2-1, 0);
}

void flatten::thread_x_fu_171_p2() {
    x_fu_171_p2 = (!x_0_reg_85.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_reg_85.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void flatten::thread_y_fu_130_p2() {
    y_fu_130_p2 = (!y_0_reg_74.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_reg_74.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void flatten::thread_zext_ln112_fu_96_p1() {
    zext_ln112_fu_96_p1 = esl_zext<9,6>(c_0_reg_63.read());
}

void flatten::thread_zext_ln113_fu_120_p1() {
    zext_ln113_fu_120_p1 = esl_zext<9,8>(tmp_fu_112_p3.read());
}

void flatten::thread_zext_ln115_fu_177_p1() {
    zext_ln115_fu_177_p1 = esl_zext<4,3>(x_0_reg_85.read());
}

void flatten::thread_zext_ln116_1_fu_199_p1() {
    zext_ln116_1_fu_199_p1 = esl_zext<11,3>(x_0_reg_85.read());
}

void flatten::thread_zext_ln116_2_fu_208_p1() {
    zext_ln116_2_fu_208_p1 = esl_zext<64,11>(add_ln116_1_fu_203_p2.read());
}

void flatten::thread_zext_ln116_3_fu_213_p1() {
    zext_ln116_3_fu_213_p1 = esl_zext<64,9>(o_index_reg_261.read());
}

void flatten::thread_zext_ln116_fu_136_p1() {
    zext_ln116_fu_136_p1 = esl_zext<9,3>(y_0_reg_74.read());
}

void flatten::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln112_fu_100_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln113_fu_124_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln114_fu_165_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        default : 
            ap_NS_fsm = "XXXXX";
            break;
    }
}

}

