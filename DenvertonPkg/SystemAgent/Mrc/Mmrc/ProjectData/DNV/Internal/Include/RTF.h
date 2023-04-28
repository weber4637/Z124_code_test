/** @file
  File name:    RTF.h
  Input File:   avn_modmem_22nm.xlsx

  THIS FILE IS AUTO-GENERATED BY THE MSP TOOL. DO NOT CHANGE THIS CODE.

  If edits are needed in this file, they must be done via the MSP tool.

  If there is additional project-specific data required by the MSP, it
  can be placed in RTF.h, which is used for non-tool-generated
  data

  Includes register defines specific to a project.

  Copyright (c) 2005-2015 Intel Corporation. All rights reserved
  This software and associated documentation (if any) is furnished
  under a license and may only be used or copied in accordance
  with the terms of the license. Except as permitted by such
  license, no part of this software or documentation may be
  reproduced, stored in a retrieval system, or transmitted in any
  form or by any means without the express written consent of
  Intel Corporation.
**/
#ifndef _RTF_H_
#define _RTF_H_

#include "DataTypes.h"

#if USE_64_BIT_VARIABLES
#define UINTX UINT64
#else
#define UINTX UINT32
#endif

#define RTF_BMBOUND_RTF_REG                                0x00000404
#ifndef ASM_INC
typedef union {
  struct {
    //
    // When set, the BMBOUND register is locked and can no longer 
    // be modified.
    // 
    // Bits[0:0], RW1, default = 0x0
    //
    UINTX reserved : 1;
    //
    // Reserved
    // 
    // Bits[26:1], RO, default = 0x0
    //
    UINTX reserved_1 : 26;
    //
    // : 10_0000h <= address < BMBOUND route to 
    // memory. BMBOUND is compared to address[31:27], with all other 
    // address bits compared to 0.
    // 
    // Bits[31:27], RW, default = 0x8
    //
    UINTX reserved_3 : 5;
  } Bits;
  UINTX Data;
} RTF_BMBOUND_RTF_STRUCT;
#endif // ASM_INC

#define RTF_BMBOUNDHI_RTF_REG                              0x00000408
#ifndef ASM_INC
typedef union {
  struct {
    //
    // When set, the BMBOUNDHI register is locked and can no longer 
    // be modified.
    // 
    // Bits[0:0], RW1, default = 0x0
    //
    UINTX reserved : 1;
    //
    // Reserved
    // 
    // Bits[23:1], RO, default = 0x0
    //
    UINTX reserved_1 : 23;
    //
    // : 1_0000_0000h <= address < 
    // BMBOUNDHI route to memory. BMBOUND is compared to 
    // address[35:28], with all other address bits compared to 0
    // 
    // Bits[31:24], RW, default = 0x8
    //
    UINTX reserved_3 : 8;
  } Bits;
  UINTX Data;
} RTF_BMBOUNDHI_RTF_STRUCT;
#endif // ASM_INC


#endif // _RTF_H_