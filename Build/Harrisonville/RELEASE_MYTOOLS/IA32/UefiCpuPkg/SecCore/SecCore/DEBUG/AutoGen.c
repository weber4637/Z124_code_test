/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x1BA0062E, 0xC779, 0x4582, {0x85, 0x66, 0x33, 0x6A, 0xE8, 0xF7, 0x8F, 0x09}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "SecCore";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gUefiCpuPkgTokenSpaceGuid = { 0xac05bf33, 0x995a, 0x4ed4, { 0xaa, 0xb8, 0xef, 0x7a, 0xe8, 0xf, 0x5c, 0xb0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmiGlobalVariableGuid = { 0x1368881, 0xc4ad, 0x4b1d, { 0xb6, 0x31, 0xd5, 0x7a, 0x8e, 0xc8, 0xdb, 0x6b } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gSiPkgTokenSpaceGuid = {0x977c97c1, 0x47e1, 0x4b6b, {0x96, 0x69, 0x43, 0x66, 0x99, 0xcb, 0xe4, 0x5b}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiCommonPkgTokenSpaceGuid = { 0x86cf2b1a, 0xb3da, 0x4642, { 0x95, 0xf5, 0xd0, 0x1c, 0x6c, 0x1c, 0x60, 0xb8 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiCpuTokenSpaceGuid = { 0x2ADA836D, 0x0A3D, 0x43D6, { 0xA2, 0x5A, 0x38, 0x45, 0xCA, 0xD2, 0xD4, 0x00 }};

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSecPlatformInformationPpiGuid = { 0x6f8c2b35, 0xfef4, 0x448d, {0x82, 0x56, 0xe1, 0x1b, 0x19, 0xd6, 0x10, 0x77 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiTemporaryRamDonePpiGuid = { 0xceab683c, 0xec56, 0x4a2d, { 0xa9, 0x6, 0x40, 0x53, 0xfa, 0x4e, 0x9c, 0x16 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAmiDebugServicePpiGuid = {0x36232936, 0xe76, 0x31c8, { 0xa1, 0x3a, 0x3a, 0xf2, 0xfc, 0x1c, 0x39, 0x32} };

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdPeiTemporaryRamStackSize = _PCD_VALUE_PcdPeiTemporaryRamStackSize;

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

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  195U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000046U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdPciExpressBaseAddress  204U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0xE0000000ULL
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress = _PCD_VALUE_PcdPciExpressBaseAddress;
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdPerformanceLibraryPropertyMask  225U
#define _PCD_SIZE_PcdPerformanceLibraryPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPerformanceLibraryPropertyMask  _PCD_SIZE_PcdPerformanceLibraryPropertyMask 
#define _PCD_VALUE_PcdPerformanceLibraryPropertyMask  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask = _PCD_VALUE_PcdPerformanceLibraryPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask;
#define _PCD_GET_MODE_8_PcdPerformanceLibraryPropertyMask  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask
//#define _PCD_SET_MODE_8_PcdPerformanceLibraryPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuInitIpiDelayInMicroSeconds  278U
#define _PCD_SIZE_PcdCpuInitIpiDelayInMicroSeconds 4
#define _PCD_GET_MODE_SIZE_PcdCpuInitIpiDelayInMicroSeconds  _PCD_SIZE_PcdCpuInitIpiDelayInMicroSeconds 
#define _PCD_VALUE_PcdCpuInitIpiDelayInMicroSeconds  10000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCpuInitIpiDelayInMicroSeconds = _PCD_VALUE_PcdCpuInitIpiDelayInMicroSeconds;
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuInitIpiDelayInMicroSeconds;
#define _PCD_GET_MODE_32_PcdCpuInitIpiDelayInMicroSeconds  _gPcd_FixedAtBuild_PcdCpuInitIpiDelayInMicroSeconds
//#define _PCD_SET_MODE_32_PcdCpuInitIpiDelayInMicroSeconds  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuLocalApicBaseAddress  279U
#define _PCD_SIZE_PcdCpuLocalApicBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdCpuLocalApicBaseAddress  _PCD_SIZE_PcdCpuLocalApicBaseAddress 
#define _PCD_VALUE_PcdCpuLocalApicBaseAddress  0xfee00000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress = _PCD_VALUE_PcdCpuLocalApicBaseAddress;
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress;
#define _PCD_GET_MODE_32_PcdCpuLocalApicBaseAddress  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress
//#define _PCD_SET_MODE_32_PcdCpuLocalApicBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdNemCodeCacheBase  286U
#define _PCD_SIZE_PcdNemCodeCacheBase 4
#define _PCD_GET_MODE_SIZE_PcdNemCodeCacheBase  _PCD_SIZE_PcdNemCodeCacheBase 
#define _PCD_VALUE_PcdNemCodeCacheBase  0xffe70000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdNemCodeCacheBase = _PCD_VALUE_PcdNemCodeCacheBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdNemCodeCacheBase;
#define _PCD_GET_MODE_32_PcdNemCodeCacheBase  _gPcd_FixedAtBuild_PcdNemCodeCacheBase
//#define _PCD_SET_MODE_32_PcdNemCodeCacheBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdNemCodeCacheSize  287U
#define _PCD_SIZE_PcdNemCodeCacheSize 4
#define _PCD_GET_MODE_SIZE_PcdNemCodeCacheSize  _PCD_SIZE_PcdNemCodeCacheSize 
#define _PCD_VALUE_PcdNemCodeCacheSize  0x180000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdNemCodeCacheSize = _PCD_VALUE_PcdNemCodeCacheSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdNemCodeCacheSize;
#define _PCD_GET_MODE_32_PcdNemCodeCacheSize  _gPcd_FixedAtBuild_PcdNemCodeCacheSize
//#define _PCD_SET_MODE_32_PcdNemCodeCacheSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTemporaryRamBase  288U
#define _PCD_SIZE_PcdTemporaryRamBase 4
#define _PCD_GET_MODE_SIZE_PcdTemporaryRamBase  _PCD_SIZE_PcdTemporaryRamBase 
#define _PCD_VALUE_PcdTemporaryRamBase  0xff700000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdTemporaryRamBase = _PCD_VALUE_PcdTemporaryRamBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdTemporaryRamBase;
#define _PCD_GET_MODE_32_PcdTemporaryRamBase  _gPcd_FixedAtBuild_PcdTemporaryRamBase
//#define _PCD_SET_MODE_32_PcdTemporaryRamBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTemporaryRamSize  289U
#define _PCD_SIZE_PcdTemporaryRamSize 4
#define _PCD_GET_MODE_SIZE_PcdTemporaryRamSize  _PCD_SIZE_PcdTemporaryRamSize 
#define _PCD_VALUE_PcdTemporaryRamSize  0x80000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdTemporaryRamSize = _PCD_VALUE_PcdTemporaryRamSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdTemporaryRamSize;
#define _PCD_GET_MODE_32_PcdTemporaryRamSize  _gPcd_FixedAtBuild_PcdTemporaryRamSize
//#define _PCD_SET_MODE_32_PcdTemporaryRamSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMicrocodePatchAddress  290U
#define _PCD_SIZE_PcdCpuMicrocodePatchAddress 8
#define _PCD_GET_MODE_SIZE_PcdCpuMicrocodePatchAddress  _PCD_SIZE_PcdCpuMicrocodePatchAddress 
#define _PCD_VALUE_PcdCpuMicrocodePatchAddress  0x0ULL
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress = _PCD_VALUE_PcdCpuMicrocodePatchAddress;
extern const  UINT64  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress;
#define _PCD_GET_MODE_64_PcdCpuMicrocodePatchAddress  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress
//#define _PCD_SET_MODE_64_PcdCpuMicrocodePatchAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMicrocodePatchRegionSize  291U
#define _PCD_SIZE_PcdCpuMicrocodePatchRegionSize 8
#define _PCD_GET_MODE_SIZE_PcdCpuMicrocodePatchRegionSize  _PCD_SIZE_PcdCpuMicrocodePatchRegionSize 
#define _PCD_VALUE_PcdCpuMicrocodePatchRegionSize  0x0ULL
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize = _PCD_VALUE_PcdCpuMicrocodePatchRegionSize;
extern const  UINT64  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize;
#define _PCD_GET_MODE_64_PcdCpuMicrocodePatchRegionSize  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize
//#define _PCD_SET_MODE_64_PcdCpuMicrocodePatchRegionSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


RETURN_STATUS
EFIAPI
BaseDebugLibSerialPortConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
AcpiTimerLibConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
PlatformSecLibConstructor (
  VOID
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  VOID
  )
{
  EFI_STATUS  Status;

  Status = BaseDebugLibSerialPortConstructor ();
  ASSERT_EFI_ERROR (Status);

  Status = AcpiTimerLibConstructor ();
  ASSERT_EFI_ERROR (Status);

  Status = PlatformSecLibConstructor ();
  ASSERT_EFI_ERROR (Status);

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  VOID
  )
{

}
