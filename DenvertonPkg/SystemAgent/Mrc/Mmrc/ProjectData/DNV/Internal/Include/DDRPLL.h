/** @file
  File name:    DDRPLL.h
  Input File:   DNV_MRC.xlsx

  THIS FILE IS AUTO-GENERATED BY THE MSP TOOL. DO NOT CHANGE THIS CODE.

  If edits are needed in this file, they must be done via the MSP tool.

  If there is additional project-specific data required by the MSP, it
  can be placed in DDRPLL.h, which is used for non-tool-generated
  data

  Includes register defines specific to a project.

  Copyright (c) 2005-2018 Intel Corporation. All rights reserved
  This software and associated documentation (if any) is furnished
  under a license and may only be used or copied in accordance
  with the terms of the license. Except as permitted by such
  license, no part of this software or documentation may be
  reproduced, stored in a retrieval system, or transmitted in any
  form or by any means without the express written consent of
  Intel Corporation.
**/
#ifndef _DDRPLL_H_
#define _DDRPLL_H_

#include "DataTypes.h"

#if USE_64_BIT_VARIABLES
#define UINTX UINT64
#else
#define UINTX UINT32
#endif

#define PLLDIVRATIOS_0_DDRPLL_REG                          0x00000000
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[11:0], Unknown, default = Unknown
    //
    UINTX missing_from_register_description : 12;
    //
    // Currently reserved bits. pre divider control.  M=i_ndiv (only 1 to 7 are valid)
    // 
    // Bits[15:12], RW/V, default = 0x0
    //
    UINTX i_ndiv : 4;
    //
    // This register will be used to set the ADPLL internal FB divider value when using
    // long loop (external) division. At this mode the value in i_fbdivratio[7:0] should
    // reflect the true total division ratio (including the long loop division) for the
    // ADPLL calibration process 
    // 
    // Bits[23:16], RW, default = 0x64
    //
    UINTX int_fbdiv : 8;
    //
    // generic 8bit feedback divider ratio. N=i_fbdivratio
    // 
    // Bits[31:24], RW/V, default = 0x0
    //
    UINTX i_fbdivratio : 8;
  } Bits;
  UINTX Data;
} PLLDIVRATIOS_0_DDRPLL_STRUCT;
#endif // ASM_INC

#define PLLSEQUENCE_0_DDRPLL_REG                           0x00000004
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[7:0], Unknown, default = Unknown
    //
    UINTX missing_from_register_description : 8;
    //
    // Locktime counter per refclk cycles, stops at overflow / lock.
    // 
    // Bits[17:8], RO/V, default = 0x0
    //
    UINTX locktime_final : 10;
    //
    // DCO edge's counter
    // 
    // Bits[27:18], RO/V, default = 0x0
    //
    UINTX dcoclk_edge_cnt : 10;
    //
    // Lock time expected Indication bit.
    // 
    // Bits[28:28], RO/V, default = 0x0
    //
    UINTX o_locktimer : 1;
    //
    // ADPLL's Refclk request bit. 
    // 
    // Bits[29:29], RO/V, default = 0x0
    //
    UINTX o_refclk_req_h : 1;
    //
    // PLL Lock indicator signal. 
    // 
    // Bits[30:30], RO/V, default = 0x0
    //
    UINTX o_plllock : 1;
    //
    // General Error flag.
    // 
    // Bits[31:31], RO/V, default = 0x0
    //
    UINTX o_errorflag : 1;
  } Bits;
  UINTX Data;
} PLLSEQUENCE_0_DDRPLL_STRUCT;
#endif // ASM_INC

