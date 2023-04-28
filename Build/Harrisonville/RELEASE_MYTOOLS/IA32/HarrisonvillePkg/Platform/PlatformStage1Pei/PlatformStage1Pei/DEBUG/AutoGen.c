/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/PeimEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x53984C6A, 0x1B4A, 0x4174, {0x95, 0x12, 0xA6, 0x5E, 0x5B, 0xC8, 0xB2, 0x78}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "PlatformStage1Pei";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPlatformInfoHobGuid = { 0x9F504A57, 0x06C2, 0x472D, { 0x9B, 0x5F, 0xC1, 0xA7, 0x0D, 0xEE, 0x1C, 0x77} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiBootStateGuid = { 0x60b5e939, 0xfcf, 0x4227, { 0xba, 0x83, 0x6b, 0xbe, 0xd4, 0x5b, 0xc0, 0xe3 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFlashMapHobGuid = {0xb091e7d2, 0x5a0, 0x4198, {0x94, 0xf0, 0x74, 0xb7, 0xb8, 0xc5, 0x54, 0x59}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwarePerformanceGuid = { 0xc095791a, 0x3001, 0x47b2, { 0x80, 0xc9, 0xea, 0xc7, 0x31, 0x9f, 0x2f, 0xa4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSystemNvDataHobGuid = {0xd6e5092d, 0xc7b2, 0x4872, {0xaf, 0x66, 0xfd, 0xc0, 0xe6, 0xf9, 0x5e, 0x78}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gCpPlatFlashTokenSpaceGuid = { 0xc9c39664, 0x96dd, 0x4c5c, { 0xaf, 0xd7, 0xcd, 0x65, 0x76, 0x29, 0xcf, 0xb0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPlatformModuleTokenSpaceGuid = { 0xaec0dee0, 0xf04d, 0x425d, { 0x9a, 0xcd, 0xa9, 0x4b, 0x49, 0xc7, 0x51, 0x7a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocBspStoreGuid = { 0x564B33CD, 0xC92A, 0x4593, { 0x90, 0xBF, 0x24, 0x73, 0xE4, 0x3C, 0x63, 0x22 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gSiPkgTokenSpaceGuid = {0x977c97c1, 0x47e1, 0x4b6b, {0x96, 0x69, 0x43, 0x66, 0x99, 0xcb, 0xe4, 0x5b}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiCommonPkgTokenSpaceGuid = { 0x86cf2b1a, 0xb3da, 0x4642, { 0x95, 0xf5, 0xd0, 0x1c, 0x6c, 0x1c, 0x60, 0xb8 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPerformanceProtocolGuid = { 0x76B6BDFA, 0x2ACD, 0x4462, { 0x9E, 0x3F, 0xCB, 0x58, 0xC9, 0x69, 0xD9, 0x37 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPerformanceExProtocolGuid = { 0x1ea81bec, 0xf01a, 0x4d98, { 0xa2, 0x1,  0x4a, 0x61, 0xce, 0x2f, 0xc0, 0x22 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcieIpPolicyHobGuid = { 0x113891f9, 0x09f8, 0x4209, { 0x9c, 0xd6, 0xbd, 0x9d, 0x3e, 0x27, 0x70, 0xbf } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPchPmcStPgHobGuid = { 0x4968e165, 0x12b9, 0x4674, { 0x9b, 0x9a, 0x81, 0x24, 0xff, 0xe, 0x58, 0x7b } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gServerCommonTokenSpaceGuid = { 0x356471b1, 0xb483, 0x42ae, { 0xb6, 0xe7, 0x3b, 0x2e, 0xba, 0xb1, 0x4e, 0x15 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmiGlobalVariableGuid = { 0x1368881, 0xc4ad, 0x4b1d, { 0xb6, 0x31, 0xd5, 0x7a, 0x8e, 0xc8, 0xdb, 0x6b } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gSetupVariableGuid = {0xc598db5c, 0x50e7, 0x46f6, { 0xab, 0x16, 0x41, 0x6f, 0x47, 0x23, 0x9c, 0xa9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPchSetupVariableGuid = {0x4570b7f1, 0xade8, 0x4943, {0x8d, 0xc3, 0x40, 0x64, 0x72, 0x84, 0x23, 0x84}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gFiaMuxPolicyHobGuid = { 0x26ad492e, 0xf951, 0x4e43, { 0xbc, 0x72, 0x22, 0x76, 0x58, 0xb1, 0xf6, 0x23 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gRasPolicyHobGuid = { 0x9f87ebc0, 0xcc12, 0x4479, { 0xa3, 0x26, 0xb9, 0xe, 0xfc, 0xa1, 0x8a, 0xf3 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gIqatIpPolicyHobGuid = { 0xa351a181, 0x4580, 0x48d0, { 0x83, 0x69, 0x3c, 0xda, 0x9a, 0xf5, 0x96, 0x3c } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gSaDataHobGuid = { 0x4c10d934, 0x38e6, 0x45a4, { 0x9a, 0x24, 0x2a, 0x79, 0xb9, 0x3d, 0xcb, 0x7f } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGlobalVariableGuid = { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmiChipsetModulePkgTokenSpaceGuid = {0xe938c9be,0xcfc2,0x4a9d,{0xa3,0xcd,0x96,0x53,0xd8,0x13,0x30,0x09}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmiChipsetPkgTokenSpaceGuid = {0xb1fbf84a, 0xc091, 0x4a80, {0xa7, 0x44, 0x23, 0x44, 0x2a, 0x2b, 0x7b, 0xdf}};

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiStallPpiGuid = { 0x1f4c6f90, 0xb06b, 0x48d8, {0xa2, 0x01, 0xba, 0xe5, 0xf1, 0xcd, 0x7d, 0x56 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiReadOnlyVariablePpiGuid = { 0x3CDC90C6, 0x13FB, 0x4A75, { 0x9E, 0x79, 0x59, 0xE9, 0xDD, 0x78, 0xB9, 0xFA }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPeiBaseMemoryTestPpiGuid = { 0xb6ec423c, 0x21d2, 0x490d, { 0x85, 0xc6, 0xdd, 0x58, 0x64, 0xea, 0xa6, 0x74 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiResetPpiGuid = { 0xef398d58, 0x9dfd, 0x4103, {0xbf, 0x94, 0x78, 0xc6, 0xf4, 0xfe, 0x71, 0x2f } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPeiCapsulePpiGuid = { 0x3acf33ee, 0xd892, 0x40f4, { 0xa2, 0xfc, 0x38, 0x54, 0xd2, 0xe1, 0x32, 0x3d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiMasterBootModePpiGuid = { 0x7408d748, 0xfc8c, 0x4ee6, {0x92, 0x88, 0xc4, 0xbe, 0xc0, 0x92, 0xa4, 0x10 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiBootInRecoveryModePpiGuid = { 0x17ee496a, 0xd8e4, 0x4b9a, {0x94, 0xd1, 0xce, 0x82, 0x72, 0x30, 0x8, 0x50 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPeiSecPerformancePpiGuid = { 0x0ecc666b, 0x4662, 0x47f9, { 0x9d, 0xd5, 0xd0, 0x96, 0xff, 0x7d, 0xa4, 0x9e }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPchPolicyPpiGuid = { 0xdfe2b897, 0xe8e, 0x4926, { 0xbc, 0x69, 0xe5, 0xed, 0xd3, 0xf9, 0x38, 0xe1 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdPpiGuid = { 0x6e81c58, 0x4ad7, 0x44bc, { 0x83, 0x90, 0xf1, 0x2, 0x65, 0xf7, 0x24, 0x80 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiPcdPpiGuid = { 0x1f34d25, 0x4de2, 0x23ad, { 0x3f, 0xf3, 0x36, 0x35, 0x3f, 0xf3, 0x23, 0xf1 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoPpiGuid = { 0x4d8b155b, 0xc059, 0x4c8f, { 0x89, 0x26,  0x6, 0xfd, 0x43, 0x31, 0xdb, 0x8a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoPpiGuid = { 0xa60c6b59, 0xe459, 0x425d, { 0x9c, 0x69,  0xb, 0xcc, 0x9c, 0xb2, 0x7d, 0x81 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid = { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x0, 0x31, 0xaa, 0xbb, 0x39 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid = { 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmiDebugServicePpiGuid = {0x36232936, 0xe76, 0x31c8, { 0xa1, 0x3a, 0x3a, 0xf2, 0xfc, 0x1c, 0x39, 0x32} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gFiaMuxPolicyPpiGuid = { 0x43cc4396, 0x68af, 0x42da, { 0xa9, 0x5, 0x4a, 0xf2, 0xed, 0xec, 0x28, 0x47 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcieIpPolicyPpiGuid = { 0xbb159a68, 0x8300, 0x43ef, { 0xa2, 0xa7, 0xf2, 0xad, 0xe6, 0xc9, 0x64, 0xa6 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gWdtPpiGuid = { 0xF38D1338, 0xAF7A, 0x4FB6, { 0x91, 0xDB, 0x1A, 0x9C, 0x21, 0x83, 0x57, 0x0D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gHeciPpiGuid = { 0xd14319e2, 0x407a, 0x9580, { 0x8d, 0xe5, 0x51, 0xa8, 0xff, 0xc6, 0xd7, 0xd7 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPchResetPpiGuid = { 0x433e0f9f, 0x5ae, 0x410a, { 0xa0, 0xc3, 0xbf, 0x29, 0x8e, 0xcb, 0x25, 0xac }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gRasPolicyPpiGuid = { 0xa70250fc, 0x6b8f, 0x4b24, { 0xb2, 0xef, 0x21, 0x23, 0xe4, 0x70, 0x87, 0x3 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gIqatIpPolicyPpiGuid = { 0xac6bd8e9, 0xb89, 0x45b1, { 0xae, 0x9, 0xa2, 0xc0, 0x17, 0x33, 0x4b, 0x6a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gSiPolicyPpiGuid = { 0xaebffa01, 0x7edc, 0x49ff, { 0x8d, 0x88, 0xcb, 0x84, 0x8c, 0x5e, 0x86, 0x70}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gSiSaPolicyPpiGuid = { 0xf5621af5, 0xf70b, 0x4360, { 0x84, 0xf3, 0xc2, 0xcf, 0x51, 0x43, 0xcd, 0xb8 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPchSpiPpiGuid = { 0xfbf26154, 0x4e55, 0x4bdc, { 0xaf, 0x7b, 0xd9, 0x18, 0xac, 0x44, 0x3f, 0x61 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid = { 0x2ab86ef5, 0xecb5, 0x4134, { 0xb5, 0x56, 0x38, 0x54, 0xca, 0x1f, 0xe1, 0xb4 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPchPcieDeviceTablePpiGuid = { 0xaf4a1998, 0x4949, 0x4545, { 0x9c, 0x4c, 0xc1, 0xe7, 0xc0, 0x42, 0xe0, 0x56 }};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMainBase = _PCD_VALUE_PcdFlashFvMainBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMainSize = _PCD_VALUE_PcdFlashFvMainSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvOemLogoBase = _PCD_VALUE_PcdFlashFvOemLogoBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvOemLogoSize = _PCD_VALUE_PcdFlashFvOemLogoSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase = _PCD_VALUE_PcdFlashNvStorageVariableBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize = _PCD_VALUE_PcdFlashNvStorageVariableSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase = _PCD_VALUE_PcdFlashNvStorageFtwWorkingBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize = _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase = _PCD_VALUE_PcdFlashNvStorageFtwSpareBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize = _PCD_VALUE_PcdFlashNvStorageFtwSpareSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMrcNormalBase = _PCD_VALUE_PcdFlashFvMrcNormalBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMrcNormalSize = _PCD_VALUE_PcdFlashFvMrcNormalSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvSecPeiBase = _PCD_VALUE_PcdFlashFvSecPeiBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvSecPeiSize = _PCD_VALUE_PcdFlashFvSecPeiSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress = _PCD_VALUE_PcdPciExpressBaseAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashMicrocodeFvBase = _PCD_VALUE_PcdFlashMicrocodeFvBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashMicrocodeFvSize = _PCD_VALUE_PcdFlashMicrocodeFvSize;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdVerifyNodeInList  196U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  197U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  198U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  199U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  194U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x2FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  200U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  201U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  195U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000046U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiBaseAddress  205U
#define _PCD_SIZE_PcdAcpiBaseAddress 2
#define _PCD_GET_MODE_SIZE_PcdAcpiBaseAddress  _PCD_SIZE_PcdAcpiBaseAddress 
#define _PCD_VALUE_PcdAcpiBaseAddress  0x1800U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdAcpiBaseAddress = _PCD_VALUE_PcdAcpiBaseAddress;
extern const  UINT16  _gPcd_FixedAtBuild_PcdAcpiBaseAddress;
#define _PCD_GET_MODE_16_PcdAcpiBaseAddress  _gPcd_FixedAtBuild_PcdAcpiBaseAddress
//#define _PCD_SET_MODE_16_PcdAcpiBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_AcpiTimerIoPortBaseAddress  217U
#define _PCD_SIZE_AcpiTimerIoPortBaseAddress 2
#define _PCD_GET_MODE_SIZE_AcpiTimerIoPortBaseAddress  _PCD_SIZE_AcpiTimerIoPortBaseAddress 
#define _PCD_VALUE_AcpiTimerIoPortBaseAddress  0x1808U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_AcpiTimerIoPortBaseAddress = _PCD_VALUE_AcpiTimerIoPortBaseAddress;
extern const  UINT16  _gPcd_FixedAtBuild_AcpiTimerIoPortBaseAddress;
#define _PCD_GET_MODE_16_AcpiTimerIoPortBaseAddress  _gPcd_FixedAtBuild_AcpiTimerIoPortBaseAddress
//#define _PCD_SET_MODE_16_AcpiTimerIoPortBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_AcpiTimerLength  218U
#define _PCD_SIZE_AcpiTimerLength 1
#define _PCD_GET_MODE_SIZE_AcpiTimerLength  _PCD_SIZE_AcpiTimerLength 
#define _PCD_VALUE_AcpiTimerLength  24U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_AcpiTimerLength = _PCD_VALUE_AcpiTimerLength;
extern const  UINT8  _gPcd_FixedAtBuild_AcpiTimerLength;
#define _PCD_GET_MODE_8_AcpiTimerLength  _gPcd_FixedAtBuild_AcpiTimerLength
//#define _PCD_SET_MODE_8_AcpiTimerLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxPeiPerformanceLogEntries  223U
#define _PCD_SIZE_PcdMaxPeiPerformanceLogEntries 1
#define _PCD_GET_MODE_SIZE_PcdMaxPeiPerformanceLogEntries  _PCD_SIZE_PcdMaxPeiPerformanceLogEntries 
#define _PCD_VALUE_PcdMaxPeiPerformanceLogEntries  40U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries = _PCD_VALUE_PcdMaxPeiPerformanceLogEntries;
extern const  UINT8  _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries;
#define _PCD_GET_MODE_8_PcdMaxPeiPerformanceLogEntries  _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries
//#define _PCD_SET_MODE_8_PcdMaxPeiPerformanceLogEntries  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxPeiPerformanceLogEntries16  224U
#define _PCD_SIZE_PcdMaxPeiPerformanceLogEntries16 2
#define _PCD_GET_MODE_SIZE_PcdMaxPeiPerformanceLogEntries16  _PCD_SIZE_PcdMaxPeiPerformanceLogEntries16 
#define _PCD_VALUE_PcdMaxPeiPerformanceLogEntries16  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries16 = _PCD_VALUE_PcdMaxPeiPerformanceLogEntries16;
extern const  UINT16  _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries16;
#define _PCD_GET_MODE_16_PcdMaxPeiPerformanceLogEntries16  _gPcd_FixedAtBuild_PcdMaxPeiPerformanceLogEntries16
//#define _PCD_SET_MODE_16_PcdMaxPeiPerformanceLogEntries16  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPerformanceLibraryPropertyMask  225U
#define _PCD_SIZE_PcdPerformanceLibraryPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPerformanceLibraryPropertyMask  _PCD_SIZE_PcdPerformanceLibraryPropertyMask 
#define _PCD_VALUE_PcdPerformanceLibraryPropertyMask  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask = _PCD_VALUE_PcdPerformanceLibraryPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask;
#define _PCD_GET_MODE_8_PcdPerformanceLibraryPropertyMask  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask
//#define _PCD_SET_MODE_8_PcdPerformanceLibraryPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPostCodePropertyMask  202U
#define _PCD_SIZE_PcdPostCodePropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPostCodePropertyMask  _PCD_SIZE_PcdPostCodePropertyMask 
#define _PCD_VALUE_PcdPostCodePropertyMask  0x08U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdPostCodePropertyMask = _PCD_VALUE_PcdPostCodePropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdPostCodePropertyMask;
#define _PCD_GET_MODE_8_PcdPostCodePropertyMask  _gPcd_FixedAtBuild_PcdPostCodePropertyMask
//#define _PCD_SET_MODE_8_PcdPostCodePropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPort80DataWidth  203U
#define _PCD_SIZE_PcdPort80DataWidth 1
#define _PCD_GET_MODE_SIZE_PcdPort80DataWidth  _PCD_SIZE_PcdPort80DataWidth 
#define _PCD_VALUE_PcdPort80DataWidth  8U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdPort80DataWidth = _PCD_VALUE_PcdPort80DataWidth;
extern const  UINT8  _gPcd_FixedAtBuild_PcdPort80DataWidth;
#define _PCD_GET_MODE_8_PcdPort80DataWidth  _gPcd_FixedAtBuild_PcdPort80DataWidth
//#define _PCD_SET_MODE_8_PcdPort80DataWidth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvLegacyBase  248U
#define _PCD_SIZE_PcdFlashFvLegacyBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacyBase  _PCD_SIZE_PcdFlashFvLegacyBase 
#define _PCD_VALUE_PcdFlashFvLegacyBase  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacyBase = _PCD_VALUE_PcdFlashFvLegacyBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvLegacyBase;
#define _PCD_GET_MODE_32_PcdFlashFvLegacyBase  _gPcd_FixedAtBuild_PcdFlashFvLegacyBase
//#define _PCD_SET_MODE_32_PcdFlashFvLegacyBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvLegacySize  249U
#define _PCD_SIZE_PcdFlashFvLegacySize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacySize  _PCD_SIZE_PcdFlashFvLegacySize 
#define _PCD_VALUE_PcdFlashFvLegacySize  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacySize = _PCD_VALUE_PcdFlashFvLegacySize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvLegacySize;
#define _PCD_GET_MODE_32_PcdFlashFvLegacySize  _gPcd_FixedAtBuild_PcdFlashFvLegacySize
//#define _PCD_SET_MODE_32_PcdFlashFvLegacySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvLegacyFreeBase  250U
#define _PCD_SIZE_PcdFlashFvLegacyFreeBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacyFreeBase  _PCD_SIZE_PcdFlashFvLegacyFreeBase 
#define _PCD_VALUE_PcdFlashFvLegacyFreeBase  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeBase = _PCD_VALUE_PcdFlashFvLegacyFreeBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeBase;
#define _PCD_GET_MODE_32_PcdFlashFvLegacyFreeBase  _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeBase
//#define _PCD_SET_MODE_32_PcdFlashFvLegacyFreeBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvLegacyFreeSize  251U
#define _PCD_SIZE_PcdFlashFvLegacyFreeSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvLegacyFreeSize  _PCD_SIZE_PcdFlashFvLegacyFreeSize 
#define _PCD_VALUE_PcdFlashFvLegacyFreeSize  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeSize = _PCD_VALUE_PcdFlashFvLegacyFreeSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeSize;
#define _PCD_GET_MODE_32_PcdFlashFvLegacyFreeSize  _gPcd_FixedAtBuild_PcdFlashFvLegacyFreeSize
//#define _PCD_SET_MODE_32_PcdFlashFvLegacyFreeSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiOptimizedBoot  3U
#define _PCD_GET_MODE_BOOL_PcdUefiOptimizedBoot  LibPcdGetBool(_PCD_TOKEN_PcdUefiOptimizedBoot)
#define _PCD_GET_MODE_SIZE_PcdUefiOptimizedBoot  LibPcdGetSize(_PCD_TOKEN_PcdUefiOptimizedBoot)
#define _PCD_SET_MODE_BOOL_PcdUefiOptimizedBoot(Value)  LibPcdSetBool(_PCD_TOKEN_PcdUefiOptimizedBoot, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdUefiOptimizedBoot(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdUefiOptimizedBoot, (Value))

#define _PCD_TOKEN_PcdSmbusBaseAddress  268U
#define _PCD_SIZE_PcdSmbusBaseAddress 2
#define _PCD_GET_MODE_SIZE_PcdSmbusBaseAddress  _PCD_SIZE_PcdSmbusBaseAddress 
#define _PCD_VALUE_PcdSmbusBaseAddress  0x0000EFA0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdSmbusBaseAddress = _PCD_VALUE_PcdSmbusBaseAddress;
extern const  UINT16  _gPcd_FixedAtBuild_PcdSmbusBaseAddress;
#define _PCD_GET_MODE_16_PcdSmbusBaseAddress  _gPcd_FixedAtBuild_PcdSmbusBaseAddress
//#define _PCD_SET_MODE_16_PcdSmbusBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvNvStorageEventLogBase  269U
#define _PCD_SIZE_PcdFlashFvNvStorageEventLogBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvNvStorageEventLogBase  _PCD_SIZE_PcdFlashFvNvStorageEventLogBase 
#define _PCD_VALUE_PcdFlashFvNvStorageEventLogBase  0xFF820000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvNvStorageEventLogBase = _PCD_VALUE_PcdFlashFvNvStorageEventLogBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvNvStorageEventLogBase;
#define _PCD_GET_MODE_32_PcdFlashFvNvStorageEventLogBase  _gPcd_FixedAtBuild_PcdFlashFvNvStorageEventLogBase
//#define _PCD_SET_MODE_32_PcdFlashFvNvStorageEventLogBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvNvStorageEventLogSize  270U
#define _PCD_SIZE_PcdFlashFvNvStorageEventLogSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvNvStorageEventLogSize  _PCD_SIZE_PcdFlashFvNvStorageEventLogSize 
#define _PCD_VALUE_PcdFlashFvNvStorageEventLogSize  0x00200000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvNvStorageEventLogSize = _PCD_VALUE_PcdFlashFvNvStorageEventLogSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvNvStorageEventLogSize;
#define _PCD_GET_MODE_32_PcdFlashFvNvStorageEventLogSize  _gPcd_FixedAtBuild_PcdFlashFvNvStorageEventLogSize
//#define _PCD_SET_MODE_32_PcdFlashFvNvStorageEventLogSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvMainOffset  271U
#define _PCD_SIZE_PcdFlashFvMainOffset 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMainOffset  _PCD_SIZE_PcdFlashFvMainOffset 
#define _PCD_VALUE_PcdFlashFvMainOffset  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMainOffset = _PCD_VALUE_PcdFlashFvMainOffset;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvMainOffset;
#define _PCD_GET_MODE_32_PcdFlashFvMainOffset  _gPcd_FixedAtBuild_PcdFlashFvMainOffset
//#define _PCD_SET_MODE_32_PcdFlashFvMainOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvOemLogoOffset  272U
#define _PCD_SIZE_PcdFlashFvOemLogoOffset 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvOemLogoOffset  _PCD_SIZE_PcdFlashFvOemLogoOffset 
#define _PCD_VALUE_PcdFlashFvOemLogoOffset  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvOemLogoOffset = _PCD_VALUE_PcdFlashFvOemLogoOffset;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvOemLogoOffset;
#define _PCD_GET_MODE_32_PcdFlashFvOemLogoOffset  _gPcd_FixedAtBuild_PcdFlashFvOemLogoOffset
//#define _PCD_SET_MODE_32_PcdFlashFvOemLogoOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashFvMrcNormalOffset  273U
#define _PCD_SIZE_PcdFlashFvMrcNormalOffset 4
#define _PCD_GET_MODE_SIZE_PcdFlashFvMrcNormalOffset  _PCD_SIZE_PcdFlashFvMrcNormalOffset 
#define _PCD_VALUE_PcdFlashFvMrcNormalOffset  0x00000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashFvMrcNormalOffset = _PCD_VALUE_PcdFlashFvMrcNormalOffset;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashFvMrcNormalOffset;
#define _PCD_GET_MODE_32_PcdFlashFvMrcNormalOffset  _gPcd_FixedAtBuild_PcdFlashFvMrcNormalOffset
//#define _PCD_SET_MODE_32_PcdFlashFvMrcNormalOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdRcrbBaseAddress  219U
#define _PCD_SIZE_PcdRcrbBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdRcrbBaseAddress  _PCD_SIZE_PcdRcrbBaseAddress 
#define _PCD_VALUE_PcdRcrbBaseAddress  0xFED1C000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdRcrbBaseAddress = _PCD_VALUE_PcdRcrbBaseAddress;
extern const  UINT32  _gPcd_FixedAtBuild_PcdRcrbBaseAddress;
#define _PCD_GET_MODE_32_PcdRcrbBaseAddress  _gPcd_FixedAtBuild_PcdRcrbBaseAddress
//#define _PCD_SET_MODE_32_PcdRcrbBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSbWakeType  2U
#define _PCD_GET_MODE_8_PcdSbWakeType  LibPcdGet8(_PCD_TOKEN_PcdSbWakeType)
#define _PCD_GET_MODE_SIZE_PcdSbWakeType  LibPcdGetSize(_PCD_TOKEN_PcdSbWakeType)
#define _PCD_SET_MODE_8_PcdSbWakeType(Value)  LibPcdSet8(_PCD_TOKEN_PcdSbWakeType, (Value))
#define _PCD_SET_MODE_8_S_PcdSbWakeType(Value)  LibPcdSet8S(_PCD_TOKEN_PcdSbWakeType, (Value))

#define _PCD_TOKEN_PcdAcpiIoPortBaseAddress  220U
#define _PCD_SIZE_PcdAcpiIoPortBaseAddress 2
#define _PCD_GET_MODE_SIZE_PcdAcpiIoPortBaseAddress  _PCD_SIZE_PcdAcpiIoPortBaseAddress 
#define _PCD_VALUE_PcdAcpiIoPortBaseAddress  0x1800U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdAcpiIoPortBaseAddress = _PCD_VALUE_PcdAcpiIoPortBaseAddress;
extern const  UINT16  _gPcd_FixedAtBuild_PcdAcpiIoPortBaseAddress;
#define _PCD_GET_MODE_16_PcdAcpiIoPortBaseAddress  _gPcd_FixedAtBuild_PcdAcpiIoPortBaseAddress
//#define _PCD_SET_MODE_16_PcdAcpiIoPortBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


RETURN_STATUS
EFIAPI
AcpiTimerLibConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
BaseRngLibConstructor (
  VOID
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{
  EFI_STATUS  Status;

  Status = AcpiTimerLibConstructor ();
  ASSERT_EFI_ERROR (Status);

  Status = BaseRngLibConstructor ();
  ASSERT_EFI_ERROR (Status);

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{

}

GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPeimRevision = 0x00000000U;

EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )

{
  return PeiInitPlatformStage1 (FileHandle, PeiServices);
}


GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}
