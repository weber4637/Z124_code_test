//
// This file contains an 'Intel Peripheral Driver' and is
// licensed for Intel CPUs and chipsets under the terms of your
// license agreement with Intel or your vendor.  This file may
// be modified by the user, subject to additional terms of the
// license agreement
//
/*++

Copyright (c)  1999 - 2012 Intel Corporation. All rights reserved
This software and associated documentation (if any) is furnished
under a license and may only be used or copied in accordance
with the terms of the license. Except as permitted by such
license, no part of this software or documentation may be
reproduced, stored in a retrieval system, or transmitted in any
form or by any means without the express written consent of
Intel Corporation.

--*/


/*++
Module Name:

  MediaDeviceDriver.h

Abstract:

  Media Device Driver header

--*/
#ifndef _MEDIA_DEVICE_DRIVER_H
#define _MEDIA_DEVICE_DRIVER_H

#include <Uefi.h>
#include <Guid/EventGroup.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiLib.h>
#include <Library/DevicePathLib.h>
#include <Library/IoLib.h>
#include <Library/PcdLib.h>

#include <IndustryStandard/Mmc.h>
#include <IndustryStandard/CeAta.h>
#include <IndustryStandard/SdCard.h>
//
// Driver Consumed Protocol Prototypes
//
#include <Protocol/DevicePath.h>
#include <Protocol/SdHostIo.h>

//
// Driver Produced Protocol Prototypes
//
#include <Protocol/DriverBinding.h>
#include <Protocol/ComponentName.h>
#include <Protocol/ComponentName2.h>
#include <Protocol/BlockIo.h>

extern EFI_COMPONENT_NAME_PROTOCOL  gMediaDeviceComponentName;
extern EFI_DRIVER_BINDING_PROTOCOL  gMediaDeviceDriverBinding;
extern EFI_COMPONENT_NAME2_PROTOCOL  gSdMediaDeviceName2;

extern UINT32  gMediaDeviceDebugLevel;

extern EFI_GUID gEfiEmmcBootPartitionProtocolGuid;

#define CARD_DATA_SIGNATURE  SIGNATURE_32 ('c', 'a', 'r', 'd')
#define CARD_PARTITION_SIGNATURE  SIGNATURE_32 ('c', 'p', 'a', 'r')

#define CARD_PARTITION_DATA_FROM_THIS(a) \
    CR(a, MMC_PARTITION_DATA, BlockIo, CARD_PARTITION_SIGNATURE)

#define CARD_DATA_FROM_THIS(a) \
    ((CARD_PARTITION_DATA_FROM_THIS(a))->CardData)

#define CARD_DATA_PARTITION_NUM(p) \
    ((((UINTN) p) - ((UINTN) &(p->CardData->Partitions))) / sizeof (*p))

//

//
// Partition Number
//
#define NO_ACCESS_TO_BOOT_PARTITION                0x00
#define BOOT_PARTITION_1                           0x01
#define BOOT_PARTITION_2                           0x02
#define REPLAY_PROTECTED_MEMORY_BLOCK              0x03
#define GENERAL_PURPOSE_PARTITION_1                0x04
#define GENERAL_PURPOSE_PARTITION_2                0x05
#define GENERAL_PURPOSE_PARTITION_3                0x06
#define GENERAL_PURPOSE_PARTITION_4                0x07
// Command timeout will be max 100 ms
//
#define  TIMEOUT_COMMAND     100
#define  TIMEOUT_DATA        5000

typedef enum {
  UnknownCard = 0,
  MMCCard,                // MMC card
  CEATACard,              // CE-ATA device
  SDMemoryCard,           // SD 1.1 card
  SDMemoryCard2,          // SD 2.0 or above standard card
  SDMemoryCard2High       // SD 2.0 or above high capacity card
} CARD_TYPE;


typedef struct _CARD_DATA CARD_DATA;


typedef struct {
  //
  //BlockIO
  //
  UINT32                    Signature;

  EFI_HANDLE                Handle;

  BOOLEAN                   Present;

  EFI_DEVICE_PATH_PROTOCOL  *DevPath;

  EFI_BLOCK_IO_PROTOCOL     BlockIo;

  EFI_BLOCK_IO_MEDIA        BlockIoMedia;

  CARD_DATA                 *CardData;

} MMC_PARTITION_DATA;

#define MAX_NUMBER_OF_PARTITIONS EMMC_MAX_NUMBER_OF_PARTITIONS


struct _CARD_DATA {
  //
  //BlockIO
  //
  UINT32                    Signature;

  EFI_HANDLE                Handle;

  MMC_PARTITION_DATA        Partitions[MAX_NUMBER_OF_PARTITIONS];

  EFI_SD_HOST_IO_PROTOCOL   *SdHostIo;
  EFI_UNICODE_STRING_TABLE  *ControllerNameTable;
  CARD_TYPE                 CardType;

  UINT8                     CurrentBusWidth;
  BOOLEAN                   DualVoltage;
  BOOLEAN                   NeedFlush;
  UINT8                     Reserved[3];

  UINT16                    Address;
  UINT32                    BlockLen;
  UINT32                    MaxFrequency;
  UINT64                    BlockNumber;
  //
  //Common used
  //
  CARD_STATUS               CardStatus;
  OCR                       OCRRegister;
  CID                       CIDRegister;
  CSD                       CSDRegister;
  EXT_CSD                   ExtCSDRegister;
  UINT8                     *RawBufferPointer;
  UINT8                     *AlignedBuffer;
  //
  //CE-ATA specific
  //
  TASK_FILE                 TaskFile;
  IDENTIFY_DEVICE_DATA      IndentifyDeviceData;
  //
  //SD specific
  //
  SCR                       SCRRegister;
  SD_STATUS_REG             SDSattus;
  SWITCH_STATUS             SwitchStatus;
};


