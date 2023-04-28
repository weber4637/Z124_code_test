//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2017, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**         5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093     **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

/** @file SdioController.h
    SDIO controller definition

**/

#ifndef _EFI_SDIO_CONTROLLER_H_
#define _EFI_SDIO_CONTROLLER_H_

#ifdef __cplusplus
extern "C" {
#endif
//----------------------------------------------------------------------

#include <Efi.h>
#include <Token.h>
#include <AmiDxeLib.h>
#include <Library/TimerLib.h>
#include "SdioDef.h"
#include <Library/BaseMemoryLib/MemLibInternals.h>
#include <Library/DebugLib.h>
//----------------------------------------------------------------------

//-----------------------------------------------------------------------;
// Host Controller Register
//-----------------------------------------------------------------------;
#define DMAADR      0x0                         //offset 00h     SDMA System Address
#define BLKSZ       0x4                         //Offset 04h     Block SIZE
#define BLKCNT      0x6                         //Offset 06h     Block Count
#define CMDARG      0x8                         //Offset 08h     Argument
#define XFRMODE     0xC                         //Offset 0Ch     Transfer Mode
#define CMD         0xE                         //Offset 0Eh     Command
#define RESP0       0x10                        //Offset 10h     Response0
#define RESP1       0x14                        //Offset 14h     Response1
#define RESP2       0x18                        //Offset 18h     Response2
#define RESP3       0x1C                        //Offset 1Ch     Response3
#define BUFDATA     0x20                        //Offset 20h     Buffer Data
#define PSTATE      0x24                        //Offset 24h     Present State
#define HOSTCTL     0x28                        //Offset 28h     Host Control
#define PWRCTL      0x29                        //Offset 29h     Power Control
#define BLKGAPCTL   0x2A                        //Offset 2Ah     Block Gap Control
#define WAKECTL     0x2B                        //Offset 2Bh     Wakeup Control
#define CLKCTL      0x2C                        //Offset 2Ch     Clock Control
#define TOCTL       0x2E                        //Offset 2Eh     Timeout Control
#define SWRST       0x2F                        //Offset 2Fh     Software Control
#define NINTSTS     0x30                        //Offset 30h     Normal Interrupt Status
#define ERINTSTS    0x32                        //Offset 32h     Error Interrupt Status
#define NINTEN      0x34                        //Offset 34h     Normal Interrupt Enable
#define ERINTEN     0x36                        //Offset 36h     Error Interrupt Enable
#define NINTSIGEN   0x38                        //Offset 38h     Normal Interrupt Signal Enable
#define ERINTSIGEN  0x3A                        //Offset 3Ah     Error Interrupt Signal Enable
#define AC12ERRSTS  0x3C                        //Offset 3Ch     Auto CMD12 Error Status
#define AUTOCMD     0x3C                        //Offset 3Eh
#define HOSTCTL2    0x3E                        //Offset 3Eh     Host Control 2    
#define CAP         0x40                        //Offset 40h     Capabilities
#define dReserved1  0x44                        //Offset 44h
#define MCCAP       0x48                        //offset 48h     Maximum Current Capabilities
#define Reserved2   0x4C                        //offset 4Ch
#define wForceEventForAC12ERSTS     0x50        //offset 50h     Force Event For Auto CMD12 Error Status
#define wForceEventForERINTSTS      0x52        //offset 52h     Force Event For Error Interrupt Status
#define ADMAERSTS   0x54                        //offset 54h     ADMA Error Status
#define Reserved3   0x55                        //offset 55h
#define Reserved4   0x56                        //offset 56h
#define ADMAADR     0x58                        //offset 58h     ADMA System Address
#define PresetVal   0x60                        //Offset 6f-60h                    Preset value Registerl
#define SharedBusCtl                 0xE0       //Offset E0h     Shared Bus Control Register
#define SLTINTSTS   0xFC                        //offset 0FCh    Slot Interrupt Status
#define HCVER       0xFE                        //offset 0FEh    Host Controller Version


//-----------------------------------------------------------------------;
// Present State Register (Offset 24h)
//-----------------------------------------------------------------------;
#define PSTATE_CmdI                        BIT0
#define PSTATE_DCMDI                       BIT1
#define PSTATE_DLA                         BIT2
#define PSTATE_ReTuneReq                   BIT3
#define PSTATE_WTA                         BIT8
#define PSTATE_RTA                         BIT9
#define PSTATE_BUFWREN                     BIT10
#define PSTATE_BRE                         BIT11
#define PSTATE_CardInsert                  BIT16
#define PSTATE_CSS                         BIT17
#define PSTATE_CD                          BIT18
#define PSTATE_WP                          BIT19
#define PSTATE_DAT0                        BIT20           //busy
#define PSTATE_DAT1                        BIT21
#define PSTATE_DAT2                        BIT22
#define PSTATE_DAT3                        BIT23           //CS
#define PSTATE_CMDLVL                      BIT24

//----------------------------------------------------------------------------
//       Card mode
//----------------------------------------------------------------------------
#define SD_SPI_Mode                         BIT0
#define SD_STAND_CAP                        BIT1
#define SD_HIGH_CAP                         BIT2
#define SD_SDIO_Card                        BIT3
#define MMC_STAND_CAP                       BIT4
#define MMC_HIGH_CAP                        BIT5

#define MMC_CARD_CAPACITY_BIT               0x40000000
//----------------------------------------------------------------------------
//       Card active
//----------------------------------------------------------------------------
#define NotInUSE                            0
#define InUSE                               1
#define Initialized                         2
#define Initilized_failure                  3

//;-----------------------------------------------------------------------;
//; CURRENT_STATE
//;-----------------------------------------------------------------------;
#define CARDSTATUS_IDLE                     0
#define CARDSTATUS_READY                    1
#define CARDSTATUS_IDENT                    2
#define CARDSTATUS_STBY                     3
#define CARDSTATUS_TRAN                     4
#define CARDSTATUS_DATA                     5
#define CARDSTATUS_RCV                      6
#define CARDSTATUS_PRG                      7
#define CARDSTATUS_DIS                      8
#define CARDSTATUS_BTST                     9
#define CARDSTATUS_NODEVICE                 0ffh

//-----------------------------------------------------------------------;
//Clock Control Register (Offset 02Ch)
//-----------------------------------------------------------------------;
#define CLKCTL_INTERNAL_CLOCK_ENABLE          BIT0
#define CLKCTL_INTERNAL_CLOCK_STABLE          BIT1
#define CLKCTL_CLOCK_ENABLE                   BIT2
#define CLKCTL_ClockGeneratorSelect         BIT5
#define CLKCTL_Freq_Divider                 0FF00h  //BIT8~BIT15
#define CLKCTL_Freq_DividerV3               0FFC0h  //BIT6~BIT15

//-----------------------------------------------------------------------;
//Power Control Register (Offset 029h)
//-----------------------------------------------------------------------;
#define PWRCTL_POWER_ENABLE                  BIT0
#define PWRCTL_18V                          (BIT1+BIT3)
#define PWRCTL_30V                          (BIT2+BIT3)
#define PWRCTL_33V                          (BIT1+BIT2+BIT3)
#define SD_BUS_VOLTAGE_SELECT               (BIT1+BIT2+BIT3)

// MMC COMMAND EQUATES
//----------------------------------------------------------------------------
#define SEND_OP_COND_CMD1                1       //;CMD1         R3
#define SEND_EXT_CSD_CMD8                8       //;CMD8         R1
#define BUSTEST_READ_CMD14               14      //;CMD14        R1
#define BUSTEST_WRITE_CMD19              19      //;CMD19        R1
#define SET_BLOCK_COUNT                  23      //;CMD23        R1
#define  ERASE_GROUP_START               35      //;CMD35
#define  ERASE_GROUP_END                 36      //;CMD36
// SDIO COMMAND  EQUATES
//----------------------------------------------------------------------------
//Basic Commands (class 0)                 command index   response type
#define GO_IDLE_STATE_CMD0                0       //;CMD0           -
#define ALL_SEND_CID_CMD2                 2       //;CMD2           R2
#define SEND_RELATIVE_ADDR_CMD3           3       //;CMD3           R6
#define SET_DSR                           4       //;CMD4           -
#define SELECT_DESELECT_CARD_CMD7         7       //;CMD7           R1b
#define SEND_IF_COND_CMD8                     8       //;CMD8           R7
#define SEND_CSD_CMD9                     9       //;CMD9           R2
#define SEND_CID                          10      //;CMD10          R2
#define STOP_TRANSMISSION_CMD12           12      //;CMD12          R1b
#define SEND_STATUS_CMD13                 13      //;CMD13          R1
#define GO_INACTIVE_STATE                 15      //;CMD15          -

#define SWITCH_COMMAND_CMD11              11      //;CMD11          R1
#define SEND_TUNING_SD_CMD19              19      //;CMD19         R1

//Block-Oriented Read Commands (class 2)
#define SET_BLOCKLEN                      16      //;CMD16          R1
#define READ_SINGLE_BLOCK_CMD17           17      //;CMD17          R1
#define READ_MULTIPLE_BLOCK_CMD18         18      //;CMD18          R1
#define SEND_TUNING_MMC_CMD21             21      //;CMD21         R1

//Block-Oriented Write Commands (class 4)
#define WRITE_SIGLE_BLOCK_CMD24           24      //;CMD24          R1
#define WRITE_MULTIPLE_BLOCK_CMD25        25      //;CMD25          R1
#define PROGRAM_CSD                       27      //;CMD27          R1

//Block Oriented Write Protection Commands (class 6)
#define SET_WRITE_PROT                    28      //;CMD28          R1b
#define CLR_WRITE_PROT                    29      //;CMD29          R1b
#define SEND_WRITE_PROT                   30      //;CMD30          R1

//Erase Commands (class 5)
#define ERASE_WR_BLK_START                32      //;CMD32          R1
#define ERASE_WR_BLK_END                  33      //;CMD33          R1
#define ERASE                             38      //;CMD38          R1b

//Lock Card (class 7)
#define LOCK_UNLOCK                       42      //CMD42          R1

//Application-specific Commands (class 8)
#define APP_CMD_CMD55                     55      //;CMD55          R1
#define GEN_CMD                           56      //;CMD56          R1

//Application Specific Commands used/reserved by SD Memory Card
#define SET_BUS_WIDTH_ACMD6               6       //;ACMD6          R1
#define SD_STATUS                         13      //;ACMD13         R1
#define SEND_NUM_WR_BLOCKS                22      //;ACMD22         R1
#define SET_WR_BLK_ERASE_COUNT            23      //;ACMD23         R1
#define SD_SEND_OP_COND_ACMD41            41      //;ACMD41         R3
#define SET_CLR_CARD_DETECT               42      //;ACMD42         R1
#define SEND_SCR_ACMD51                   51      //;ACMD51         R1

//Switch Function Commands (class 10)
#define SWITCH_FUNC_CMD6                  06       //;CMD6           R1

//Sd IO Device Commands.
#define IO_SEND_OP_COND_CMD5              05        
#define IO_RW_DIRECT                      52
#define IO_RW_EXTENDED                    53

//-----------------------------------------------------------------------;
// Command Register (Offset 0Eh)
//-----------------------------------------------------------------------;
#define RESP_REG_BITS                       (BIT0+BIT1+BIT3+BIT4)
#define RESP1_TYPE                          (BIT1+BIT3+BIT4)
#define RESP1B_TYPE                         (BIT0+BIT1+BIT3+BIT4)
#define RESP2_TYPE                          (BIT0+BIT3)
#define RESP3_TYPE                          BIT1
#define RESP4_TYPE                          BIT1
#define RESP5_TYPE                          (BIT1+BIT3+BIT4)
#define RESP5B_TYPE                         (BIT0+BIT1+BIT3+BIT4)
#define RESP6_TYPE                          (BIT1+BIT3+BIT4)
#define RESP7_TYPE                          (BIT1+BIT3+BIT4)

#define DATA_PRESENT_SELECT                 BIT5

#define SUSPEND_CMD                         BIT6
#define RESUME_CMD                          BIT7
#define ABORT_CMD                           (BIT6+BIT7)

//-----------------------------------------------------------------------;
//Software Reset Register (Offset 02Fh)
//-----------------------------------------------------------------------;
#define RESETALL                             BIT0
#define RESETCMD                             BIT1
#define RESETDAT                             BIT2


//-----------------------------------------------------------------------;
// Operation Conditions Register (OCR)
//-----------------------------------------------------------------------;
#define CARD_VOLTAGE_WINDOW                  0xff8000        //;Bit15~ 23
#define CARD_CAPACITY_STATUS                 BIT30
#define CARD_REQUEST_18V                     BIT24
#define CARD_POWERUP_STATUS_BIT              BIT31
#define CARD_LOW_VOLTAGE_OUTPUT_WINDOW       0xff8080 
#define CARD_LOW_VOLTAGE_WINDOW              0x00000080
#define SWITCHING_18V_ACCEPTED               BIT24

//-----------------------------------------------------------------------;
// Normal Interrupt Status Register (Offset 30h)
//-----------------------------------------------------------------------;
#define NINTSTS_CC                          BIT0
#define NINTSTS_TC                          BIT1
#define NINTSTS_BGE                         BIT2
#define NINTSTS_DMAINT                      BIT3
#define NINTSTS_BWR                         BIT4
#define NINTSTS_BRR                         BIT5
#define NINTSTS_CIN                         BIT6
#define NINTSTS_CRM                         BIT7
#define NINTSTS_CI                          BIT8
#define NINTSTS_INT_A                       BIT9
#define NINTSTS_INT_B                       BIT10
#define NINTSTS_INT_C                       BIT11
#define NINTSTS_ReTunEvt                    BIT12
#define NINTSTS_EI                          BIT15

//-----------------------------------------------------------------------;
// Error Interrupt Status Register (Offset 32h)
//-----------------------------------------------------------------------;
#define ADMA_ERROR                       BIT9
#define CMD_CRC_ERROR                    BIT1
#define DATA_CRC_ERROR                   BIT5

//-----------------------------------------------------------------------;
// Capabilities Register (Offset 40h)
//-----------------------------------------------------------------------;
#define TIMEOUT_CLOCK_FREQUENCY             (BIT0+BIT1+BIT2+BIT3+BIT4+BIT5)
#define TIMEOUT_CLOCK_UNIT                  BIT7
#define BASE_CLOCK                          (BIT8+BIT9+BIT10+BIT11+BIT12+BIT13)
#define BASE_CLOCK_VER3                     (BIT8+BIT9+BIT10+BIT11+BIT12+BIT13+BIT14+BIT15)

#define MAX_BLOCK_LENGTH                    (BIT16+BIT17)
#define EMBEDDED_DEVICE_SUPPORT             BIT18
#define ADMA2_SUPPORT                       BIT19
#define HIGH_SPEED_SUPPORT                  BIT21
#define SDMA_SUPPORT                        BIT22
#define SUSPEND_RESUME_SUPPORT              BIT23
#define VOLTAGE_SUPPORT_33                  BIT24
#define VOLTAGE_SUPPORT_30                  BIT25
#define VOLTAGE_SUPPORT_18                  BIT26
#define BIT64_SYSTEM_BUS_SUPPORT            BIT28
#define ASYN_INT_SUPPORT                    BIT29
#define SLOT_TYPE                           (BIT32+BIT31)
#define SDR50_SUPPORT_CAP                   BIT0 //BIT32
#define SDR104_SUPPORT_CAP                  BIT1 //BIT33
#define DDR50_SUPPORT_CAP                   BIT2 //BIT34
#define DRVIER_TYPE_A_SUPPORT               BIT36
#define DRVIER_TYPE_C_SUPPORT               BIT37
#define DRVIER_TYPE_D_SUPPORT               BIT38
#define TIMERCOUNT_RETUNE                   (BIT40+BIT41+BIT42+BIT43)
#define TUNE_SDR50                          BIT13 //BIT45
#define RETUNINGMODES                       (BIT46+BIT47)
#define CLOCK_MULTIPLIER                    (BIT48+BIT49+BIT50+BIT51+BIT52+BIT53+BIT54+BIT55)


//-----------------------------------------------------------------------;
// Host Control Register (Offset 28h)
//-----------------------------------------------------------------------;
#define LED_Control                         BIT0
#define DATA_TRANSFER_4BITMODE              BIT1
#define HIGH_SPEED_ENABLE                   BIT2
#define DMA_SELECT                          (BIT3+BIT4)
#define ADMA32_SELECT                       BIT4
#define DATA_TRANSFER_8BITMODE              BIT5
#define CARD_DETECT_TRANSFER_LEVEL          BIT6
#define CARD_DETECT_SIGNAL_SELECTION        BIT7

//-----------------------------------------------------------------------;
// Host Control 2 Register (Offset 3Eh)
//-----------------------------------------------------------------------;

#define UHS_MODE_SELECT                     (BIT0+BIT2+BIT1)
#define SDR12_UHS_SELECT                    0
#define SDR25_UHS_SELECT                    BIT0
#define SDR50_UHS_SELECT                    BIT1
#define SDR104_UHS_SELECT                   (BIT0+BIT1)
#define DDR50_UHS_SELECT                    BIT2
// this is yet to be defined in Spec, but it is now used to set for HS400
#define DDR200_UHS_SELECT                   BIT0+BIT2

#define SIGNALING_ENABLE_1_8V               BIT3
#define DRIVER_STRENGTH_SELECT              (BIT5+BIT4)
#define EXECUTE_TUNING                      BIT6
#define SAMPLING_CLOCK_SELECT               BIT7
#define ASYNCHRONOUS_INTERRUPT_ENABLE       BIT14
#define PRESET_VALUE_ENABLE                 BIT15


//-----------------------------------------------------------------------;
// Card-Specific Data Register (CSR) the response3 (119:0)
//-----------------------------------------------------------------------;
//0: CSD_ver1.0   1:CSD_ver2.0 (bit30~31offset 96bit)
#define CSD_Ver20                           BIT31
#define PARTIAL_BLOCKS_FOR_WRITE_ALLOWED    BIT21                           //; offset 0bit
#define MAX_WRITE_BLOCK_LENGTH              (BIT22+BIT23+BIT24+BIT25)       //; offset 0bit
#define PARTIAL_BLOCKS_FOR_READ_ALLOWED     BIT15                           ///; bit 79(offset 64bit)
#define MAX_READ_BLOCK_LENGTH               (BIT16+BIT17+BIT18+BIT19)       //;bit 80 81 82 83(offset 64bit)
#define ERASE_BLK_EN                        BIT14                           //; bit 46 (offset 32 bit)
#define SECTOR_SIZE                        (BIT7+BIT8+BIT9+BIT10+BIT11+BIT12+BIT13)
                                                                            //; bit 39~45) (offset 32bit)

//CSD Version 1.0
#define DEVICE_SIZE_1H                      0x3ff                           //;bit 64~73 ( bit0~9 offset 64bit )
#define DEVICE_SIZE_1L                      0xc0000000                      //;bit 62~63 ( bit30~31 offset 48bit )
#define DEVICE_SIZE_1                       0x3ffc000                       //;bit 62~73 ( bit14~25 offset 48bit )
#define DEVICE_SZIE_MUL_1                   BIT15+BIT16+BIT17               //;bit 47~49 ( bit15~17 offset 32bit )
#define ERASE_GRP_SIZE                      BIT10+BIT11+BIT12+BIT13+BIT14   //;bit 42~46 (offset 32)
#define ERASE_GRP_MULT                      BIT5+BIT6+BIT7+BIT8+BIT9        //;bit 37~41 (offset 32)

//CSD Version 2.0
#define DEVICE_SIZE_2                       0x3fffff                        //;bit 48~69 ( bit0~22  offset 48bit )

//-----------------------------------------------------------------------;
// Card Status
//-----------------------------------------------------------------------;
#define AKE_SEQ_ERROR                       BIT3
#define APP_CMD_STS                         BIT5
#define SWITCH_ERROR                        BIT7
#define READY_FOR_DATA                      BIT8
#define CURRENT_STATE                       (BIT9+BIT10+BIT11+BIT12)
#define ERASE_RESET                         BIT13
#define CARD_ECC_DISABLE                    BIT14
#define WP_ERASE_SKIP                       BIT15
#define CID_CSD_OVERWRITE                   BIT16
#define OVERRUN                             BIT17
#define UNDERRUN                            BIT18
#define ERROR                               BIT19
#define CC_ERROR                            BIT20
#define CARD_ECC_FAILED                     BIT21
#define ILLEGAL_COMMAND                     BIT22
#define COM_CRC_ERROR                       BIT23
#define LOCK_UNLOCK_FAILED                  BIT24
#define CARD_IS_LOCK                        BIT25
#define WP_VIOLATION                        BIT26
#define ERASE_PARAM                         BIT27
#define ERASE_SEQ_ERROR                     BIT28
#define BLOCK_LEN_ERROR                     BIT29
#define ADDRESS_ERROR                       BIT30
#define OUT_OF_RANGE                        BIT31

//;-----------------------------------------------------------------------;
//; Transfer Mode Register (Offset 0Ch)
//;-----------------------------------------------------------------------;
#define DMA_ENABLE                          BIT0
#define BLOCK_COUNT_ENABLE                  BIT1
#define AUTO_CMD12_ENABLE                   BIT2
#define AUTO_CMD23_ENABLE                   (BIT3)
#define DATA_TRANSFER_CARD2HOST             BIT4
#define MULTI_BLOCK_SELECT                  BIT5
#define CMC_COMP_ATA                        BIT6

//;-----------------------------------------------------------------------;
//; Block Size Register (Offset 04h)
//;-----------------------------------------------------------------------;
#define BLKSIZE_SIZE                        0x0fff   //;Bit0 ~ Bit11
#define BLKSIZE_DAMBUFBOUNDARY              0x7000   //;Bit12~ Bit14

//----------------------------------------------------------------------------
//       UHS mode
//----------------------------------------------------------------------------
#define SD_SDR12                         BIT0
#define SD_SDR25                         BIT1
#define SD_SDR50                         BIT2
#define SD_SDR104                        BIT3
#define SD_DDR50                         BIT4

#define SD_PW1_8W                        BIT14
#define SD_PW1_44W                       BIT12
#define SD_PW1_8W_SUPPORT                BIT4
#define SD_PW1_44W_SUPPORT               BIT1
//----------------------------------------------------------------------------
//       Normal mode
//----------------------------------------------------------------------------
#define SD_DEFSULT                       0
#define SD_HIGH_SPEED                    1

//------------------------------------------------------------------------------
//       I/O Registers
//------------------------------------------------------------------------------
#define IO_ABORT_REGISTER                   0x06
#define CARD_CAPABILITY_REGISTER            0x08
#define IO_ENABLE                           0x02
#define IO_READY                            0x03
#define INT_ENABLE                          0x04
#define BUS_INTERFACE_CONTROL               0x07

#define COMMON_CIS_POINTER                  0x9
#define FBR_OFFSET                          0x100
#define FN_BLOCK_SIZE_OFFSET                0x10
#define CD_DISABLE                          0x80
//------------------------------------------------------------------------------
//       I/O ABORT Register
//------------------------------------------------------------------------------
#define RESET                               BIT3


#define SMB                                BIT1


//
// IO Card CMD 52 Status
//
#define CIS_AREA_START                      0x1000
#define CIS_AREA_END                        0x17FFF

#define IO_OUT_OF_RANGE                     0x1
#define IO_INVALID_FUNCTION_NO              0x2
#define IO_SDIO_DEVICE_ERROR                0x8
#define IO_ILLEGAL_COMMAND                  0x40
#define IO_COM_CRC_ERROR                    0x80

#define CISTPL_MANFID                       0x20
#define CISTPL_END                          0xFF
#define CISTPL_NULL                         0x00

//-----------------------------------------------------------------------;
//Host Controller Version
//-----------------------------------------------------------------------;
#define HOST_CONTROLLER_VER3                0x2

//-----------------------------------------------------------------------;
// MMC BIT BUS WIDTH
//-----------------------------------------------------------------------;
#define MMC_1_BIT_BUS_WIDTH                 0
#define MMC_4_BIT_BUS_WIDTH                 1
#define MMC_8_BIT_BUS_WIDTH                 2
#define MMC_4_BIT_DDR_BUS_WIDTH             5
#define MMC_8_BIT_DDR_BUS_WIDTH             6

//-----------------------------------------------------------------------;
// MMC DEVICE_TYPE
//-----------------------------------------------------------------------;
#define MMC_HS_SDR_26                       BIT0
#define MMC_HS_SDR_52                       BIT1
#define MMC_HS_DDR_52_18V30V                BIT2
#define MMC_HS_DDR_52_12V                   BIT3
#define MMC_HS200_SDR_18V                   BIT4
#define MMC_HS200_SDR_12V                   BIT5
#define MMC_HS400_DDR_18V                   BIT6
#define MMC_HS400_DDR_12V                   BIT7

#define MAX_SDIO_DEVICES                    8
#define MAXIMUM_SIZE_FOR_FLOPPY_EMULATION   530
#define MAX_LBA_FOR_FLOPPY_EMULATION        0x109000    // 530MB

#define TWO_GB                              0x80000000
#define THIRTY_TWO_GB                       0x800000000

#define SDIO_MANUFACTUREID_LENGTH           30

#define SDMMC_READ                          1
#define SDMMC_WRITE                         0
//-----------------------------------------------------------------------;
// TimeOut for Different Iteration
//-----------------------------------------------------------------------;
#define     CLOCK_INTERNAL_STABLE_TIMEOUT       50000
#define     SOFTWARE_RESET_TIMEOUT              50000
#define     DATA_COMMAND_LINE_RESET_TIMEOUT     50000
#define     COMMAND_EXECUTION_TIMEOUT           32
#define     BUSY_BIT_TIMEOUT                    50000
#define     COMMAND_LINE_INHIBIT_TIMEOUT        50000
#define     MMC_POWERUP_TIMEOUT                 100
#define     SD_POWERUP_TIMEOUT                  100


#define MAKE_SDIO_OFFSET(x)      ((UINT32)((UINT32)(x)<<9))
#define MAKE_SDIO_OP_CODE(x)     ((UINT32)((UINT32)(x)<<26))
#define MAKE_SDIO_BLOCK_MODE(x)  ((UINT32)((UINT32)(x)<<27))
#define MAKE_SDIO_FUNCTION(x) 	 ((UINT32)((UINT32)(x)<<28))
#define MAKE_SDIO_RW(x) 		 ((UINT32)((UINT32)(x)<<31))

//-----------------------------------------------------------------------;
// Device Block Size. 
//-----------------------------------------------------------------------;
#define     BLOCK_SIZE  0x200

//-----------------------------------------------------------------------;
// Maximum buffer allocated for the DMA transfer is 4KB.
//-----------------------------------------------------------------------;
#define     BLOCK_BOUNTRY   0x1000      

//-----------------------------------------------------------------------;
// Number of blocks ( Sectors) transfered in single DMA operation.
//-----------------------------------------------------------------------;
#define     MAXIMUM_NO_BLOCKS_FOR_SINGLE_DMA_TRANSFER   (BLOCK_BOUNTRY / BLOCK_SIZE) 

//-----------------------------------------------------------------------;
// Setting 60kb as maximum Length of Descriptor
//-----------------------------------------------------------------------;
#define     MAXIMUM_ADMA_LENGTH     0x10000

//-----------------------------------------------------------------------;
// SD Voltage Window
//-----------------------------------------------------------------------;
#define VOLTAGE_WINDOW3_3V          0x300000
#define VOLTAGE_WINDOW3_0V          0x60000

//-----------------------------------------------------------------------;
//Default SD MMC Clock (i.e 400KHz)
//-----------------------------------------------------------------------;
#define DEFAULT_SD_MMC_CLOCK        400000
//-----------------------------------------------------------------------;
//Upper 64-bit
//-----------------------------------------------------------------------;
#define UPPER_64_BITS               0xFFFFFFFF00000000
//-----------------------------------------------------------------------;
// CMD6 Block size
//-----------------------------------------------------------------------;
#define     CMD6_STATUS_BLOCKSIZE   64
//-----------------------------------------------------------------------;
// ADMA DESCRIPTOR Attribute
//-----------------------------------------------------------------------;
typedef struct{
    UINT8       ValidBit    :1;
    UINT8       EndBit      :1;
    UINT8       IntBit      :1;
    UINT8       AttReserved :1;
    UINT8       Act1Bit     :1;
    UINT8       Act2Bit     :1;
    UINT8       Reserved1   :2;
    UINT8       Reserved;
    UINT16      Length;
}SDIO_ADMA_ATTRIBUTE;

//-----------------------------------------------------------------------;
// ADMA DESCRIPTOR STRUCTURE
//-----------------------------------------------------------------------;
typedef struct{
    SDIO_ADMA_ATTRIBUTE                              Attribute;
    UINT32                              EntryAddress;
}SDIO_ADMA_DESCRIPTOR;

typedef enum {
   PIO,
   SDMA,
   ADMA
}DMA_SUPPORT;

#pragma pack(1)

typedef struct {
  UINT8     Reserved15_0[16];       // [0:15] 0
  UINT8     SECURE_REMOVAL_TYPE;    // [16] Secure Removal type
  UINT8     PRODUCT_STATE_AWARENESS_ENABLEMENT;// [17] Product state awareness enablement
  UINT32    MAX_PRE_LOADING_DATA_SIZE;// [18:21] Max pre loading data size
  UINT32    PRE_LOADING_DATA_SIZE;  // [22:25] pre loading data size
  UINT8     FFU_STATUS;             // [26] FFU Status
  UINT8     Reserved28_27[2];       // [27:28] 0
  UINT8     MODE_OPERATION_CODES;   // [29] Mode Operation codes
  UINT8     MODE_CONFIG;            // [30] Mode config
  UINT8     Reserved31;             // [31] 0
  UINT8     FLUSH_CACHE;            // [32] Flushing of the cache
  UINT8     CACHE_CTRL;             // [33] Control to turn the Cache ON/OFF
  UINT8     POWER_OFF_NOTIFICATION; // [34] Power Off Notification
  UINT8     PACKED_FAILURE_INDEX;   // [35] Packed command failure index
  UINT8     PACKED_COMMAND_STATUS;  // [36] Packed command status
  UINT8     CONTEXT_CONF[15];       // [37:51] Context configuration
  UINT16    EXT_PARTITIONS_ATTRIBUTE;// [52:53] Extended Partitions Attribute
  UINT16    EXCEPTION_EVENTS_STATUS;// [54:55] Exception events status
  UINT16    EXCEPTION_EVENTS_CTRL;  // [56:57] Exception events control
  UINT8     DYNCAP_NEEDED;          // [58] Number of addressed group to be Released
  UINT8     CLASS_6_CTRL;           // [59] Class 6 commands control
  UINT8     INI_TIMEOUT_EMU;        // [60] 1st initialization after disabling sector size emulation
  UINT8     DATA_SECTOR_SIZE;       // [61] sector size
  UINT8     USE_NATIVE_SECTOR;      // [62] Sector size emulation
  UINT8     NATIVE_SECTOR_SIZE;     // [63] Native Sector size 
  UINT8     VENDOR_SPECIFIC_FIELD[64];// [64:127] Vendor Specific Fields
  UINT8     Reserved128_129[2];       // [128:129] 0
  UINT8     PROGRAM_CID_CSD_DDR_SUPPORT;// [130] Program CID/CSD in DDR mode support
  UINT8     PERIODIC_WAKEUP;        // [131] Periodic Wake-up
  UINT8     TCASE_SUPPORT;          // [132] Package Case Temperature is controlled
  UINT8     PRODUCTION_STATE_AWARENESS;// [133] Production state awareness
  UINT8     SEC_BAD_BLK_MGMNT;      // [134] Bad Block Management mode
  UINT8     Reserved135;            // [135] 0
  UINT8     ENH_START_ADDR[4];      // [136:139] Enhanced User Data Start Address
  UINT8     ENH_SIZE_MULT[3];       // [140:142] Enhanced User Data Start Size
  UINT8     GP_SIZE_MULT_1[3];      // [143:145] GPP1 Size
  UINT8     GP_SIZE_MULT_2[3];      // [146:148] GPP2 Size
  UINT8     GP_SIZE_MULT_3[3];      // [149:151] GPP3 Size
  UINT8     GP_SIZE_MULT_4[3];      // [152:154] GPP4 Size
  UINT8     PARTITION_SETTING_COMPLETED;// [155] Partitioning Setting
  UINT8     PARTITIONS_ATTRIBUTES;  // [156] Partitions attributes
  UINT8     MAX_ENH_SIZE_MULT[3];   // [157:159] GPP4 Start Size
  UINT8     PARTITIONING_SUPPORT;   // [160] Partitioning Support
  UINT8     HPI_MGMT;               // [161] HPI management
  UINT8     RST_n_FUNCTION;         // [162] H/W reset function
  UINT8     BKOPS_EN;               // [163] Enable background operations handshake
  UINT8     BKOPS_START;            // [164] Manually start background operations
  UINT8     SANITIZE_START;         // [165] Start Sanitize operation
  UINT8     WR_REL_PARAM;           // [166] Write reliability parameter register
  UINT8     WR_REL_SET;             // [167] Write reliability setting register
  UINT8     RPMB_SIZE_MULT;         // [168] RPMB Size
  UINT8     FW_CONFIG;              // [169] FW configuration
  UINT8     Reserved170;            // [170] 0
  UINT8     USER_WP;                // [171] User area write protection
  UINT8     Reserved172;            // [172] 0
  UINT8     BOOT_WP;                // [173] Boot area write protection
  UINT8     BOOT_WP_STATUS;         // [174] Boot write protection status registers
  UINT8     ERASE_GROUP_DEF;        // [175] High density erase group definition
  UINT8     Reserved176;            // [176] 0
  UINT8     BOOT_BUS_CONDITIONS;    // [177] Boot bus Condition
  UINT8     BOOT_CONFIG_PROT;       // [178] Boot config protection
  UINT8     PARTITION_CONFIG;       // [179] Partition config
  UINT8     Reserved180;            // [180] 0
  UINT8     ERASED_MEM_CONT;        // [181] Erased Memory Content
  UINT8     Reserved182;            // [182] 0
  UINT8     BUS_WIDTH;              // [183] Bus Width Mode
  UINT8     STROBE_SUPPORT;         // [184] Strobe Support
  UINT8     HS_TIMING;              // [185] High Speed Interface Timing
  UINT8     Reserved186;            // [186] 0
  UINT8     POWER_CLASS;            // [187] Power Class
  UINT8     Reserved188;            // [188] 0
  UINT8     CMD_SET_REV;            // [189] Command Set Revision
  UINT8     Reserved190;            // [190] 0
  UINT8     CMD_SET;                // [191] Command Set
  UINT8     EXT_CSD_REV;            // [192] Extended CSD Revision
  UINT8     Reserved193;            // [193] 0
  UINT8     CSD_STRUCTURE;          // [194] CSD Structure Version
  UINT8     Reserved195;            // [195] 0
  UINT8     DEVICE_TYPE;            // [196] Card Type
  UINT8     DRIVER_STRENGTH;        // [197] Driver Strength
  UINT8     OUT_OF_INTERRUPT_TIME;  // [198] Out-of-interrupt busy timing
  UINT8     PARTITION_SWITCH_TIME;  // [199] Partition switching timing
  UINT8     PWR_CL_52_195;          // [200] Power Class for 52MHz @ 1.95V
  UINT8     PWR_CL_26_195;          // [201] Power Class for 26MHz @ 1.95V
  UINT8     PWR_CL_52_360;          // [202] Power Class for 52MHz @ 3.6V
  UINT8     PWR_CL_26_360;          // [203] Power Class for 26MHz @ 3.6V
  UINT8     Reserved204;            // [204] 0
  UINT8     MIN_PERF_R_4_26;        // [205] Minimum Read Performance for 4bit @26MHz
  UINT8     MIN_PERF_W_4_26;        // [206] Minimum Write Performance for 4bit @26MHz
  UINT8     MIN_PERF_R_8_26_4_52;   // [207] Minimum Read Performance for 8bit @26MHz/4bit @52MHz
  UINT8     MIN_PERF_W_8_26_4_52;   // [208] Minimum Write Performance for 8bit @26MHz/4bit @52MHz
  UINT8     MIN_PERF_R_8_52;        // [209] Minimum Read Performance for 8bit @52MHz
  UINT8     MIN_PERF_W_8_52;        // [210] Minimum Write Performance for 8bit @52MHz
  UINT8     Reserved211;            // [211] 0
  UINT32    SEC_COUNT;              // [212:215] Sector Count
  UINT8     SLEEP_NOTIFICATION_TIME;// [216] Sleep Notification Timeout
  UINT8     S_A_TIMEOUT;            // [217] Sleep/awake timeout
  UINT8     PRODUCTION_STATE_AWARENESS_TIMEOUT;// [218] Production state awareness timeout
  UINT8     S_C_VCCQ;               // [219] Sleep current (VCCQ)
  UINT8     S_C_VCC;                // [220] Sleep current (VCC)
  UINT8     HC_WP_GRP_SIZE;         // [221] High-capacity write protect group size
  UINT8     REL_WR_SEC_C;           // [222] Reliable write sector count
  UINT8     ERASE_TIMEOUT_MULT;     // [223] High-capacity erase timeout
  UINT8     HC_ERASE_GRP_SIZE;      // [224] High-capacity erase unit size
  UINT8     ACC_SIZE;               // [225] Access size
  UINT8     BOOT_SIZE_MULTI;        // [226] Boot partition size
  UINT8     Reserved227;            // [227] 0
  UINT8     BOOT_INFO;              // [228] Boot information
  UINT8     SEC_TRIM_MULT;          // [229] Secure TRIM Multiplier
  UINT8     SEC_ERASE_MULT;         // [230] Secure Erase Multiplier
  UINT8     SEC_FEATURE_SUPPORT;    // [231] Secure Feature support
  UINT8     TRIM_MULT;              // [232] TRIM Multiplier
  UINT8     Reserved233;            // [233] 0
  UINT8     MIN_PERF_DDR_R_8_52;    // [234] Min Read Performance for 8-bit @ 52MHz
  UINT8     MIN_PERF_DDR_W_8_52;    // [235] Min Write Performance for 8-bit @ 52MHz
  UINT8     PWR_CL_200_130;         // [235] Power class for 200MHz at VCCQ=1.3V, VCC = 3.6V
  UINT8     PWR_CL_200_195;         // [235] Power class for 200MHz at VCCQ=1.95V, VCC = 3.6V
  UINT8     PWR_CL_DDR_52_195;      // [238] Power class for 52MHz, DDR at 1.95V
  UINT8     PWR_CL_DDR_52_360;      // [239] Power class for 52MHz, DDR at 3.6V
  UINT8     Reserved240;            // [240] 0
  UINT8     INI_TIMEOUT_AP;         // [241] 1st initialization time after partitioning
  UINT32    CORRECTLY_PRG_SECTORS_NUM; // [242:245] Number of correctly programmed sectors
  UINT8     BKOPS_STATUS;           // [246] Background operations status
  UINT8     POWER_OFF_LONG_TIME;    // [247] Power off notification(long) timeout
  UINT8     GENERIC_CMD6_TIME;      // [248] Power off notification(long) timeout
  UINT32    CACHE_SIZE;             // [249:252] Cache Size
  UINT8     PWR_CL_DDR_200_360;     // [253] Power class for 200MHz, DDR at VCC=3.6V
  UINT64    FIRMWARE_VERSION;       // [254:261] Firmware version
  UINT16    DEVICE_VERSION;         // [262:263] Device version
  UINT8     OPTIMAL_TRIM_UNIT_SIZE; // [264] Optimal trim unit size
  UINT8     OPTIMAL_WRITE_SIZE;     // [265] Optimal write size
  UINT8     OPTIMAL_READ_SIZE;      // [266] Optimal read size
  UINT8     PRE_EOL_INFO;           // [267] Per EOL information
  UINT8     DEVICE_LIFE_TIME_EST_TYP_A;// [268] Device life time estimation type A
  UINT8     DEVICE_LIFE_TIME_EST_TYP_B;// [269] Device life time estimation type B
  UINT8     VENDOR_PROPRIETARY_HEALTH_REPORT[32];// [270:301] Vendor proprietary health report
  UINT32    NUMBER_OF_FW_SECTORS_CORRECTLY_PROGRAMMED;// [302:305] Number of FW sectors correctly programmed
  UINT8     Reserved486_306[181];   // [306:486] 0
  UINT32    FFU_ARG;                // [487:490] FFU Argument  
  UINT8     OPERATION_CODE_TIMEOUT; // [491] Operation codes timeout
  UINT8     FFU_FEATURES;           // [492] FFU Features
  UINT8     SUPPORTED_MODES;        // [493] Supported Modes
  UINT8     EXT_SUPPORT;            // [494] Extended partitions attribute support
  UINT8     LARGE_UNIT_SIZE_M1;     // [495] Large Unit Size
  UINT8     CONTEXT_CAPABILITIES;   // [496] Context management capabilities
  UINT8     TAG_RES_SIZE;           // [497] Tag resources size
  UINT8     TAG_UNIT_SIZE;          // [498] Tag unit size
  UINT8     DATA_TAG_SUPPORT;       // [499] Data Tag support 
  UINT8     MAX_PACKED_WRITES;      // [500] Max packed write commands
  UINT8     MAX_PACKED_READS;       // [501] Max packed read commands
  UINT8     BKOPS_SUPPORT;          // [502] Background operations support
  UINT8     HPI_FEATURES;           // [503] HPI features
  UINT8     S_CMD_SET;              // [504] Supported Command Sets
  UINT8     EXT_SECURITY_ERR;       // [505] Extended Security Commands Error
  UINT8     Reserved511_506[6];     // [511:506] Sector Count
} EXT_CSD;
#pragma pack()



//-----------------------------------------------------------------------;
// SDIO_DEVICE_INFO
//-----------------------------------------------------------------------;
typedef struct _SDIO_DEVICE_INFO{
    BOOLEAN                             DevEntryUsed;
    UINT8                               DeviceAddress;
    UINT64                              SdioBaseAddress;
    UINT8                               SlotNumber;
    UINT8                               DeviceState;
    BOOLEAN                             IODevice;
    UINT8                               IoFunctionCount;
    UINT8                               FunctionNo;
    UINT8                               IoCapabilityRegister;
    UINT32                              CommonCISPointer;
    UINT8                               bMode;
    UINT8                               bState;
    UINT8                               bActive;
    UINT32                              dOCR;
    UINT32                              d4CID[4];
    UINT16                              wRCA;
    UINT32                              d4CSD[4];
    BOOLEAN                             bWrite_Bl_Partial;
    UINT8                               bWrite_Bl_Len;
    BOOLEAN                             bRead_Bl_Partial;
    UINT8                               bRead_Bl_Len;
    UINT8                               d2SCR[8];
    UINT16                              wEmulationOption;
    UINT8                               bHiddenSectors;
    UINT8                               NumHeads;
    UINT8                               LBANumHeads;
    UINT16                              NumCylinders;
    UINT16                              LBANumCyls;
    UINT8                               NumSectors;
    UINT8                               LBANumSectors;
    UINT32                              dMaxLBA;
    UINT16                              wBlockSize;
    UINT8                               bStorageType;
    UINT8                               bEmuType;
    UINT8                               PNM[27];
    UINT8                               SdIOManufactureId[SDIO_MANUFACTUREID_LENGTH];
    UINT8                               bCsdStruct;
    UINT8                               bSpecVers;
    UINT8                               bTranSpeed;
    UINT8                               bMmcCardType;
    UINT32                              bMmcSecCount;
    UINT8                               MmcBusWidth;
    UINT8                               bHostControllerVersion;
    DMA_SUPPORT                         SDIO_Access;
    UINT32                              CurrentState;
    BOOLEAN                             VoltageSwitch;
    UINT32                              SdVoltageWindow;
    EXT_CSD                             Ext_Csd;
    EFI_GUID                            FirmwareCapsuleUpdateGuid;
}SDIO_DEVICE_INFO;

//-----------------------------------------------------------------------;
// SDIO_GLOBAL_DATA
//-----------------------------------------------------------------------;
typedef struct{
    UINT64                              AdmaDescriptorAddress;
    UINT8                               SDIO_Access_Mode;
    UINT8                               SDIOMassEmulationOptionTable[MAX_SDIO_DEVICES];
    SDIO_DEVICE_INFO                    SdioDev[MAX_SDIO_DEVICES];
}SDIO_GLOBAL_DATA;

EFI_STATUS
SDGetOcr (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  UINT32              Argument,
    OUT UINT32              *Response
);

EFI_STATUS
ConfigureSdMmcMemoryDevice (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
CheckDevicePresenceInController (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
ControllerInitEnvironment (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
MmcCardInit (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SdCardInit (
    IN  SDIO_DEVICE_INFO               *SdioDevInfo,
    IN  UINT8                          Port
);

EFI_STATUS
MmcCard_SetClock (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

VOID
CalculateMaxCardAndHostFreq (
    IN  SDIO_DEVICE_INFO               *SdioDevInfo,
    IN  UINT8                          Port,
    OUT BOOLEAN                        *HighSpeedSupport,
    OUT UINT32                         *MaxCardClk,
    OUT UINT32                         *MaxHstClk
);

EFI_STATUS
ControllerSetClock (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  UINT32              RequiredClock
);
EFI_STATUS
SdCardSetClock (
    IN  SDIO_DEVICE_INFO               *SdioDevInfo,
    IN  UINT8                          Port
);
EFI_STATUS
SdMmcCardGetCID (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
MmcCardSetRCA (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SDCardGetRCA (
    IN  SDIO_DEVICE_INFO               *SdioDevInfo,
    IN  UINT8                          Port
);

EFI_STATUS
MmcBusWidthTest (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
MmcSetHighSpeed (
    IN  SDIO_DEVICE_INFO               *SdioDevInfo,
    IN  UINT8                          Port
);

EFI_STATUS
SdMmcCardGetCSD (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SdMmcCardSelect (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
MmcCardBuswidth (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  BOOLEAN             BusTest
);

EFI_STATUS
SdCardBuswidth (
    IN  SDIO_DEVICE_INFO               *SdioDevInfo,
    IN  UINT8                          Port
);

EFI_STATUS
SdMmcCommand (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  UINT16              CommandIndex,
    IN  UINT32              CommandArgument
);

EFI_STATUS
SdMmcWaitCMDComplete (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SDCard_SetTimeout (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SdMmcCardGetStatus (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
MmcCardGetExtCSD (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SdMmcDmaIntHandle (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  UINT32              **BufferAddress
);

EFI_STATUS
SDCard_XferWdata2Buff (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  UINT32              **BufferAddress,
    IN  UINT32              *DmaAddress,
    IN  UINT32              *NumBlks
);

EFI_STATUS
SDCard_XferRemainderSector_Controller (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  UINT32              *BufferAddress,
    IN  UINT32              *DmaAddress,
    IN  UINT32              NumBlks
);

EFI_STATUS
SdMmcBRINTHandle (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  UINT32              **TransferAddress,
    IN  BOOLEAN             Read,
    IN  UINT32              BlockSize
);

EFI_STATUS
SdMmcRestoreStatus (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SdMmcWaitXferComplete (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  UINT32              **BufferAddress,
    IN  UINT32              BlkSize,
    IN  BOOLEAN             SdioRead
);

EFI_STATUS
MmcMassGetCapacity (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SdMassGetCapacity (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SDMmcMassGetPNMWithDeviceClass (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SdMmcRead (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  EFI_LBA             LBA,
    IN  UINT32              NumBlks,
    IN  VOID                *BufferAddress
);

EFI_STATUS
SDMmcRWCMDController (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  EFI_LBA             LBA,
    IN  UINT32              NumBlks,
    IN  VOID                *BufferAddress,
    BOOLEAN                 ReadWrite
);

EFI_STATUS
SdMmcXferRemainderSector (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  UINT32              *BufferAddress,
    IN  UINT32              *DmaAddress,
    IN  UINT32              NumBlks
);

EFI_STATUS
SdMmcWrite (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  EFI_LBA             LBA,
    IN  UINT32              NumBlks,
    IN  VOID                *BufferAddress
);

EFI_STATUS
SdIoSendCmd(
    IN  SDIO_DEVICE_INFO *SdioDevInfo,
    IN  UINT8            Slot,
    IN  UINT16           CommandIndex,
    IN  UINT32           CommandArgument,
    IN  UINT32           *TransferAddress,
    IN  UINT16           ResponseType,
    IN  BOOLEAN          Read
);

EFI_STATUS
SdMmcReadWriteData (
    IN  SDIO_DEVICE_INFO *SdioDevInfo,
    IN  UINT8            Port,
    IN  UINT8            Command,
    IN  UINT32           CommandArgument,
    IN  UINT32           *TransferAddress,
    IN  UINT32           NumBlks,
    IN  UINT32           BlockSize,
    IN  UINT16           ResponseType,
    IN  BOOLEAN          AppCmd, 
    IN  BOOLEAN          Read
);

EFI_STATUS
SdMmcResetCard (
    IN  SDIO_DEVICE_INFO             *SdioDevInfo,
    IN  UINT8                        Port
);

EFI_STATUS
ControllerResetAll (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

VOID
SdMmcGetEmulationType (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SDMmcAsynchronousAbort (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SdMmcADMADescriptorEntry (
    IN  SDIO_DEVICE_INFO               *SdioDevInfo,
    IN  UINT32                         NumBlks,
    IN  VOID                           *BufferAddress,
    IN  SDIO_ADMA_DESCRIPTOR           *AdmaDescriptorAddress
);

EFI_STATUS
SDMMCCardSelectAccessMode (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
MmcCardHS200 (
    IN  SDIO_DEVICE_INFO               *SdioDevInfo,
    IN  UINT8                          Port
);

EFI_STATUS
HS200ClockTunning (
    IN  SDIO_DEVICE_INFO               *SdioDevInfo,
    IN  UINT8                          Port,
    IN  UINT32                         MaxHstClk
);

UINT8
GetFreeDevEntry (
);
EFI_STATUS
SdSetVoltage (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SdCardSetUhsMode
(
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port
);

EFI_STATUS
SdQueryMode (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    OUT UINT8               *SdSpeedMode,
    OUT UINT8               *SdPowerLimitMode
);

EFI_STATUS
SdSetMode (
    IN  SDIO_DEVICE_INFO    *SdioDevInfo,
    IN  UINT8               Port,
    IN  UINT16              SdCardMode,
    IN  UINT8               SdControllerMode
);

EFI_STATUS
SdIoReadWriteCmd (
    IN  SDIO_DEVICE_INFO *SdioDevInfo,
    IN  UINT8            Slot,
    IN  UINT16           CommandIndex,
    IN  UINT32           CommandArgument,
    IN  UINT32           *TransferAddress,
    IN  UINT16           ResponseType,
    IN  BOOLEAN          Read
);

EFI_STATUS 
SdMmcTunning (
    IN  SDIO_DEVICE_INFO   *SdioDevInterface,
    IN  UINT8                   Slot
);

//-----------------------------------------------------------------------;
//MMIO Access
//-----------------------------------------------------------------------;

#define     SdioMmAddress( BaseAddr, Register ) \
            ((UINTN)(BaseAddr) + \
            (UINTN)(Register) \
             )

#define     SdioMm32Ptr( BaseAddr, Register ) \
            ((volatile UINT32 *)SdioMmAddress (BaseAddr, Register ))

#define     SdioMm16Ptr( BaseAddr, Register ) \
            ((volatile UINT16 *)SdioMmAddress (BaseAddr, Register ))

#define     SdioMm8Ptr( BaseAddr, Register ) \
            ((volatile UINT8 *)SdioMmAddress (BaseAddr, Register ))

//-----------------------------------------------------------------------;
// SDIO Generic
//-----------------------------------------------------------------------;

#define     SDIO_REG8( BaseAddr, Register ) \
            (*SdioMm8Ptr ((BaseAddr), (Register)))

#define     SDIO_REG8_OR( BaseAddr, Register, OrData) \
            (SDIO_REG8 ((BaseAddr), (Register))) |= ((UINT8) (OrData))

#define     SDIO_REG16( BaseAddr, Register ) \
            (*SdioMm16Ptr ((BaseAddr), (Register)))

#define     SDIO_WRITE_REG8( BaseAddr, Register, Data ) \
            (SDIO_REG8 ((BaseAddr), (Register))) = ((UINT8) (Data))

#define     SDIO_WRITE_REG16( BaseAddr, Register, Data ) \
            (SDIO_REG16 ((BaseAddr), (Register))) = ((UINT16) (Data))

#define     SDIO_WRITE_REG32( BaseAddr, Register, Data ) \
            (SDIO_REG32 ((BaseAddr), (Register))) = ((UINT32) (Data))

#define     SDIO_REG16_OR( BaseAddr, Register, OrData) \
            (SDIO_REG16 ((BaseAddr), (Register))) |= ((UINT16) (OrData))

#define     SDIO_REG32( BaseAddr, Register ) \
            (*SdioMm32Ptr ((BaseAddr), (Register)))

#define     SDIO_REG32_OR( BaseAddr, Register, OrData) \
            (SDIO_REG32 ((BaseAddr), (Register))) = (SDIO_REG32 ((BaseAddr), (Register))) | ((UINT32) (OrData))

#define     SDIO_REG8_AND( BaseAddr, Register, AndData) \
            (SDIO_REG8 ((BaseAddr), (Register))) = (SDIO_REG8 ((BaseAddr), (Register))) & ((UINT8) (AndData))

#define     SDIO_REG16_AND( BaseAddr, Register, AndData) \
            (SDIO_REG16 ((BaseAddr), (Register))) &= ((UINT16) (AndData))

#define     SDIO_REG32_AND( BaseAddr, Register, AndData) \
            (SDIO_REG32 ((BaseAddr), (Register))) = (SDIO_REG32 ((BaseAddr), (Register))) & ((UINT32) (AndData))

#define     SDIO_REG8_AND_OR( BaseAddr, Register, AndData, OrData) \
            (SDIO_REG8 ((BaseAddr), (Register)) = \
                (((SDIO_REG8 ((BaseAddr), (Register))) & ((UINT8) (AndData))) | ((UINT8) (OrData))))

#define     SDIO_REG16_AND_OR( BaseAddr, Register, AndData, OrData) \
            (SDIO_REG16 ((BaseAddr), (Register)) = \
                (((SDIO_REG16 ((BaseAddr), (Register))) & ((UINT16) AndData)) | ((UINT16) (OrData))))

#define     SDIO_REG32_AND_OR( BaseAddr, Register,AndData,  OrData) \
            (SDIO_REG32 ((BaseAddr), (Register)) = \
                (((SDIO_REG32 ((BaseAddr), (Register))) & ((UINT32) (AndData))) | ((UINT32) (OrData))))

#ifdef __cplusplus
}
#endif

#endif

//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2017, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**         5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093     **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
