/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_80CF7257_87AB_47f9_A3FE_D50B76D89541
#define _AUTOGENH_80CF7257_87AB_47f9_A3FE_D50B76D89541

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x80CF7257, 0x87AB, 0x47f9, {0xA3, 0xFE, 0xD5, 0x0B, 0x76, 0xD8, 0x95, 0x41}}

// Guids
extern EFI_GUID gPcdDataBaseHobGuid;
extern EFI_GUID gPcdDataBaseSignatureGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
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
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiFileInfoGuid;

// Protocols
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gAmiDebugServiceProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdVpdBaseAddress  246U
#define _PCD_SIZE_PcdVpdBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdVpdBaseAddress  _PCD_SIZE_PcdVpdBaseAddress 
#define _PCD_VALUE_PcdVpdBaseAddress  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVpdBaseAddress;
#define _PCD_GET_MODE_32_PcdVpdBaseAddress  _gPcd_FixedAtBuild_PcdVpdBaseAddress
//#define _PCD_SET_MODE_32_PcdVpdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c

#define PCD_PEI_SERVICE_DRIVER_VERSION         6

//
// External PCD database debug information
//
#if 0
#define PEI_GUID_TABLE_SIZE                1U
#define PEI_STRING_TABLE_SIZE              20U
#define PEI_SKUID_TABLE_SIZE               1U
#define PEI_LOCAL_TOKEN_NUMBER_TABLE_SIZE  4
#define PEI_LOCAL_TOKEN_NUMBER             4
#define PEI_EXMAPPING_TABLE_SIZE           1U
#define PEI_EX_TOKEN_NUMBER                0U
#define PEI_SIZE_TABLE_SIZE                2U
#define PEI_SKU_HEAD_SIZE                  1U
#define PEI_GUID_TABLE_EMPTY               FALSE
#define PEI_STRING_TABLE_EMPTY             FALSE
#define PEI_SKUID_TABLE_EMPTY              TRUE
#define PEI_DATABASE_EMPTY                 FALSE
#define PEI_EXMAP_TABLE_EMPTY              TRUE

typedef struct {
  UINT64             SkuIdTable[PEI_SKUID_TABLE_SIZE];





  DYNAMICEX_MAPPING  ExMapTable[PEI_EXMAPPING_TABLE_SIZE];
  UINT32             LocalTokenNumberTable[PEI_LOCAL_TOKEN_NUMBER_TABLE_SIZE];
  GUID               GuidTable[PEI_GUID_TABLE_SIZE];

  VARIABLE_HEAD      PcdBootState_d3705011_bc19_4af7_be16_f68030378c15_Variable_Header[1];

  SKU_HEAD           SkuHead[PEI_SKU_HEAD_SIZE];

  UINT8              StringTable[20]; /* PcdBootState_d3705011_bc19_4af7_be16_f68030378c15 */

  SIZE_INFO          SizeTable[PEI_SIZE_TABLE_SIZE];





  BOOLEAN            PcdBootState_d3705011_bc19_4af7_be16_f68030378c15_VariableDefault_2;

  SKU_ID             SystemSkuId;
} PEI_PCD_DATABASE_INIT;

typedef struct {




  UINT8    PcdSbWakeType_e938c9be_cfc2_4a9d_a3cd_9653d8133009[1];

  BOOLEAN  PcdUefiOptimizedBoot_356471b1_b483_42ae_b6e7_3b2ebab14e15[1];
  BOOLEAN  PcdDfxAdvDebugJumper_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];

} PEI_PCD_DATABASE_UNINIT;

typedef struct {
  //GUID                  Signature;  // PcdDataBaseGuid
  //UINT32                BuildVersion;
  //UINT32                Length;
  //SKU_ID                SystemSkuId;      // Current SkuId value.
  //UINT32                UninitDataBaseSize;// Total size for PCD those default value with 0.
  //TABLE_OFFSET          LocalTokenNumberTableOffset;
  //TABLE_OFFSET          ExMapTableOffset;
  //TABLE_OFFSET          GuidTableOffset;     
  //TABLE_OFFSET          StringTableOffset;
  //TABLE_OFFSET          SizeTableOffset;
  //TABLE_OFFSET          SkuIdTableOffset; 
  //TABLE_OFFSET          PcdNameTableOffset;
  //UINT16                LocalTokenCount;  // LOCAL_TOKEN_NUMBER for all
  //UINT16                ExTokenCount;     // EX_TOKEN_NUMBER for DynamicEx
  //UINT16                GuidTableCount;   // The Number of Guid in GuidTable
  //UINT8                 Pad[2];
  PEI_PCD_DATABASE_INIT    Init;
  PEI_PCD_DATABASE_UNINIT  Uninit;
} PEI_PCD_DATABASE;

