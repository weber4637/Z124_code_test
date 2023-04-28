/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D7B10D4E_67E6_4C74_83E9_F9AF0ACC33CC
#define _AUTOGENH_D7B10D4E_67E6_4C74_83E9_F9AF0ACC33CC

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xD7B10D4E, 0x67E6, 0x4C74, {0x83, 0xE9, 0xF9, 0xAF, 0x0A, 0xCC, 0x33, 0xCC}}

// Guids
extern EFI_GUID gSiPolicyHobGuid;
extern EFI_GUID gPchPolicyHobGuid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
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
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSmmIoTrapDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmSxDispatch2ProtocolGuid;
extern EFI_GUID gPchNvsAreaProtocolGuid;
extern EFI_GUID gPchTcoSmiDispatchProtocolGuid;
extern EFI_GUID gPchSmiDispatchProtocolGuid;
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
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiS3SmmSaveStateProtocolGuid;
extern EFI_GUID gEfiSmmStatusCodeProtocolGuid;

// PPIs
extern EFI_GUID gPchPolicyPpiGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdEfiGcdAllocateType  437U
#define _PCD_SIZE_PcdEfiGcdAllocateType 1
#define _PCD_GET_MODE_SIZE_PcdEfiGcdAllocateType  _PCD_SIZE_PcdEfiGcdAllocateType 
#define _PCD_VALUE_PcdEfiGcdAllocateType  0x01U
extern const  UINT8  _gPcd_FixedAtBuild_PcdEfiGcdAllocateType;
#define _PCD_GET_MODE_8_PcdEfiGcdAllocateType  _gPcd_FixedAtBuild_PcdEfiGcdAllocateType
//#define _PCD_SET_MODE_8_PcdEfiGcdAllocateType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PchInitSmmEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
