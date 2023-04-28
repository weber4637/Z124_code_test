/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_76A7B4FC_C8D5_462d_A4D2_6E88338A772A
#define _AUTOGENH_76A7B4FC_C8D5_462d_A4D2_6E88338A772A

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x76A7B4FC, 0xC8D5, 0x462d, {0xA4, 0xD2, 0x6E, 0x88, 0x33, 0x8A, 0x77, 0x2A}}

// Guids
extern EFI_GUID gSetupVariableGuid;
extern EFI_GUID gEfiCpuTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiPlatformCpuProtocolGuid;
extern EFI_GUID gEfiPlatformTypeProtocolGuid;
extern EFI_GUID gIntelCpuPcdsSetDoneProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdCpuProcessorFeatureUserConfiguration  157U
#define _PCD_GET_MODE_32_PcdCpuProcessorFeatureUserConfiguration  LibPcdGet32(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfiguration)
#define _PCD_GET_MODE_SIZE_PcdCpuProcessorFeatureUserConfiguration  LibPcdGetSize(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfiguration)
#define _PCD_SET_MODE_32_PcdCpuProcessorFeatureUserConfiguration(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfiguration, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuProcessorFeatureUserConfiguration(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfiguration, (Value))

#define _PCD_TOKEN_PcdCpuProcessorFeatureUserConfigurationEx1  158U
#define _PCD_GET_MODE_32_PcdCpuProcessorFeatureUserConfigurationEx1  LibPcdGet32(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfigurationEx1)
#define _PCD_GET_MODE_SIZE_PcdCpuProcessorFeatureUserConfigurationEx1  LibPcdGetSize(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfigurationEx1)
#define _PCD_SET_MODE_32_PcdCpuProcessorFeatureUserConfigurationEx1(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfigurationEx1, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuProcessorFeatureUserConfigurationEx1(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuProcessorFeatureUserConfigurationEx1, (Value))

#define _PCD_TOKEN_PcdCpuEnergyPolicy  159U
#define _PCD_GET_MODE_8_PcdCpuEnergyPolicy  LibPcdGet8(_PCD_TOKEN_PcdCpuEnergyPolicy)
#define _PCD_GET_MODE_SIZE_PcdCpuEnergyPolicy  LibPcdGetSize(_PCD_TOKEN_PcdCpuEnergyPolicy)
#define _PCD_SET_MODE_8_PcdCpuEnergyPolicy(Value)  LibPcdSet8(_PCD_TOKEN_PcdCpuEnergyPolicy, (Value))
#define _PCD_SET_MODE_8_S_PcdCpuEnergyPolicy(Value)  LibPcdSet8S(_PCD_TOKEN_PcdCpuEnergyPolicy, (Value))

#define _PCD_TOKEN_PcdCpuAcpiLvl2Addr  160U
#define _PCD_GET_MODE_16_PcdCpuAcpiLvl2Addr  LibPcdGet16(_PCD_TOKEN_PcdCpuAcpiLvl2Addr)
#define _PCD_GET_MODE_SIZE_PcdCpuAcpiLvl2Addr  LibPcdGetSize(_PCD_TOKEN_PcdCpuAcpiLvl2Addr)
#define _PCD_SET_MODE_16_PcdCpuAcpiLvl2Addr(Value)  LibPcdSet16(_PCD_TOKEN_PcdCpuAcpiLvl2Addr, (Value))
#define _PCD_SET_MODE_16_S_PcdCpuAcpiLvl2Addr(Value)  LibPcdSet16S(_PCD_TOKEN_PcdCpuAcpiLvl2Addr, (Value))

#define _PCD_TOKEN_PcdCpuPackageCStateLimit  161U
#define _PCD_GET_MODE_8_PcdCpuPackageCStateLimit  LibPcdGet8(_PCD_TOKEN_PcdCpuPackageCStateLimit)
#define _PCD_GET_MODE_SIZE_PcdCpuPackageCStateLimit  LibPcdGetSize(_PCD_TOKEN_PcdCpuPackageCStateLimit)
#define _PCD_SET_MODE_8_PcdCpuPackageCStateLimit(Value)  LibPcdSet8(_PCD_TOKEN_PcdCpuPackageCStateLimit, (Value))
#define _PCD_SET_MODE_8_S_PcdCpuPackageCStateLimit(Value)  LibPcdSet8S(_PCD_TOKEN_PcdCpuPackageCStateLimit, (Value))

