// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "initialize_padded_me.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic initialize_padded_me::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic initialize_padded_me::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> initialize_padded_me::ap_ST_fsm_state1 = "1";
const sc_lv<4> initialize_padded_me::ap_ST_fsm_state2 = "10";
const sc_lv<4> initialize_padded_me::ap_ST_fsm_state3 = "100";
const sc_lv<4> initialize_padded_me::ap_ST_fsm_state4 = "1000";
const sc_lv<32> initialize_padded_me::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> initialize_padded_me::ap_const_lv32_1 = "1";
const sc_lv<1> initialize_padded_me::ap_const_lv1_0 = "0";
const sc_lv<32> initialize_padded_me::ap_const_lv32_2 = "10";
const sc_lv<32> initialize_padded_me::ap_const_lv32_3 = "11";
const sc_lv<5> initialize_padded_me::ap_const_lv5_0 = "00000";
const sc_lv<1> initialize_padded_me::ap_const_lv1_1 = "1";
const sc_lv<4> initialize_padded_me::ap_const_lv4_0 = "0000";
const sc_lv<5> initialize_padded_me::ap_const_lv5_10 = "10000";
const sc_lv<5> initialize_padded_me::ap_const_lv5_1 = "1";
const sc_lv<3> initialize_padded_me::ap_const_lv3_0 = "000";
const sc_lv<4> initialize_padded_me::ap_const_lv4_A = "1010";
const sc_lv<4> initialize_padded_me::ap_const_lv4_1 = "1";
const bool initialize_padded_me::ap_const_boolean_1 = true;

