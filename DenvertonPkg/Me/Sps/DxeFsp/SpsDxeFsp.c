/**

Copyright (c) 2019 - 2021, Intel Corporation.

This source code and any documentation accompanying it ("Material") is furnished
under license and may only be used or copied in accordance with the terms of that
license.  No license, express or implied, by estoppel or otherwise, to any
intellectual property rights is granted to you by disclosure or delivery of these
Materials.  The Materials are subject to change without notice and should not be
construed as a commitment by Intel Corporation to market, license, sell or support
any product or technology.  Unless otherwise provided for in the license under which
this Material is provided, the Material is provided AS IS, with no warranties of
any kind, express or implied, including without limitation the implied warranties
of fitness, merchantability, or non-infringement.  Except as expressly permitted by
the license for the Material, neither Intel Corporation nor its suppliers assumes
any responsibility for any errors or inaccuracies that may appear herein.  Except
as expressly permitted by the license for the Material, no part of the Material
may be reproduced, stored in a retrieval system, transmitted in any form, or
distributed by any means without the express written consent of Intel Corporation.


  @file SpsDxeFsp.c

  This driver implements the Payload phase of SPS support for FSP.
  It is not intended to use in pure UEFI environment.

**/
#include <Base.h>
#include <Uefi.h>
#include <PiDxe.h>

#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DxeServicesTableLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/IoLib.h>
#include <Library/MemoryAllocationLib.h>

#include <Library/DebugLib.h>
#include <Library/PrintLib.h>

#include <Library/DebugLib.h>
#include <Library/BaseLib.h>
#include <Library/MeTypeLib.h>

#include <Protocol/HeciProtocol.h>
#include <Protocol/SpsFspHmrfpoProtocol.h>

#include <Sps.h>
#include <HeciRegs.h>
#include <MeAccess.h>

/******************************************************************************
 * Function prototypes
 */
#pragma pack (1)
typedef union {
  MKHI_MSG_HMRFPO_LOCK_REQ Req;
  MKHI_MSG_HMRFPO_LOCK_RSP Rsp;
} HECI_MSG_HMRFPO_LOCK;
#pragma pack ()

#pragma pack (1)
typedef union {
  MKHI_MSG_HMRFPO_ENABLE_REQ Req;
  MKHI_MSG_HMRFPO_ENABLE_RSP Rsp;
} HECI_MSG_HMRFPO_ENABLE;
#pragma pack ()

#pragma pack (1)
typedef union {
  MKHI_MSG_GET_FW_VERSION_REQ Req;
  MKHI_MSG_GET_FW_VERSION_RSP Rsp;
} HECI_MSG_HMRFPO_FW_VERSIONS;
#pragma pack ()

/******************************************************************************
 * Variables
 */
HECI_PROTOCOL         *gHeci1 = NULL;

// global to store Nonce value read by ME HMRFPO_LOCK request
UINT64                gNonceValue = 0;

/******************************************************************************
 * Functions
 */

/**
  Reads HECI MBar for given HECI function

  @param[in]     HECI          Heci Number to read MBar

  @return HECI memory bar, on error returns 0
**/
UINTN
ReadHeciMBar (
  IN     ME_DEVICE      HeciNumber
  )
{
  UINT8    HeciFunction;
  union {
    UINT64   QWord;
    struct {
      UINT32 DWordL;
      UINT32 DWordH;
    } Bits;
  } Mbar;

  switch (HeciNumber) {
    case HECI1:
      HeciFunction = HECI_FUNCTION_NUMBER;
      break;
    case HECI2:
      HeciFunction = HECI2_FUNCTION_NUMBER;
      break;
    default:
      ASSERT (FALSE);
      return 0;
  }

  Mbar.QWord = 0;
  Mbar.Bits.DWordL = MmioRead32 (
                       MmPciBase (
                         ME_BUS,
                         ME_DEVICE_NUMBER,
                         HeciFunction
                         ) + R_HECIMBAR
                       );


   if (Mbar.Bits.DWordL == 0xFFFFFFFF) {
    return 0;
  }

  Mbar.Bits.DWordL &= 0xFFFFFFF0; // clear address type bits
  Mbar.Bits.DWordH = MmioRead32 (
                       MmPciBase (
                         ME_BUS,
                         ME_DEVICE_NUMBER,
                         HeciFunction
                         ) + R_HECIMBAR + 4
                       );

  return (UINTN) Mbar.QWord;
}

