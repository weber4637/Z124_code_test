/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_39E8CA1A_7A69_4a73_834A_D06381933286
#define _AUTOGENH_39E8CA1A_7A69_4a73_834A_D06381933286

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x39E8CA1A, 0x7A69, 0x4a73, {0x83, 0x4A, 0xD0, 0x63, 0x81, 0x93, 0x32, 0x86}}

// Guids
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gAmiGlobalVariableGuid;

// PPIs
extern EFI_GUID gPeiUsbIoPpiGuid;
extern EFI_GUID gPeiUsbHostControllerPpiGuid;
extern EFI_GUID gPeiUsbControllerPpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gEfiPeiCpuIoPpiInstalledGuid;
extern EFI_GUID gEfiPeiVirtualBlockIoPpiGuid;
extern EFI_GUID gEfiPeiStallPpiGuid;
extern EFI_GUID gEfiPeiBootInRecoveryModePpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
UsbPeiEntryPoint (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
