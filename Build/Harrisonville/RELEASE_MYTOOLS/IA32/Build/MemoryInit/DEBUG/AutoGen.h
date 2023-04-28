/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_DD86C88B_C71A_4033_A2F8_3278AFA09628
#define _AUTOGENH_DD86C88B_C71A_4033_A2F8_3278AFA09628

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xDD86C88B, 0xC71A, 0x4033, {0xA2, 0xF8, 0x32, 0x78, 0xAF, 0xA0, 0x96, 0x28}}

// Guids
extern EFI_GUID gEfiSmmPeiSmramMemoryReserveGuid;
extern EFI_GUID gEfiAcpiVariableGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiMemoryConfigDataGuid;
extern EFI_GUID gEfiMrcVersionGuid;
extern EFI_GUID gEfiBdatMemoryData2Guid;
extern EFI_GUID gIqatIpReservedBaseHobGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gAmiGlobalVariableGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gIqatIpPolicyHobGuid;

// PPIs
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gSiSaPolicyPpiGuid;
extern EFI_GUID gMeUmaPpiGuid;
extern EFI_GUID gPchPolicyPpiGuid;
extern EFI_GUID gPeiIeHeciPpiGuid;
extern EFI_GUID gEfiPeiBeforeMemoryDiscoveredPpiGuid;
extern EFI_GUID gAmiPeiBeforeMrcGuid;
extern EFI_GUID gAmiPeiAfterMrcGuid;
extern EFI_GUID gAmiPeiEndOfMemDetectGuid;
extern EFI_GUID gPeiCapsulePpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;
extern EFI_GUID gIqatIpPolicyPpiGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimMemoryInit (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
