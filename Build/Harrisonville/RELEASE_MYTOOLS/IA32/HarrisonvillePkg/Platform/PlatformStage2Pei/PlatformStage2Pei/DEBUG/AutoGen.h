/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_233DF097_3218_47b2_9E09_FE58C2B20D22
#define _AUTOGENH_233DF097_3218_47b2_9E09_FE58C2B20D22

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x233DF097, 0x3218, 0x47b2, {0x9E, 0x09, 0xFE, 0x58, 0xC2, 0xB2, 0x0D, 0x22}}

// Guids
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiMemoryConfigDataGuid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gCpPlatFlashTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gPlatformInfoHobGuid;
extern EFI_GUID gPlatformModuleTokenSpaceGuid;
extern EFI_GUID gServerCommonTokenSpaceGuid;

// PPIs
extern EFI_GUID gPeiPlatformMemorySizePpiGuid;
extern EFI_GUID gPeiPlatformMemoryRangePpiGuid;
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gEfiPeiSmbusPpiGuid;
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gEfiPeiStallPpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gPeiCachePpiGuid;
extern EFI_GUID gPchPolicyPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0xE0000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvMainBase  256U
#define _PCD_SIZE_PcdFlashFvMainBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMainBase  _PCD_SIZE_PcdFlashFvMainBase 
#define _PCD_VALUE_PcdFlashFvMainBase  0xff850000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvMainBase;
#define _PCD_GET_MODE_32_PcdFlashFvMainBase  _gPcd_FixedAtBuild_PcdFlashFvMainBase
//#define _PCD_SET_MODE_32_PcdFlashFvMainBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvMainSize  257U
#define _PCD_SIZE_PcdFlashFvMainSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMainSize  _PCD_SIZE_PcdFlashFvMainSize 
#define _PCD_VALUE_PcdFlashFvMainSize  0x61f000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvMainSize;
#define _PCD_GET_MODE_32_PcdFlashFvMainSize  _gPcd_FixedAtBuild_PcdFlashFvMainSize
//#define _PCD_SET_MODE_32_PcdFlashFvMainSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBiosBase  274U
#define _PCD_SIZE_PcdBiosBase 4
#define _PCD_GET_MODE_SIZE_PcdBiosBase  _PCD_SIZE_PcdBiosBase 
#define _PCD_VALUE_PcdBiosBase  0xFF800000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdBiosBase;
#define _PCD_GET_MODE_32_PcdBiosBase  _gPcd_FixedAtBuild_PcdBiosBase
//#define _PCD_SET_MODE_32_PcdBiosBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBiosSize  275U
#define _PCD_SIZE_PcdBiosSize 4
#define _PCD_GET_MODE_SIZE_PcdBiosSize  _PCD_SIZE_PcdBiosSize 
#define _PCD_VALUE_PcdBiosSize  0x00800000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdBiosSize;
#define _PCD_GET_MODE_32_PcdBiosSize  _gPcd_FixedAtBuild_PcdBiosSize
//#define _PCD_SET_MODE_32_PcdBiosSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeiInitPlatformStage2 (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
