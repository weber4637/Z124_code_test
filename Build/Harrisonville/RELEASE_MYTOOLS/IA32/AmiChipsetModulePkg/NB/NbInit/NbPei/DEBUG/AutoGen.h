/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_79AA6086_035A_4ad9_A89A_A6D5AA27F0E2
#define _AUTOGENH_79AA6086_035A_4ad9_A89A_A6D5AA27F0E2

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x79AA6086, 0x035A, 0x4ad9, {0xA8, 0x9A, 0xA6, 0xD5, 0xAA, 0x27, 0xF0, 0xE2}}

// Guids
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gAmiGlobalVariableGuid;
extern EFI_GUID gAmiChipsetModulePkgTokenSpaceGuid;
extern EFI_GUID gAmiChipsetPkgTokenSpaceGuid;

// PPIs
extern EFI_GUID gAmiPeiNbCustomPpiGuid;
extern EFI_GUID gAmiPeiNbInitPolicyGuid;
extern EFI_GUID gEfiPeiStallPpiGuid;
extern EFI_GUID gPeiBaseMemoryTestPpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gAmiPeiPciTableInitPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
NbPeiInit (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
