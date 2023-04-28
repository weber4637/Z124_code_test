/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_52C05B14_0B98_496c_BC3B_04B50211D680
#define _AUTOGENH_52C05B14_0B98_496c_BC3B_04B50211D680

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x52C05B14, 0x0B98, 0x496c, {0xBC, 0x3B, 0x04, 0xB5, 0x02, 0x11, 0xD6, 0x80}}

// Guids
extern EFI_GUID gPeiAprioriFileNameGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiFirmwareFileSystem3Guid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gAmiGlobalVariableGuid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gPerformanceProtocolGuid;
extern EFI_GUID gPerformanceExProtocolGuid;

// PPIs
extern EFI_GUID gEfiPeiStatusCodePpiGuid;
extern EFI_GUID gEfiPeiResetPpiGuid;
extern EFI_GUID gEfiDxeIplPpiGuid;
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gEfiPeiDecompressPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gEfiPeiLoadFilePpiGuid;
extern EFI_GUID gEfiPeiSecurity2PpiGuid;
extern EFI_GUID gEfiTemporaryRamSupportPpiGuid;
extern EFI_GUID gEfiTemporaryRamDonePpiGuid;
extern EFI_GUID gEfiPeiReset2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPeiCoreMaxFvSupported  230U
#define _PCD_SIZE_PcdPeiCoreMaxFvSupported 4
#define _PCD_GET_MODE_SIZE_PcdPeiCoreMaxFvSupported  _PCD_SIZE_PcdPeiCoreMaxFvSupported 
#define _PCD_VALUE_PcdPeiCoreMaxFvSupported  8U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPeiCoreMaxFvSupported;
#define _PCD_GET_MODE_32_PcdPeiCoreMaxFvSupported  _gPcd_FixedAtBuild_PcdPeiCoreMaxFvSupported
//#define _PCD_SET_MODE_32_PcdPeiCoreMaxFvSupported  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPeiCoreMaxPeimPerFv  231U
#define _PCD_SIZE_PcdPeiCoreMaxPeimPerFv 4
#define _PCD_GET_MODE_SIZE_PcdPeiCoreMaxPeimPerFv  _PCD_SIZE_PcdPeiCoreMaxPeimPerFv 
#define _PCD_VALUE_PcdPeiCoreMaxPeimPerFv  0x50U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPeiCoreMaxPeimPerFv;
#define _PCD_GET_MODE_32_PcdPeiCoreMaxPeimPerFv  _gPcd_FixedAtBuild_PcdPeiCoreMaxPeimPerFv
//#define _PCD_SET_MODE_32_PcdPeiCoreMaxPeimPerFv  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPeiCoreMaxPpiSupported  232U
#define _PCD_SIZE_PcdPeiCoreMaxPpiSupported 4
#define _PCD_GET_MODE_SIZE_PcdPeiCoreMaxPpiSupported  _PCD_SIZE_PcdPeiCoreMaxPpiSupported 
#define _PCD_VALUE_PcdPeiCoreMaxPpiSupported  128U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPeiCoreMaxPpiSupported;
#define _PCD_GET_MODE_32_PcdPeiCoreMaxPpiSupported  _gPcd_FixedAtBuild_PcdPeiCoreMaxPpiSupported
//#define _PCD_SET_MODE_32_PcdPeiCoreMaxPpiSupported  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPeiCoreMaxPeiStackSize  233U
#define _PCD_SIZE_PcdPeiCoreMaxPeiStackSize 4
#define _PCD_GET_MODE_SIZE_PcdPeiCoreMaxPeiStackSize  _PCD_SIZE_PcdPeiCoreMaxPeiStackSize 
#define _PCD_VALUE_PcdPeiCoreMaxPeiStackSize  0x40000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPeiCoreMaxPeiStackSize;
#define _PCD_GET_MODE_32_PcdPeiCoreMaxPeiStackSize  _gPcd_FixedAtBuild_PcdPeiCoreMaxPeiStackSize
//#define _PCD_SET_MODE_32_PcdPeiCoreMaxPeiStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPeiCoreImageLoaderSearchTeSectionFirst  234U
#define _PCD_SIZE_PcdPeiCoreImageLoaderSearchTeSectionFirst 1
#define _PCD_GET_MODE_SIZE_PcdPeiCoreImageLoaderSearchTeSectionFirst  _PCD_SIZE_PcdPeiCoreImageLoaderSearchTeSectionFirst 
#define _PCD_VALUE_PcdPeiCoreImageLoaderSearchTeSectionFirst  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPeiCoreImageLoaderSearchTeSectionFirst;
#define _PCD_GET_MODE_BOOL_PcdPeiCoreImageLoaderSearchTeSectionFirst  _gPcd_FixedAtBuild_PcdPeiCoreImageLoaderSearchTeSectionFirst
//#define _PCD_SET_MODE_BOOL_PcdPeiCoreImageLoaderSearchTeSectionFirst  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFrameworkCompatibilitySupport  235U
#define _PCD_SIZE_PcdFrameworkCompatibilitySupport 1
#define _PCD_GET_MODE_SIZE_PcdFrameworkCompatibilitySupport  _PCD_SIZE_PcdFrameworkCompatibilitySupport 
#define _PCD_VALUE_PcdFrameworkCompatibilitySupport  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdFrameworkCompatibilitySupport;
#define _PCD_GET_MODE_BOOL_PcdFrameworkCompatibilitySupport  _gPcd_FixedAtBuild_PcdFrameworkCompatibilitySupport
//#define _PCD_SET_MODE_BOOL_PcdFrameworkCompatibilitySupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdLoadFixAddressPeiCodePageNumber  236U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressPeiCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressPeiCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber
#define _PCD_PATCHABLE_PcdLoadFixAddressPeiCodePageNumber_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdLoadFixAddressPeiCodePageNumber  _gPcd_BinaryPatch_Size_PcdLoadFixAddressPeiCodePageNumber 
extern UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressPeiCodePageNumber; 
#define _PCD_SET_MODE_32_PcdLoadFixAddressPeiCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber = (Value))
#define _PCD_SET_MODE_32_S_PcdLoadFixAddressPeiCodePageNumber(Value)  ((_gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdLoadFixAddressBootTimeCodePageNumber  237U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressBootTimeCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressBootTimeCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber
#define _PCD_PATCHABLE_PcdLoadFixAddressBootTimeCodePageNumber_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdLoadFixAddressBootTimeCodePageNumber  _gPcd_BinaryPatch_Size_PcdLoadFixAddressBootTimeCodePageNumber 
extern UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressBootTimeCodePageNumber; 
#define _PCD_SET_MODE_32_PcdLoadFixAddressBootTimeCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber = (Value))
#define _PCD_SET_MODE_32_S_PcdLoadFixAddressBootTimeCodePageNumber(Value)  ((_gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdLoadFixAddressRuntimeCodePageNumber  238U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressRuntimeCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressRuntimeCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber
#define _PCD_PATCHABLE_PcdLoadFixAddressRuntimeCodePageNumber_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdLoadFixAddressRuntimeCodePageNumber  _gPcd_BinaryPatch_Size_PcdLoadFixAddressRuntimeCodePageNumber 
extern UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressRuntimeCodePageNumber; 
#define _PCD_SET_MODE_32_PcdLoadFixAddressRuntimeCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber = (Value))
#define _PCD_SET_MODE_32_S_PcdLoadFixAddressRuntimeCodePageNumber(Value)  ((_gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdLoadModuleAtFixAddressEnable  239U
#define _PCD_SIZE_PcdLoadModuleAtFixAddressEnable 8
#define _PCD_GET_MODE_SIZE_PcdLoadModuleAtFixAddressEnable  _PCD_SIZE_PcdLoadModuleAtFixAddressEnable 
#define _PCD_VALUE_PcdLoadModuleAtFixAddressEnable  0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable;
#define _PCD_GET_MODE_64_PcdLoadModuleAtFixAddressEnable  _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable
//#define _PCD_SET_MODE_64_PcdLoadModuleAtFixAddressEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShadowPeimOnS3Boot  240U
#define _PCD_SIZE_PcdShadowPeimOnS3Boot 1
#define _PCD_GET_MODE_SIZE_PcdShadowPeimOnS3Boot  _PCD_SIZE_PcdShadowPeimOnS3Boot 
#define _PCD_VALUE_PcdShadowPeimOnS3Boot  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdShadowPeimOnS3Boot;
#define _PCD_GET_MODE_BOOL_PcdShadowPeimOnS3Boot  _gPcd_FixedAtBuild_PcdShadowPeimOnS3Boot
//#define _PCD_SET_MODE_BOOL_PcdShadowPeimOnS3Boot  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShadowPeimOnBoot  241U
#define _PCD_SIZE_PcdShadowPeimOnBoot 1
#define _PCD_GET_MODE_SIZE_PcdShadowPeimOnBoot  _PCD_SIZE_PcdShadowPeimOnBoot 
#define _PCD_VALUE_PcdShadowPeimOnBoot  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdShadowPeimOnBoot;
#define _PCD_GET_MODE_BOOL_PcdShadowPeimOnBoot  _gPcd_FixedAtBuild_PcdShadowPeimOnBoot
//#define _PCD_SET_MODE_BOOL_PcdShadowPeimOnBoot  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


VOID
EFIAPI
PeiCore (
  IN CONST  EFI_SEC_PEI_HAND_OFF    *SecCoreData,
  IN CONST  EFI_PEI_PPI_DESCRIPTOR  *PpiList,
  IN VOID                           *Context
  );





#ifdef __cplusplus
}
#endif

#endif