#define CONFIG_0_DDRPLL_REG                                0x00000008
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[8:0], Unknown, default = Unknown
    //
    UINTX missing_from_register_description : 9;
    //
    // Kp filter coefficient, 2^n. Two's complement
    // 
    // Bits[12:9], RW/V, default = 0x0
    //
    UINTX i_prop_coeff : 4;
    //
    // Ki filter coefficient, 2^n. Two's complement
    // 
    // Bits[17:13], RW/V, default = 0x0
    //
    UINTX i_int_coeff : 5;
    //
    // Selects refproc's delayed clock / inverted version of refclk2dig for DCO latches
    // n DS. 
    // 
    // Bits[18:18], RW, default = 0x0
    //
    UINTX refclk2fnlch_sel : 1;
    //
    // control delay of refclk_dly clock that is used by DCO latches
    // 
    // Bits[20:19], RW/V, default = 0x0
    //
    UINTX i_refclkdly_sel : 2;
    //
    // defines distance of fine code from edges that would trigger SFR trimming. Distance
    // defined by 2^(fine_limit+5) 
    // 
    // Bits[22:21], RW/V, default = 0x0
    //
    UINTX i_fine_limit : 2;
    //
    // lock counter window configuration:
    // '1'b0' - 32 cycles
    // '1'b1' - 64 cycles
    // 
    // Bits[23:23], RW/V, default = 0x0
    //
    UINTX i_lockdet_cnt : 1;
    //
    // phase error threshold at which  PLL is unlocked: 
    // '2'b11': -16<pe<15
    // '2'b10': -15<pe<14
    // '2'b01': -13<pe<12
    // '2'b00': -9<pe<8
    // 
    // Bits[25:24], RW/V, default = 0x0
    //
    UINTX i_lockwdet_win : 2;
    //
    // EV: forces digital core reset off (unless pwrgood=0)
    // 
    // Bits[26:26], RW, default = 0x0
    //
    UINTX force_digcoreen : 1;
    //
    // EV: forces dco enable even if PLL is off. Need this for example in openloop mode
    // 
    // Bits[27:27], RW, default = 0x0
    //
    UINTX force_dcoen : 1;
    //
    // EV: forces boot locking instead of normal locking
    // 
    // Bits[28:28], RW, default = 0x0
    //
    UINTX force_boot : 1;
    //
    // force clock gating off in all modes
    // 
    // Bits[29:29], RW/V, default = 0x0
    //
    UINTX i_force_clkgateoff : 1;
    //
    // force power gating off in all modes
    // 
    // Bits[30:30], RW/V, default = 0x0
    //
    UINTX i_force_pwrgateoff : 1;
    //
    // force tdc calibration in normal locking
    // 
    // Bits[31:31], RW/V, default = 0x0
    //
    UINTX i_force_tdccalib : 1;
  } Bits;
  UINTX Data;
} CONFIG_0_DDRPLL_STRUCT;
#endif // ASM_INC

#define CONFIG_1_DDRPLL_REG                                0x0000000C
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[10:0], Unknown, default = Unknown
    //
    UINTX missing_from_register_description : 11;
    //
    // EV: pe modulation amplitude. This register is Two's complementry.
    // The value of this register sets the pe_offset value.
    // NOTE: if pemod_frq[3:0] = 4'b0, this value will set the pe_offset 'as is' otherwise
    // its LSB will be overidden to 1'b1 by HW 
    // 
    // Bits[16:11], RW, default = 0x0
    //
    UINTX pemod_amp : 6;
    //
    // EV: pe modulation frequency. 
    // 4'b0: no frequency modulation
    // 4'bxxx: Fmod = Frefclk/2^(pemode_frq+1)
    // 
    // Bits[20:17], RW, default = 0x0
    //
    UINTX pemod_frq : 4;
    //
    // sigma delta dithering external bit
    // 
    // Bits[21:21], RW, default = 0x0
    //
    UINTX dcodither_val : 1;
    //
    // bypass sigma delta dithering bit with external bit
    // 
    // Bits[22:22], RW, default = 0x0
    //
    UINTX dcodither_ovrd : 1;
    //
    // select sigma delta over sampling clock
    // 
    // Bits[24:23], RW/V, default = 0x0
    //
    UINTX i_dcodither_clk_sel : 2;
    //
    // enable sigma delta
    // 
    // Bits[25:25], RW/V, default = 0x0
    //
    UINTX i_dcodither_en : 1;
    //
    // Bonus Cells
    // 
    // Bits[26:26], RW, default = 0x0
    //
    UINTX config_1_bonus : 1;
    //
    // Delay for clock gating (0 menas no delay).
    // 
    // Bits[29:27], RW, default = 0x4
    //
    UINTX clkgdly_cnt : 3;
    //
    // long loop clock select through dcoclk_ext clock
    // 
    // Bits[30:30], RW/V, default = 0x0
    //
    UINTX i_dcoclk_extsel : 1;
    //
    // external feedback clock select (allowing use of external feedback divider). In
    // this case, user must set fbdivratio to the feedback ratio he uses 
    // 
    // Bits[31:31], RW/V, default = 0x0
    //
    UINTX i_fbclk_extsel : 1;
  } Bits;
  UINTX Data;
} CONFIG_1_DDRPLL_STRUCT;
#endif // ASM_INC

