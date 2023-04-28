/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4862aff3_667c_5458_b274_a1c62df8ba80
#define _AUTOGENH_4862aff3_667c_5458_b274_a1c62df8ba80

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x4862aff3, 0x667c, 0x5458, {0xb2, 0x74, 0xa1, 0xc6, 0x2d, 0xf8, 0xba, 0x80}}

// Guids
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

// PPIs
extern EFI_GUID gHeciPpiGuid;
extern EFI_GUID gPeiHeci2PpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;
extern EFI_GUID gWdtPpiGuid;
extern EFI_GUID gPchResetPpiGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
HeciPeimEntryPoint (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
