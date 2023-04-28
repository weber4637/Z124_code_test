/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_2BDED685_F733_455f_A840_43A22B791FB3
#define _AUTOGENH_2BDED685_F733_455f_A840_43A22B791FB3

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x2BDED685, 0xF733, 0x455f, {0xA8, 0x40, 0x43, 0xA2, 0x2B, 0x79, 0x1F, 0xB3}}

// Guids
extern EFI_GUID gEfiAcpiVariableCompatiblityGuid;
extern EFI_GUID gEfiIntelFrameworkModulePkgTokenSpaceGuid;
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
extern EFI_GUID gEfiAcpiS3SaveProtocolGuid;
extern EFI_GUID gFrameworkEfiMpServiceProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
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

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPlatformCsmSupport  443U
#define _PCD_SIZE_PcdPlatformCsmSupport 1
#define _PCD_GET_MODE_SIZE_PcdPlatformCsmSupport  _PCD_SIZE_PcdPlatformCsmSupport 
#define _PCD_VALUE_PcdPlatformCsmSupport  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPlatformCsmSupport;
#define _PCD_GET_MODE_BOOL_PcdPlatformCsmSupport  _gPcd_FixedAtBuild_PcdPlatformCsmSupport
//#define _PCD_SET_MODE_BOOL_PcdPlatformCsmSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFrameworkCompatibilitySupport  235U
#define _PCD_SIZE_PcdFrameworkCompatibilitySupport 1
#define _PCD_GET_MODE_SIZE_PcdFrameworkCompatibilitySupport  _PCD_SIZE_PcdFrameworkCompatibilitySupport 
#define _PCD_VALUE_PcdFrameworkCompatibilitySupport  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdFrameworkCompatibilitySupport;
#define _PCD_GET_MODE_BOOL_PcdFrameworkCompatibilitySupport  _gPcd_FixedAtBuild_PcdFrameworkCompatibilitySupport
//#define _PCD_SET_MODE_BOOL_PcdFrameworkCompatibilitySupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdS3AcpiReservedMemorySize  368U
#define _PCD_SIZE_PcdS3AcpiReservedMemorySize 4
#define _PCD_GET_MODE_SIZE_PcdS3AcpiReservedMemorySize  _PCD_SIZE_PcdS3AcpiReservedMemorySize 
#define _PCD_VALUE_PcdS3AcpiReservedMemorySize  0x40000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdS3AcpiReservedMemorySize;
#define _PCD_GET_MODE_32_PcdS3AcpiReservedMemorySize  _gPcd_FixedAtBuild_PcdS3AcpiReservedMemorySize
//#define _PCD_SET_MODE_32_PcdS3AcpiReservedMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiS3Enable  440U
#define _PCD_SIZE_PcdAcpiS3Enable 1
#define _PCD_GET_MODE_SIZE_PcdAcpiS3Enable  _PCD_SIZE_PcdAcpiS3Enable 
#define _PCD_VALUE_PcdAcpiS3Enable  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdAcpiS3Enable;
#define _PCD_GET_MODE_BOOL_PcdAcpiS3Enable  _gPcd_FixedAtBuild_PcdAcpiS3Enable
//#define _PCD_SET_MODE_BOOL_PcdAcpiS3Enable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InstallAcpiS3Save (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