#define PEI_NEX_TOKEN_NUMBER (PEI_LOCAL_TOKEN_NUMBER - PEI_EX_TOKEN_NUMBER)
#endif

#define PCD_DXE_SERVICE_DRIVER_VERSION         6

//
// External PCD database debug information
//
#if 0
#define DXE_GUID_TABLE_SIZE                1U
#define DXE_STRING_TABLE_SIZE              936U
#define DXE_SKUID_TABLE_SIZE               1U
#define DXE_LOCAL_TOKEN_NUMBER_TABLE_SIZE  189
#define DXE_LOCAL_TOKEN_NUMBER             189
#define DXE_EXMAPPING_TABLE_SIZE           1U
#define DXE_EX_TOKEN_NUMBER                1U
#define DXE_SIZE_TABLE_SIZE                108U
#define DXE_SKU_HEAD_SIZE                  1U
#define DXE_GUID_TABLE_EMPTY               FALSE
#define DXE_STRING_TABLE_EMPTY             FALSE
#define DXE_SKUID_TABLE_EMPTY              TRUE
#define DXE_DATABASE_EMPTY                 FALSE
#define DXE_EXMAP_TABLE_EMPTY              FALSE

typedef struct {
  UINT64             SkuIdTable[DXE_SKUID_TABLE_SIZE];
  UINT64             PcdAcpiDefaultOemTableId_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];


  UINT32             PcdInterruptOverrideSettingTable0GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32             PcdInterruptOverrideSettingTable1GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32             PcdIoApicSettingIoApicAddress_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32             PcdCpuProcessorFeatureUserConfiguration_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT32             AmiPcdMaxSegmentSupported_d34d3234_38ba_428b_9acd_84e830a80785[1];



  DYNAMICEX_MAPPING  ExMapTable[DXE_EXMAPPING_TABLE_SIZE];
  UINT32             LocalTokenNumberTable[DXE_LOCAL_TOKEN_NUMBER_TABLE_SIZE];
  GUID               GuidTable[DXE_GUID_TABLE_SIZE];
  STRING_HEAD        PcdAcpiDefaultOemId_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  STRING_HEAD        PcdPciDevice1Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice2Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice3Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice4Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice5Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice6Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice7Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice8Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice9Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice10Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice11Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice12Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice13Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice14Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice15Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice16Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice17Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice18Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice19Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice20Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice21Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice22Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice23Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice24Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice25Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice26Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice27Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice28Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice29Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice30Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice31Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice32Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice33Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice34Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice35Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice36Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice37Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice38Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice39Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice40Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice41Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice42Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice43Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice44Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice45Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice46Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice47Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice48Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice49Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdPciDevice50Info_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        PcdSMBIOSSystemSKUNumber_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  STRING_HEAD        AmiPcdPcieBaseAddressBuffer_d34d3234_38ba_428b_9acd_84e830a80785[1];
  STRING_HEAD        PcdCpuSocketId_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];


  SKU_HEAD           SkuHead[DXE_SKU_HEAD_SIZE];

  UINT8              StringTable[8]; /* PcdAcpiDefaultOemId_a1aff049_fdeb_442a_b320_13ab4cb72bbc */
  UINT8              StringTable_1[18]; /* PcdPciDevice1Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_2[18]; /* PcdPciDevice2Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_3[18]; /* PcdPciDevice3Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_4[18]; /* PcdPciDevice4Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_5[18]; /* PcdPciDevice5Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_6[18]; /* PcdPciDevice6Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_7[18]; /* PcdPciDevice7Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_8[18]; /* PcdPciDevice8Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_9[18]; /* PcdPciDevice9Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_10[18]; /* PcdPciDevice10Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_11[18]; /* PcdPciDevice11Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_12[18]; /* PcdPciDevice12Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_13[18]; /* PcdPciDevice13Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_14[18]; /* PcdPciDevice14Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_15[18]; /* PcdPciDevice15Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_16[18]; /* PcdPciDevice16Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_17[18]; /* PcdPciDevice17Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_18[18]; /* PcdPciDevice18Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_19[18]; /* PcdPciDevice19Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_20[18]; /* PcdPciDevice20Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_21[18]; /* PcdPciDevice21Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_22[18]; /* PcdPciDevice22Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_23[18]; /* PcdPciDevice23Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_24[18]; /* PcdPciDevice24Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_25[18]; /* PcdPciDevice25Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_26[18]; /* PcdPciDevice26Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_27[18]; /* PcdPciDevice27Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_28[18]; /* PcdPciDevice28Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_29[18]; /* PcdPciDevice29Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_30[18]; /* PcdPciDevice30Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_31[18]; /* PcdPciDevice31Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_32[18]; /* PcdPciDevice32Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_33[18]; /* PcdPciDevice33Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_34[18]; /* PcdPciDevice34Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_35[18]; /* PcdPciDevice35Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_36[18]; /* PcdPciDevice36Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_37[18]; /* PcdPciDevice37Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_38[18]; /* PcdPciDevice38Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_39[18]; /* PcdPciDevice39Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_40[18]; /* PcdPciDevice40Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_41[18]; /* PcdPciDevice41Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_42[18]; /* PcdPciDevice42Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_43[18]; /* PcdPciDevice43Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_44[18]; /* PcdPciDevice44Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_45[18]; /* PcdPciDevice45Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_46[18]; /* PcdPciDevice46Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_47[18]; /* PcdPciDevice47Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_48[18]; /* PcdPciDevice48Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_49[18]; /* PcdPciDevice49Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_50[18]; /* PcdPciDevice50Info_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_51[18]; /* PcdSMBIOSSystemSKUNumber_aec0dee0_f04d_425d_9acd_a94b49c7517a */
  UINT8              StringTable_52[8]; /* AmiPcdPcieBaseAddressBuffer_d34d3234_38ba_428b_9acd_84e830a80785 */
  UINT8              StringTable_53[2]; /* PcdCpuSocketId_2ada836d_0a3d_43d6_a25a_3845cad2d400 */

  SIZE_INFO          SizeTable[DXE_SIZE_TABLE_SIZE];


  UINT8              PcdInterruptOverrideSettingTable0Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8              PcdInterruptOverrideSettingTable1Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8              PcdInterruptOverrideSettingTable1SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8              PcdInterruptOverrideSettingTable1Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8              PcdInterruptOverrideSettingTable1TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8              PcdIoApicSettingIoApicId_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8              PcdLocalApicSettingNmiEnabelApicIdMask_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8              PcdLocalApicSettingPolarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8              PcdLocalApicSettingTrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8              PcdLocalApicSettingLocalApicLint_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8              PcdPciDeviceInfoNumber_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];


  BOOLEAN            PcdPostStatusCheck_eb98a90a_42ee_4a36_8dcc_afa722c9cab3[1];
  BOOLEAN            PcdTpmSmbiosCharacteristicSupport_eb98a90a_42ee_4a36_8dcc_afa722c9cab3[1];
  BOOLEAN            PcdTpmSmbiosConfigSoftware_eb98a90a_42ee_4a36_8dcc_afa722c9cab3[1];


  SKU_ID             SystemSkuId;
} DXE_PCD_DATABASE_INIT;

