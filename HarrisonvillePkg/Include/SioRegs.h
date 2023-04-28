//
// This file contains an 'Intel Pre-EFI Module' and is licensed
// for Intel CPUs and Chipsets under the terms of your license 
// agreement with Intel or your vendor.  This file may be      
// modified by the user, subject to additional terms of the    
// license agreement                                           
//
/*++

Copyright (c) 1999 - 2005, Intel Corporation. All rights reserved.<BR>
This software and associated documentation (if any) is furnished
under a license and may only be used or copied in accordance
with the terms of the license. Except as permitted by such
license, no part of this software or documentation may be
reproduced, stored in a retrieval system, or transmitted in any
form or by any means without the express written consent of
Intel Corporation.


Module Name:

  LpcSio.h

Abstract:

  Lpc driver's sio interface for National SIO PC87423 and 427
  
  copied from Platform\IntelEpg\Common\Chipset\Sio\PilotIIPc8374\Dxe\SioRegs.h

Revision History

--*/

#ifndef _SIO_REG_H_
#define _SIO_REG_H_

#define REG_LOGICAL_DEVICE        0x07
#define ACTIVATE                  0x30

#define BASE_ADDRESS_HIGH0        0x60
#define BASE_ADDRESS_LOW0         0x61
#define BASE_ADDRESS_HIGH1        0x62
#define BASE_ADDRESS_LOW1         0x63
#define BASE_ADDRESS_HIGH2        0x64
#define BASE_ADDRESS_LOW2         0x65
#define BASE_ADDRESS_HIGH3        0x66
#define BASE_ADDRESS_LOW3         0x67
#define PRIMARY_INTERRUPT_SELECT  0x70
#define WAKEUP_ON_IRQ_EN          0x70
#define INTERRUPT_TYPE            0x71
#define DMA_CHANNEL_SELECT0       0x74
#define DMA_CHANNEL_SELECT1       0x75



//
// Port address for PILOT-II
//
#define PILOTIII_CHIP_ID         0x03
#define PILOTIII_SIO_INDEX_PORT  0x04E
#define PILOTIII_SIO_DATA_PORT   (PILOTIII_SIO_INDEX_PORT+1)

#define PILOTIII_SIO_UNLOCK      0x5A
#define PILOTIII_SIO_LOCK        0xA5

//
// logical device in PILOT-III
//
#define PILOTIII_SIO_PSR     0x00
#define PILOTIII_SIO_COM2    0x01
#define PILOTIII_SIO_COM1    0x02
#define PILOTIII_SIO_SWCP    0x03
#define PILOTIII_SIO_GPIO    0x04
#define PILOTIII_SIO_WDT     0x05

#define PILOTIII_SIO_KCS3    0x08
#define PILOTIII_SIO_KCS4    0x09
#define PILOTIII_SIO_KCS5    0x0A
#define PILOTIII_SIO_BT      0x0B
#define PILOTIII_SIO_SMIC    0x0C
#define PILOTIII_SIO_MAILBOX 0x0D
#define PILOTIII_SIO_RTC     0x0E
#define PILOTIII_SIO_SPI     0x0F
#define PILOTIII_SIO_TAP     0x10
//
// Register for Pilot III
//
#define PILOTIII_CHIP_ID_REG               0x20
#define PILOTIII_LOGICAL_DEVICE            REG_LOGICAL_DEVICE
#define PILOTIII_ACTIVATE                  ACTIVATE
#define PILOTIII_BASE_ADDRESS_HIGH0        BASE_ADDRESS_HIGH0
#define PILOTIII_BASE_ADDRESS_LOW0         BASE_ADDRESS_LOW0
#define PILOTIII_BASE_ADDRESS_HIGH1        BASE_ADDRESS_HIGH1
#define PILOTIII_BASE_ADDRESS_LOW1         BASE_ADDRESS_LOW1
#define PILOTIII_PRIMARY_INTERRUPT_SELECT  PRIMARY_INTERRUPT_SELECT

//
// Port address for PC8374
//
#define PC8374_SIO_INDEX_PORT  0x02E
#define PC8374_SIO_DATA_PORT   (PC8374_SIO_INDEX_PORT+1)

