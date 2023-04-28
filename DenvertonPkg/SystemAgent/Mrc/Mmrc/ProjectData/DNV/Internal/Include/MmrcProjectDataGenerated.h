/** @file
  File name:    MmrcProjectDataGenerated.h
  Input File:   DNV_MRC.xlsx

  THIS FILE IS AUTO-GENERATED BY THE MSP TOOL. DO NOT CHANGE THIS CODE.

  If edits are needed in this file, they must be done via the MSP tool.

  If there is additional project-specific data required by the MSP, it
  can be placed in MmrcProjectData.h, which is used for non-tool-generated
  data

  This file contains data structures for a particular piece of silicon.

  Copyright (c) 2005-2018 Intel Corporation. All rights reserved
  This software and associated documentation (if any) is furnished
  under a license and may only be used or copied in accordance
  with the terms of the license. Except as permitted by such
  license, no part of this software or documentation may be
  reproduced, stored in a retrieval system, or transmitted in any
  form or by any means without the express written consent of
  Intel Corporation.
**/
#ifndef _MMRCPROJECTDATAGENERATED_H_
#define _MMRCPROJECTDATAGENERATED_H_

#include "MmrcData.h"

extern char *CapsuleStrings[];
//
// Invalid value for a Blueprint define
//
#define INVALID_BLUEPRINT_DEFINE_VALUE                     0xDEADBEEF
//
// Blueprint project defines for BLUEPRINT_DNV
//
#define DEF_0_BLUEPRINT_DNV                                0 // Definition 0
#define DEF_1_BLUEPRINT_DNV                                1 // Definition 1
#define DEF_4_BLUEPRINT_DNV                                4 // Definition 4
#define DEF_5_BLUEPRINT_DNV                                5 // Definition 5

#if MAX_BLUEPRINTS > 1
  extern UINT32 DEF_0_GENERATED[MAX_BLUEPRINTS];
  extern UINT32 DEF_1_GENERATED[MAX_BLUEPRINTS];
  extern UINT32 DEF_4_GENERATED[MAX_BLUEPRINTS];
  extern UINT32 DEF_5_GENERATED[MAX_BLUEPRINTS];
  #define DEF_0 DEF_0_GENERATED[MrcData->MspData.CurrentBlueprint]
  #define DEF_1 DEF_1_GENERATED[MrcData->MspData.CurrentBlueprint]
  #define DEF_4 DEF_4_GENERATED[MrcData->MspData.CurrentBlueprint]
  #define DEF_5 DEF_5_GENERATED[MrcData->MspData.CurrentBlueprint]
#else
  extern UINT32 DEF_0_GENERATED;
  extern UINT32 DEF_1_GENERATED;
  extern UINT32 DEF_4_GENERATED;
  extern UINT32 DEF_5_GENERATED;
  #define DEF_0 DEF_0_GENERATED
  #define DEF_1 DEF_1_GENERATED
  #define DEF_4 DEF_4_GENERATED
  #define DEF_5 DEF_5_GENERATED
#endif

#endif // _MMRCPROJECTDATAGENERATED_H_