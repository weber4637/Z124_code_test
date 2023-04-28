/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_299D6F8B_2EC9_4E40_9EC6_DDAA7EBF5FD9
#define _AUTOGENH_299D6F8B_2EC9_4E40_9EC6_DDAA7EBF5FD9

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x299D6F8B, 0x2EC9, 0x4E40, {0x9E, 0xC6, 0xDD, 0xAA, 0x7E, 0xBF, 0x5F, 0xD9}}

// Guids
extern EFI_GUID gSiPolicyHobGuid;
extern EFI_GUID gPerfPchPostMemGuid;
extern EFI_GUID gPerfMePostMemGuid;
extern EFI_GUID gEfiIntelFrameworkModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gPerformanceProtocolGuid;
extern EFI_GUID gPerformanceExProtocolGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gPchPmcStPgHobGuid;
extern EFI_GUID gPcieIpPolicyHobGuid;
extern EFI_GUID gIqatIpReservedBaseHobGuid;
extern EFI_GUID gIqatIpPolicyHobGuid;
extern EFI_GUID gFiaMuxPolicyHobGuid;
extern EFI_GUID gEfiSmbusArpMapGuid;
extern EFI_GUID gPchPolicyHobGuid;
extern EFI_GUID gPchDeviceTableHobGuid;
extern EFI_GUID gPchChipsetInitHobGuid;
extern EFI_GUID gWdtHobGuid;
extern EFI_GUID gRasPolicyHobGuid;
extern EFI_GUID gSaDataHobGuid;
extern EFI_GUID gPlatformInfoHobGuid;
extern EFI_GUID gPlatformModuleTokenSpaceGuid;
extern EFI_GUID gCpPlatFlashTokenSpaceGuid;
extern EFI_GUID gServerCommonTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiPciEnumerationCompleteProtocolGuid;

// PPIs
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gSiPolicyPpiGuid;
extern EFI_GUID gPeiMePlatformPolicyPpiGuid;
extern EFI_GUID gPcieIpPolicyPpiGuid;
extern EFI_GUID gIqatIpPolicyPpiGuid;
extern EFI_GUID gRasPolicyPpiGuid;
extern EFI_GUID gSiSaPolicyPpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;
extern EFI_GUID gPchPolicyPpiGuid;
extern EFI_GUID gFiaMuxPolicyPpiGuid;
extern EFI_GUID gHeciPpiGuid;
extern EFI_GUID gWdtPpiGuid;
extern EFI_GUID gPchResetPpiGuid;
extern EFI_GUID gPchResetCallbackPpiGuid;
extern EFI_GUID gPchSpiPpiGuid;
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gEfiPeiSmbus2PpiGuid;
extern EFI_GUID gPchPcieDeviceTablePpiGuid;
extern EFI_GUID gPchPmcXramOffsetDataPpiGuid;
extern EFI_GUID gPeiCachePpiGuid;
extern EFI_GUID gPchResetEndOfPeiTypeGuid;
extern EFI_GUID gHsuartIpPolicyPpiGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdBootState  1U
#define _PCD_GET_MODE_BOOL_PcdBootState  LibPcdGetBool(_PCD_TOKEN_PcdBootState)
#define _PCD_GET_MODE_SIZE_PcdBootState  LibPcdGetSize(_PCD_TOKEN_PcdBootState)
#define _PCD_SET_MODE_BOOL_PcdBootState(Value)  LibPcdSetBool(_PCD_TOKEN_PcdBootState, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdBootState(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdBootState, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SiInit (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
