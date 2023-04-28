//
// This file contains a 'Sample Driver' and is licensed as such
// under the terms of your license agreement with Intel or your
// vendor.  This file may be modified by the user, subject to  
// the additional terms of the license agreement               
//
/*++

Copyright (c)  2006 Intel Corporation. All rights reserved
This software and associated documentation (if any) is furnished
under a license and may only be used or copied in accordance
with the terms of the license. Except as permitted by such
license, no part of this software or documentation may be
reproduced, stored in a retrieval system, or transmitted in any
form or by any means without the express written consent of
Intel Corporation.

Module Name:

  UefiBiosVideo.h
    
Abstract: 

Revision History
--*/

#ifndef _BIOS_GRAPHICS_OUTPUT_H
#define _BIOS_GRAPHICS_OUTPUT_H

#include <Efi.h>
#include <Token.h>
#include <Protocol/PciIo.h>
#include <Protocol/LegacyBios.h>
#include <Protocol/LegacyBiosExt.h>
#include <Protocol/EdidDiscovered.h>
#include <Protocol/EdidActive.h>
#include <Protocol/EdidOverride.h>
#include <Protocol/DriverBinding.h>
#include <IndustryStandard/Pci22.h>
#include <Protocol/VgaMiniPort.h>
#include <Protocol/ComponentName.h>
#include "VesaBiosExtensions.h"

//
// Packed format support: The number of bits reserved for each of the colors and the actual
// position of RGB in the frame buffer is specified in the VBE Mode information
//
typedef struct {
  UINT8 Position; // Position of the color
  UINT8 Mask;     // The number of bits expressed as a mask
} BIOS_VIDEO_COLOR_PLACEMENT;

//
// BIOS Graphics Output Graphical Mode Data
//
typedef struct {
  UINT16                      VbeModeNumber;
  UINT16                      BytesPerScanLine;
  VOID                        *LinearFrameBuffer;
  UINTN                       FrameBufferSize;
  UINT32                      HorizontalResolution;
  UINT32                      VerticalResolution;
  UINT32                      RefreshRate;
  UINT32                      BitsPerPixel;
  BIOS_VIDEO_COLOR_PLACEMENT  Red;
  BIOS_VIDEO_COLOR_PLACEMENT  Green;
  BIOS_VIDEO_COLOR_PLACEMENT  Blue;
  BIOS_VIDEO_COLOR_PLACEMENT  Reserved;
  EFI_GRAPHICS_PIXEL_FORMAT   PixelFormat;
  EFI_PIXEL_BITMASK           PixelBitMask;
} BIOS_VIDEO_MODE_DATA;

//
// BIOS video child handle private data Structure
//
#define EFI_SIGNATURE_16(A, B)        ((A) | (B << 8))
#define EFI_SIGNATURE_32(A, B, C, D)  (EFI_SIGNATURE_16 (A, B) | (EFI_SIGNATURE_16 (C, D) << 16))

#define BIOS_VIDEO_DEV_SIGNATURE    EFI_SIGNATURE_32 ('B', 'V', 'M', 'p')

typedef struct {
  UINTN                                       Signature;
  EFI_HANDLE                                  Handle;

  //
  // Consumed Protocols
  //
  EFI_PCI_IO_PROTOCOL                         *PciIo;
  EFI_LEGACY_BIOS_PROTOCOL                    *LegacyBios;

  //
  // Produced Protocols
  //
  EFI_GRAPHICS_OUTPUT_PROTOCOL                GraphicsOutput;
  EFI_EDID_DISCOVERED_PROTOCOL                EdidDiscovered;
  EFI_EDID_ACTIVE_PROTOCOL                    EdidActive;
  EFI_VGA_MINI_PORT_PROTOCOL                  VgaMiniPort;

  //
  // General fields
  //
  BOOLEAN                                     VgaCompatible;
  BOOLEAN                                     ProduceGraphicsOutput;
//*** AMI PORTING BEGIN ***//
// ExitBootServicesEvent is not used
//  EFI_EVENT                                   ExitBootServicesEvent;
//*** AMI PORTING END *****//

  //
  // Graphics Output Protocol related fields
  //
  BOOLEAN                                     HardwareNeedsStarting;
  BIOS_VIDEO_MODE_DATA                        *ModeData;
  UINT8                                       *LineBuffer;
  EFI_GRAPHICS_OUTPUT_BLT_PIXEL               *VbeFrameBuffer;
  UINT8                                       *VgaFrameBuffer;

  //
  // VESA Bios Extensions related fields
  //
  UINTN                                       NumberOfPagesBelow1MB;    // Number of 4KB pages in PagesBelow1MB
  EFI_PHYSICAL_ADDRESS                        PagesBelow1MB;            // Buffer for all VBE Information Blocks
  VESA_BIOS_EXTENSIONS_INFORMATION_BLOCK      *VbeInformationBlock;     // 0x200 bytes.  Must be allocated below 1MB
  VESA_BIOS_EXTENSIONS_MODE_INFORMATION_BLOCK *VbeModeInformationBlock; // 0x100 bytes.  Must be allocated below 1MB
  VESA_BIOS_EXTENSIONS_EDID_DATA_BLOCK        *VbeEdidDataBlock;        // 0x80  bytes.  Must be allocated below 1MB
  VESA_BIOS_EXTENSIONS_CRTC_INFORMATION_BLOCK *VbeCrtcInformationBlock; // 59 bytes.  Must be allocated below 1MB
  UINTN                                       VbeSaveRestorePages;      // Number of 4KB pages in VbeSaveRestoreBuffer
  EFI_PHYSICAL_ADDRESS                        VbeSaveRestoreBuffer;     // Must be allocated below 1MB
  //
  // Status code
  //
  EFI_DEVICE_PATH_PROTOCOL                    *DevicePath;
} BIOS_VIDEO_DEV;