/**
  Clear HECI Buffer
  HECI1_DEVICE ... HECI3_DEVICE

  @param[in]     HECI          Heci Number to clear
**/
VOID
HeciBufferClear (
  IN     ME_DEVICE      HeciToClear
  )
{
  UINT8                               i;
  UINTN                               HeciMBar;
  volatile HECI_HOST_CONTROL_REGISTER *HeciRegHCsr;
  UINT32                              CBLength;

  HeciMBar = ReadHeciMBar (HeciToClear);
  if (HeciMBar == 0) {
    return;
  }

  HeciRegHCsr = (HECI_HOST_CONTROL_REGISTER*) (HeciMBar + H_CSR);
  CBLength = HeciRegHCsr->r.H_CBD; // Grab Circular Buffer length
  HeciRegHCsr = (HECI_HOST_CONTROL_REGISTER*) (HeciMBar + H_CB_WW);
  DEBUG ((DEBUG_ERROR, "%a (): HeciRegHCsr (0x%x) ->  0x%x\n", HeciRegHCsr, HeciRegHCsr->ul));
  for (i = 0; i < CBLength; i++) {
    HeciRegHCsr->ul = 0;
  }
}

/** Procedure to send HMRFPO_LOCK HECI Request

    @return EFI_STATUS is returned.
*/
EFI_STATUS
Hmrfpo_Fsp_Lock (
  VOID
  )
{
  EFI_STATUS Status;
  HECI_MSG_HMRFPO_LOCK HeciMsgLock;
  UINT32               RspLen;

  DEBUG ((DEBUG_INFO, "[SPS_FSP] Sending HMRFPO_LOCK, MEFS1: 0x%08X\n",
    HeciPciRead32 (SPS_REG_MEFS1)));

  if (gHeci1 == NULL) {
    ASSERT (gHeci1 != NULL);
    return EFI_DEVICE_ERROR;
  }

  // Construct HECI HMRFPO_LOCK request
  ZeroMem (&HeciMsgLock, sizeof (HeciMsgLock));
  HeciMsgLock.Req.Mkhi.Data = 0x00000205;

  // Call HMRFPO message: lock
  RspLen = sizeof (HeciMsgLock.Rsp);
  Status = gHeci1->SendwACK (
    HECI1_DEVICE,
    (UINT32*)&(HeciMsgLock.Req),
    sizeof (HeciMsgLock.Req),
    &RspLen, SPS_CLIENTID_BIOS,
    SPS_CLIENTID_ME_MKHI
    );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "[SPS_FSP] HMRFPO_LOCK send failed (%r)\n", Status));
    HeciMsgLock.Rsp.Nonce = 0;
    HeciBufferClear (HECI1);
    return EFI_UNSUPPORTED;
  }

  if (HeciMsgLock.Rsp.Mkhi.Data != 0x00008205) {
    DEBUG ((DEBUG_ERROR, "[SPS_FSP] ERROR: Invalid HMRFPO_LOCK response (MKHI: 0x%08X)\n",
      HeciMsgLock.Rsp.Mkhi.Data));
    HeciMsgLock.Rsp.Nonce = 0;
    HeciBufferClear (HECI1);
    return EFI_UNSUPPORTED;
  }

  if (HeciMsgLock.Rsp.Status != 0) {
    DEBUG ((DEBUG_ERROR, "[SPS_FSP] ERROR: HMRFPO_LOCK failed (cause: %d)\n",
      HeciMsgLock.Rsp.Status));
    HeciMsgLock.Rsp.Nonce = 0;
    HeciBufferClear (HECI1);
    return EFI_UNSUPPORTED;
  }

  if (gNonceValue == 0) {
     gNonceValue = HeciMsgLock.Rsp.Nonce;
     DEBUG ((DEBUG_INFO, "[SPS_FSP] Got Nonce\n"));
  }
  DEBUG ((DEBUG_INFO, "[SPS_FSP] HMRFPO_LOCK reports success\n"));
  HeciMsgLock.Rsp.Nonce = 0;
  HeciBufferClear (HECI1);

  return EFI_SUCCESS;
} // Hmrfpo_Fsp_Lock ()