typedef struct {

  UINT64   PcdCpuS3DataAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT64   PcdCpuHotPlugDataAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT64   PcdCpuConfigContextBuffer_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT64   PcdCpuPageTableAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT64   PcdCpuMtrrTableAddress_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT64   PcdLocalApicAddressOverride_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT64   PcdPlatformCpuSocketNames_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT64   PcdPlatformCpuAssetTags_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT64   PcdPlatformCpuFrequencyLists_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT64   PcdS3BootScriptTablePrivateDataPtr_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT64   PcdS3BootScriptTablePrivateSmmDataPtr_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];

  UINT32   PcdInterruptOverrideSettingTable2GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable3GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable4GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable5GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable6GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable7GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable8GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable9GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable10GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable11GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable12GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable13GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable14GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdInterruptOverrideSettingTable15GlobalIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdIoApicSettingGlobalInterruptBase_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT32   PcdCpuProcessorFeatureUserConfigurationEx1_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT32   PcdPlatformCpuSocketCount_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT32   PcdCpuProcessorFeatureSetting_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT32   PcdCpuProcessorFeatureCapability_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT32   PcdCpuProcessorFeatureSettingEx1_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT32   PcdCpuProcessorFeatureCapabilityEx1_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT32   PcdCpuRtitSize_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT32   PcdCpuRtitSetupOption_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT32   PcdCpuRtitTraceHubBar_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT32   PcdProductSerialNumber_86cf2b1a_b3da_4642_95f5_d01c6c1c60b8[1];
  UINT32   PcdTpmSmbiosOemDefined_eb98a90a_42ee_4a36_8dcc_afa722c9cab3[1];

  UINT16   PcdCpuAcpiLvl2Addr_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];

  UINT8    PcdCpuCallbackSignal_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT8    PcdInterruptOverrideSettingTable0SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable0Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable0TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable2Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable2SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable2Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable2TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable3Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable3SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable3Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable3TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable4Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable4SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable4Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable4TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable5Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable5SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable5Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable5TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable6Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable6SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable6Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable6TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable7Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable7SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable7Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable7TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable8Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable8SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable8Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable8TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable9Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable9SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable9Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable9TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable10Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable10SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable10Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable10TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable11Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable11SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable11Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable11TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable12Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable12SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable12Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable12TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable13Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable13SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable13Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable13TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable14Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable14SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable14Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable14TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable15Enable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable15SourceIrq_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable15Polarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdInterruptOverrideSettingTable15TrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdIoApicSettingNmiEnable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdIoApicSettingNmiSource_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdIoApicSettingPolarity_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdIoApicSettingTrigerMode_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdLocalApicSettingAddressOverrideEnable_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdCpuEnergyPolicy_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT8    PcdCpuPackageCStateLimit_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT8    PcdCpuClockModulationDutyCycle_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT8    PcdCpuDcuMode_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  UINT8    PcdRtcWakeupTimeHour_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdRtcWakeupTimeMinute_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdRtcWakeupTimeSecond_aec0dee0_f04d_425d_9acd_a94b49c7517a[1];
  UINT8    PcdEmmcManufacturerId_86cf2b1a_b3da_4642_95f5_d01c6c1c60b8[1];

  BOOLEAN  PcdIsPowerOnReset_2ada836d_0a3d_43d6_a25a_3845cad2d400[1];
  BOOLEAN  AmiPcdPciOutOfResourcesStatus_d34d3234_38ba_428b_9acd_84e830a80785[1];
  BOOLEAN  PcdTpmSmbiosConfigFirmware_eb98a90a_42ee_4a36_8dcc_afa722c9cab3[1];
  BOOLEAN  PcdTpmSmbiosConfigOem_eb98a90a_42ee_4a36_8dcc_afa722c9cab3[1];

} DXE_PCD_DATABASE_UNINIT;

