/** @file
  Base TraceHub Init Lib Null.

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
#include <Uefi/UefiBaseType.h>
// Denverton Aptiov override start - EIP#510004
#include <Library/DebugLib.h>
#include <Library/IoLib.h>
#include <Library/MmPciLib.h>
#include <Library/PchCycleDecodingLib.h>
#include <Library/PchPcrLib.h>
#include <Include/SimicsDebug.h>
#include <Library/CpuPlatformLib.h>
#include <Library/TimerLib.h>
#include <Library/BaseLib.h>
#include "PpmCommon.h"
// Denverton Aptiov override end - EIP#510004
/**
  Null instance of Set TraceHub base address.

  @param[in] AddressHi                   High 32-bits for TraceHub base address.
  @param[in] AddressLo                   Low 32-bits for TraceHub base address.

  @retval EFI_UNSUPPORTED                This is a null instance.
**/
EFI_STATUS
EFIAPI
TraceHubBaseSet (
  UINT32                                AddressHi,
  UINT32                                AddressLo
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Null instance of a function that disables all messages between Punit and TraceHub (NPK).

  @param[in]      None
  @param[in out]  None

  @retval         EFI_INVALID_PARAMETER   Intended address to access is not a valid address
                  EFI_UNSUPPORTED         Command is not supported by the B2P mailbox or the PUnit
                  EFI_SUCCESS             Punit to TraceHub messages are disabled
                  EFI_NOT_READY           B2P mailbox is not available
                  EFI_TIMEOUT             Punit completion acknowledge was not received
**/
EFI_STATUS
TraceHubDisablePunitMgs(
  )
{
// Denverton Aptiov override start - EIP#510004
      B2P_MAILBOX_INTERFACE B2PMailbox;
      UINT16                PunitRamAddress = 0x000;
      UINT64                PtrMCHBAR = 0;
      UINT16                Counter = 500;

      DEBUG ((EFI_D_INFO, __FUNCTION__" : Entry\n"));

      // Get MCHBAR
      PtrMCHBAR = PciRead32( PCI_LIB_ADDRESS( MCHBAR_BUS, MCHBAR_DEV, MCHBAR_FUN, REGISTER_MCHBAR_HI ) );
      PtrMCHBAR = LShiftU64(PtrMCHBAR, MCHBAR64_SHIFT_HI);
      PtrMCHBAR |= (UINT64) PciRead32( PCI_LIB_ADDRESS( MCHBAR_BUS, MCHBAR_DEV, MCHBAR_FUN, REGISTER_MCHBAR_LO ) );
      // Clear the less significative bit, because only indicate that this register is active
      PtrMCHBAR &=(UINT64 )(~BIT0);

      // Wait until B2P Mailbox is available (not busy).
      do
      {
        B2PMailbox.Data = (UINT32)MmioRead32( (UINTN) (PtrMCHBAR + BIOS_MAILBOX_INTERFACE_MCHBAR) );
        if (DXE_IN_SIMICS) {
          B2PMailbox.Bits.RunBusy = 0;
        } else {
          MicroSecondDelay(1000000);
          Counter--;
        }
      } while (B2PMailbox.Bits.RunBusy);

      if (B2PMailbox.Bits.RunBusy) {
        DEBUG ((DEBUG_INFO, "\tWarning: Timeout waiting for B2P Mailbox to be available\n"));
        DEBUG ((EFI_D_INFO, __FUNCTION__" : Exit\n"));
        return EFI_NOT_READY;
      }

      B2PMailbox.Data = 0;
      MmioWrite32 ((UINTN)(PtrMCHBAR + BIOS_MAILBOX_DATA_MCHBAR), B2PMailbox.Data);
      DEBUG ((EFI_D_INFO, "\tBIOS_MAILBOX_DATA_MCHBAR = 0x%08x \tValue = 0x%08x\n",(UINT32)(PtrMCHBAR + BIOS_MAILBOX_DATA_MCHBAR), MmioRead32 ( (UINTN) (PtrMCHBAR + BIOS_MAILBOX_INTERFACE_MCHBAR) )));
      B2PMailbox.Data = 0;

      B2PMailbox.Bits.Command = 15;
      B2PMailbox.Bits.Address = PunitRamAddress;
      MmioWrite32 ((UINTN)(PtrMCHBAR + BIOS_MAILBOX_INTERFACE_MCHBAR), B2PMailbox.Data);
      DEBUG ((EFI_D_INFO, "\tBIOS_MAILBOX_INTERFACE_MCHBAR = 0x%08x \tValue = 0x%08x\n",(UINT32)(PtrMCHBAR + BIOS_MAILBOX_DATA_MCHBAR), MmioRead32 ( (UINTN) (PtrMCHBAR + BIOS_MAILBOX_INTERFACE_MCHBAR) )));

      B2PMailbox.Bits.RunBusy = 1;
      MmioWrite32 ((UINTN)(PtrMCHBAR + BIOS_MAILBOX_INTERFACE_MCHBAR), B2PMailbox.Data);
      DEBUG ((DEBUG_INFO, "\tSetting RUN_BUSY\n"));

      do {
        B2PMailbox.Data = (UINT32)MmioRead32( (UINTN) (PtrMCHBAR + BIOS_MAILBOX_INTERFACE_MCHBAR) );
        if (DXE_IN_SIMICS) {
          B2PMailbox.Bits.RunBusy = 0;
        } else {
          MicroSecondDelay(100);
          Counter--;
        }
      } while (B2PMailbox.Bits.RunBusy && (Counter));
      DEBUG ((EFI_D_INFO, "\tBIOS_MAILBOX_INTERFACE_MCHBAR = 0x%08x \tValue = 0x%08x\n",(UINT32)(PtrMCHBAR + BIOS_MAILBOX_DATA_MCHBAR), MmioRead32 ( (UINTN) (PtrMCHBAR + BIOS_MAILBOX_INTERFACE_MCHBAR) )));

      if (B2PMailbox.Bits.RunBusy) {
        DEBUG ((DEBUG_INFO, "\tWarning: Timeout waiting for Punit completion acknowledge\n"));
        DEBUG ((EFI_D_INFO, __FUNCTION__" : Exit\n"));
        return EFI_TIMEOUT;
      }

      DEBUG ((EFI_D_INFO, __FUNCTION__" : Exit\n"));
// Denverton Aptiov override end - EIP#510004

      return EFI_SUCCESS;
}

/**
  Null instance of basic initialization for TraceHub

  @param[in] EnableMode                 Trace Hub Enable Mode
  @param[in] Destination                Trace Hub Trace Destination

**/

VOID
TraceHubInitialize (
  IN  UINT8                             EnableMode
 )
{
  return;
}
