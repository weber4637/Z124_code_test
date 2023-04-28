/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_DE23ACEE_CF55_4fb6_AA77_984AB53DE823
#define _AUTOGENH_DE23ACEE_CF55_4fb6_AA77_984AB53DE823

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xDE23ACEE, 0xCF55, 0x4fb6, {0xAA, 0x77, 0x98, 0x4A, 0xB5, 0x3D, 0xE8, 0x23}}

// Guids
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
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
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;

// Protocols
extern EFI_GUID gPchInfoProtocolGuid;
extern EFI_GUID gPchNvsAreaProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiPciEnumerationCompleteProtocolGuid;
extern EFI_GUID gPchPcieIoTrapProtocolGuid;
extern EFI_GUID gEfiGlobalNvsAreaProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
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
extern EFI_GUID gEfiS3SaveStateProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiAcpiSdtProtocolGuid;

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
PchInitEntryPointUefi (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