/**
  Function which implements SpsFspHmrfpo Protocol Enable function

  @param[in] EnabledData  Enabled region description

  @return EFI_STATUS is returned.
*/
EFI_STATUS
Hmrfpo_Fsp_Enable (
  OUT SPS_FSP_HMRFPO_ENABLE_DATA *EnabledData
  )
{
  EFI_STATUS             Status;
  HECI_MSG_HMRFPO_ENABLE HeciMsgEnable;
  UINT32                 RspLen;
  UINT8                  Tries;

  DEBUG ((DEBUG_INFO, "[SPS_FSP] Sending HMRFPO_ENABLE, MEFS1: 0x%08X\n",
    HeciPciRead32 (SPS_REG_MEFS1) ));

  if (gHeci1 == NULL) {
    ASSERT (gHeci1 != NULL);
    return EFI_DEVICE_ERROR;
  }

  Status = EFI_DEVICE_ERROR;
  HeciMsgEnable.Rsp.FactoryBase = 0;
  HeciMsgEnable.Rsp.FactoryLimit = 0;
  HeciMsgEnable.Rsp.Mkhi.Data = 0;

  //
  // We are required to handle 3 retries for HMRFPO_LOCK.
  //
  for (Tries = 3; Tries--; ) {
    // Construct HMRFPO_ENABLE request message
    ZeroMem (&HeciMsgEnable, sizeof (HeciMsgEnable));

    HeciMsgEnable.Req.Mkhi.Data = 0x00000105;
    HeciMsgEnable.Req.Nonce = gNonceValue;

    RspLen = sizeof (HeciMsgEnable.Rsp);
    Status = gHeci1->SendwACK (
      HECI1_DEVICE,
      (UINT32*)&(HeciMsgEnable.Req),
      sizeof (HeciMsgEnable.Req),
      &RspLen,
      SPS_CLIENTID_BIOS,
      SPS_CLIENTID_ME_MKHI
      );
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "[SPS_FSP] ERROR: HMRFPO_ENABLE sending failed (%r)\n",Status));
    } else if (HeciMsgEnable.Rsp.Mkhi.Data != 0x00008105) {
      DEBUG ((DEBUG_ERROR, "[SPS_FSP] ERROR: Invalid HMRFPO_ENABLE response (MKHI: 0x%08X)\n",
        HeciMsgEnable.Rsp.Mkhi.Data));
      continue;
    } else if (HeciMsgEnable.Rsp.Status != 0) {
      DEBUG ((DEBUG_ERROR, "[SPS_FSP] ERROR: HMRFPO_ENABLE refused (cause: %d)\n",
        HeciMsgEnable.Rsp.Status));
      Status = EFI_UNSUPPORTED;
      break;
    }
  }
  if ((!EFI_ERROR (Status)) && (EnabledData != NULL)) {
    EnabledData->FactoryBase = HeciMsgEnable.Rsp.FactoryBase;
    EnabledData->FactoryLimit = HeciMsgEnable.Rsp.FactoryLimit;
  }
  DEBUG ((DEBUG_INFO, "[SPS_FSP] HMRFPO_ENABLE reports %r. (Tries = %d)\n", Status, Tries));
  HeciMsgEnable.Req.Nonce = 0;
  HeciBufferClear (HECI1);

  return Status;
} // Hmrfpo_Fsp_Enable ()


