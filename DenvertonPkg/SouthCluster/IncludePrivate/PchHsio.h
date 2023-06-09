/** @file
  Header file with all common HSIO information
 
@copyright
 Copyright (c) 2013 - 2015 Intel Corporation. All rights reserved
 This software and associated documentation (if any) is furnished
 under a license and may only be used or copied in accordance
 with the terms of the license. Except as permitted by the
 license, no part of this software or documentation may be
 reproduced, stored in a retrieval system, or transmitted in any
 form or by any means without the express written consent of
 Intel Corporation.
 This file contains an 'Intel Peripheral Driver' and is uniquely
 identified as "Intel Reference Module" and is licensed for Intel
 CPUs and chipsets under the terms of your license agreement with
 Intel or your vendor. This file may be modified by the user, subject
 to additional terms of the license agreement.

@par Specification Reference:
**/
#ifndef _PCH_HSIO_H_
#define _PCH_HSIO_H_

#define PCH_HSIO_SKU_SKL                  0x01

#define PCH_LANE_OWN_COMMON               0x10
#define PCH_LANE_BDCAST                   0x11

#define PCH_HSIO_LANE_GROUP_NO            0x09
#define PCH_HSIO_LANE_GROUP_COMMON_LANE   0x00
#define PCH_HSIO_LANE_GROUP_PCIE          0x01
#define PCH_HSIO_LANE_GROUP_DMI           0x02
#define PCH_HSIO_LANE_GROUP_GBE           0x03
#define PCH_HSIO_LANE_GROUP_USB3          0x04
#define PCH_HSIO_LANE_GROUP_SATA          0x05
#define PCH_HSIO_LANE_GROUP_SSIC          0x06

#define PCH_MODPHY0_LP_LOS1_LANE_START    0x00
#define PCH_MODPHY0_LP_LOS1_LANE_END      0x05
#define PCH_MODPHY1_LP_LOS1_LANE_START    0x06
#define PCH_MODPHY1_LP_LOS1_LANE_END      0x07
#define PCH_MODPHY1_LP_LOS2_LANE_START    0x00
#define PCH_MODPHY1_LP_LOS2_LANE_END      0x01
#define PCH_MODPHY2_LP_LOS2_LANE_START    0x02
#define PCH_MODPHY2_LP_LOS2_LANE_END      0x07

#define PCH_MODPHY1_H_LOS1_LANE_START     0x00
#define PCH_MODPHY1_H_LOS1_LANE_END       0x07
#define PCH_MODPHY1_H_LOS2_LANE_START     0x08
#define PCH_MODPHY1_H_LOS2_LANE_END       0x0F
#define PCH_MODPHY2_H_LOS3_LANE_START     0x10
#define PCH_MODPHY2_H_LOS3_LANE_END       0x13

/**
  PCH SBI HSIO table data structure
**/
typedef struct {
  UINT32       PortId;
  UINT32       Value;
  UINT16       Offset;
  UINT8        LanePhyMode;
} PCH_SBI_HSIO_TABLE_STRUCT;


#define PMC_DATA_SBI_CMD_SIZE   ((12/sizeof(UINT16))-1)
#define PMC_DATA_DELAY_CMD_SIZE ((4/sizeof(UINT16))-1)

// Commands specified command table and processed by the PMC & it's HW accelerator
typedef enum {
  SendSBIPosted = 0x0, // Perform a SBI Write & wait for result
  SendSBINonPosted,    // Perform a SBI Write & ignore return result (Not Supported in HW)
  DoDelay,             // PMC Inserts Delay when command detected
  EndStruct = 0x7     // No-op Command indicating end of list
} PHY_COMMANDS;

/**
PCH HSIO PMC XRAM Header
**/
typedef struct {
  UINT16  Word0;
  UINT16  Word1;
  UINT16  Word2;
  UINT16  Word3;
  UINT16  Word4;
  UINT16  Word5;
  UINT16  Word6;
  UINT16  Word7;
  UINT16  Word8;
  UINT16  Word9;
  UINT16  Word10;
  UINT16  Word11;
  UINT16  Word12;
  UINT16  Word13;
  UINT16  Word14;
  UINT16  Word15;
} PCH_SBI_HSIO_HDR_TBL;

/**
PCH HSIO PMC XRAM Data
**/
typedef struct {
  UINT8 Command : 3;
  UINT8 Size : 5;
  UINT8 Pid;
  UINT8 OpCode; //PrivateControlWrite
  UINT8 Bar; //0
  UINT8 Fbe; //First Byte Enable  : 0x0F
  UINT8 Fid; //0
  UINT16 Offset;
  UINT32 Value;
} PCH_SBI_HSIO_CMD_TBL;

/**
PCH HSIO Delay XRAM Data
**/
typedef struct {
  UINT8 Command : 3;
  UINT8 Size : 5;
  UINT8 DelayPeriod; //(00h = 1us, 01h = 10us, 02h = 100us, ..., 07h = 10s; others reserved)
  UINT8 DelayCount; //(0 - 255); total delay = Delay period * Delay count
  UINT8 Padding;
} PCH_DELAY_HSIO_CMD_TBL;

typedef enum {
  Delay1us = 0x0,
  Delay10us,
  Delay100us,
  Delay1ms,
  Delay10ms,
  Delay100ms,
  Delay1s,
  Delay10s
} DELAY;

/**
PCH PCIE PLL SSC Data
**/
#define MAX_PCIE_PLL_SSC_PERCENT  20
#define PCIE_PLL_SSC_AUTO         0xFF

#include <IncludePrivate/PchHHsioAx.h>

#endif //_PCH_HSIO_H_

