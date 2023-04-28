/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9B8251B2_4DFE_429a_9B51_3B3E9EF76551
#define _AUTOGENH_9B8251B2_4DFE_429a_9B51_3B3E9EF76551

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x9B8251B2, 0x4DFE, 0x429a, {0x9B, 0x51, 0x3B, 0x3E, 0x9E, 0xF7, 0x65, 0x51}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gPlatformInfoHobGuid;
extern EFI_GUID gPlatformModuleTokenSpaceGuid;
extern EFI_GUID gCpPlatFlashTokenSpaceGuid;
extern EFI_GUID gServerCommonTokenSpaceGuid;

// PPIs
extern EFI_GUID gEfiPeiIpmiTransportPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;
extern EFI_GUID gPchPolicyPpiGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
IPMIPlatformID_entry (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