initialize_padded_me::initialize_padded_me(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln41_1_fu_139_p2);
    sensitive << ( add_ln41_reg_204 );
    sensitive << ( zext_ln41_2_fu_135_p1 );

    SC_METHOD(thread_add_ln41_2_fu_164_p2);
    sensitive << ( p_shl2_cast_fu_144_p3 );
    sensitive << ( zext_ln41_3_fu_160_p1 );

    SC_METHOD(thread_add_ln41_3_fu_186_p2);
    sensitive << ( add_ln41_2_reg_217 );
    sensitive << ( zext_ln41_4_fu_182_p1 );

    SC_METHOD(thread_add_ln41_fu_117_p2);
    sensitive << ( zext_ln41_1_fu_113_p1 );
    sensitive << ( zext_ln41_fu_101_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln38_fu_81_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln38_fu_81_p2 );

    SC_METHOD(thread_icmp_ln38_fu_81_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( m_0_reg_48 );

    SC_METHOD(thread_icmp_ln39_fu_123_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( x_0_reg_59 );

    SC_METHOD(thread_icmp_ln40_fu_170_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( y_0_reg_70 );

    SC_METHOD(thread_input_r_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln41_5_fu_191_p1 );

    SC_METHOD(thread_input_r_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_input_r_d0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_input_r_we0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln40_fu_170_p2 );

    SC_METHOD(thread_m_fu_87_p2);
    sensitive << ( m_0_reg_48 );

    SC_METHOD(thread_p_shl2_cast_fu_144_p3);
    sensitive << ( add_ln41_1_fu_139_p2 );

    SC_METHOD(thread_tmp_2_fu_152_p3);
    sensitive << ( add_ln41_1_fu_139_p2 );

    SC_METHOD(thread_tmp_fu_93_p3);
    sensitive << ( m_0_reg_48 );

    SC_METHOD(thread_tmp_s_fu_105_p3);
    sensitive << ( m_0_reg_48 );

    SC_METHOD(thread_x_fu_129_p2);
    sensitive << ( x_0_reg_59 );

    SC_METHOD(thread_y_fu_176_p2);
    sensitive << ( y_0_reg_70 );

    SC_METHOD(thread_zext_ln41_1_fu_113_p1);
    sensitive << ( tmp_s_fu_105_p3 );

    SC_METHOD(thread_zext_ln41_2_fu_135_p1);
    sensitive << ( x_0_reg_59 );

    SC_METHOD(thread_zext_ln41_3_fu_160_p1);
    sensitive << ( tmp_2_fu_152_p3 );

    SC_METHOD(thread_zext_ln41_4_fu_182_p1);
    sensitive << ( y_0_reg_70 );

    SC_METHOD(thread_zext_ln41_5_fu_191_p1);
    sensitive << ( add_ln41_3_fu_186_p2 );

    SC_METHOD(thread_zext_ln41_fu_101_p1);
    sensitive << ( tmp_fu_93_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln38_fu_81_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln39_fu_123_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln40_fu_170_p2 );

    ap_CS_fsm = "0001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "initialize_padded_me_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, input_r_we0, "(port)input_r_we0");
    sc_trace(mVcdFile, input_r_d0, "(port)input_r_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, m_fu_87_p2, "m_fu_87_p2");
    sc_trace(mVcdFile, m_reg_199, "m_reg_199");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, add_ln41_fu_117_p2, "add_ln41_fu_117_p2");
    sc_trace(mVcdFile, add_ln41_reg_204, "add_ln41_reg_204");
    sc_trace(mVcdFile, icmp_ln38_fu_81_p2, "icmp_ln38_fu_81_p2");
    sc_trace(mVcdFile, x_fu_129_p2, "x_fu_129_p2");
    sc_trace(mVcdFile, x_reg_212, "x_reg_212");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, add_ln41_2_fu_164_p2, "add_ln41_2_fu_164_p2");
    sc_trace(mVcdFile, add_ln41_2_reg_217, "add_ln41_2_reg_217");
    sc_trace(mVcdFile, icmp_ln39_fu_123_p2, "icmp_ln39_fu_123_p2");
    sc_trace(mVcdFile, y_fu_176_p2, "y_fu_176_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, m_0_reg_48, "m_0_reg_48");
    sc_trace(mVcdFile, x_0_reg_59, "x_0_reg_59");
    sc_trace(mVcdFile, icmp_ln40_fu_170_p2, "icmp_ln40_fu_170_p2");
    sc_trace(mVcdFile, y_0_reg_70, "y_0_reg_70");
    sc_trace(mVcdFile, zext_ln41_5_fu_191_p1, "zext_ln41_5_fu_191_p1");
    sc_trace(mVcdFile, tmp_fu_93_p3, "tmp_fu_93_p3");
    sc_trace(mVcdFile, tmp_s_fu_105_p3, "tmp_s_fu_105_p3");
    sc_trace(mVcdFile, zext_ln41_1_fu_113_p1, "zext_ln41_1_fu_113_p1");
    sc_trace(mVcdFile, zext_ln41_fu_101_p1, "zext_ln41_fu_101_p1");
    sc_trace(mVcdFile, zext_ln41_2_fu_135_p1, "zext_ln41_2_fu_135_p1");
    sc_trace(mVcdFile, add_ln41_1_fu_139_p2, "add_ln41_1_fu_139_p2");
    sc_trace(mVcdFile, tmp_2_fu_152_p3, "tmp_2_fu_152_p3");
    sc_trace(mVcdFile, p_shl2_cast_fu_144_p3, "p_shl2_cast_fu_144_p3");
    sc_trace(mVcdFile, zext_ln41_3_fu_160_p1, "zext_ln41_3_fu_160_p1");
    sc_trace(mVcdFile, zext_ln41_4_fu_182_p1, "zext_ln41_4_fu_182_p1");
    sc_trace(mVcdFile, add_ln41_3_fu_186_p2, "add_ln41_3_fu_186_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

initialize_padded_me::~initialize_padded_me() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void initialize_padded_me::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln39_fu_123_p2.read(), ap_const_lv1_1))) {
        m_0_reg_48 = m_reg_199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        m_0_reg_48 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln40_fu_170_p2.read()))) {
        x_0_reg_59 = x_reg_212.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln38_fu_81_p2.read(), ap_const_lv1_0))) {
        x_0_reg_59 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln39_fu_123_p2.read()))) {
        y_0_reg_70 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_fu_170_p2.read()))) {
        y_0_reg_70 = y_fu_176_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln39_fu_123_p2.read()))) {
        add_ln41_2_reg_217 = add_ln41_2_fu_164_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln38_fu_81_p2.read(), ap_const_lv1_0))) {
        add_ln41_reg_204 = add_ln41_fu_117_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        m_reg_199 = m_fu_87_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        x_reg_212 = x_fu_129_p2.read();
    }
}

void initialize_padded_me::thread_add_ln41_1_fu_139_p2() {
    add_ln41_1_fu_139_p2 = (!zext_ln41_2_fu_135_p1.read().is_01() || !add_ln41_reg_204.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln41_2_fu_135_p1.read()) + sc_biguint<9>(add_ln41_reg_204.read()));
}

void initialize_padded_me::thread_add_ln41_2_fu_164_p2() {
    add_ln41_2_fu_164_p2 = (!p_shl2_cast_fu_144_p3.read().is_01() || !zext_ln41_3_fu_160_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl2_cast_fu_144_p3.read()) + sc_biguint<12>(zext_ln41_3_fu_160_p1.read()));
}

void initialize_padded_me::thread_add_ln41_3_fu_186_p2() {
    add_ln41_3_fu_186_p2 = (!add_ln41_2_reg_217.read().is_01() || !zext_ln41_4_fu_182_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln41_2_reg_217.read()) + sc_biguint<12>(zext_ln41_4_fu_182_p1.read()));
}

