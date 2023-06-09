/** @file
  Header file for GPIO Lib implementation.

@copyright
 Copyright (c) 2014 - 2016 Intel Corporation. All rights reserved
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
#ifndef _GPIO_LIBRARY_H_
#define _GPIO_LIBRARY_H_

#include <Base.h>
#include <Uefi.h>
#include <Library/IoLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <PchAccess.h>
#include <GpioPinsSklLp.h>
#include <GpioPinsSklH.h>
#include <Library/GpioLib.h>
#include <Library/GpioNativeLib.h>
#include <Library/MmPciLib.h>
#include <Library/PchInfoLib.h>
#include <Library/PchCycleDecodingLib.h>
#include <Library/PchSbiAccessLib.h>
#include <IncludePrivate/PchPolicyHob.h>
#include <Pi/PiMultiPhase.h>
#include <Library/HobLib.h>

typedef struct {
  GPIO_PAD       Pad;
  GPIO_PAD_MODE  Mode;
} GPIO_PAD_NATIVE_FUNCTION;


// BIT15-0  - pad number
// BIT31-16 - group info
//   BIT23- 16 - group index
//   BIT31- 24 - chipset ID
#define PAD_INFO_MASK          0x0000FFFF
#define GROUP_INFO_POSITION    16
#define GROUP_INFO_MASK        0xFFFF0000
#define GROUP_INDEX_MASK       0x00FF0000
#define UNIQUE_ID_MASK         0xFF000000
#define UNIQUE_ID_POSITION     24

#define GPIO_PAD_DEF(Group,Pad)               (UINT32)((Group << 16) + Pad)
#define GPIO_GROUP_DEF(Index,ChipsetId)       (Index | (ChipsetId << 8))
#define GPIO_GET_GROUP_INDEX(Group)           (Group & 0xFF)
#define GPIO_GET_GROUP_FROM_PAD(Pad)          (Pad >> 16)
#define GPIO_GET_GROUP_INDEX_FROM_PAD(Pad)    GPIO_GET_GROUP_INDEX ((Pad >> 16))
#define GPIO_GET_PAD_NUMBER(Pad)              (Pad & 0xFFFF)
#define GPIO_GET_CHIPSET_ID(Pad)              (Pad >> 24)

//
// Unique ID used in GpioPad defines
//
#define GPIO_SKL_H_CHIPSET_ID       0x1
#define GPIO_SKL_LP_CHIPSET_ID      0x2

//
// Below defines are based on GPIO_CONFIG structure fields
//
#define GPIO_CONF_PAD_MODE_MASK     0xF
#define GPIO_CONF_PAD_MODE_BIT_POS  0
#define GPIO_CONF_HOST_OWN_MASK     0x3
#define GPIO_CONF_HOST_OWN_BIT_POS  0
#define GPIO_CONF_DIR_MASK          0x7
#define GPIO_CONF_DIR_BIT_POS       0
#define GPIO_CONF_INV_MASK          0x18
#define GPIO_CONF_INV_BIT_POS       3
#define GPIO_CONF_OUTPUT_MASK       0x3
#define GPIO_CONF_OUTPUT_BIT_POS    0
#define GPIO_CONF_INT_ROUTE_MASK    0x1F
#define GPIO_CONF_INT_ROUTE_BIT_POS 0
#define GPIO_CONF_INT_TRIG_MASK     0xE0
#define GPIO_CONF_INT_TRIG_BIT_POS  5
#define GPIO_CONF_RESET_MASK        0x7
#define GPIO_CONF_RESET_BIT_POS     0
#define GPIO_CONF_TERM_MASK         0x1F
#define GPIO_CONF_TERM_BIT_POS      0
#define GPIO_CONF_PADTOL_MASK       0x60
#define GPIO_CONF_PADTOL_BIT_POS    5
#define GPIO_CONF_LOCK_MASK         0x7
#define GPIO_CONF_LOCK_BIT_POS      0
#define GPIO_CONF_RXRAW_MASK        0x3
#define GPIO_CONF_RXRAW_BIT_POS     0
#define PADCFGLOCK_SOUTH_GROUP0_0   0x98
#define PADCFGLOCK_SOUTH_GROUP0_1   0xA0
#define PADCFGLOCK_SOUTH_GROUP1_0   0xA8
#define PADCFGLOCKTX_SOUTH_GROUP0_0 0x9C
#define PADCFGLOCK_NORTH_ALL_1      0x98
#define PADCFGLOCKTX_NORTH_ALL_0    0x94


//
// Structure for storing information about registers offset, community,
// maximal pad number for available groups
//
typedef struct {
  UINT32 Community;
  UINT32 PadOwnOffset;
  UINT32 HostOwnOffset;
  UINT32 GpiIsOffset;
  UINT32 GpiIeOffset;
  UINT32 GpiGpeStsOffset;
  UINT32 GpiGpeEnOffset;
  UINT32 SmiStsOffset;
  UINT32 SmiEnOffset;
  UINT32 NmiStsOffset;
  UINT32 NmiEnOffset;
  UINT32 PadCfgLockOffset;
  UINT32 PadCfgLockTxOffset;
  UINT32 PadCfgOffset;
  UINT32 PadPerGroup;
} GPIO_GROUP_INFO;

//
// If in GPIO_GROUP_INFO structure certain register doesn't exist
// it will have value equal to NO_REGISTER_FOR_PROPERTY
//
#define NO_REGISTER_FOR_PROPERTY (~0u)


/**
  This procedure is used to check if GpioPad is valid for certain chipset

  @param[in]  GpioPad             GPIO pad

  @retval TRUE                    This pin is valid on this chipset
          FALSE                   Incorrect pin
**/
BOOLEAN
GpioIsCorrectPadForThisChipset (
  IN  GPIO_PAD        GpioPad
  );