#define _PCD_TOKEN_PcdCpuClockModulationDutyCycle  162U
#define _PCD_GET_MODE_8_PcdCpuClockModulationDutyCycle  LibPcdGet8(_PCD_TOKEN_PcdCpuClockModulationDutyCycle)
#define _PCD_GET_MODE_SIZE_PcdCpuClockModulationDutyCycle  LibPcdGetSize(_PCD_TOKEN_PcdCpuClockModulationDutyCycle)
#define _PCD_SET_MODE_8_PcdCpuClockModulationDutyCycle(Value)  LibPcdSet8(_PCD_TOKEN_PcdCpuClockModulationDutyCycle, (Value))
#define _PCD_SET_MODE_8_S_PcdCpuClockModulationDutyCycle(Value)  LibPcdSet8S(_PCD_TOKEN_PcdCpuClockModulationDutyCycle, (Value))

#define _PCD_TOKEN_PcdPlatformCpuSocketCount  163U
#define _PCD_GET_MODE_32_PcdPlatformCpuSocketCount  LibPcdGet32(_PCD_TOKEN_PcdPlatformCpuSocketCount)
#define _PCD_GET_MODE_SIZE_PcdPlatformCpuSocketCount  LibPcdGetSize(_PCD_TOKEN_PcdPlatformCpuSocketCount)
#define _PCD_SET_MODE_32_PcdPlatformCpuSocketCount(Value)  LibPcdSet32(_PCD_TOKEN_PcdPlatformCpuSocketCount, (Value))
#define _PCD_SET_MODE_32_S_PcdPlatformCpuSocketCount(Value)  LibPcdSet32S(_PCD_TOKEN_PcdPlatformCpuSocketCount, (Value))

#define _PCD_TOKEN_PcdPlatformCpuSocketNames  164U
#define _PCD_GET_MODE_64_PcdPlatformCpuSocketNames  LibPcdGet64(_PCD_TOKEN_PcdPlatformCpuSocketNames)
#define _PCD_GET_MODE_SIZE_PcdPlatformCpuSocketNames  LibPcdGetSize(_PCD_TOKEN_PcdPlatformCpuSocketNames)
#define _PCD_SET_MODE_64_PcdPlatformCpuSocketNames(Value)  LibPcdSet64(_PCD_TOKEN_PcdPlatformCpuSocketNames, (Value))
#define _PCD_SET_MODE_64_S_PcdPlatformCpuSocketNames(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPlatformCpuSocketNames, (Value))

#define _PCD_TOKEN_PcdPlatformCpuAssetTags  165U
#define _PCD_GET_MODE_64_PcdPlatformCpuAssetTags  LibPcdGet64(_PCD_TOKEN_PcdPlatformCpuAssetTags)
#define _PCD_GET_MODE_SIZE_PcdPlatformCpuAssetTags  LibPcdGetSize(_PCD_TOKEN_PcdPlatformCpuAssetTags)
#define _PCD_SET_MODE_64_PcdPlatformCpuAssetTags(Value)  LibPcdSet64(_PCD_TOKEN_PcdPlatformCpuAssetTags, (Value))
#define _PCD_SET_MODE_64_S_PcdPlatformCpuAssetTags(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPlatformCpuAssetTags, (Value))

#define _PCD_TOKEN_PcdIsPowerOnReset  166U
#define _PCD_GET_MODE_BOOL_PcdIsPowerOnReset  LibPcdGetBool(_PCD_TOKEN_PcdIsPowerOnReset)
#define _PCD_GET_MODE_SIZE_PcdIsPowerOnReset  LibPcdGetSize(_PCD_TOKEN_PcdIsPowerOnReset)
#define _PCD_SET_MODE_BOOL_PcdIsPowerOnReset(Value)  LibPcdSetBool(_PCD_TOKEN_PcdIsPowerOnReset, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdIsPowerOnReset(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdIsPowerOnReset, (Value))

#define _PCD_TOKEN_PcdCpuDcuMode  167U
#define _PCD_GET_MODE_8_PcdCpuDcuMode  LibPcdGet8(_PCD_TOKEN_PcdCpuDcuMode)
#define _PCD_GET_MODE_SIZE_PcdCpuDcuMode  LibPcdGetSize(_PCD_TOKEN_PcdCpuDcuMode)
#define _PCD_SET_MODE_8_PcdCpuDcuMode(Value)  LibPcdSet8(_PCD_TOKEN_PcdCpuDcuMode, (Value))
#define _PCD_SET_MODE_8_S_PcdCpuDcuMode(Value)  LibPcdSet8S(_PCD_TOKEN_PcdCpuDcuMode, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PlatformCpuPolicyEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
