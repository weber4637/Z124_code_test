/**
  This file contains an 'Intel Peripheral Driver' and uniquely
  identified as "Intel Reference Module" and is
  licensed for Intel CPUs and chipsets under the terms of your
  license agreement with Intel or your vendor.  This file may
  be modified by the user, subject to additional terms of the
  license agreement
**/
/**

Copyright (c)  2014 - 2015 Intel Corporation. All rights reserved
This software and associated documentation (if any) is furnished
under a license and may only be used or copied in accordance
with the terms of the license. Except as permitted by such
license, no part of this software or documentation may be
reproduced, stored in a retrieval system, or transmitted in any
form or by any means without the express written consent of
Intel Corporation.

@file:
  MeTypeLib.c

@brief:
  Me Type Lib implementation.

**/
#include <Uefi.h>
#include <Library/UefiLib.h>
#include <PiDxe.h>
#include <Library/IoLib.h>
#include <Library/PciExpressLib.h>
#include "Library/PciLib.h"
#include <Library/DebugLib.h>
#include "MeAccess.h"
#include "PchAccess.h"
#include "HeciRegs.h"
#include "Library/MeTypeLib.h"
#include "MeTypeLibInternal.h"
#include "Sps.h"
#if defined(AMT_SUPPORT) && AMT_SUPPORT
#include "MeBiosPayloadHob.h"
#include <Library/HobLib.h>
#endif // AMT_SUPPORT


/**

  @brief
  Get detected Me FW type

  @param[in] None

    @retval On Error:                ME_TYPE_UNDEF
    @retval On Success:              ME_TYPE_SPS
    @retval On Success:              ME_TYPE_AMT

**/
ON_BOARD_ME_TYPE
GetOnBoardMeType (VOID)
{
  ON_BOARD_ME_TYPE  retVal = ME_TYPE_UNDEF;
  HECI_FWS_REGISTER MeHfs;

  MeHfs.ul = HeciPciRead32(SPS_REG_MEFS1);

  if (MeHfs.r.CurrentState == ME_STATE_DFX_FW) {

    retVal = ME_TYPE_DFX;
    DEBUG ((EFI_D_ERROR, "HECI: GetOnBoardMeType() detected  ME_TYPE_DFX.\n"));

  } else {

    switch (MeHfs.r.MeOperationMode) {
      case MEFS1_OPMODE_SPS:
        retVal = ME_TYPE_SPS;
        break;
      case MEFS1_OPMODE_IGNITION:
        DEBUG ((EFI_D_INFO, "HECI: Ignition MeOperationMode\n"));
        break;
      default:
        if (MeHfs.r.CurrentState > ME_STATE_RESET) {
          retVal = ME_TYPE_AMT;
        }
    }
  }
  if (retVal == ME_TYPE_UNDEF) {
    DEBUG ((EFI_D_ERROR, "HECI: ME type not recognized (MEFS1: 0x%08X)\n", MeHfs.ul));
  }
  return retVal;
}

/**

  @brief
  Get detected Me FW type

  @param[in] None

    @retval MeType

**/
UINT8
MeTypeGet (VOID)
{
  return (UINT8)GetOnBoardMeType();
}

/**

  @brief
  Checks if Me FW is DFX type

  @param[in] None

    @retval On Error:                FALSE
    @retval On Success:              FALSE or TRUE

**/
BOOLEAN MeTypeIsDfx (VOID)
{
  return (GetOnBoardMeType () == ME_STATE_DFX_FW);
}

#if defined(AMT_SUPPORT) && AMT_SUPPORT
/**

  @brief
  Checks if Me FW is AMT type

  @param[in] None

    @retval On Error:                FALSE
    @retval On Success:              FALSE or TRUE

**/
BOOLEAN MeTypeIsAmt (VOID)
{
  return (GetOnBoardMeType () == ME_TYPE_AMT);
}

/**

  @brief
  Checks if Me FW is AMT type and Me is ready

  @param[in] None

    @retval On Error:                FALSE
    @retval On Success:              FALSE or TRUE

**/
BOOLEAN MeTypeIsAmtReady (VOID)
{
  BOOLEAN retVal = FALSE;

  if (GetOnBoardMeType () == ME_TYPE_AMT) {
    HECI_FWS_REGISTER MeHfs;

    MeHfs.ul = HeciPciRead32(SPS_REG_MEFS1);
    retVal = (MeHfs.r.FwInitComplete != 0);
  }
  return retVal;
}


