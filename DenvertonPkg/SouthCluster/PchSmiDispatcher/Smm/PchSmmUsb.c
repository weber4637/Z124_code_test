/** @file
  File to contain all the hardware specific stuff for the Smm USB dispatch protocol.

@copyright
 Copyright (c) 1999 - 2015 Intel Corporation. All rights reserved
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
#include "PchSmmHelpers.h"

GLOBAL_REMOVE_IF_UNREFERENCED PCH_SMM_SOURCE_DESC mUSB1_LEGACY = {
  PCH_SMM_NO_FLAGS,
  {
    {
      {
        ACPI_ADDR_TYPE,
        {R_PCH_SMI_EN}
      },
      S_PCH_SMI_EN,
      N_PCH_SMI_EN_LEGACY_USB
    },
    NULL_BIT_DESC_INITIALIZER
  },
  {
    {
      {
        ACPI_ADDR_TYPE,
        {R_PCH_SMI_STS}
      },
      S_PCH_SMI_STS,
      N_PCH_SMI_STS_LEGACY_USB
    }
  },
  {
    {
      ACPI_ADDR_TYPE,
      {R_PCH_SMI_STS}
    },
    S_PCH_SMI_STS,
    N_PCH_SMI_STS_LEGACY_USB
  }
};

GLOBAL_REMOVE_IF_UNREFERENCED PCH_SMM_SOURCE_DESC mUSB3_LEGACY = {
  PCH_SMM_NO_FLAGS,
  {
    {
      {
        ACPI_ADDR_TYPE,
        {R_PCH_SMI_EN}
      },
      S_PCH_SMI_EN,
      N_PCH_SMI_EN_LEGACY_USB3
    },
    NULL_BIT_DESC_INITIALIZER
  },
  {
    {
      {
        ACPI_ADDR_TYPE,
        {R_PCH_SMI_STS}
      },
      S_PCH_SMI_STS,
      N_PCH_SMI_STS_LEGACY_USB3
    }
  },
  {
    {
      ACPI_ADDR_TYPE,
      {R_PCH_SMI_STS}
    },
    S_PCH_SMI_STS,
    N_PCH_SMI_STS_LEGACY_USB3
  }
};

typedef enum {
  PchUsbControllerLpc0    = 0,
  PchUsbControllerXhci,
  PchUsbControllerTypeMax
} PCH_USB_CONTROLLER_TYPE;

typedef struct {
  UINT8                   Function;
  UINT8                   Device;
  PCH_USB_CONTROLLER_TYPE UsbConType;
} USB_CONTROLLER;

GLOBAL_REMOVE_IF_UNREFERENCED USB_CONTROLLER  mUsbControllersMap[] = {
  {
    PCI_FUNCTION_NUMBER_PCH_LPC,
    PCI_DEVICE_NUMBER_PCH_LPC,
    PchUsbControllerLpc0
  },
  {
    PCI_FUNCTION_NUMBER_PCH_XHCI,
    PCI_DEVICE_NUMBER_PCH_XHCI,
    PchUsbControllerXhci
  }
};

/**
  Find the handle that best matches the input Device Path and return the USB controller type

  @param[in] DevicePath           Pointer to the device Path table
  @param[out] Controller          Returned with the USB controller type of the input device path

  @retval EFI_SUCCESS             Find the handle that best matches the input Device Path
  @exception EFI_UNSUPPORTED      Invalid device Path table or can't find any match USB device path
                                  PCH_USB_CONTROLLER_TYPE The USB controller type of the input
                                  device path
**/
EFI_STATUS
DevicePathToSupportedController (
  IN  EFI_DEVICE_PATH_PROTOCOL   *DevicePath,
  OUT PCH_USB_CONTROLLER_TYPE    *Controller
  )
{
  // Denverton AptioV override start - EIP#273570 
  // Accessing Non-Smm code in SMM is not allowed. The following code does not have any functionality.
  //EFI_STATUS                Status;
  //EFI_HANDLE                DeviceHandle;
  ACPI_HID_DEVICE_PATH      *AcpiNode;
  PCI_DEVICE_PATH           *PciNode;
  EFI_DEVICE_PATH_PROTOCOL  *RemaingDevicePath;
  UINT8                     UsbIndex;
  ///
  /// Find the handle that best matches the Device Path. If it is only a
  /// partial match the remaining part of the device path is returned in
  /// RemainingDevicePath.
  ///
  RemaingDevicePath = DevicePath;
  /*
  Status = gBS->LocateDevicePath (
                  &gEfiPciRootBridgeIoProtocolGuid,
                  &DevicePath,
                  &DeviceHandle
                  );
  if (EFI_ERROR (Status)) {
    return EFI_UNSUPPORTED;
  }

  DevicePath = RemaingDevicePath;
*/
  // Denverton AptioV override start - EIP#273570 
  ///
  /// Get first node: Acpi Node
  ///
  AcpiNode = (ACPI_HID_DEVICE_PATH *) RemaingDevicePath;

  if (AcpiNode->Header.Type != ACPI_DEVICE_PATH ||
      AcpiNode->Header.SubType != ACPI_DP ||
      DevicePathNodeLength (&AcpiNode->Header) != sizeof (ACPI_HID_DEVICE_PATH) ||
      AcpiNode->HID != EISA_PNP_ID (0x0A03) ||
      AcpiNode->UID != 0
      ) {
    return EFI_UNSUPPORTED;
  } else {
    ///
    /// Get the next node: Pci Node
    ///
    RemaingDevicePath = NextDevicePathNode (RemaingDevicePath);
    PciNode           = (PCI_DEVICE_PATH *) RemaingDevicePath;
    if (PciNode->Header.Type != HARDWARE_DEVICE_PATH ||
        PciNode->Header.SubType != HW_PCI_DP ||
        DevicePathNodeLength (&PciNode->Header) != sizeof (PCI_DEVICE_PATH)
        ) {
      return EFI_UNSUPPORTED;
    }

    for (UsbIndex = 0; UsbIndex < sizeof (mUsbControllersMap) / sizeof (USB_CONTROLLER); UsbIndex++) {
      if ((PciNode->Device == mUsbControllersMap[UsbIndex].Device) &&
          (PciNode->Function == mUsbControllersMap[UsbIndex].Function)) {
        *Controller = mUsbControllersMap[UsbIndex].UsbConType;
        return EFI_SUCCESS;
      }
    }

    return EFI_UNSUPPORTED;
  }
}