#define CONFIG_2_DDRPLL_REG                                0x00000010
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Bonus Cells
    // 
    // Bits[15:0], RW/V, default = 0x0
    //
    UINTX i_pllconfig : 16;
    //
    // Digital's internal spare config.
    // 
    // Bits[31:16], RW, default = 0x0
    //
    UINTX digconfig : 16;
  } Bits;
  UINTX Data;
} CONFIG_2_DDRPLL_STRUCT;
#endif // ASM_INC

#define CONFIG_3_DDRPLL_REG                                0x00000014
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[0:0], Unknown, default = Unknown
    //
    UINTX missing_from_register_description : 1;
    //
    // Set this bus to the number of refclk cycles after which the o_locktimer is asserted,
    // 
    // Bits[7:1], RW/V, default = 0x0
    //
    UINTX i_locktimercnt_th : 7;
    //
    // set to round(1.47GHz/Frefclk)-1 for proper TDC calibration
    // 
    // Bits[15:8], RW/V, default = 0x0
    //
    UINTX i_tdccalib_osccnt : 8;
    //
    // set to round(3.43GHz/Fref)-1 for proper SFR calibration
    // 
    // Bits[23:16], RW/V, default = 0x0
    //
    UINTX i_sfrcalib_fmaxcnt : 8;
    //
    // set to round(1.1GHz/Fref)-1 for proper SFR calibration
    // 
    // Bits[31:24], RW/V, default = 0x0
    //
    UINTX i_sfrcalib_fmincnt : 8;
  } Bits;
  UINTX Data;
} CONFIG_3_DDRPLL_STRUCT;
#endif // ASM_INC

#define FILTER_OBS_DDRPLL_REG                              0x00000018
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Spare registers for Filter
    // 
    // Bits[3:0], RW, default = 0x0
    //
    UINTX spare_filter : 4;
    //
    // Phase error max sampled value.
    // 
    // Bits[8:4], RO/V, default = 0x10
    //
    UINTX pe_max : 5;
    //
    // DCO's fine code max sampled value.
    // 
    // Bits[17:9], RO/V, default = 0x0
    //
    UINTX fine_max : 9;
    //
    // Phase error min sampled value.
    // 
    // Bits[22:18], RO/V, default = 0xF
    //
    UINTX pe_min : 5;
    //
    // DCO's fine code min sampled value.
    // 
    // Bits[31:23], RO/V, default = 0x1FF
    //
    UINTX fine_min : 9;
  } Bits;
  UINTX Data;
} FILTER_OBS_DDRPLL_STRUCT;
#endif // ASM_INC

#define VISA_OUT_DDRPLL_REG                                0x0000001C
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[15:0], Unknown, default = Unknown
    //
    UINTX missing_from_register_description : 16;
    //
    // Visa lane's 1 n 0
    // 
    // Bits[31:16], RO/V, default = 0x0
    //
    UINTX odfx_avisa_dbgbus : 16;
  } Bits;
  UINTX Data;
} VISA_OUT_DDRPLL_STRUCT;
#endif // ASM_INC

