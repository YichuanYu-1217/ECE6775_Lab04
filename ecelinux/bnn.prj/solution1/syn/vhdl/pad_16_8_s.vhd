-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity pad_16_8_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    input_r_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    input_r_ce0 : OUT STD_LOGIC;
    input_r_q0 : IN STD_LOGIC_VECTOR (0 downto 0);
    output_r_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
    output_r_ce0 : OUT STD_LOGIC;
    output_r_we0 : OUT STD_LOGIC;
    output_r_d0 : OUT STD_LOGIC_VECTOR (0 downto 0) );
end;


architecture behav of pad_16_8_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv4_8 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal m_fu_102_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal m_reg_244 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal zext_ln25_fu_116_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal zext_ln25_reg_249 : STD_LOGIC_VECTOR (8 downto 0);
    signal icmp_ln22_fu_96_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln25_fu_132_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal add_ln25_reg_254 : STD_LOGIC_VECTOR (8 downto 0);
    signal x_fu_144_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal x_reg_262 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal zext_ln23_fu_150_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln23_reg_267 : STD_LOGIC_VECTOR (11 downto 0);
    signal icmp_ln23_fu_138_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal zext_ln24_fu_154_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln24_reg_272 : STD_LOGIC_VECTOR (11 downto 0);
    signal y_fu_164_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal y_reg_280 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal icmp_ln24_fu_158_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln25_7_fu_232_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln25_7_reg_290 : STD_LOGIC_VECTOR (11 downto 0);
    signal m_0_reg_63 : STD_LOGIC_VECTOR (4 downto 0);
    signal x_0_reg_74 : STD_LOGIC_VECTOR (3 downto 0);
    signal y_0_reg_85 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal zext_ln25_3_fu_192_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln25_6_fu_237_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_fu_108_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_2_fu_120_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal zext_ln25_1_fu_128_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal zext_ln25_2_fu_170_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal add_ln25_2_fu_174_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_4_cast_fu_179_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln25_3_fu_187_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln25_4_fu_197_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal add_ln25_5_fu_201_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_1_fu_214_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal p_shl2_cast_fu_206_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln25_5_fu_222_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln25_6_fu_226_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    m_0_reg_63_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln23_fu_138_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                m_0_reg_63 <= m_reg_244;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                m_0_reg_63 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;

    x_0_reg_74_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln24_fu_158_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                x_0_reg_74 <= x_reg_262;
            elsif (((icmp_ln22_fu_96_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                x_0_reg_74 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    y_0_reg_85_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln23_fu_138_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                y_0_reg_85 <= ap_const_lv4_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                y_0_reg_85 <= y_reg_280;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln24_fu_158_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                add_ln25_7_reg_290 <= add_ln25_7_fu_232_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln22_fu_96_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    add_ln25_reg_254(8 downto 1) <= add_ln25_fu_132_p2(8 downto 1);
                    zext_ln25_reg_249(7 downto 3) <= zext_ln25_fu_116_p1(7 downto 3);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                m_reg_244 <= m_fu_102_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                x_reg_262 <= x_fu_144_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                y_reg_280 <= y_fu_164_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln23_fu_138_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    zext_ln23_reg_267(3 downto 0) <= zext_ln23_fu_150_p1(3 downto 0);
                    zext_ln24_reg_272(3 downto 0) <= zext_ln24_fu_154_p1(3 downto 0);
            end if;
        end if;
    end process;
    zext_ln25_reg_249(2 downto 0) <= "000";
    zext_ln25_reg_249(8) <= '0';
    add_ln25_reg_254(0) <= '0';
    zext_ln23_reg_267(11 downto 4) <= "00000000";
    zext_ln24_reg_272(11 downto 4) <= "00000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln22_fu_96_p2, ap_CS_fsm_state3, icmp_ln23_fu_138_p2, ap_CS_fsm_state4, icmp_ln24_fu_158_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln22_fu_96_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((icmp_ln23_fu_138_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((icmp_ln24_fu_158_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    add_ln25_2_fu_174_p2 <= std_logic_vector(unsigned(zext_ln25_2_fu_170_p1) + unsigned(zext_ln25_reg_249));
    add_ln25_3_fu_187_p2 <= std_logic_vector(unsigned(zext_ln23_reg_267) + unsigned(tmp_4_cast_fu_179_p3));
    add_ln25_5_fu_201_p2 <= std_logic_vector(unsigned(zext_ln25_4_fu_197_p1) + unsigned(add_ln25_reg_254));
    add_ln25_6_fu_226_p2 <= std_logic_vector(unsigned(p_shl2_cast_fu_206_p3) + unsigned(zext_ln25_5_fu_222_p1));
    add_ln25_7_fu_232_p2 <= std_logic_vector(unsigned(zext_ln24_reg_272) + unsigned(add_ln25_6_fu_226_p2));
    add_ln25_fu_132_p2 <= std_logic_vector(unsigned(zext_ln25_1_fu_128_p1) + unsigned(zext_ln25_fu_116_p1));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln22_fu_96_p2)
    begin
        if ((((icmp_ln22_fu_96_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, icmp_ln22_fu_96_p2)
    begin
        if (((icmp_ln22_fu_96_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    icmp_ln22_fu_96_p2 <= "1" when (m_0_reg_63 = ap_const_lv5_10) else "0";
    icmp_ln23_fu_138_p2 <= "1" when (x_0_reg_74 = ap_const_lv4_8) else "0";
    icmp_ln24_fu_158_p2 <= "1" when (y_0_reg_85 = ap_const_lv4_8) else "0";
    input_r_address0 <= zext_ln25_3_fu_192_p1(10 - 1 downto 0);

    input_r_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            input_r_ce0 <= ap_const_logic_1;
        else 
            input_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    m_fu_102_p2 <= std_logic_vector(unsigned(m_0_reg_63) + unsigned(ap_const_lv5_1));
    output_r_address0 <= zext_ln25_6_fu_237_p1(11 - 1 downto 0);

    output_r_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            output_r_ce0 <= ap_const_logic_1;
        else 
            output_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_r_d0 <= input_r_q0;

    output_r_we0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            output_r_we0 <= ap_const_logic_1;
        else 
            output_r_we0 <= ap_const_logic_0;
        end if; 
    end process;

    p_shl2_cast_fu_206_p3 <= (add_ln25_5_fu_201_p2 & ap_const_lv3_0);
    tmp_1_fu_214_p3 <= (add_ln25_5_fu_201_p2 & ap_const_lv1_0);
    tmp_2_fu_120_p3 <= (m_0_reg_63 & ap_const_lv1_0);
    tmp_4_cast_fu_179_p3 <= (add_ln25_2_fu_174_p2 & ap_const_lv3_0);
    tmp_fu_108_p3 <= (m_0_reg_63 & ap_const_lv3_0);
    x_fu_144_p2 <= std_logic_vector(unsigned(x_0_reg_74) + unsigned(ap_const_lv4_1));
    y_fu_164_p2 <= std_logic_vector(unsigned(y_0_reg_85) + unsigned(ap_const_lv4_1));
    zext_ln23_fu_150_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(x_0_reg_74),12));
    zext_ln24_fu_154_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(x_fu_144_p2),12));
    zext_ln25_1_fu_128_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_2_fu_120_p3),9));
    zext_ln25_2_fu_170_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(y_0_reg_85),9));
    zext_ln25_3_fu_192_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln25_3_fu_187_p2),64));
    zext_ln25_4_fu_197_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(y_fu_164_p2),9));
    zext_ln25_5_fu_222_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_1_fu_214_p3),12));
    zext_ln25_6_fu_237_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln25_7_reg_290),64));
    zext_ln25_fu_116_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_fu_108_p3),9));
end behav;
