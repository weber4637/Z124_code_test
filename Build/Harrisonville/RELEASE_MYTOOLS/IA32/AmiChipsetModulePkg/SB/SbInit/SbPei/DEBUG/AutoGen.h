/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_C1FBD624_27EA_40d1_AA48_94C3DC5C7E0D
#define _AUTOGENH_C1FBD624_27EA_40d1_AA48_94C3DC5C7E0D

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xC1FBD624, 0x27EA, 0x40d1, {0xAA, 0x48, 0x94, 0xC3, 0xDC, 0x5C, 0x7E, 0x0D}}

// Guids
extern EFI_GUID gAmiCmosBadHobGuid;
extern EFI_GUID gAmiChipsetModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gAmiGlobalVariableGuid;
extern EFI_GUID gAmiChipsetPkgTokenSpaceGuid;

// PPIs
extern EFI_GUID gAmiPeiSbInitPolicyGuid;
extern EFI_GUID gAmiPeiPciTableInitPpiGuid;
extern EFI_GUID gEfiPeiMasterBootModePpiGuid;
extern EFI_GUID gEfiPeiBootInRecoveryModePpiGuid;
extern EFI_GUID gPeiSmmControlPpiGuid;
extern EFI_GUID gPeiAtaControllerPpiGuid;
extern EFI_GUID gEfiPeiResetPpiGuid;
extern EFI_GUID gEfiPeiStallPpiGuid;
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gAmiPeiSbCustomPpiGuid;
extern EFI_GUID gEfiPeiSmbus2PpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSbWakeType  2U
#define _PCD_GET_MODE_8_PcdSbWakeType  LibPcdGet8(_PCD_TOKEN_PcdSbWakeType)
#define _PCD_GET_MODE_SIZE_PcdSbWakeType  LibPcdGetSize(_PCD_TOKEN_PcdSbWakeType)
#define _PCD_SET_MODE_8_PcdSbWakeType(Value)  LibPcdSet8(_PCD_TOKEN_PcdSbWakeType, (Value))
#define _PCD_SET_MODE_8_S_PcdSbWakeType(Value)  LibPcdSet8S(_PCD_TOKEN_PcdSbWakeType, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SbPeiInit (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
