/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_53984C6A_1B4A_4174_9512_A65E5BC8B278
#define _AUTOGENH_53984C6A_1B4A_4174_9512_A65E5BC8B278

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x53984C6A, 0x1B4A, 0x4174, {0x95, 0x12, 0xA6, 0x5E, 0x5B, 0xC8, 0xB2, 0x78}}

// Guids
extern EFI_GUID gPlatformInfoHobGuid;
extern EFI_GUID gEfiBootStateGuid;
extern EFI_GUID gEfiFlashMapHobGuid;
extern EFI_GUID gEfiFirmwarePerformanceGuid;
extern EFI_GUID gEfiSystemNvDataHobGuid;
extern EFI_GUID gCpPlatFlashTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gPlatformModuleTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gSiPkgTokenSpaceGuid;
extern EFI_GUID gEfiCommonPkgTokenSpaceGuid;
extern EFI_GUID gPerformanceProtocolGuid;
extern EFI_GUID gPerformanceExProtocolGuid;
extern EFI_GUID gPcieIpPolicyHobGuid;
extern EFI_GUID gPchPmcStPgHobGuid;
extern EFI_GUID gServerCommonTokenSpaceGuid;
extern EFI_GUID gAmiGlobalVariableGuid;
extern EFI_GUID gSetupVariableGuid;
extern EFI_GUID gPchSetupVariableGuid;
extern EFI_GUID gFiaMuxPolicyHobGuid;
extern EFI_GUID gRasPolicyHobGuid;
extern EFI_GUID gIqatIpPolicyHobGuid;
extern EFI_GUID gSaDataHobGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gAmiChipsetModulePkgTokenSpaceGuid;
extern EFI_GUID gAmiChipsetPkgTokenSpaceGuid;