/** Procedure to send HMRFPO_RESET HECI Request

    Please note: HmrfpoReset message make ME to reset itself
    - this means that this is highly probable that this function return fail (timeout occurs).

    Please refer to ME-Bios spec. for more details.

    @return EFI_STATUS is returned.
*/
EFI_STATUS
Hmrfpo_Fsp_MeReset (
  VOID
  )
{
  return EFI_UNSUPPORTED;
} // Hmrfpo_Fsp_MeReset ()

/** Function set the ME versions red by MKHI messages

  @param[in,out]  SpsFspHmrfpoProtocol -
  @return         EFI_STATUS
*/
EFI_STATUS
RetrieveMeVersions (
  IN OUT SPS_FSP_HMRFPO_PROTOCOL *SpsFspHmrfpoProtocol
  )
{
  UINT32                      RspLen;
  EFI_STATUS                  Status;
  HECI_MSG_HMRFPO_FW_VERSIONS HeciMsgFwVersions;

  //
  // Send MKHI_GET_FW_VERSION request to ME
  //
  DEBUG ((DEBUG_INFO, "[SPS_FSP] Sending MKHI_GET_FW_VERSION, expect success\n"));

  Status = gBS->LocateProtocol (&gHeciProtocolGuid, NULL, &gHeci1);
  if (EFI_ERROR (Status))  {
    DEBUG ((DEBUG_ERROR, "[SPS_FSP] ERROR: Cannot locate HECI protocol (%r)\n", Status));
    ASSERT_EFI_ERROR (Status);
    return Status;
  }

  // Construct MKHI_GET_FW_VERSION request
  ZeroMem (&HeciMsgFwVersions, sizeof (HeciMsgFwVersions));

  HeciMsgFwVersions.Req.Mkhi.Fields.GroupId = MKHI_GRP_GEN;
  HeciMsgFwVersions.Req.Mkhi.Fields.Command = MKHI_CMD_GET_FW_VERSION;

  RspLen = sizeof (HeciMsgFwVersions.Rsp);
  Status = gHeci1->SendwACK (
    HECI1_DEVICE,
    (UINT32*)&(HeciMsgFwVersions.Req),
    sizeof (HeciMsgFwVersions.Req),
    &RspLen,
    SPS_CLIENTID_BIOS,
    SPS_CLIENTID_ME_MKHI);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "[SPS_FSP] ERROR: Cannot send MKHI_GET_FW_VERSION (%r)\n",Status));
  } if (!((HeciMsgFwVersions.Rsp.Mkhi.Fields.IsResponse) &&
    (MKHI_GRP_GEN == HeciMsgFwVersions.Rsp.Mkhi.Fields.GroupId) &&
    (MKHI_CMD_GET_FW_VERSION == HeciMsgFwVersions.Rsp.Mkhi.Fields.Command))) {
    DEBUG ((DEBUG_ERROR, "[SPS_FSP] ERROR: Invalid MKHI_GET_FW_VERSION response (MKHI: 0x%X)\n",
      HeciMsgFwVersions.Rsp.Mkhi.Data));
    Status = EFI_DEVICE_ERROR;
  } else {
    // no errors - copy data from HECI message

    // Active operational firmware
    SpsFspHmrfpoProtocol->ActiveFwVersion.Minor  = HeciMsgFwVersions.Rsp.Act.Minor;
    SpsFspHmrfpoProtocol->ActiveFwVersion.Major  = HeciMsgFwVersions.Rsp.Act.Major;
    SpsFspHmrfpoProtocol->ActiveFwVersion.Build  = HeciMsgFwVersions.Rsp.Act.Build;
    SpsFspHmrfpoProtocol->ActiveFwVersion.Patch  = HeciMsgFwVersions.Rsp.Act.Patch;
    // Recovery firmware
    SpsFspHmrfpoProtocol->RecoveryFwVersion.Minor  = HeciMsgFwVersions.Rsp.Rcv.Minor;
    SpsFspHmrfpoProtocol->RecoveryFwVersion.Major  = HeciMsgFwVersions.Rsp.Rcv.Major;
    SpsFspHmrfpoProtocol->RecoveryFwVersion.Build  = HeciMsgFwVersions.Rsp.Rcv.Build;
    SpsFspHmrfpoProtocol->RecoveryFwVersion.Patch  = HeciMsgFwVersions.Rsp.Rcv.Patch;

    //
    // ME in dual-image configuration provides the version of the backup image yet
    //
    if (RspLen > sizeof (HeciMsgFwVersions.Rsp) - sizeof (HeciMsgFwVersions.Rsp.Bkp)) {
      // Backup operational firmware (optional)
      SpsFspHmrfpoProtocol->BackupFwVersion.Minor  = HeciMsgFwVersions.Rsp.Bkp.Minor;
      SpsFspHmrfpoProtocol->BackupFwVersion.Major  = HeciMsgFwVersions.Rsp.Bkp.Major;
      SpsFspHmrfpoProtocol->BackupFwVersion.Build  = HeciMsgFwVersions.Rsp.Bkp.Build;
      SpsFspHmrfpoProtocol->BackupFwVersion.Patch  = HeciMsgFwVersions.Rsp.Bkp.Patch;
    }
  }

  return Status;
} // RetrieveMeVersions ()
 