#define DFT_0_DDRPLL_REG                                   0x00000020
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[2:0], Unknown, default = Unknown
    //
    UINTX missing_from_register_description : 3;
    //
    // EV:
    // 1' - disable minmax sampling by counter. 
    // '0'- disbale by falling minmaxen bit
    // 
    // Bits[3:3], RW, default = 0x0
    //
    UINTX fine_minmax_timer : 1;
    //
    // EV:
    // 1' - use fine min max loggin window counter from (cfg_lockdet_cnt), 
    // '0'- select narrow lock counter value (cfg_strict_lockwin)
    // 
    // Bits[4:4], RW, default = 0x0
    //
    UINTX fine_minmax_selcnt : 1;
    //
    // Spare bit for the SFR
    // 
    // Bits[8:5], RW/V, default = 0x0
    //
    UINTX i_sfr_spare : 4;
    //
    // EV: bypass coarse calibration code with coarse_val
    // 
    // Bits[9:9], RW, default = 0x0
    //
    UINTX dcocoarse_ovrd : 1;
    //
    // EV: DCO coarse override value
    // 
    // Bits[16:10], RW, default = 0x3F
    //
    UINTX dcocoarse_val : 7;
    //
    // EV: DCO fine override select
    // 
    // Bits[17:17], RW, default = 0x0
    //
    UINTX dcofine_ovrd : 1;
    //
    // EV: DCO fine override value
    // 
    // Bits[26:18], RW, default = 0x100
    //
    UINTX dcofine_val : 9;
    //
    // TDC trim override select
    // 
    // Bits[27:27], RW, default = 0x0
    //
    UINTX tdctrim_ovrd : 1;
    //
    // TDC trim override value
    // 
    // Bits[31:28], RW, default = 0x8
    //
    UINTX tdctrim_val : 4;
  } Bits;
  UINTX Data;
} DFT_0_DDRPLL_STRUCT;
#endif // ASM_INC

