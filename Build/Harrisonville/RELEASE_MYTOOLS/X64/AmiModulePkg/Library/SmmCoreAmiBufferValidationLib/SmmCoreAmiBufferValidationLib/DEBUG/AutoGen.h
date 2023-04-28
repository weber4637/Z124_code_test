/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9499D2C1_B417_4B22_A2DD_0B56CC67D9E1
#define _AUTOGENH_9499D2C1_B417_4B22_A2DD_0B56CC67D9E1

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiMemoryAttributesTableGuid;
extern EFI_GUID gAmiModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gEfiSmmReadyToLockProtocolGuid;
extern EFI_GUID gEfiLegacyBiosProtocolGuid;
extern EFI_GUID gAmiSmmBufferValidationProtocolGuid;
extern EFI_GUID gEfiSmmSwDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmCpuProtocolGuid;

// PCD definitions
#define _PCD_TOKEN_AmiPcdSmmMemLibProperties  318U
extern const UINT32 _gPcd_FixedAtBuild_AmiPcdSmmMemLibProperties;
#define _PCD_GET_MODE_32_AmiPcdSmmMemLibProperties  _gPcd_FixedAtBuild_AmiPcdSmmMemLibProperties
//#define _PCD_SET_MODE_32_AmiPcdSmmMemLibProperties  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_AmiPcdSmmMemLibProperties 0
#define _PCD_SIZE_AmiPcdSmmMemLibProperties 4
#define _PCD_GET_MODE_SIZE_AmiPcdSmmMemLibProperties _PCD_SIZE_AmiPcdSmmMemLibProperties
#define _PCD_TOKEN_AmiPcdSmmCommunicationBufferSize  319U
extern const UINT32 _gPcd_FixedAtBuild_AmiPcdSmmCommunicationBufferSize;
#define _PCD_GET_MODE_32_AmiPcdSmmCommunicationBufferSize  _gPcd_FixedAtBuild_AmiPcdSmmCommunicationBufferSize
//#define _PCD_SET_MODE_32_AmiPcdSmmCommunicationBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_AmiPcdSmmCommunicationBufferSize 0x20000
#define _PCD_SIZE_AmiPcdSmmCommunicationBufferSize 4
#define _PCD_GET_MODE_SIZE_AmiPcdSmmCommunicationBufferSize _PCD_SIZE_AmiPcdSmmCommunicationBufferSize
#define _PCD_TOKEN_AmiPcdSmmCommunicationBufferSwSmi  320U
extern const UINT8 _gPcd_FixedAtBuild_AmiPcdSmmCommunicationBufferSwSmi;
#define _PCD_GET_MODE_8_AmiPcdSmmCommunicationBufferSwSmi  _gPcd_FixedAtBuild_AmiPcdSmmCommunicationBufferSwSmi
//#define _PCD_SET_MODE_8_AmiPcdSmmCommunicationBufferSwSmi  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_AmiPcdSmmCommunicationBufferSwSmi 0xD9
#define _PCD_SIZE_AmiPcdSmmCommunicationBufferSwSmi 1
#define _PCD_GET_MODE_SIZE_AmiPcdSmmCommunicationBufferSwSmi _PCD_SIZE_AmiPcdSmmCommunicationBufferSwSmi

EFI_STATUS
EFIAPI
SmmCoreAmiBufferValidationLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
SmmCoreAmiBufferValidationLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
