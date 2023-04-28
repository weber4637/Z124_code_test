/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BE2A8686_ED9E_4326_9D08_D104C23B44E2
#define _AUTOGENH_BE2A8686_ED9E_4326_9D08_D104C23B44E2

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xBE2A8686, 0xED9E, 0x4326, {0x9D, 0x08, 0xD1, 0x04, 0xC2, 0x3B, 0x44, 0xE2}}

// Guids
extern EFI_GUID SmmRsTableGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gPcAtChipsetPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// Protocols
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gAmiSmmDebugServiceProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiSmmStatusCodeProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdRealTimeClockUpdateTimeout  434U
#define _PCD_SIZE_PcdRealTimeClockUpdateTimeout 4
#define _PCD_GET_MODE_SIZE_PcdRealTimeClockUpdateTimeout  _PCD_SIZE_PcdRealTimeClockUpdateTimeout 
#define _PCD_VALUE_PcdRealTimeClockUpdateTimeout  100000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdRealTimeClockUpdateTimeout;
#define _PCD_GET_MODE_32_PcdRealTimeClockUpdateTimeout  _gPcd_FixedAtBuild_PcdRealTimeClockUpdateTimeout
//#define _PCD_SET_MODE_32_PcdRealTimeClockUpdateTimeout  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMinimalValidYear  435U
#define _PCD_SIZE_PcdMinimalValidYear 2
#define _PCD_GET_MODE_SIZE_PcdMinimalValidYear  _PCD_SIZE_PcdMinimalValidYear 
#define _PCD_VALUE_PcdMinimalValidYear  2005U
extern const  UINT16  _gPcd_FixedAtBuild_PcdMinimalValidYear;
#define _PCD_GET_MODE_16_PcdMinimalValidYear  _gPcd_FixedAtBuild_PcdMinimalValidYear
//#define _PCD_SET_MODE_16_PcdMinimalValidYear  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximalValidYear  436U
#define _PCD_SIZE_PcdMaximalValidYear 2
#define _PCD_GET_MODE_SIZE_PcdMaximalValidYear  _PCD_SIZE_PcdMaximalValidYear 
#define _PCD_VALUE_PcdMaximalValidYear  2099U
extern const  UINT16  _gPcd_FixedAtBuild_PcdMaximalValidYear;
#define _PCD_GET_MODE_16_PcdMaximalValidYear  _gPcd_FixedAtBuild_PcdMaximalValidYear
//#define _PCD_SET_MODE_16_PcdMaximalValidYear  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializePcRtcSmm (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