#define DFT_1_DDRPLL_REG                                   0x00000024
#ifndef ASM_INC
typedef union {
  struct {
    //
    // if asserted: FSM stays in gain boost, without time limit, till PLL is locked.
    // 
    // Bits[0:0], RW, default = 0x0
    //
    UINTX lock_boost_en : 1;
    //
    // EV: EV: fine/pe (depends on p2p_fine_pe_selsect cfg) min - max values peak to
    // peak 
    // 
    // Bits[9:1], RO/V, default = 0x0
    //
    UINTX fine_pe_minmax_p2p : 9;
    //
    // controls number of refclk cycles at startup at which Kp and Ki are scaled up for
    // faster lock (kpscale, kiscale) 
    // 
    // Bits[11:10], RW/V, default = 0x0
    //
    UINTX i_kpkiscale_cnt : 2;
    //
    // Ki scaling during startup for faster lock (2^n)
    // 
    // Bits[13:12], RW/V, default = 0x0
    //
    UINTX i_kiscale : 2;
    //
    // Kp scaling during startup for faster lock (2^n)
    // 
    // Bits[15:14], RW/V, default = 0x0
    //
    UINTX i_kpscale : 2;
    //
    // TDC sweep bit.
    // 
    // Bits[16:16], RW, default = 0x0
    //
    UINTX tdcsweep_en : 1;
    //
    // Coarse sweep bit.
    // 
    // Bits[17:17], RW, default = 0x0
    //
    UINTX coarsesweep_en : 1;
    //
    // EV: sweep fine code (triangle sweep)
    // 
    // Bits[18:18], RW, default = 0x0
    //
    UINTX fine_sweepen : 1;
    //
    // Bonus Cells
    // 
    // Bits[19:19], RW, default = 0x0
    //
    UINTX dft_1_bonus : 1;
    //
    // Select which peak to peak value will be written to 'fine_pe_minmax_p2p[8:0]'.
    //  
    // '0' - log fine values,
    // '1' - log PE values.
    // 
    // Bits[20:20], RW, default = 0x0
    //
    UINTX p2p_fine_pe_select : 1;
    //
    // resets the fine minmax value
    // 
    // Bits[21:21], RW, default = 0x0
    //
    UINTX fine_pe_minmaxrst : 1;
    //
    // when '1', min/max values of fine/pe code are monitored this mechanism is disabled
    // by HW when lock signal is de-asserted 
    // 
    // Bits[22:22], RW, default = 0x0
    //
    UINTX fine_pe_minmaxen : 1;
    //
    // Strict Lock window config. 
    // '1' = -5<pe_tdc<4 for 16 cycles.
    // '0' = -3<pe_tdc<2 for 8 cycles.
    // 
    // Bits[23:23], RW, default = 0x0
    //
    UINTX narrow_lockwin : 1;
    //
    // dco calibration (and tdc calibration?) counter counts half of default count for
    // faster calibration 
    // 
    // Bits[24:24], RW, default = 0x0
    //
    UINTX dcocalib_cnthalf : 1;
    //
    // force feedback divider reset off in all modes
    // 
    // Bits[25:25], RW/V, default = 0x0
    //
    UINTX i_force_fbdivrstoff : 1;
    //
    // EV: configures TDC chain as ring oscillator
    // 
    // Bits[26:26], RW, default = 0x0
    //
    UINTX force_tdcosc : 1;
    //
    // EV: forces PLL into close loop mode and final filter coefficient
    // 
    // Bits[27:27], RW, default = 0x0
    //
    UINTX force_cloopen : 1;
    //
    // div_farm clock chooper: '00' = refclk. '01', '11' = vss, '10' = vcc
    // 
    // Bits[29:28], RW, default = 0x3
    //
    UINTX o_dcsense_chopsel : 2;
    //
    // Enable bbpd in the sign bit of the TDC instead of FFPD
    // 
    // Bits[30:30], RW, default = 0x0
    //
    UINTX tdcbbpd_en : 1;
    //
    // Makes DCO latches transparent. Allows open loop checks without refclk.
    // 
    // Bits[31:31], RW, default = 0x0
    //
    UINTX dcolat_byp : 1;
  } Bits;
  UINTX Data;
} DFT_1_DDRPLL_STRUCT;
#endif // ASM_INC

