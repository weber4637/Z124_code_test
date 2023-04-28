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
/** @file CspMeud10Gbe.c

    CspMeud related functions.
*/
#include <Uefi.h>

#include <AmiLib.h>
#include <Flash.h>
#include <AmiDxeLib.h> 
#include "CspMeud.h"

UINT8   mPortMacAddress[0x02][0x06];


/**
    Memory access 10Gbe region

    @param Destination
    @param Source
    @param Length
    @param Restore

    @retval VOID
**/
VOID
FlashAccess10Gbe(
    IN  VOID    *Destination,
    IN  VOID    *Source,
    IN  UINTN   Length,
    IN  BOOLEAN Restore )
{
    FlashRead( Source, Destination, (UINT32)Length );
}
/**
    Memory access 10Gbe region

    @param Destination
    @param Source
    @param Length
    @param Restore This should be set if it's restore process

    @retval VOID
**/
VOID
MemAcess10Gbe(
    IN  VOID    *Destination,
    IN  VOID    *Source,
    IN  UINTN   Length,
    IN  BOOLEAN Restore )
{
    if( Restore == TRUE )
        MemCpy( Source, Destination, (UINT32)Length );
    else
        MemCpy( Destination, Source, (UINT32)Length );
}

/**
    Process 10Gbe port mac address

    @param Region10Gbe Pointer to 10Gbe region
    @param Access Flash or memory access

    @retval EFI_STATUS
**/
EFI_STATUS
ProcessPortMac(
    IN  UINT16          *Region10Gbe,
    IN  UINT8           Behavior,
    IN  ACCESS_10GBE    Access
)
{
    UINT16  U16Offset;
    UINT8   Index;

// The MAC address is present in offset 0x202 and 0x212 of GBE ROM.
// The MAC address pointer is available in word 0x09(for Port 0) and 0x0A(for Port 1) of GBE's NVM header
    for(Index = 0; Index < 2; Index++)
    {
    Access( &U16Offset, &Region10Gbe[0x09+Index], sizeof(U16Offset), FALSE );
    Access(
                &mPortMacAddress[Index],
                &Region10Gbe[U16Offset+1],
                6,
                TRUE );
    }

    return EFI_SUCCESS;
}

/**
    Calculate 10Gbe region first 64K checksum

    @param Region10Gbe Pointer to 10Gbe region

    @retval EFI_STATUS
**/
EFI_STATUS
CalculateCheckSum(
    IN  UINT16  *Region10Gbe
)
{
    // Denverton AptioV override Start - EIP#395646
    UINT16  CheckSum16;
    UINT16  Index;
    UINT16  ModuleIndex;
    UINT16  Pointer;
    UINT16  Size;
    UINT16  Start;
    UINT16  Length;
    UINT16  *NvmModulePtr;

    CheckSum16 = 0;

    // X550 Checksum Calculation Reference: ixgbe_calc_eeprom_checksum_X550() function in PROXGB\LINUX\ixgbe-5.0.7\src\ixgbe_x550.c
    // Step 1: Sum up all the words from  0x0-0x41, with checksum word excluded
    // Step 2: Add up all data from pointers 0x2, 0x6-0xE, excluding the  FW, PHY module, and PCIe Expansion/Option ROM pointers
	// Step 3: Checksum Word Value = (0xBABA) - (Above sum total)

    // For X550 hardware checksum calculation, include 0x0-0x41 in the checksum, skip the checksum word itself
    for( Index = 0; Index <= IXGBE_LAST_WORD; Index++ )
    {
        if( Index != I40E_SR_SW_CHECKSUM_WORD_OFFSET ){
            CheckSum16 += Region10Gbe[Index];
        }
    }

    // Include all data from pointers 0x2, 0x6-0xE.  This excludes the  FW, PHY module, and PCIe Expansion/Option ROM pointers
    for (Index = IXGBE_PCIE_ANALOG_PTR; Index < IXGBE_FW_PTR; Index++) {

        if (Index == IXGBE_PHY_PTR || Index == IXGBE_OPTION_ROM_PTR)
            continue;
        
        Pointer = Region10Gbe[Index];
        
        // Skip pointer section if the pointer is invalid.
        if (Pointer == 0xFFFF || Pointer == 0 )
             continue;

        // Assign the size of the module region to read data
        switch (Index) {
                case IXGBE_PCIE_GENERAL_PTR:
                    Size = IXGBE_IXGBE_PCIE_GENERAL_SIZE;
                    break;
                    
                case IXGBE_PCIE_CONFIG0_PTR:
                case IXGBE_PCIE_CONFIG1_PTR:
                    Size = IXGBE_PCIE_CONFIG_SIZE;
                    break;
                    
                default:
                    Size = 0;
                    break;
        }

        // Sum up the Module Data

        // Initialize the Module Pointer
        NvmModulePtr = &Region10Gbe[Pointer];

        // Assign the Module Start and Length 
        if (Size) {
            Start = 0;
            Length = Size;
        } else {
            Start = 1;
            Length = NvmModulePtr[0];

            // Skip pointer section if length is invalid.
            if (Length == 0xFFFF || Length == 0 )
                continue;
        }

        // Including the data in various Module
        for (ModuleIndex = Start; Length; ModuleIndex++, Length--) {
            CheckSum16 += NvmModulePtr[ModuleIndex];    
        }
    }

    CheckSum16 = I40E_SR_SW_CHECKSUM_BASE - CheckSum16;
    Region10Gbe[I40E_SR_SW_CHECKSUM_WORD_OFFSET] = CheckSum16;
    DEBUG((EFI_D_INFO, "GBE X550: CheckSum = %x \n", CheckSum16 ));
    // Denverton AptioV override End - EIP#395646

    return EFI_SUCCESS;
}
/**
    Process 10Gbe mac address

    @param Region10Gbe Pointer to 10Gbe region
    @param Behavior Save or restore the 10Gbe address

    @retval EFI_STATUS
**/
EFI_STATUS
Process10GbeMac(
    IN  VOID    *Region10Gbe,
    IN  UINT8   Behavior
)
{
    UINT16          *U16Region10Gbe;
    ACCESS_10GBE    *Access;
    UINT16          NvmControl;

    U16Region10Gbe = (UINT16*)Region10Gbe;

    switch( Behavior )
    {
        case Save10GbeMac:
            Access = FlashAccess10Gbe;
        break;

        case Restore10GbeMac:
            Access = MemAcess10Gbe;
        break;

        default:
            return EFI_UNSUPPORTED;
    }
    //NVM control word (Word 0x0000)
    //Bit 7:6, if NVM validity doesn't equal 01b the NVM data is not present
    // The alternate NVM structure is available at offset 0x4000(word 0x2000).
    Access( &NvmControl, &U16Region10Gbe[0x00], sizeof(NvmControl), FALSE );
    if( (NvmControl & 0xC0) != 0x40 )
    {
        U16Region10Gbe = &U16Region10Gbe[0x2000];
    }
    ProcessPortMac( U16Region10Gbe, Behavior, Access );
    
    // Denverton AptioV override Start - EIP#395646
    // For Denverton, calculate checksum from the GBE A and GBE B controller regions in SPI Flash Image (with MAC addresses preserved)
    if( Behavior == Restore10GbeMac )
        CalculateCheckSum( U16Region10Gbe );
    // Denverton AptioV override End - EIP#395646

    return EFI_SUCCESS;
}
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
