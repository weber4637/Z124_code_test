/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/PeiCoreEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x52C05B14, 0x0B98, 0x496c, {0xBC, 0x3B, 0x04, 0xB5, 0x02, 0x11, 0xD6, 0x80}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "PeiCore";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPeiAprioriFileNameGuid = { 0x1b45cc0a, 0x156a, 0x428a, { 0XAF, 0x62,  0x49, 0x86, 0x4d, 0xa0, 0xe6, 0xe6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem3Guid = { 0x5473c07a, 0x3dcb, 0x4dca, { 0xbd, 0x6f, 0x1e, 0x96, 0x89, 0xe7, 0x34, 0x9a }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocBspStoreGuid = { 0x564B33CD, 0xC92A, 0x4593, { 0x90, 0xBF, 0x24, 0x73, 0xE4, 0x3C, 0x63, 0x22 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmiGlobalVariableGuid = { 0x1368881, 0xc4ad, 0x4b1d, { 0xb6, 0x31, 0xd5, 0x7a, 0x8e, 0xc8, 0xdb, 0x6b } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gSiPkgTokenSpaceGuid = {0x977c97c1, 0x47e1, 0x4b6b, {0x96, 0x69, 0x43, 0x66, 0x99, 0xcb, 0xe4, 0x5b}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiCommonPkgTokenSpaceGuid = { 0x86cf2b1a, 0xb3da, 0x4642, { 0x95, 0xf5, 0xd0, 0x1c, 0x6c, 0x1c, 0x60, 0xb8 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeSpecificDataGuid = { 0x335984BD, 0xE805, 0x409A, { 0xB8, 0xF8, 0xD2, 0x7E, 0xCE, 0x5F, 0xF7, 0xA6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeDataTypeDebugGuid = { 0x9A4E9246, 0xD553, 0x11D5, { 0x87, 0xE2, 0x00, 0x06, 0x29, 0x45, 0xC3, 0xB9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPerformanceProtocolGuid = { 0x76B6BDFA, 0x2ACD, 0x4462, { 0x9E, 0x3F, 0xCB, 0x58, 0xC9, 0x69, 0xD9, 0x37 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPerformanceExProtocolGuid = { 0x1ea81bec, 0xf01a, 0x4d98, { 0xa2, 0x1,  0x4a, 0x61, 0xce, 0x2f, 0xc0, 0x22 } };

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiStatusCodePpiGuid = { 0x229832d3, 0x7a30, 0x4b36, {0xb8, 0x27, 0xf4, 0xc, 0xb7, 0xd4, 0x54, 0x36 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiResetPpiGuid = { 0xef398d58, 0x9dfd, 0x4103, {0xbf, 0x94, 0x78, 0xc6, 0xf4, 0xfe, 0x71, 0x2f } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDxeIplPpiGuid = {0xae8ce5d, 0xe448, 0x4437, {0xa8, 0xd7, 0xeb, 0xf5, 0xf1, 0x94, 0xf7, 0x31 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid = {0xf894643d, 0xc449, 0x42d1, {0x8e, 0xa8, 0x85, 0xbd, 0xd8, 0xc6, 0x5b, 0xde } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiDecompressPpiGuid = { 0x1a36e4e7, 0xfab6, 0x476a, { 0x8e, 0x75, 0x69, 0x5a, 0x5, 0x76, 0xfd, 0xd7 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid = { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x0, 0x31, 0xaa, 0xbb, 0x39 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid = { 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiLoadFilePpiGuid = { 0xb9e0abfe, 0x5979, 0x4914, { 0x97, 0x7f, 0x6d, 0xee, 0x78, 0xc2, 0x78, 0xa6 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiSecurity2PpiGuid = { 0xdcd0be23, 0x9586, 0x40f4, { 0xb6, 0x43, 0x6, 0x52, 0x2c, 0xed, 0x4e, 0xde } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiTemporaryRamSupportPpiGuid = { 0xdbe23aa9, 0xa345, 0x4b97, {0x85, 0xb6, 0xb2, 0x26, 0xf1, 0x61, 0x73, 0x89} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiTemporaryRamDonePpiGuid = { 0xceab683c, 0xec56, 0x4a2d, { 0xa9, 0x6, 0x40, 0x53, 0xfa, 0x4e, 0x9c, 0x16 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiReset2PpiGuid = { 0x6cc45765, 0xcce4, 0x42fd, {0xbc, 0x56, 0x1, 0x1a, 0xaa, 0xc6, 0xc9, 0xa8 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdPpiGuid = { 0x6e81c58, 0x4ad7, 0x44bc, { 0x83, 0x90, 0xf1, 0x2, 0x65, 0xf7, 0x24, 0x80 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiPcdPpiGuid = { 0x1f34d25, 0x4de2, 0x23ad, { 0x3f, 0xf3, 0x36, 0x35, 0x3f, 0xf3, 0x23, 0xf1 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoPpiGuid = { 0x4d8b155b, 0xc059, 0x4c8f, { 0x89, 0x26,  0x6, 0xfd, 0x43, 0x31, 0xdb, 0x8a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoPpiGuid = { 0xa60c6b59, 0xe459, 0x425d, { 0x9c, 0x69,  0xb, 0xcc, 0x9c, 0xb2, 0x7d, 0x81 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmiDebugServicePpiGuid = {0x36232936, 0xe76, 0x31c8, { 0xa1, 0x3a, 0x3a, 0xf2, 0xfc, 0x1c, 0x39, 0x32} };

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdPeiCoreMaxFvSupported = _PCD_VALUE_PcdPeiCoreMaxFvSupported;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdPeiCoreMaxPeimPerFv = _PCD_VALUE_PcdPeiCoreMaxPeimPerFv;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdPeiCoreMaxPpiSupported = _PCD_VALUE_PcdPeiCoreMaxPpiSupported;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdPeiCoreMaxPeiStackSize = _PCD_VALUE_PcdPeiCoreMaxPeiStackSize;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdPeiCoreImageLoaderSearchTeSectionFirst = _PCD_VALUE_PcdPeiCoreImageLoaderSearchTeSectionFirst;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdFrameworkCompatibilitySupport = _PCD_VALUE_PcdFrameworkCompatibilitySupport;
volatile  UINT32 _gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber = _PCD_PATCHABLE_VALUE_PcdLoadFixAddressPeiCodePageNumber;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressPeiCodePageNumber = 4;
volatile  UINT32 _gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber = _PCD_PATCHABLE_VALUE_PcdLoadFixAddressBootTimeCodePageNumber;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressBootTimeCodePageNumber = 4;
volatile  UINT32 _gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber = _PCD_PATCHABLE_VALUE_PcdLoadFixAddressRuntimeCodePageNumber;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdLoadFixAddressRuntimeCodePageNumber = 4;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable = _PCD_VALUE_PcdLoadModuleAtFixAddressEnable;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdShadowPeimOnS3Boot = _PCD_VALUE_PcdShadowPeimOnS3Boot;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdShadowPeimOnBoot = _PCD_VALUE_PcdShadowPeimOnBoot;

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

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  195U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000046U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0xE0000000ULL
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress = _PCD_VALUE_PcdPciExpressBaseAddress;
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialUseMmio  206U
#define _PCD_SIZE_PcdSerialUseMmio 1
#define _PCD_GET_MODE_SIZE_PcdSerialUseMmio  _PCD_SIZE_PcdSerialUseMmio 
#define _PCD_VALUE_PcdSerialUseMmio  0U
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdSerialUseMmio = _PCD_VALUE_PcdSerialUseMmio;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSerialUseMmio;
#define _PCD_GET_MODE_BOOL_PcdSerialUseMmio  _gPcd_FixedAtBuild_PcdSerialUseMmio
//#define _PCD_SET_MODE_BOOL_PcdSerialUseMmio  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialUseHardwareFlowControl  207U
#define _PCD_SIZE_PcdSerialUseHardwareFlowControl 1
#define _PCD_GET_MODE_SIZE_PcdSerialUseHardwareFlowControl  _PCD_SIZE_PcdSerialUseHardwareFlowControl 
#define _PCD_VALUE_PcdSerialUseHardwareFlowControl  0U
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdSerialUseHardwareFlowControl = _PCD_VALUE_PcdSerialUseHardwareFlowControl;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSerialUseHardwareFlowControl;
#define _PCD_GET_MODE_BOOL_PcdSerialUseHardwareFlowControl  _gPcd_FixedAtBuild_PcdSerialUseHardwareFlowControl
//#define _PCD_SET_MODE_BOOL_PcdSerialUseHardwareFlowControl  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialDetectCable  208U
#define _PCD_SIZE_PcdSerialDetectCable 1
#define _PCD_GET_MODE_SIZE_PcdSerialDetectCable  _PCD_SIZE_PcdSerialDetectCable 
#define _PCD_VALUE_PcdSerialDetectCable  0U
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdSerialDetectCable = _PCD_VALUE_PcdSerialDetectCable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSerialDetectCable;
#define _PCD_GET_MODE_BOOL_PcdSerialDetectCable  _gPcd_FixedAtBuild_PcdSerialDetectCable
//#define _PCD_SET_MODE_BOOL_PcdSerialDetectCable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialRegisterBase  209U
#define _PCD_PATCHABLE_VALUE_PcdSerialRegisterBase  ((UINT64)0x03F8ULL)
volatile  UINT64 _gPcd_BinaryPatch_PcdSerialRegisterBase = _PCD_PATCHABLE_VALUE_PcdSerialRegisterBase;
extern volatile   UINT64  _gPcd_BinaryPatch_PcdSerialRegisterBase;
#define _PCD_GET_MODE_64_PcdSerialRegisterBase  _gPcd_BinaryPatch_PcdSerialRegisterBase
#define _PCD_PATCHABLE_PcdSerialRegisterBase_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdSerialRegisterBase  _gPcd_BinaryPatch_Size_PcdSerialRegisterBase 
extern UINTN _gPcd_BinaryPatch_Size_PcdSerialRegisterBase; 
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdSerialRegisterBase = 8;
#define _PCD_SET_MODE_64_PcdSerialRegisterBase(Value)  (_gPcd_BinaryPatch_PcdSerialRegisterBase = (Value))
#define _PCD_SET_MODE_64_S_PcdSerialRegisterBase(Value)  ((_gPcd_BinaryPatch_PcdSerialRegisterBase = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdSerialBaudRate  210U
#define _PCD_SIZE_PcdSerialBaudRate 4
#define _PCD_GET_MODE_SIZE_PcdSerialBaudRate  _PCD_SIZE_PcdSerialBaudRate 
#define _PCD_VALUE_PcdSerialBaudRate  115200U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSerialBaudRate = _PCD_VALUE_PcdSerialBaudRate;
extern const  UINT32  _gPcd_FixedAtBuild_PcdSerialBaudRate;
#define _PCD_GET_MODE_32_PcdSerialBaudRate  _gPcd_FixedAtBuild_PcdSerialBaudRate
//#define _PCD_SET_MODE_32_PcdSerialBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialLineControl  211U
#define _PCD_SIZE_PcdSerialLineControl 1
#define _PCD_GET_MODE_SIZE_PcdSerialLineControl  _PCD_SIZE_PcdSerialLineControl 
#define _PCD_VALUE_PcdSerialLineControl  0x03U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSerialLineControl = _PCD_VALUE_PcdSerialLineControl;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSerialLineControl;
#define _PCD_GET_MODE_8_PcdSerialLineControl  _gPcd_FixedAtBuild_PcdSerialLineControl
//#define _PCD_SET_MODE_8_PcdSerialLineControl  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialFifoControl  212U
#define _PCD_SIZE_PcdSerialFifoControl 1
#define _PCD_GET_MODE_SIZE_PcdSerialFifoControl  _PCD_SIZE_PcdSerialFifoControl 
#define _PCD_VALUE_PcdSerialFifoControl  0x27U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSerialFifoControl = _PCD_VALUE_PcdSerialFifoControl;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSerialFifoControl;
#define _PCD_GET_MODE_8_PcdSerialFifoControl  _gPcd_FixedAtBuild_PcdSerialFifoControl
//#define _PCD_SET_MODE_8_PcdSerialFifoControl  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialClockRate  213U
#define _PCD_SIZE_PcdSerialClockRate 4
#define _PCD_GET_MODE_SIZE_PcdSerialClockRate  _PCD_SIZE_PcdSerialClockRate 
#define _PCD_VALUE_PcdSerialClockRate  1843200U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSerialClockRate = _PCD_VALUE_PcdSerialClockRate;
extern const  UINT32  _gPcd_FixedAtBuild_PcdSerialClockRate;
#define _PCD_GET_MODE_32_PcdSerialClockRate  _gPcd_FixedAtBuild_PcdSerialClockRate
//#define _PCD_SET_MODE_32_PcdSerialClockRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialPciDeviceInfo  214U
#define _PCD_VALUE_PcdSerialPciDeviceInfo  (VOID *)_gPcd_FixedAtBuild_PcdSerialPciDeviceInfo
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSerialPciDeviceInfo[32] = {0xFF};
extern const UINT8 _gPcd_FixedAtBuild_PcdSerialPciDeviceInfo[32];
#define _PCD_GET_MODE_PTR_PcdSerialPciDeviceInfo  (VOID *)_gPcd_FixedAtBuild_PcdSerialPciDeviceInfo
#define _PCD_SIZE_PcdSerialPciDeviceInfo 1
#define _PCD_GET_MODE_SIZE_PcdSerialPciDeviceInfo  _PCD_SIZE_PcdSerialPciDeviceInfo 
//#define _PCD_SET_MODE_PTR_PcdSerialPciDeviceInfo  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialExtendedTxFifoSize  215U
#define _PCD_SIZE_PcdSerialExtendedTxFifoSize 4
#define _PCD_GET_MODE_SIZE_PcdSerialExtendedTxFifoSize  _PCD_SIZE_PcdSerialExtendedTxFifoSize 
#define _PCD_VALUE_PcdSerialExtendedTxFifoSize  64U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSerialExtendedTxFifoSize = _PCD_VALUE_PcdSerialExtendedTxFifoSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdSerialExtendedTxFifoSize;
#define _PCD_GET_MODE_32_PcdSerialExtendedTxFifoSize  _gPcd_FixedAtBuild_PcdSerialExtendedTxFifoSize
//#define _PCD_SET_MODE_32_PcdSerialExtendedTxFifoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialRegisterStride  216U
#define _PCD_SIZE_PcdSerialRegisterStride 4
#define _PCD_GET_MODE_SIZE_PcdSerialRegisterStride  _PCD_SIZE_PcdSerialRegisterStride 
#define _PCD_VALUE_PcdSerialRegisterStride  1U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSerialRegisterStride = _PCD_VALUE_PcdSerialRegisterStride;
extern const  UINT32  _gPcd_FixedAtBuild_PcdSerialRegisterStride;
#define _PCD_GET_MODE_32_PcdSerialRegisterStride  _gPcd_FixedAtBuild_PcdSerialRegisterStride
//#define _PCD_SET_MODE_32_PcdSerialRegisterStride  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdReportStatusCodePropertyMask  229U
#define _PCD_SIZE_PcdReportStatusCodePropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdReportStatusCodePropertyMask  _PCD_SIZE_PcdReportStatusCodePropertyMask 
#define _PCD_VALUE_PcdReportStatusCodePropertyMask  0x07U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask = _PCD_VALUE_PcdReportStatusCodePropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask;
#define _PCD_GET_MODE_8_PcdReportStatusCodePropertyMask  _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask
//#define _PCD_SET_MODE_8_PcdReportStatusCodePropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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


EFI_STATUS
EFIAPI
PeiAmiDebugLibConstructor (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  );

RETURN_STATUS
EFIAPI
AcpiTimerLibConstructor (
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

  Status = PeiAmiDebugLibConstructor (FileHandle, PeiServices);
  ASSERT_EFI_ERROR (Status);

  Status = AcpiTimerLibConstructor ();
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


VOID
EFIAPI
ProcessModuleEntryPointList (
  IN CONST  EFI_SEC_PEI_HAND_OFF    *SecCoreData,
  IN CONST  EFI_PEI_PPI_DESCRIPTOR  *PpiList,
  IN VOID                           *Context
  )

{
  PeiCore (SecCoreData, PpiList, Context);
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