#ifndef CR
#define CR(pField, OutterType, Field, Signature) OUTTER(pField, Field, OutterType)
#endif
#define BIOS_VIDEO_DEV_FROM_PCI_IO_THIS(a)      CR (a, BIOS_VIDEO_DEV, PciIo, BIOS_VIDEO_DEV_SIGNATURE)
#define BIOS_VIDEO_DEV_FROM_GRAPHICS_OUTPUT_THIS(a)      CR (a, BIOS_VIDEO_DEV, GraphicsOutput, BIOS_VIDEO_DEV_SIGNATURE)
#define BIOS_VIDEO_DEV_FROM_VGA_MINI_PORT_THIS(a) CR (a, BIOS_VIDEO_DEV, VgaMiniPort, BIOS_VIDEO_DEV_SIGNATURE)

#define GRAPHICS_OUTPUT_INVALIDE_MODE_NUMBER	0xffff

//
// Global Variables
//
//extern EFI_DRIVER_BINDING_PROTOCOL      gBiosVideoDriverBinding;
//extern EFI_COMPONENT_NAME_PROTOCOL      gBiosVideoComponentName;
//extern EFI_COMPONENT_NAME2_PROTOCOL     gBiosVideoComponentName2;

//
// Driver Binding Protocol functions
//
EFI_STATUS
EFIAPI
BiosVideoDriverBindingSupported (
  IN EFI_DRIVER_BINDING_PROTOCOL  *This,
  IN EFI_HANDLE                   Controller,
  IN EFI_DEVICE_PATH_PROTOCOL     *RemainingDevicePath
  )
;

EFI_STATUS
EFIAPI
BiosVideoDriverBindingStart (
  IN EFI_DRIVER_BINDING_PROTOCOL  *This,
  IN EFI_HANDLE                   Controller,
  IN EFI_DEVICE_PATH_PROTOCOL     *RemainingDevicePath
  )
;

EFI_STATUS
EFIAPI
BiosVideoDriverBindingStop (
  IN  EFI_DRIVER_BINDING_PROTOCOL  *This,
  IN  EFI_HANDLE                   Controller,
  IN  UINTN                        NumberOfChildren,
  IN  EFI_HANDLE                   *ChildHandleBuffer
  )
;

//
// Private worker functions
//
EFI_STATUS
BiosVideoCheckForVbe (
  BIOS_VIDEO_DEV  *BiosVideoPrivate,
//*** AMI PORTING BEGIN ***//
  PCI_TYPE00	 *PciConfSpace
//*** AMI PORTING END *****//
)
;

EFI_STATUS
BiosVideoCheckForVga (
  BIOS_VIDEO_DEV  *BiosVideoPrivate
  )
;

STATIC
EFI_STATUS
DeRegisterVideoChildHandle (
  EFI_DRIVER_BINDING_PROTOCOL    *This,
  EFI_HANDLE                     Controller,
  EFI_HANDLE                     Handle
  )
/*++

Routine Description:

  Deregister an video child handle and free resources

Arguments:

  This            - Protocol instance pointer.
  Controller      - Video controller handle
  Handle          - Video child handle

Returns:

  EFI_STATUS

--*/
;

