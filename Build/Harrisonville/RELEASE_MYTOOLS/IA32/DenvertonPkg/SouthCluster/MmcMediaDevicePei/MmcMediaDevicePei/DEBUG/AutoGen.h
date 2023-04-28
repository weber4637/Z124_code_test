/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_856C6A10_F3B8_4c2e_A273_7868C09BE8EA
#define _AUTOGENH_856C6A10_F3B8_4c2e_A273_7868C09BE8EA

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x856C6A10, 0xF3B8, 0x4c2e, {0xA2, 0x73, 0x78, 0x68, 0xC0, 0x9B, 0xE8, 0xEA}}

// Guids
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gPchPmcStPgHobGuid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiSmbusArpMapGuid;
extern EFI_GUID gPchPolicyHobGuid;
extern EFI_GUID gPchDeviceTableHobGuid;
extern EFI_GUID gPchChipsetInitHobGuid;
extern EFI_GUID gWdtHobGuid;

// PPIs
extern EFI_GUID gEfiPeiVirtualBlockIoPpiGuid;
extern EFI_GUID gPeiSdhcPpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;
extern EFI_GUID gFiaMuxPolicyPpiGuid;
extern EFI_GUID gPchPolicyPpiGuid;
extern EFI_GUID gPcieIpPolicyPpiGuid;
extern EFI_GUID gWdtPpiGuid;
extern EFI_GUID gPchResetPpiGuid;
extern EFI_GUID gPchResetCallbackPpiGuid;
extern EFI_GUID gPchSpiPpiGuid;
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gEfiPeiSmbus2PpiGuid;
extern EFI_GUID gPchPcieDeviceTablePpiGuid;
extern EFI_GUID gPchPmcXramOffsetDataPpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gPeiCachePpiGuid;
extern EFI_GUID gRasPolicyPpiGuid;
extern EFI_GUID gPchResetEndOfPeiTypeGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdEmmcBaseAddress0  276U
#define _PCD_SIZE_PcdEmmcBaseAddress0 4
#define _PCD_GET_MODE_SIZE_PcdEmmcBaseAddress0  _PCD_SIZE_PcdEmmcBaseAddress0 
#define _PCD_VALUE_PcdEmmcBaseAddress0  0xFC000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdEmmcBaseAddress0;
#define _PCD_GET_MODE_32_PcdEmmcBaseAddress0  _gPcd_FixedAtBuild_PcdEmmcBaseAddress0
//#define _PCD_SET_MODE_32_PcdEmmcBaseAddress0  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMmcSdMultiBlockSupport  277U
#define _PCD_SIZE_PcdMmcSdMultiBlockSupport 1
#define _PCD_GET_MODE_SIZE_PcdMmcSdMultiBlockSupport  _PCD_SIZE_PcdMmcSdMultiBlockSupport 
#define _PCD_VALUE_PcdMmcSdMultiBlockSupport  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdMmcSdMultiBlockSupport;
#define _PCD_GET_MODE_BOOL_PcdMmcSdMultiBlockSupport  _gPcd_FixedAtBuild_PcdMmcSdMultiBlockSupport
//#define _PCD_SET_MODE_BOOL_PcdMmcSdMultiBlockSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
MmcMainEntryPoint (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
