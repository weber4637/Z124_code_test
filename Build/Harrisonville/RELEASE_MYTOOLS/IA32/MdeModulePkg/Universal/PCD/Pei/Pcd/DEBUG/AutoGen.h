/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9B3ADA4F_AE56_4c24_8DEA_F03B7558AE50
#define _AUTOGENH_9B3ADA4F_AE56_4c24_8DEA_F03B7558AE50

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x9B3ADA4F, 0xAE56, 0x4c24, {0x8D, 0xEA, 0xF0, 0x3B, 0x75, 0x58, 0xAE, 0x50}}

// Guids
extern EFI_GUID gPcdDataBaseHobGuid;
extern EFI_GUID gPcdDataBaseSignatureGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;

// PPIs
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gAmiDebugServicePpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPeiFullPcdDatabaseEnable  245U
#define _PCD_SIZE_PcdPeiFullPcdDatabaseEnable 1
#define _PCD_GET_MODE_SIZE_PcdPeiFullPcdDatabaseEnable  _PCD_SIZE_PcdPeiFullPcdDatabaseEnable 
#define _PCD_VALUE_PcdPeiFullPcdDatabaseEnable  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPeiFullPcdDatabaseEnable;
#define _PCD_GET_MODE_BOOL_PcdPeiFullPcdDatabaseEnable  _gPcd_FixedAtBuild_PcdPeiFullPcdDatabaseEnable
//#define _PCD_SET_MODE_BOOL_PcdPeiFullPcdDatabaseEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVpdBaseAddress  246U
#define _PCD_SIZE_PcdVpdBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdVpdBaseAddress  _PCD_SIZE_PcdVpdBaseAddress 
#define _PCD_VALUE_PcdVpdBaseAddress  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVpdBaseAddress;
#define _PCD_GET_MODE_32_PcdVpdBaseAddress  _gPcd_FixedAtBuild_PcdVpdBaseAddress
//#define _PCD_SET_MODE_32_PcdVpdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxPeiPcdCallBackNumberPerPcdEntry  247U
#define _PCD_SIZE_PcdMaxPeiPcdCallBackNumberPerPcdEntry 4
#define _PCD_GET_MODE_SIZE_PcdMaxPeiPcdCallBackNumberPerPcdEntry  _PCD_SIZE_PcdMaxPeiPcdCallBackNumberPerPcdEntry 
#define _PCD_VALUE_PcdMaxPeiPcdCallBackNumberPerPcdEntry  0x08U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxPeiPcdCallBackNumberPerPcdEntry;
#define _PCD_GET_MODE_32_PcdMaxPeiPcdCallBackNumberPerPcdEntry  _gPcd_FixedAtBuild_PcdMaxPeiPcdCallBackNumberPerPcdEntry
//#define _PCD_SET_MODE_32_PcdMaxPeiPcdCallBackNumberPerPcdEntry  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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


EFI_STATUS
EFIAPI
PcdPeimInit (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