/**
    SPS DXE FSP driver entry point.
    @param ImageHandle - handle to SPS DXE image
    @param pSystemTable - pointer to system table
    @retval EFI_STATUS.
**/
EFI_STATUS
SpsDxeFspEntryPoint (
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *pSystemTable
  )
{
  EFI_STATUS              Status;
  SPS_FSP_HMRFPO_PROTOCOL *SpsFspHmrfpoProtocol;

  DEBUG ((EFI_D_INFO, "[SPS_FSP] DXE FSP PHASE\n"));

  // Check if ME SPS firmware is running
  if (!MeTypeIsSps ()) {
    DEBUG ((DEBUG_ERROR, "[SPS_FSP] Non SPS firmware in ME. Driver will be unloaded. (MEFS1: 0x%08X)\n",
      HeciPciRead32 (SPS_REG_MEFS1)));
    return EFI_UNSUPPORTED;
  }

  SpsFspHmrfpoProtocol = AllocateZeroPool (sizeof (SPS_FSP_HMRFPO_PROTOCOL));
  if (SpsFspHmrfpoProtocol == NULL) {
    DEBUG ((EFI_D_ERROR, "[SPS_FSP] ERROR: Memory allocation failed. Driver will be unloaded.\n"));
    ASSERT (SpsFspHmrfpoProtocol != NULL);
    return EFI_OUT_OF_RESOURCES;
  }

  Status = RetrieveMeVersions (SpsFspHmrfpoProtocol);
  if (EFI_ERROR (Status))  {
    DEBUG ((DEBUG_ERROR, "[SPS_FSP] ERROR: Can't contact SPS (%r)\n", Status));
  } else {
    SpsFspHmrfpoProtocol->Lock      = (HMRFPO_FSP_LOCK_FUNC)Hmrfpo_Fsp_Lock;
    SpsFspHmrfpoProtocol->Enable    = (HMRFPO_FSP_ENABLE_FUNC)Hmrfpo_Fsp_Enable;
    SpsFspHmrfpoProtocol->MeReset   = (HMRFPO_FSP_MERESET_FUNC)Hmrfpo_Fsp_MeReset;

    Status = gBS->InstallProtocolInterface (
    &ImageHandle,
    &gSpsFspHmrfpoProtocolGuid,
    EFI_NATIVE_INTERFACE,
    SpsFspHmrfpoProtocol
    );
  }
  if (EFI_ERROR (Status)) {
    FreePool (SpsFspHmrfpoProtocol);
    ASSERT_EFI_ERROR (Status);
  }

  DEBUG ((EFI_D_INFO, "[SPS_FSP] DXE FSP PHASE returns status %r\n", Status));
  
  return Status;
} // SpsDxeFspEntryPoint ()