typedef struct {
  //GUID                  Signature;  // PcdDataBaseGuid
  //UINT32                BuildVersion;
  //UINT32                Length;
  //SKU_ID                SystemSkuId;      // Current SkuId value.
  //UINT32                UninitDataBaseSize;// Total size for PCD those default value with 0.
  //TABLE_OFFSET          LocalTokenNumberTableOffset;
  //TABLE_OFFSET          ExMapTableOffset;
  //TABLE_OFFSET          GuidTableOffset;     
  //TABLE_OFFSET          StringTableOffset;
  //TABLE_OFFSET          SizeTableOffset;
  //TABLE_OFFSET          SkuIdTableOffset; 
  //TABLE_OFFSET          PcdNameTableOffset;
  //UINT16                LocalTokenCount;  // LOCAL_TOKEN_NUMBER for all
  //UINT16                ExTokenCount;     // EX_TOKEN_NUMBER for DynamicEx
  //UINT16                GuidTableCount;   // The Number of Guid in GuidTable
  //UINT8                 Pad[2];
  DXE_PCD_DATABASE_INIT    Init;
  DXE_PCD_DATABASE_UNINIT  Uninit;
} DXE_PCD_DATABASE;

#define DXE_NEX_TOKEN_NUMBER (DXE_LOCAL_TOKEN_NUMBER - DXE_EX_TOKEN_NUMBER)
#endif


EFI_STATUS
EFIAPI
PcdDxeInit (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