//
//
//

EFI_STATUS
EFIAPI
MediaDeviceDriverEntryPoint (
  IN EFI_HANDLE           ImageHandle,
  IN EFI_SYSTEM_TABLE     *SystemTable
  );

EFI_STATUS
MediaDeviceDriverInstallBlockIo (
  IN  CARD_DATA    *CardData
  );

EFI_STATUS
MediaDeviceDriverUninstallBlockIo (
  IN  CARD_DATA    *CardData
  );

EFI_STATUS
EFIAPI
MediaDeviceComponentNameGetDriverName (
  IN  EFI_COMPONENT_NAME_PROTOCOL     *This,
  IN  CHAR8                           *Language,
  OUT CHAR16                          **DriverName
  );

EFI_STATUS
EFIAPI
MediaDeviceComponentNameGetControllerName (
  IN  EFI_COMPONENT_NAME_PROTOCOL     *This,
  IN  EFI_HANDLE                      ControllerHandle,
  IN  EFI_HANDLE                      ChildHandle, OPTIONAL
  IN  CHAR8                           *Language,
  OUT CHAR16                          **ControllerName
  );

EFI_STATUS
EFIAPI
MediaDeviceDriverBindingSupported (
  IN EFI_DRIVER_BINDING_PROTOCOL *This,
  IN EFI_HANDLE                  Controller,
  IN EFI_DEVICE_PATH_PROTOCOL    *RemainingDevicePath
  );

EFI_STATUS
EFIAPI
MediaDeviceDriverBindingStart (
  IN EFI_DRIVER_BINDING_PROTOCOL     *This,
  IN EFI_HANDLE                      Controller,
  IN EFI_DEVICE_PATH_PROTOCOL        *RemainingDevicePath
  );

EFI_STATUS
EFIAPI
MediaDeviceDriverBindingStop (
  IN  EFI_DRIVER_BINDING_PROTOCOL     *This,
  IN  EFI_HANDLE                      Controller,
  IN  UINTN                           NumberOfChildren,
  IN  EFI_HANDLE                      *ChildHandleBuffer
  );



EFI_STATUS
MMCSDCardInit (
  IN  CARD_DATA    *CardData
  );


EFI_STATUS
MMCSDBlockIoInit (
  IN  CARD_DATA    *CardData
  );

EFI_STATUS
SendCommand (
  IN   EFI_SD_HOST_IO_PROTOCOL    *This,
  IN   UINT16                     CommandIndex,
  IN   UINT32                     Argument,
  IN   TRANSFER_TYPE              DataType,
  IN   UINT8                      *Buffer, OPTIONAL
  IN   UINT32                     BufferSize,
  IN   RESPONSE_TYPE              ResponseType,
  IN   UINT32                     TimeOut,
  OUT  UINT32                     *ResponseData
  );


EFI_STATUS
FastIO (
  IN      CARD_DATA   *CardData,
  IN      UINT8       RegisterAddress,
  IN  OUT UINT8       *RegisterData,
  IN      BOOLEAN     Write
  );


BOOLEAN
IsCEATADevice (
  IN  CARD_DATA    *CardData
  );

EFI_STATUS
CEATABlockIoInit (
  IN  CARD_DATA    *CardData
  );

EFI_STATUS
IndentifyDevice (
  IN  CARD_DATA    *CardData
  );

EFI_STATUS
FlushCache (
  IN  CARD_DATA    *CardData
  );

EFI_STATUS
StandByImmediate (
  IN  CARD_DATA    *CardData
  );

EFI_STATUS
ReadDMAExt (
  IN  CARD_DATA   *CardData,
  IN  EFI_LBA     LBA,
  IN  UINT8       *Buffer,
  IN  UINT16      SectorCount
  );

EFI_STATUS
WriteDMAExt (
  IN  CARD_DATA   *CardData,
  IN  EFI_LBA     LBA,
  IN  UINT8       *Buffer,
  IN  UINT16      SectorCount
  );


EFI_STATUS
SoftwareReset (
  IN  CARD_DATA    *CardData
  );

EFI_STATUS
SendAppCommand (
  IN   CARD_DATA                  *CardData,
  IN   UINT16                     CommandIndex,
  IN   UINT32                     Argument,
  IN   TRANSFER_TYPE              DataType,
  IN   UINT8                      *Buffer, OPTIONAL
  IN   UINT32                     BufferSize,
  IN   RESPONSE_TYPE              ResponseType,
  IN   UINT32                     TimeOut,
  OUT  UINT32                     *ResponseData
  );

UINT32
MmcGetExtCsd8 (
  IN CARD_DATA                        *CardData,
  IN UINTN                            Offset
  );

UINT32
MmcGetExtCsd24 (
  IN CARD_DATA                        *CardData,
  IN UINTN                            Offset
  );

UINT32
MmcGetExtCsd32 (
  IN CARD_DATA                        *CardData,
  IN UINTN                            Offset
  );

UINTN
MmcGetCurrentPartitionNum (
  IN  CARD_DATA              *CardData
  );

VOID
EFIAPI
SetEmmcWpOnEvent(
  IN EFI_EVENT        Event,
  IN VOID             *Context
  );

EFI_STATUS
MmcSelectPartitionNum (
  IN  CARD_DATA              *CardData,
  IN  UINT8                  Partition
  );

EFI_STATUS
MmcSelectPartition (
  IN  MMC_PARTITION_DATA     *Partition
  );

EFI_STATUS
MmcSetPartition (
  IN  CARD_DATA              *CardData,
  IN  UINT8                  Value
  );


#endif
