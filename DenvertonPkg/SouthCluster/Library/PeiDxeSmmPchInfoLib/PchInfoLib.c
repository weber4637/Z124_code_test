/** @file
  Pch information library.

  All function in this library is available for PEI, DXE, and SMM,
  But do not support UEFI RUNTIME environment call.

@copyright
 Copyright (c) 2014 - 2017 Intel Corporation. All rights reserved
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
#include <Base.h>
#include <Uefi/UefiBaseType.h>
#include <Library/IoLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseLib.h>
#include <Library/MmPciLib.h>
#include <Library/PchInfoLib.h>
#include <PchAccess.h>
#include <Library/PchCycleDecodingLib.h>

#define PCH_DO_STRINGIFY(x) #x
#define PCH_STRINGIFY(x) PCH_DO_STRINGIFY(x)

//
// This module variables are used for cache the static result.
// @note: please pay attention to the PEI phase, the module variables on ROM
//       and can't be modified.
//
GLOBAL_REMOVE_IF_UNREFERENCED PCH_STEPPING     mPchStepping      = PchSteppingMax;
GLOBAL_REMOVE_IF_UNREFERENCED UINT8            mIsPchSupported   = 0xFF;
GLOBAL_REMOVE_IF_UNREFERENCED PCH_SERIES       mPchSeries        = PchUnknownSeries;
GLOBAL_REMOVE_IF_UNREFERENCED PCH_GENERATION   mPchGeneration    = PchUnknownGeneration;

/**
  Return Pch stepping type

  @retval PCH_STEPPING            Pch stepping type
**/
PCH_STEPPING
EFIAPI
PchStepping (
  VOID
  )
{
  UINT8         RevId;
  UINT16        LpcDeviceId;
  UINTN         LpcBaseAddress;

  if (mPchStepping != PchSteppingMax) {
    return mPchStepping;
  }

    LpcBaseAddress = MmPciBase (
                       DEFAULT_PCI_BUS_NUMBER_PCH,
                       PCI_DEVICE_NUMBER_PCH_LPC,
                       PCI_FUNCTION_NUMBER_PCH_LPC
                       );
  RevId = MmioRead8 (LpcBaseAddress + PCI_REVISION_ID_OFFSET);
  DEBUG ((EFI_D_INFO,"PCH Revision ID: 0x%x\n",RevId));
  LpcDeviceId = MmioRead16 (LpcBaseAddress + PCI_DEVICE_ID_OFFSET);

  if (IS_PCH_H_LPC_DEVICE_ID (LpcDeviceId)) {
    switch (RevId) {
      case V_PCH_LPC_RID_0:
        mPchStepping = PchHA0;
        return PchHA0;

      case V_PCH_LPC_RID_1:
        mPchStepping = PchHA1;
        return PchHA1;

      case V_PCH_LPC_RID_10:
        mPchStepping = PchHB0;
        return PchHB0;

      case V_PCH_LPC_RID_11:
        mPchStepping = PchHB1;
        return PchHB1;

      case V_PCH_LPC_RID_20:
        mPchStepping = PchHC0;
        return PchHC0;

      case V_PCH_LPC_RID_30:
        mPchStepping = PchHD0;
        return PchHD0;

      case V_PCH_LPC_RID_31:
        mPchStepping = PchHD1;
        return PchHD1;

      default:
        DEBUG ((DEBUG_ERROR, "Unsupported PCH Stepping. Supporting PCH stepping starting from %a and above\n", PCH_STRINGIFY(PCH_H_MIN_SUPPORTED_STEPPING))) ;
        return PchSteppingMax;
    }
  }

  if (IS_PCH_LP_LPC_DEVICE_ID (LpcDeviceId)) {
    switch (RevId) {
#ifdef SIMICS_FLAG
      case V_PCH_LPC_RID_0:
        mPchStepping = PchLpA0;
        return PchLpA0;
#endif

      case V_PCH_LPC_RID_10:
        mPchStepping = PchLpB0;
        return PchLpB0;

      case V_PCH_LPC_RID_11:
        mPchStepping = PchLpB1;
        return PchLpB1;

      case V_PCH_LPC_RID_20:
        mPchStepping = PchLpC0;
        return PchLpC0;

      case V_PCH_LPC_RID_21:
        mPchStepping = PchLpC1;
        return PchLpC1;

      default:
        DEBUG ((DEBUG_ERROR, "Unsupported PCH Stepping. Supporting PCH stepping starting from %a and above\n", PCH_STRINGIFY(PCH_LP_MIN_SUPPORTED_STEPPING))) ;
        return PchSteppingMax;
    }
  }
  return PchSteppingMax;
}

/**
  Determine if PCH is supported

  @retval TRUE                    PCH is supported
  @retval FALSE                   PCH is not supported
**/
BOOLEAN
IsPchSupported (
  VOID
  )
{
  UINT16  LpcDeviceId;
  UINT16  LpcVendorId;
  UINTN   LpcBaseAddress;

  if (mIsPchSupported != 0xFF) {
    return (BOOLEAN) mIsPchSupported;
  }

    LpcBaseAddress = MmPciBase (
                       DEFAULT_PCI_BUS_NUMBER_PCH,
                       PCI_DEVICE_NUMBER_PCH_LPC,
                       PCI_FUNCTION_NUMBER_PCH_LPC
                       );

  LpcDeviceId = MmioRead16 (LpcBaseAddress + PCI_DEVICE_ID_OFFSET);
  LpcVendorId = MmioRead16 (LpcBaseAddress + PCI_VENDOR_ID_OFFSET);

  ///
  /// Verify that this is a supported chipset
  ///
  if ((LpcVendorId == V_PCH_LPC_VENDOR_ID) &&
      (IS_PCH_LPC_DEVICE_ID (LpcDeviceId)))
  {
    mIsPchSupported = TRUE;
    return TRUE;
  } else {
    DEBUG ((DEBUG_ERROR, "PCH code doesn't support the LpcDeviceId: 0x%04x!\n", LpcDeviceId));
    mIsPchSupported = FALSE;
    return FALSE;
  }
}