/**
  This procedure will retrieve address and length of GPIO info table

  @param[out]  GpioGroupInfoTableLength   Length of GPIO group table

  @retval Pointer to GPIO group table

**/
GPIO_GROUP_INFO*
GpioGetGroupInfoTable (
  OUT UINTN               *GpioGroupInfoTableLength
  );

/**
  This procedure will set GPIO mode

  @param[in]  GpioPad             GPIO pad
  @param[out] PadModeValue        GPIO pad mode value

  @retval EFI_SUCCESS             The function completed successfully
  @retval EFI_INVALID_PARAMETER   Invalid group or pad number
**/
EFI_STATUS
SetGpioPadMode (
  IN GPIO_PAD                GpioPad,
  IN GPIO_PAD_MODE           PadModeValue
  );

/**
  This procedure will get GPIO mode

  @param[in]  GpioPad             GPIO pad
  @param[out] PadModeValue        GPIO pad mode value

  @retval EFI_SUCCESS             The function completed successfully
  @retval EFI_INVALID_PARAMETER   Invalid group or pad number
**/
EFI_STATUS
GetGpioPadMode (
  IN  GPIO_PAD                 GpioPad,
  OUT GPIO_PAD_MODE            *PadModeValue
  );

/**
  This function checks if GPIO pin is a GSPI chip select pin

  @param[in]  GpioPad             GPIO pad
  @param[in]  PadMode             GPIO pad mode

  @retval TRUE                    Pin is in GPIO mode
          FALSE                   Pin is in native mode
**/
BOOLEAN
GpioIsGpioPadAGSpiCsbPin (
  IN  GPIO_PAD        GpioPad,
  IN  GPIO_PAD_MODE   PadMode
  );

/**
  This function checks if GPIO pin is a SataDevSlp pin

  @param[in]  GpioPad             GPIO pad
  @param[in]  PadMode             GPIO pad mode

  @retval TRUE                    Pin is in GPIO mode
          FALSE                   Pin is in native mode
**/
BOOLEAN
GpioIsPadASataDevSlpPin (
  IN  GPIO_PAD        GpioPad,
  IN  GPIO_PAD_MODE   PadMode
  );
/**
  This procedure will retrieve address and length of GPIO info table

  @param[in]  GRPIO_GROUP Group
  @retval Max Dw register Offset

**/
UINTN
GpioGetMaxDwOffsetFromGroup(
  IN GPIO_GROUP GpioGroup);
#endif // _GPIO_LIBRARY_H_