void initialize_padded_me::thread_add_ln41_fu_117_p2() {
    add_ln41_fu_117_p2 = (!zext_ln41_1_fu_113_p1.read().is_01() || !zext_ln41_fu_101_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln41_1_fu_113_p1.read()) + sc_biguint<9>(zext_ln41_fu_101_p1.read()));
}

void initialize_padded_me::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void initialize_padded_me::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void initialize_padded_me::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void initialize_padded_me::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void initialize_padded_me::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln38_fu_81_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void initialize_padded_me::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void initialize_padded_me::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln38_fu_81_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void initialize_padded_me::thread_icmp_ln38_fu_81_p2() {
    icmp_ln38_fu_81_p2 = (!m_0_reg_48.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(m_0_reg_48.read() == ap_const_lv5_10);
}

void initialize_padded_me::thread_icmp_ln39_fu_123_p2() {
    icmp_ln39_fu_123_p2 = (!x_0_reg_59.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(x_0_reg_59.read() == ap_const_lv4_A);
}

void initialize_padded_me::thread_icmp_ln40_fu_170_p2() {
    icmp_ln40_fu_170_p2 = (!y_0_reg_70.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(y_0_reg_70.read() == ap_const_lv4_A);
}

void initialize_padded_me::thread_input_r_address0() {
    input_r_address0 =  (sc_lv<11>) (zext_ln41_5_fu_191_p1.read());
}

void initialize_padded_me::thread_input_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        input_r_ce0 = ap_const_logic_1;
    } else {
        input_r_ce0 = ap_const_logic_0;
    }
}

void initialize_padded_me::thread_input_r_d0() {
    input_r_d0 = ap_const_lv1_0;
}

void initialize_padded_me::thread_input_r_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_fu_170_p2.read()))) {
        input_r_we0 = ap_const_logic_1;
    } else {
        input_r_we0 = ap_const_logic_0;
    }
}

void initialize_padded_me::thread_m_fu_87_p2() {
    m_fu_87_p2 = (!m_0_reg_48.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(m_0_reg_48.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void initialize_padded_me::thread_p_shl2_cast_fu_144_p3() {
    p_shl2_cast_fu_144_p3 = esl_concat<9,3>(add_ln41_1_fu_139_p2.read(), ap_const_lv3_0);
}

void initialize_padded_me::thread_tmp_2_fu_152_p3() {
    tmp_2_fu_152_p3 = esl_concat<9,1>(add_ln41_1_fu_139_p2.read(), ap_const_lv1_0);
}

void initialize_padded_me::thread_tmp_fu_93_p3() {
    tmp_fu_93_p3 = esl_concat<5,3>(m_0_reg_48.read(), ap_const_lv3_0);
}

void initialize_padded_me::thread_tmp_s_fu_105_p3() {
    tmp_s_fu_105_p3 = esl_concat<5,1>(m_0_reg_48.read(), ap_const_lv1_0);
}

void initialize_padded_me::thread_x_fu_129_p2() {
    x_fu_129_p2 = (!x_0_reg_59.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(x_0_reg_59.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void initialize_padded_me::thread_y_fu_176_p2() {
    y_fu_176_p2 = (!y_0_reg_70.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(y_0_reg_70.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void initialize_padded_me::thread_zext_ln41_1_fu_113_p1() {
    zext_ln41_1_fu_113_p1 = esl_zext<9,6>(tmp_s_fu_105_p3.read());
}

void initialize_padded_me::thread_zext_ln41_2_fu_135_p1() {
    zext_ln41_2_fu_135_p1 = esl_zext<9,4>(x_0_reg_59.read());
}

void initialize_padded_me::thread_zext_ln41_3_fu_160_p1() {
    zext_ln41_3_fu_160_p1 = esl_zext<12,10>(tmp_2_fu_152_p3.read());
}

void initialize_padded_me::thread_zext_ln41_4_fu_182_p1() {
    zext_ln41_4_fu_182_p1 = esl_zext<12,4>(y_0_reg_70.read());
}

void initialize_padded_me::thread_zext_ln41_5_fu_191_p1() {
    zext_ln41_5_fu_191_p1 = esl_zext<64,12>(add_ln41_3_fu_186_p2.read());
}

void initialize_padded_me::thread_zext_ln41_fu_101_p1() {
    zext_ln41_fu_101_p1 = esl_zext<9,8>(tmp_fu_93_p3.read());
}

void initialize_padded_me::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln38_fu_81_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln39_fu_123_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln40_fu_170_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}