//
// Logical device in PC8374
//
#define PC8374_SIO_FLOPPY  0x00
#define PC8374_SIO_PARA    0x01
#define PC8374_SIO_COM2    0x02
#define PC8374_SIO_COM1    0x03
#define PC8374_SIO_MOUSE   0x05
#define PC8374_SIO_KYBD    0x06
#define PC8374_SIO_GPIO    0x07

//
// Registers specific for PC8374 
//
#define PC8374_CLOCK_SELECT  0x2D
#define PC8374_CLOCK_CONFIG  0x29

//
// Registers for PC8374
//
#define PC8374_LOGICAL_DEVICE            REG_LOGICAL_DEVICE
#define PC8374_ACTIVATE                  ACTIVATE
#define PC8374_BASE_ADDRESS_HIGH0        BASE_ADDRESS_HIGH0
#define PC8374_BASE_ADDRESS_LOW0         BASE_ADDRESS_LOW0
#define PC8374_PRIMARY_INTERRUPT_SELECT  PRIMARY_INTERRUPT_SELECT
#define PC8374_DMA_CHANNEL_SELECT        DMA_CHANNEL_SELECT0

#define PC87427_SERVERIO_CNF2           0x22


//
// Pilot II Mailbox Data Register definitions
//
#define MBDAT00_OFFSET                  0x00
#define MBDAT01_OFFSET                  0x01
#define MBDAT02_OFFSET                  0x02
#define MBDAT03_OFFSET                  0x03
#define MBDAT04_OFFSET                  0x04
#define MBDAT05_OFFSET                  0x05
#define MBDAT06_OFFSET                  0x06
#define MBDAT07_OFFSET                  0x07
#define MBDAT08_OFFSET                  0x08
#define MBDAT09_OFFSET                  0x09
#define MBDAT10_OFFSET                  0x0A
#define MBDAT11_OFFSET                  0x0B
#define MBDAT12_OFFSET                  0x0C
#define MBDAT13_OFFSET                  0x0D
#define MBDAT14_OFFSET                  0x0E
#define MBDAT15_OFFSET                  0x0F
#define MBST0_OFFSET                    0x10
#define MBST1_OFFSET                    0x11

//
// If both are there, use the default one
//

#define  PC8374_EXIST     BIT1
#define  PILOTIII_EXIST   BIT0
#define  DEFAULT_SIO      PILOTIII_EXIST

#define IPMI_DEFAULT_SMM_IO_BASE	0xca2
#define PILOTIII_SWC_BASE_ADDRESS       0xA00
#define PILOTIII_PM1b_EVT_BLK_BASE_ADDRESS 0x0A80
#define PILOTIII_PM1b_CNT_BLK_BASE_ADDRESS 0x0A84
#define PILOTIII_GPE1_BLK_BASE_ADDRESS     0x0A86
#define PILOTIII_KCS3_DATA_BASE_ADDRESS    0x0CA4
#define PILOTIII_KCS3_CMD_BASE_ADDRESS     0x0CA5
#define PILOTIII_KCS4_DATA_BASE_ADDRESS    0x0CA2
#define PILOTIII_KCS4_CMD_BASE_ADDRESS     0x0CA3
#define PILOTIII_MAILBOX_BASE_ADDRESS      0x0600
#define PILOTIII_MAILBOX_MASK              0xFFE0


#define AST2300_CONFIG_INDEX               0x2E
#define AST2300_CONFIG_DATA                0x2F
#define AST2300_SERIAL_PORT0_BASE_ADDRESS  0x3F8
#define AST2300_LDN_SEL_REGISTER           0x07
#define AST2300_LDN_UART0                  0x02
#define AST2300_BASE1_LO_REGISTER          0x61
#define AST2300_BASE1_HI_REGISTER          0x62
#define AST2300_ACTIVATE_REGISTER          0x30
#define AST2300_ACTIVATE_VALUE             0x01
#define AST2300_LDN_GPIO                   0x07
#define AST2300_IRQ1_REGISTER              0x70
#define AST2300_LDN_LPC2AHB                0x0D





#endif
