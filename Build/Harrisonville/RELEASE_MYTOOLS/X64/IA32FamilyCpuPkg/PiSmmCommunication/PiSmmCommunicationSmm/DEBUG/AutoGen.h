/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_E21F35A8_42FF_4050_82D6_93F7CDFA7073
#define _AUTOGENH_E21F35A8_42FF_4050_82D6_93F7CDFA7073

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xE21F35A8, 0x42FF, 0x4050, {0x82, 0xD6, 0x93, 0xF7, 0xCD, 0xFA, 0x70, 0x73}}

// Guids
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiAcpiTableGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;

// Protocols
extern EFI_GUID gEfiSmmSwDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmCommunicationProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gAmiSmmBufferValidationProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// PPIs
extern EFI_GUID gEfiPeiSmmCommunicationPpiGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdAcpiDefaultOemId  9U
#define _PCD_GET_MODE_PTR_PcdAcpiDefaultOemId  LibPcdGetPtr(_PCD_TOKEN_PcdAcpiDefaultOemId)
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemId  LibPcdGetSize(_PCD_TOKEN_PcdAcpiDefaultOemId)
#define _PCD_SET_MODE_PTR_PcdAcpiDefaultOemId(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdAcpiDefaultOemId, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdAcpiDefaultOemId(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdAcpiDefaultOemId, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdAcpiDefaultOemTableId  10U
#define _PCD_GET_MODE_64_PcdAcpiDefaultOemTableId  LibPcdGet64(_PCD_TOKEN_PcdAcpiDefaultOemTableId)
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemTableId  LibPcdGetSize(_PCD_TOKEN_PcdAcpiDefaultOemTableId)
#define _PCD_SET_MODE_64_PcdAcpiDefaultOemTableId(Value)  LibPcdSet64(_PCD_TOKEN_PcdAcpiDefaultOemTableId, (Value))
#define _PCD_SET_MODE_64_S_PcdAcpiDefaultOemTableId(Value)  LibPcdSet64S(_PCD_TOKEN_PcdAcpiDefaultOemTableId, (Value))

#define _PCD_TOKEN_PcdAcpiDefaultOemRevision  357U
#define _PCD_SIZE_PcdAcpiDefaultOemRevision 4
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemRevision  _PCD_SIZE_PcdAcpiDefaultOemRevision 
#define _PCD_VALUE_PcdAcpiDefaultOemRevision  0x00000002U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAcpiDefaultOemRevision;
#define _PCD_GET_MODE_32_PcdAcpiDefaultOemRevision  _gPcd_FixedAtBuild_PcdAcpiDefaultOemRevision
//#define _PCD_SET_MODE_32_PcdAcpiDefaultOemRevision  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiDefaultCreatorId  358U
#define _PCD_SIZE_PcdAcpiDefaultCreatorId 4
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultCreatorId  _PCD_SIZE_PcdAcpiDefaultCreatorId 
#define _PCD_VALUE_PcdAcpiDefaultCreatorId  0x20202020U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorId;
#define _PCD_GET_MODE_32_PcdAcpiDefaultCreatorId  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorId
//#define _PCD_SET_MODE_32_PcdAcpiDefaultCreatorId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiDefaultCreatorRevision  359U
#define _PCD_SIZE_PcdAcpiDefaultCreatorRevision 4
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultCreatorRevision  _PCD_SIZE_PcdAcpiDefaultCreatorRevision 
#define _PCD_VALUE_PcdAcpiDefaultCreatorRevision  0x01000013U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorRevision;
#define _PCD_GET_MODE_32_PcdAcpiDefaultCreatorRevision  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorRevision
//#define _PCD_SET_MODE_32_PcdAcpiDefaultCreatorRevision  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PiSmmCommunicationSmmEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