#define DFT_2_DDRPLL_REG                                   0x00000028
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[0:0], Unknown, default = Unknown
    //
    UINTX missing_from_register_description : 1;
    //
    // Narrow lock time indicator signals, this signal asserts in case the narrow lock
    // asserts after o_locktimer assertion 
    // 
    // Bits[1:1], RO/V, default = 0x0
    //
    UINTX narrow_lock_late : 1;
    //
    // obs(0) muxing control bits.
    // --------------------------------------------
    // |    i_obs_sel[0] |      o_obs[0]     |
    // ---------------------------------------------
    // |        0xxx          | digtop_obs[0] |
    // --------------------------------------------
    // |        1000          |      dcoclk          |
    // --------------------------------------------
    // |        1001          |    dcoclk_div2  |
    // --------------------------------------------
    // |        1010          |   dcoclk_div4   |
    // --------------------------------------------
    // |        1011          |          fbclk         |
    // --------------------------------------------
    // |        1100          |          refclk       |
    // --------------------------------------------
    // |        1101          |          fbclk16    |
    // --------------------------------------------
    // |        1110          |         refclk16   |
    // --------------------------------------------
    // |        1111          |      dither_bit   |
    // --------------------------------------------
    // 
    // Bits[5:2], RW, default = 0x3
    //
    UINTX obs_sel0 : 4;
    //
    // obs(1)muxing control bits.
    // Same control settings apply as noted in obs_sel0[3:0]
    // 
    // Bits[9:6], RW, default = 0x0
    //
    UINTX obs_sel1 : 4;
    //
    // obs(2) muxing control bits.
    // Same control settings apply as noted in obs_sel0[3:0]
    // 
    // Bits[13:10], RW, default = 0xB
    //
    UINTX obs_sel2 : 4;
    //
    // obs(3) muxing control bits.
    // Same control settings apply as noted in obs_sel0[3:0]
    // 
    // Bits[17:14], RW, default = 0x8
    //
    UINTX obs_sel3 : 4;
    //
    // SFR trim overflow.
    // 
    // Bits[18:18], RO/V, default = 0x0
    //
    UINTX sfrtrim_ovrfl : 1;
    //
    // SFR calib overflow.
    // 
    // Bits[19:19], RO/V, default = 0x0
    //
    UINTX sfrcalib_ovrfl : 1;
    //
    // Filter's Integrator Negative code overflow.
    // 
    // Bits[20:20], RO/V, default = 0x0
    //
    UINTX p1_ovrflw_neg : 1;
    //
    // Filter's Integrator Positive code overflow.
    // 
    // Bits[21:21], RO/V, default = 0x0
    //
    UINTX p1_ovrflw_pos : 1;
    //
    // Fine Negative code overflow.
    // 
    // Bits[22:22], RO/V, default = 0x0
    //
    UINTX fn_ovrfl_neg : 1;
    //
    // Fine Positive code overflow.
    // 
    // Bits[23:23], RO/V, default = 0x0
    //
    UINTX fn_ovrfl_pos : 1;
    //
    // Calib procedure fail flag.
    // 
    // Bits[24:24], RO/V, default = 0x0
    //
    UINTX sequence_fail : 1;
    //
    // PLL went out of lock.
    // 
    // Bits[25:25], RO/V, default = 0x0
    //
    UINTX lock_fail : 1;
    //
    // Indicator signal for narrow criteria ADPLL locking.
    // This signal behaviour is defined by 'narrow_lockwin' cfg bit
    // 
    // Bits[26:26], RO/V, default = 0x0
    //
    UINTX narrow_lock : 1;
    //
    // TDC scan test error flag.
    // 
    // Bits[27:27], RO/V, default = 0x0
    //
    UINTX tdc_scan_err : 1;
    //
    // Digital Obs out.
    // 
    // Bits[31:28], RO/V, default = 0x0
    //
    UINTX o_digtop_obs : 4;
  } Bits;
  UINTX Data;
} DFT_2_DDRPLL_STRUCT;
#endif // ASM_INC

#define SFRCONFIG_0_DDRPLL_REG                             0x0000002C
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[0:0], Unknown, default = Unknown
    //
    UINTX missing_from_register_description : 1;
    //
    // enable digmod during sfr_disable
    // 
    // Bits[1:1], RW, default = 0x0
    //
    UINTX digmode_en : 1;
    //
    // disable the lpf resistor bypass
    // 
    // Bits[2:2], RW, default = 0x0
    //
    UINTX sfrlpfres_ovrd_val : 1;
    //
    // enable the override of the lpf resistor bypass control using  sfrlpfres_ovrd_val
    // 
    // Bits[3:3], RW, default = 0x0
    //
    UINTX sfrlpfres_ovrd_sel : 1;
    //
    // set this bus to round((Frefclk / 20MHz) - 1) to allow ADPLL generate an absolute
    // timer for SFR trimming, SFR calibration, SFR on and DCO settle 
    // 
    // Bits[7:4], RW/V, default = 0x0
    //
    UINTX i_sfrtimer_coef : 4;
    //
    // SFR supply indicator. 
    // 00 - Not allowed
    // 01 - 1.2V
    // 10 - 1.25V
    // 11 - 1.35V
    // 
    // Bits[9:8], RW/V, default = 0x0
    //
    UINTX i_sfrsupplymode : 2;
    //
    // EV: multiplies SFR counters by 2x
    // 
    // Bits[10:10], RW, default = 0x0
    //
    UINTX sfrtimer_cnt2x : 1;
    //
    // EV: SFR bypass control
    // 
    // Bits[11:11], RW, default = 0x0
    //
    UINTX sfr_bypass : 1;
    //
    // EV: SFR enable value
    // 
    // Bits[12:12], RW, default = 0x0
    //
    UINTX sfren_val : 1;
    //
    // EV: SFR enable override (bypass the power up sequence)
    // 
    // Bits[13:13], RW, default = 0x0
    //
    UINTX sfren_ovrd : 1;
    //
    // EV: sfr trim override select
    // 
    // Bits[14:14], RW, default = 0x1
    //
    UINTX sfrtrim_ovrd : 1;
    //
    // EV: sfr calibration is bypassed with sfrcalib_val
    // 
    // Bits[15:15], RW, default = 0x1
    //
    UINTX sfrcalib_ovrd : 1;
    //
    // EV: sfr trim override value
    // 
    // Bits[19:16], RW, default = 0x8
    //
    UINTX sfrtrim_val : 4;
    //
    // sfr calibration initial value. Also used as override value when calib_ovrd is
    // 1 
    // 
    // Bits[23:20], RW, default = 0x8
    //
    UINTX sfrcalib_val : 4;
    //
    // Select for SFR analog monitor
    // 
    // Bits[31:24], RW, default = 0x0
    //
    UINTX sfr_monsel : 8;
  } Bits;
  UINTX Data;
} SFRCONFIG_0_DDRPLL_STRUCT;
#endif // ASM_INC