/**
  Return Pch Series

  @retval PCH_SERIES            Pch Series
**/
PCH_SERIES
EFIAPI
GetPchSeries (
  VOID
  )
{
  UINT16  LpcDeviceId;
  UINT32  PchSeries;
  UINTN   LpcBaseAddress;

  if (mPchSeries != PchUnknownSeries) {
    return mPchSeries;
  }

    LpcBaseAddress = MmPciBase (
                       DEFAULT_PCI_BUS_NUMBER_PCH,
                       PCI_DEVICE_NUMBER_PCH_LPC,
                       PCI_FUNCTION_NUMBER_PCH_LPC
                       );

  LpcDeviceId = MmioRead16 (LpcBaseAddress + PCI_DEVICE_ID_OFFSET);

  if (IS_PCH_H_LPC_DEVICE_ID (LpcDeviceId)) {
    PchSeries = PchH;
  } else if (IS_PCH_LP_LPC_DEVICE_ID (LpcDeviceId)) {
    PchSeries = PchLp;
  } else {
	#ifdef PO_FLAG
	PchSeries = PchH;
	DEBUG ((DEBUG_ERROR, "ERROR: Unsupported PCH SKU, LpcDeviceId: 0x%04x!\n", LpcDeviceId));
	#else
	PchSeries = PchUnknownSeries;
	DEBUG ((DEBUG_ERROR, "Unsupported PCH SKU, LpcDeviceId: 0x%04x!\n", LpcDeviceId));
	ASSERT (FALSE);
	#endif
  }
  mPchSeries = PchSeries;

  return PchSeries;
}

/**
  Return Pch Generation

  @retval PCH_GENERATION            Pch Generation
**/
PCH_GENERATION
EFIAPI
GetPchGeneration (
  VOID
  )
{
  UINT16  LpcDeviceId;
  UINT32  PchGen;
  UINTN   LpcBaseAddress;

  if (mPchGeneration != PchUnknownGeneration) {
    return mPchGeneration;
  }

    LpcBaseAddress = MmPciBase (
                       DEFAULT_PCI_BUS_NUMBER_PCH,
                       PCI_DEVICE_NUMBER_PCH_LPC,
                       PCI_FUNCTION_NUMBER_PCH_LPC
                       );
  LpcDeviceId = MmioRead16 (LpcBaseAddress + PCI_DEVICE_ID_OFFSET);

  if (IS_PCH_LPC_DEVICE_ID (LpcDeviceId)) {
    PchGen = SklPch;
  } else {
    PchGen = PchUnknownGeneration;
    DEBUG ((DEBUG_ERROR, "Unsupported PCH SKU, LpcDeviceId: 0x%04x!\n", LpcDeviceId));
    ASSERT (FALSE);
  }
  mPchGeneration = PchGen;

  return PchGen;
}

/**
  Get Pch Maximum Pcie Root Port Number

  @retval Pch Maximum Pcie Root Port Number
**/
UINT8
EFIAPI
GetPchMaxPciePortNum (
  VOID
  )
{
  PCH_SERIES  PchSeries;

  PchSeries = GetPchSeries ();
  switch (PchSeries) {
    case PchLp:
      return PCH_LP_PCIE_MAX_ROOT_PORTS;

    case PchH:
      return PCH_H_PCIE_MAX_ROOT_PORTS;

    default:
      return 0;
  }
}


/**
  Get Pch Maximum Sata Port Number

  @retval Pch Maximum Sata Port Number
**/
UINT8
EFIAPI
GetPchMaxSataPortNum (
  VOID
  )
{
  PCH_SERIES  PchSeries;

  PchSeries = GetPchSeries ();
  switch (PchSeries) {
    case PchLp:
      return PCH_LP_AHCI_MAX_PORTS;

    case PchH:
      return PCH_H_AHCI_MAX_PORTS;

    default:
      return 0;
  }
}

/**
  Get Pch Usb Maximum Physical Port Number

  @retval Pch Usb Maximum Physical Port Number
**/
UINT8
EFIAPI
GetPchUsbMaxPhysicalPortNum (
  VOID
  )
{
  	  return PCH_H_XHCI_MAX_USB2_PHYSICAL_PORTS;
}

/**
  Get Pch Maximum Usb2 Port Number of XHCI Controller

  @retval Pch Maximum Usb2 Port Number of XHCI Controller
**/
UINT8
EFIAPI
GetPchXhciMaxUsb2PortNum (
  VOID
  )
{
  	  return PCH_H_XHCI_MAX_USB2_PORTS;

}

/**
  Get Pch Maximum Usb3 Port Number of XHCI Controller

  @retval Pch Maximum Usb3 Port Number of XHCI Controller
**/
UINT8
EFIAPI
GetPchXhciMaxUsb3PortNum (
  VOID
  )
{
  	  return PCH_H_XHCI_MAX_USB3_PORTS;
}

/**
  Get Pch Maximum Sata Controller Number

  @param[in] None

  @retval Pch Maximum Sata Controller Number
**/
UINT8
EFIAPI
GetPchMaxSataControllerNum (
  VOID
  )
{
  PCH_SERIES  PchSeries;

  PchSeries = GetPchSeries();
  switch (PchSeries) {
    case PchLp:
    case PchH:
      return 2;
    default:
      return 0;
  }
}