VOID
BiosVideoDeviceReleaseResource (
  BIOS_VIDEO_DEV  *BiosVideoChildPrivate
  )
/*++
Routing Description:

  Release resources of a video child device before stopping it.

Arguments:

  BiosVideoChildPrivate  -  Video child device private data structure

Returns:

    NONE
    
---*/
;

//
// BIOS Graphics Output Protocol functions
//
EFI_STATUS
EFIAPI
BiosVideoGraphicsOutputQueryMode (
  IN  EFI_GRAPHICS_OUTPUT_PROTOCOL          *This,
  IN  UINT32                                ModeNumber,
  OUT UINTN                                 *SizeOfInfo,
  OUT EFI_GRAPHICS_OUTPUT_MODE_INFORMATION  **Info
  )
/*++

Routine Description:

  Graphics Output protocol interface to get video mode

  Arguments:
    This                  - Protocol instance pointer.
    ModeNumber            - The mode number to return information on.
    Info                  - Caller allocated buffer that returns information about ModeNumber.
    SizeOfInfo            - A pointer to the size, in bytes, of the Info buffer.

  Returns:
    EFI_SUCCESS           - Mode information returned.
    EFI_BUFFER_TOO_SMALL  - The Info buffer was too small.
    EFI_DEVICE_ERROR      - A hardware error occurred trying to retrieve the video mode.
    EFI_NOT_STARTED       - Video display is not initialized. Call SetMode ()
    EFI_INVALID_PARAMETER - One of the input args was NULL.

--*/
;

EFI_STATUS
EFIAPI
BiosVideoGraphicsOutputSetMode (
  IN  EFI_GRAPHICS_OUTPUT_PROTOCOL * This,
  IN  UINT32                       ModeNumber
  )
/*++

Routine Description:

  Graphics Output protocol interface to set video mode

  Arguments:
    This             - Protocol instance pointer.
    ModeNumber       - The mode number to be set.

  Returns:
    EFI_SUCCESS      - Graphics mode was changed.
    EFI_DEVICE_ERROR - The device had an error and could not complete the request.
    EFI_UNSUPPORTED  - ModeNumber is not supported by this device.

--*/
;

EFI_STATUS
EFIAPI
BiosVideoGraphicsOutputVbeBlt (
  IN  EFI_GRAPHICS_OUTPUT_PROTOCOL       *This,
  IN  EFI_GRAPHICS_OUTPUT_BLT_PIXEL      *BltBuffer, OPTIONAL
  IN  EFI_GRAPHICS_OUTPUT_BLT_OPERATION  BltOperation,
  IN  UINTN                              SourceX,
  IN  UINTN                              SourceY,
  IN  UINTN                              DestinationX,
  IN  UINTN                              DestinationY,
  IN  UINTN                              Width,
  IN  UINTN                              Height,
  IN  UINTN                              Delta
  )
/*++

Routine Description:

  Graphics Output protocol instance to block transfer for VBE device

Arguments:

  This          - Pointer to Graphics Output protocol instance
  BltBuffer     - The data to transfer to screen
  BltOperation  - The operation to perform
  SourceX       - The X coordinate of the source for BltOperation
  SourceY       - The Y coordinate of the source for BltOperation
  DestinationX  - The X coordinate of the destination for BltOperation
  DestinationY  - The Y coordinate of the destination for BltOperation
  Width         - The width of a rectangle in the blt rectangle in pixels
  Height        - The height of a rectangle in the blt rectangle in pixels
  Delta         - Not used for EfiBltVideoFill and EfiBltVideoToVideo operation.
                  If a Delta of 0 is used, the entire BltBuffer will be operated on.
                  If a subrectangle of the BltBuffer is used, then Delta represents
                  the number of bytes in a row of the BltBuffer.

Returns:

  EFI_INVALID_PARAMETER - Invalid parameter passed in
  EFI_SUCCESS - Blt operation success

--*/
;

EFI_STATUS
EFIAPI
BiosVideoGraphicsOutputVgaBlt (
  IN  EFI_GRAPHICS_OUTPUT_PROTOCOL       *This,
  IN  EFI_GRAPHICS_OUTPUT_BLT_PIXEL      *BltBuffer, OPTIONAL
  IN  EFI_GRAPHICS_OUTPUT_BLT_OPERATION  BltOperation,
  IN  UINTN                              SourceX,
  IN  UINTN                              SourceY,
  IN  UINTN                              DestinationX,
  IN  UINTN                              DestinationY,
  IN  UINTN                              Width,
  IN  UINTN                              Height,
  IN  UINTN                              Delta
  )