/**

  @brief
  Checks if Me FW is Corporate AMT type

  @param[in] None

    @retval On Error:                FALSE
    @retval On Success:              FALSE or TRUE

**/
BOOLEAN MeTypeIsCorporateAmt (VOID)
{
 BOOLEAN retVal = MeTypeIsAmt();

 if (retVal) {
  ME_BIOS_PAYLOAD_HOB     *MbpHob = NULL;
  MbpHob = GetFirstGuidHob (&gMeBiosPayloadHobGuid);
  if ((MbpHob == NULL) ||
      (MbpHob->MeBiosPayload.FwPlatType.RuleData.Fields.IntelMeFwImageType != INTEL_ME_CORPORATE_FW)) {
      retVal = FALSE;
    }
 }

 return retVal;
}

/**

  @brief
  Checks if Me FW is AMT type and Me is ready

  @param[in] None

    @retval On Error:                FALSE
    @retval On Success:              FALSE or TRUE

**/
BOOLEAN MeTypeIsCorporateAmtReady (VOID)
{
 BOOLEAN retVal = MeTypeIsAmtReady();

 if (retVal) {
  ME_BIOS_PAYLOAD_HOB     *MbpHob = NULL;
  MbpHob = GetFirstGuidHob (&gMeBiosPayloadHobGuid);
  if ((MbpHob == NULL) ||
      (MbpHob->MeBiosPayload.FwPlatType.RuleData.Fields.IntelMeFwImageType != INTEL_ME_CORPORATE_FW)) {
      retVal = FALSE;
    }
 }

 return retVal;
}
#endif // AMT_SUPPORT

/**

  @brief
  Checks if Me FW is SPS type

  @param[in] None

    @retval On Error:                FALSE
    @retval On Success:              FALSE or TRUE

**/
BOOLEAN MeTypeIsSps (VOID)
{
  return (GetOnBoardMeType () == ME_TYPE_SPS);
}

/**

  @brief
  Checks if Me FW is SPS type and Me is ready

  @param[in] None

    @retval On Error:                FALSE
    @retval On Success:              FALSE or TRUE

**/
BOOLEAN MeTypeIsSpsReady (VOID)
{
  BOOLEAN retVal = FALSE;

  if (GetOnBoardMeType () == ME_TYPE_SPS) {
   HECI_FWS_REGISTER MeHfs;

   MeHfs.ul = HeciPciRead32(SPS_REG_MEFS1);
   retVal = (MeHfs.r.FwInitComplete != 0);
  }

  return retVal;
}

/**

  @brief
  Checks if Me FW is SPS type and Me is ready

  @param[in] None

    @retval On Error:                FALSE
    @retval On Success:              FALSE or TRUE

**/
BOOLEAN MeTypeIsSpsInRecovery (VOID)
{
  BOOLEAN SpsInRecovery = FALSE;

  if (MeTypeIsSps()) {
    HECI_FWS_REGISTER MeFirmwareStatus;

    MeFirmwareStatus.ul = HeciPciRead32 (R_FWSTATE);
    if (MeFirmwareStatus.r.CurrentState == ME_STATE_RECOVERY) {
      SpsInRecovery = TRUE;
    }
  }

  return SpsInRecovery;
}

/**

  @brief
  Checks if Me FW is SPS type and Me is NM

  @param[in] None

    @retval On Error:                FALSE
    @retval On Success:              FALSE or TRUE

**/
BOOLEAN MeTypeIsSpsNm (VOID)
{
  BOOLEAN retVal = FALSE;

  if (GetOnBoardMeType () == ME_TYPE_SPS) {
   SPS_NMFS NmFs;

   NmFs.UInt32 = Heci2PciRead32(SPS_REG_NMFS);
   if (NmFs.Bits.NmEnabled) {
     retVal = TRUE;
   }
  }

  return retVal;
}

/**

  @brief
  Displays debug information about detected Me FW type

  @param[in] Leading debug string

  @retval none

**/
VOID MeTypeShowDebug (CHAR16 *dispString)
{
  ON_BOARD_ME_TYPE  MeType = GetOnBoardMeType();

  if (dispString == NULL) {
    dispString = L"MeTypeShowDebug()";
  }

  DEBUG ((EFI_D_INFO, "[HECI] %s (MeType is ", dispString));
  switch (MeType) {
  case ME_TYPE_UNDEF:
    DEBUG ((EFI_D_INFO, "ME_TYPE_UNDEF"));
  break;
  case ME_TYPE_SPS:
    DEBUG ((EFI_D_INFO, "ME_TYPE_SPS"));
  break;
  case ME_TYPE_AMT:
    DEBUG ((EFI_D_INFO, "ME_TYPE_AMT"));
  break;
  case ME_TYPE_DFX:
    DEBUG ((EFI_D_INFO, "ME_TYPE_DFX"));
  break;
  default:
    DEBUG ((EFI_D_INFO, "UNKNOWN"));;
  }
  DEBUG ((EFI_D_INFO, ")\n"));
}
