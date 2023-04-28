//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2018, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

/** @file SmbiosBoard.c
    This file contents are used by UpdateSmbiosTable.c

**/

#ifndef __SMBIOSUPDATE__H__
#define __SMBIOSUPDATE__H__
#ifdef __cplusplus
extern "C" {
#endif

// Header Files
#include <Token.h>
#include <AmiDxeLib.h>
#include <Pci.h>
#include <Uefi/UefiSpec.h>
#include <IndustryStandard/Smbios.h>
#include <Protocol/Smbios.h>
#include <Library/PciExpressLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiBootServicesTableLib.h>	
#include <Library/PcdLib.h> 
#include <Library/PciLib.h> 

#define SLOT_BUS_NO    0
//#define SLOT1_DEV_FUN_NO  0x48    // From RP0=> B0: D09h: F0
//#define SLOT2_DEV_FUN_NO  0x70    // From RP4=> B0: D0Eh: F0
//#define SLOT3_DEV_FUN_NO  0x80    // From RP6=> B0: D10h: F0


// Class Code (CC) SubClassCode(SCC) of OnBoard Devices.
// Video
#define CC_VIDEO         0x03
#define SCC_VIDEO        0x00

//SATA
#define CC_SATA          0x01
#define SCC_SATA         0x06 

// Ethernet
#define CC_ETHERNET    0x02
#define SCC_ETHERNET   0x00 

//Structure declarations
/**
    System Slot Information for SMBIOS Type 9
**/
typedef struct {
  UINT16                      SlotID;
  CHAR8                       *SlotDesignator;
  UINT8                       SlotType;                 ///< The enumeration value from MISC_SLOT_TYPE.
  UINT8                       SlotDataBusWidth;         ///< The enumeration value from MISC_SLOT_DATA_BUS_WIDTH.
  UINT8                       SlotLength;               ///< The enumeration value from MISC_SLOT_LENGTH.
  UINT8                       BusNum;
  UINT8                       DevFuncNum;
} SLOT_INFO;


// Reference: #define IS_MFG_MODE_LIST @elink(IsMfgMode, "@Child"," " ,"" )
#define BOARD_SLOT_INFO @elink(BOARD_SLOT_INFO, "@Child"," " ,"" )


typedef struct {
    UINT8            		  DevType;
    BOOLEAN				      DevEnabled;
    UINT8                     DevTypeInstance;
    UINT8					  BusNum;
    UINT8                     DevFun;
} ONBOARD_DEV_EXT_INFO;

//Function Declarations
VOID
EFIAPI
UpdateSmbiosTables (
  IN  EFI_EVENT Event,
  IN  VOID      *Context
);

EFI_STATUS
EFIAPI
UpdateSmbiosType9Table (
);

EFI_STATUS
EFIAPI
UpdateSmbiosType41Table (
);

EFI_STATUS
AddStructureForAdditionalSlots (
    UINT8 AddSlotCount
);

/****** DO NOT WRITE BELOW THIS LINE *******/
#ifdef __cplusplus
}
#endif
#endif
//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2018, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