/**
  Maps a USB context to a source description.

  @param[in] Context              The context we need to map.  Type must be USB.
  @param[in] SrcDesc              The source description that corresponds to the given context.

**/
VOID
MapUsbToSrcDesc (
  IN  PCH_SMM_CONTEXT         *Context,
  OUT PCH_SMM_SOURCE_DESC     *SrcDesc
  )
{
  PCH_USB_CONTROLLER_TYPE Controller;
  EFI_STATUS              Status;

  Status = DevicePathToSupportedController (Context->Usb.Device, &Controller);
  ///
  /// Either the device path passed in by the child is incorrect or
  /// the ones stored here internally are incorrect.
  ///
  ASSERT_EFI_ERROR (Status);

  switch (Context->Usb.Type) {
  case UsbLegacy:
    switch (Controller) {
    case PchUsbControllerLpc0:
      CopyMem ((VOID *) SrcDesc, (VOID *) (&mUSB1_LEGACY), sizeof (PCH_SMM_SOURCE_DESC));
      break;

    case PchUsbControllerXhci:
      CopyMem ((VOID *) SrcDesc, (VOID *) (&mUSB3_LEGACY), sizeof (PCH_SMM_SOURCE_DESC));
      break;

    default:
      ASSERT (FALSE);
      break;
    }
    break;

  case UsbWake:
    ASSERT (FALSE);
    break;

  default:
    ASSERT (FALSE);
    break;
  }
}
