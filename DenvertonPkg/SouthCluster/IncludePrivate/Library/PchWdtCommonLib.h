/** @file
  Library that contains common parts of WdtPei and WdtDxe. Not a standalone module.

@copyright
 Copyright (c) 2010 - 2014 Intel Corporation. All rights reserved
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
#ifndef _PCH_WDT_COMMON_LIB_H_
#define _PCH_WDT_COMMON_LIB_H_

extern EFI_GUID gWdtHobGuid;
extern UINT8    mAllowExpectedReset;

/**
  HOB structure for WDT.
**/
typedef struct {
  EFI_HOB_GUID_TYPE Header;
  UINT16            TimeoutValue;
  UINT8             Active;
} WDT_HOB;

/**
  Reads LPC bridge to get Watchdog Timer address


  @retval UINT32                  Watchdog's address
**/
UINT32
WdtGetAddress (
  VOID
  );

/**
  Reloads WDT with new timeout value and starts it. Also sets Unexpected Reset bit, which
  causes the next reset to be treated as watchdog expiration - unless AllowKnownReset()
  function was called too.

  @param[in] TimeoutValue         Time in seconds before WDT times out. Supported range = 1 - 1024.

  @retval EFI_SUCCESS             if everything's OK
  @retval EFI_INVALID_PARAMETER   if TimeoutValue parameter is wrong
**/
EFI_STATUS
EFIAPI
WdtReloadAndStart (
  IN  UINT32  TimeoutValue
  );

/**
  Disables WDT timer.


**/
VOID
EFIAPI
WdtDisable (
  VOID
  );

/**
  Returns WDT failure status.


  @retval V_PCH_OC_WDT_CTL_STATUS_FAILURE   If there was WDT expiration or unexpected reset
  @retval V_PCH_OC_WDT_CTL_STATUS_OK        Otherwise
**/
UINT8
EFIAPI
WdtCheckStatus (
  VOID
  );

/**
  Normally, each reboot performed while watchdog runs is considered a failure.
  This function allows platform to perform expected reboots with WDT running,
  without being interpreted as failures.
  In DXE phase, it is enough to call this function any time before reset.
  In PEI phase, between calling this function and performing reset, ReloadAndStart()
  must not be called.


**/
VOID
EFIAPI
WdtAllowKnownReset (
  VOID
  );

/**
  Returns information if WDT coverage for the duration of BIOS execution
  was requested by an OS application


  @retval TRUE                    if WDT was requested
  @retval FALSE                   if WDT was not requested
**/
UINT8
EFIAPI
IsWdtRequired (
  VOID
  );

/**
  Returns WDT enabled/disabled status.


  @retval TRUE                    if WDT is enabled
  @retval FALSE                   if WDT is disabled
**/
UINT8
EFIAPI
IsWdtEnabled (
  VOID
  );

#endif