// PPIs
extern EFI_GUID gEfiPeiStallPpiGuid;
extern EFI_GUID gEfiPeiReadOnlyVariablePpiGuid;
extern EFI_GUID gPeiBaseMemoryTestPpiGuid;
extern EFI_GUID gEfiPeiResetPpiGuid;
extern EFI_GUID gPeiCapsulePpiGuid;
extern EFI_GUID gEfiPeiMasterBootModePpiGuid;
extern EFI_GUID gEfiPeiBootInRecoveryModePpiGuid;
extern EFI_GUID gPeiSecPerformancePpiGuid;
extern EFI_GUID gPchPolicyPpiGuid;
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
extern EFI_GUID gHeciPpiGuid;
extern EFI_GUID gPchResetPpiGuid;
extern EFI_GUID gRasPolicyPpiGuid;
extern EFI_GUID gIqatIpPolicyPpiGuid;
extern EFI_GUID gSiPolicyPpiGuid;
extern EFI_GUID gSiSaPolicyPpiGuid;
extern EFI_GUID gPchSpiPpiGuid;
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gPchPcieDeviceTablePpiGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFlashFvMainBase  256U
#define _PCD_SIZE_PcdFlashFvMainBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMainBase  _PCD_SIZE_PcdFlashFvMainBase 
#define _PCD_VALUE_PcdFlashFvMainBase  0xff850000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvMainBase;
#define _PCD_GET_MODE_32_PcdFlashFvMainBase  _gPcd_FixedAtBuild_PcdFlashFvMainBase
//#define _PCD_SET_MODE_32_PcdFlashFvMainBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvMainSize  257U
#define _PCD_SIZE_PcdFlashFvMainSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMainSize  _PCD_SIZE_PcdFlashFvMainSize 
#define _PCD_VALUE_PcdFlashFvMainSize  0x61f000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvMainSize;
#define _PCD_GET_MODE_32_PcdFlashFvMainSize  _gPcd_FixedAtBuild_PcdFlashFvMainSize
//#define _PCD_SET_MODE_32_PcdFlashFvMainSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvOemLogoBase  254U
#define _PCD_SIZE_PcdFlashFvOemLogoBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvOemLogoBase  _PCD_SIZE_PcdFlashFvOemLogoBase 
#define _PCD_VALUE_PcdFlashFvOemLogoBase  0xFF820000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvOemLogoBase;
#define _PCD_GET_MODE_32_PcdFlashFvOemLogoBase  _gPcd_FixedAtBuild_PcdFlashFvOemLogoBase
//#define _PCD_SET_MODE_32_PcdFlashFvOemLogoBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvOemLogoSize  255U
#define _PCD_SIZE_PcdFlashFvOemLogoSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvOemLogoSize  _PCD_SIZE_PcdFlashFvOemLogoSize 
#define _PCD_VALUE_PcdFlashFvOemLogoSize  0x00200000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvOemLogoSize;
#define _PCD_GET_MODE_32_PcdFlashFvOemLogoSize  _gPcd_FixedAtBuild_PcdFlashFvOemLogoSize
//#define _PCD_SET_MODE_32_PcdFlashFvOemLogoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  258U
#define _PCD_SIZE_PcdFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase  _PCD_SIZE_PcdFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdFlashNvStorageVariableBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  259U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase  260U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase  _PCD_SIZE_PcdFlashNvStorageFtwWorkingBase 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingBase  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  261U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize  _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase  262U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase  _PCD_SIZE_PcdFlashNvStorageFtwSpareBase 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareBase  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  263U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvMrcNormalBase  264U
#define _PCD_SIZE_PcdFlashFvMrcNormalBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMrcNormalBase  _PCD_SIZE_PcdFlashFvMrcNormalBase 
#define _PCD_VALUE_PcdFlashFvMrcNormalBase  0x00000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvMrcNormalBase;
#define _PCD_GET_MODE_32_PcdFlashFvMrcNormalBase  _gPcd_FixedAtBuild_PcdFlashFvMrcNormalBase
//#define _PCD_SET_MODE_32_PcdFlashFvMrcNormalBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvMrcNormalSize  265U
#define _PCD_SIZE_PcdFlashFvMrcNormalSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMrcNormalSize  _PCD_SIZE_PcdFlashFvMrcNormalSize 
#define _PCD_VALUE_PcdFlashFvMrcNormalSize  0x00100000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvMrcNormalSize;
#define _PCD_GET_MODE_32_PcdFlashFvMrcNormalSize  _gPcd_FixedAtBuild_PcdFlashFvMrcNormalSize
//#define _PCD_SET_MODE_32_PcdFlashFvMrcNormalSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvSecPeiBase  252U
#define _PCD_SIZE_PcdFlashFvSecPeiBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvSecPeiBase  _PCD_SIZE_PcdFlashFvSecPeiBase 
#define _PCD_VALUE_PcdFlashFvSecPeiBase  0x00000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvSecPeiBase;
#define _PCD_GET_MODE_32_PcdFlashFvSecPeiBase  _gPcd_FixedAtBuild_PcdFlashFvSecPeiBase
//#define _PCD_SET_MODE_32_PcdFlashFvSecPeiBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvSecPeiSize  253U
#define _PCD_SIZE_PcdFlashFvSecPeiSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvSecPeiSize  _PCD_SIZE_PcdFlashFvSecPeiSize 
#define _PCD_VALUE_PcdFlashFvSecPeiSize  0x00040000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvSecPeiSize;
#define _PCD_GET_MODE_32_PcdFlashFvSecPeiSize  _gPcd_FixedAtBuild_PcdFlashFvSecPeiSize
//#define _PCD_SET_MODE_32_PcdFlashFvSecPeiSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDfxAdvDebugJumper  4U
#define _PCD_GET_MODE_BOOL_PcdDfxAdvDebugJumper  LibPcdGetBool(_PCD_TOKEN_PcdDfxAdvDebugJumper)
#define _PCD_GET_MODE_SIZE_PcdDfxAdvDebugJumper  LibPcdGetSize(_PCD_TOKEN_PcdDfxAdvDebugJumper)
#define _PCD_SET_MODE_BOOL_PcdDfxAdvDebugJumper(Value)  LibPcdSetBool(_PCD_TOKEN_PcdDfxAdvDebugJumper, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdDfxAdvDebugJumper(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdDfxAdvDebugJumper, (Value))

#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0xE0000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashMicrocodeFvBase  266U
#define _PCD_SIZE_PcdFlashMicrocodeFvBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashMicrocodeFvBase  _PCD_SIZE_PcdFlashMicrocodeFvBase 
#define _PCD_VALUE_PcdFlashMicrocodeFvBase  0x00000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashMicrocodeFvBase;
#define _PCD_GET_MODE_32_PcdFlashMicrocodeFvBase  _gPcd_FixedAtBuild_PcdFlashMicrocodeFvBase
//#define _PCD_SET_MODE_32_PcdFlashMicrocodeFvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashMicrocodeFvSize  267U
#define _PCD_SIZE_PcdFlashMicrocodeFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashMicrocodeFvSize  _PCD_SIZE_PcdFlashMicrocodeFvSize 
#define _PCD_VALUE_PcdFlashMicrocodeFvSize  0x00000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashMicrocodeFvSize;
#define _PCD_GET_MODE_32_PcdFlashMicrocodeFvSize  _gPcd_FixedAtBuild_PcdFlashMicrocodeFvSize
//#define _PCD_SET_MODE_32_PcdFlashMicrocodeFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeiInitPlatformStage1 (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