/*++

Routine Description:

  Grahpics Output protocol instance to block transfer for VGA device

Arguments:

  This          - Pointer to Grahpics Output protocol instance
  BltBuffer     - The data to transfer to screen
  BltOperation  - The operation to perform
  SourceX       - The X coordinate of the source for BltOperation
  SourceY       - The Y coordinate of the source for BltOperation
  DestinationX  - The X coordinate of the destination for BltOperation
  DestinationY  - The Y coordinate of the destination for BltOperation
  Width         - The width of a rectangle in the blt rectangle in pixels
  Height        - The height of a rectangle in the blt rectangle in pixels
  Delta         - Not used for EfiBltVideoFill and EfiBltVideoToVideo operation.
                  If a Delta of 0 is used, the entire BltBuffer will be operated on.
                  If a subrectangle of the BltBuffer is used, then Delta represents
                  the number of bytes in a row of the BltBuffer.

Returns:

  EFI_INVALID_PARAMETER - Invalid parameter passed in
  EFI_SUCCESS - Blt operation success

--*/
;

//
// BIOS VGA Mini Port Protocol functions
//
EFI_STATUS
EFIAPI
BiosVideoVgaMiniPortSetMode (
  IN  EFI_VGA_MINI_PORT_PROTOCOL  *This,
  IN  UINTN                       ModeNumber
  )
/*++

Routine Description:

  VgaMiniPort protocol interface to set mode

Arguments:

  This        - Pointer to VgaMiniPort protocol instance
  ModeNumber  - The index of the mode

Returns:

  EFI_UNSUPPORTED - The requested mode is not supported
  EFI_SUCCESS - The requested mode is set successfully

--*/
;

//
// Standard VGA Definitions
//
#define VGA_HORIZONTAL_RESOLUTION                         640
#define VGA_VERTICAL_RESOLUTION                           480
#define VGA_NUMBER_OF_BIT_PLANES                          4
#define VGA_PIXELS_PER_BYTE                               8
#define VGA_BYTES_PER_SCAN_LINE                           (VGA_HORIZONTAL_RESOLUTION / VGA_PIXELS_PER_BYTE)
#define VGA_BYTES_PER_BIT_PLANE                           (VGA_VERTICAL_RESOLUTION * VGA_BYTES_PER_SCAN_LINE)

#define VGA_GRAPHICS_CONTROLLER_ADDRESS_REGISTER          0x3ce
#define VGA_GRAPHICS_CONTROLLER_DATA_REGISTER             0x3cf

#define VGA_GRAPHICS_CONTROLLER_SET_RESET_REGISTER        0x00

#define VGA_GRAPHICS_CONTROLLER_ENABLE_SET_RESET_REGISTER 0x01

#define VGA_GRAPHICS_CONTROLLER_COLOR_COMPARE_REGISTER    0x02

#define VGA_GRAPHICS_CONTROLLER_DATA_ROTATE_REGISTER      0x03
#define VGA_GRAPHICS_CONTROLLER_FUNCTION_REPLACE          0x00
#define VGA_GRAPHICS_CONTROLLER_FUNCTION_AND              0x08
#define VGA_GRAPHICS_CONTROLLER_FUNCTION_OR               0x10
#define VGA_GRAPHICS_CONTROLLER_FUNCTION_XOR              0x18

#define VGA_GRAPHICS_CONTROLLER_READ_MAP_SELECT_REGISTER  0x04

#define VGA_GRAPHICS_CONTROLLER_MODE_REGISTER             0x05
#define VGA_GRAPHICS_CONTROLLER_READ_MODE_0               0x00
#define VGA_GRAPHICS_CONTROLLER_READ_MODE_1               0x08
#define VGA_GRAPHICS_CONTROLLER_WRITE_MODE_0              0x00
#define VGA_GRAPHICS_CONTROLLER_WRITE_MODE_1              0x01
#define VGA_GRAPHICS_CONTROLLER_WRITE_MODE_2              0x02
#define VGA_GRAPHICS_CONTROLLER_WRITE_MODE_3              0x03

#define VGA_GRAPHICS_CONTROLLER_MISCELLANEOUS_REGISTER    0x06

#define VGA_GRAPHICS_CONTROLLER_COLOR_DONT_CARE_REGISTER  0x07

#define VGA_GRAPHICS_CONTROLLER_BIT_MASK_REGISTER         0x08

#define EFI_TPL_NOTIFY TPL_NOTIFY

#endif
