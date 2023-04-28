/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_077A3100_1667_45FA_B98C_37651B5073EE
#define _AUTOGENH_077A3100_1667_45FA_B98C_37651B5073EE

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x077A3100, 0x1667, 0x45FA, {0xB9, 0x8C, 0x37, 0x65, 0x1B, 0x50, 0x73, 0xEE}}

// Guids
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gTpm20HobGuid;
extern EFI_GUID gAmiTcgPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiHobListGuid;

// Protocols
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gEfiTrEEProtocolGuid;
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gAmiTcg2InfoProtocolGuid;
extern EFI_GUID gTcgPlatformSetupPolicyGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdTpmSmbiosCharacteristicSupport  188U
#define _PCD_GET_MODE_BOOL_PcdTpmSmbiosCharacteristicSupport  LibPcdGetBool(_PCD_TOKEN_PcdTpmSmbiosCharacteristicSupport)
#define _PCD_GET_MODE_SIZE_PcdTpmSmbiosCharacteristicSupport  LibPcdGetSize(_PCD_TOKEN_PcdTpmSmbiosCharacteristicSupport)
#define _PCD_SET_MODE_BOOL_PcdTpmSmbiosCharacteristicSupport(Value)  LibPcdSetBool(_PCD_TOKEN_PcdTpmSmbiosCharacteristicSupport, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdTpmSmbiosCharacteristicSupport(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdTpmSmbiosCharacteristicSupport, (Value))

#define _PCD_TOKEN_PcdTpmSmbiosConfigFirmware  189U
#define _PCD_GET_MODE_BOOL_PcdTpmSmbiosConfigFirmware  LibPcdGetBool(_PCD_TOKEN_PcdTpmSmbiosConfigFirmware)
#define _PCD_GET_MODE_SIZE_PcdTpmSmbiosConfigFirmware  LibPcdGetSize(_PCD_TOKEN_PcdTpmSmbiosConfigFirmware)
#define _PCD_SET_MODE_BOOL_PcdTpmSmbiosConfigFirmware(Value)  LibPcdSetBool(_PCD_TOKEN_PcdTpmSmbiosConfigFirmware, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdTpmSmbiosConfigFirmware(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdTpmSmbiosConfigFirmware, (Value))

#define _PCD_TOKEN_PcdTpmSmbiosConfigSoftware  190U
#define _PCD_GET_MODE_BOOL_PcdTpmSmbiosConfigSoftware  LibPcdGetBool(_PCD_TOKEN_PcdTpmSmbiosConfigSoftware)
#define _PCD_GET_MODE_SIZE_PcdTpmSmbiosConfigSoftware  LibPcdGetSize(_PCD_TOKEN_PcdTpmSmbiosConfigSoftware)
#define _PCD_SET_MODE_BOOL_PcdTpmSmbiosConfigSoftware(Value)  LibPcdSetBool(_PCD_TOKEN_PcdTpmSmbiosConfigSoftware, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdTpmSmbiosConfigSoftware(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdTpmSmbiosConfigSoftware, (Value))

#define _PCD_TOKEN_PcdTpmSmbiosConfigOem  191U
#define _PCD_GET_MODE_BOOL_PcdTpmSmbiosConfigOem  LibPcdGetBool(_PCD_TOKEN_PcdTpmSmbiosConfigOem)
#define _PCD_GET_MODE_SIZE_PcdTpmSmbiosConfigOem  LibPcdGetSize(_PCD_TOKEN_PcdTpmSmbiosConfigOem)
#define _PCD_SET_MODE_BOOL_PcdTpmSmbiosConfigOem(Value)  LibPcdSetBool(_PCD_TOKEN_PcdTpmSmbiosConfigOem, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdTpmSmbiosConfigOem(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdTpmSmbiosConfigOem, (Value))

#define _PCD_TOKEN_PcdTpmSmbiosOemDefined  192U
#define _PCD_GET_MODE_32_PcdTpmSmbiosOemDefined  LibPcdGet32(_PCD_TOKEN_PcdTpmSmbiosOemDefined)
#define _PCD_GET_MODE_SIZE_PcdTpmSmbiosOemDefined  LibPcdGetSize(_PCD_TOKEN_PcdTpmSmbiosOemDefined)
#define _PCD_SET_MODE_32_PcdTpmSmbiosOemDefined(Value)  LibPcdSet32(_PCD_TOKEN_PcdTpmSmbiosOemDefined, (Value))
#define _PCD_SET_MODE_32_S_PcdTpmSmbiosOemDefined(Value)  LibPcdSet32S(_PCD_TOKEN_PcdTpmSmbiosOemDefined, (Value))

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  195U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000046U
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
TpmSmbiosDxeEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
