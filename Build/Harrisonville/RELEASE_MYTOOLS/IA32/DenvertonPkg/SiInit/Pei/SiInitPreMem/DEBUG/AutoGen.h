/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_A8499E65_A6F6_48B0_96DB_45C266030D83
#define _AUTOGENH_A8499E65_A6F6_48B0_96DB_45C266030D83

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xA8499E65, 0xA6F6, 0x48B0, {0x96, 0xDB, 0x45, 0xC2, 0x66, 0x03, 0x0D, 0x83}}

// Guids
extern EFI_GUID gPerfPchPrePolicyGuid;
extern EFI_GUID gPerfSiValidateGuid;
extern EFI_GUID gPerfPchValidateGuid;
extern EFI_GUID gPerfPchPreMemGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gPchPmcStPgHobGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gPerformanceProtocolGuid;
extern EFI_GUID gPerformanceExProtocolGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiSmbusArpMapGuid;
extern EFI_GUID gPchPolicyHobGuid;
extern EFI_GUID gPchDeviceTableHobGuid;
extern EFI_GUID gPchChipsetInitHobGuid;
extern EFI_GUID gWdtHobGuid;

// PPIs
extern EFI_GUID gPchPolicyPpiGuid;
extern EFI_GUID gSiPolicyPpiGuid;
extern EFI_GUID gPeiMePlatformPolicyPpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;
extern EFI_GUID gFiaMuxPolicyPpiGuid;
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
extern EFI_GUID gHsuartIpPolicyPpiGuid;
extern EFI_GUID gHeciPpiGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SiInitPrePolicy (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