#define DFT_BIST_DDRPLL_REG                                0x00000030
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[11:0], Unknown, default = Unknown
    //
    UINTX missing_from_register_description : 12;
    //
    // HVM: this is an auto set bit (set by HW) indicating that a full fbdiv shmoo BIST
    // cycle has completed. 
    // 1'b0: BIST is either in progress or did not triggered
    // 1'b1: BIST test has completed
    // NOTE: This bit does not indicated wether the test passed/failed.
    // 
    // Bits[12:12], RO/V, default = 0x0
    //
    UINTX bist_done : 1;
    //
    // HVM: This bit indicates if the fbdiv shmoo BIST passes. Its value is valid only
    // in case 'bist_done' = 1'b1. 
    // 1'b0: test faild
    // 1'b1: test passed
    // 
    // Bits[13:13], RO/V, default = 0x1
    //
    UINTX fbdiv_shmoo_bist_flag : 1;
    //
    // Triggers another cycle of DCO calibration, and selects a more accurate coarse
    // code. 
    // 
    // Bits[14:14], RW, default = 0x1
    //
    UINTX crs_precision : 1;
    //
    // HVM: Bottom bist sweep division value.
    // 
    // Bits[22:15], RW, default = 0x0
    //
    UINTX fbdivratio_bistmin : 8;
    //
    // HVM: Top bist sweep division value.
    // 
    // Bits[30:23], RW, default = 0x0
    //
    UINTX fbdivratio_bistmax : 8;
    //
    // HVM: Triggers bist block.
    // 
    // Bits[31:31], RW, default = 0x0
    //
    UINTX bisten : 1;
  } Bits;
  UINTX Data;
} DFT_BIST_DDRPLL_STRUCT;
#endif // ASM_INC

#define CALIB_MNTR_DDRPLL_REG                              0x00000034
#ifndef ASM_INC
typedef union {
  struct {
    //
    // Missing bits not found in register description spreadsheet.
    // Bits[12:0], Unknown, default = Unknown
    //
    UINTX missing_from_register_description : 13;
    //
    // DCO coarse code.
    // 
    // Bits[19:13], RO/V, default = 0x0
    //
    UINTX o_dco_coarse_out : 7;
    //
    // TDC trim code.
    // 
    // Bits[23:20], RO/V, default = 0x7
    //
    UINTX o_tdc_trim_out : 4;
    //
    // SFR slow trim code.
    // 
    // Bits[27:24], RO/V, default = 0x8
    //
    UINTX o_sfr_trim_out : 4;
    //
    // SFR fast trim code.
    // 
    // Bits[31:28], RO/V, default = 0x8
    //
    UINTX o_sfr_calib_out : 4;
  } Bits;
  UINTX Data;
} CALIB_MNTR_DDRPLL_STRUCT;
#endif // ASM_INC


#endif // _DDRPLL_H_
