/*
 * GpioTableBirdKey.h
 *
 *@copyright
  Copyright (c) 2020 Intel Corporation. All rights reserved
  This software and associated documentation (if any) is furnished
  under a license and may only be used or copied in accordance
  with the terms of the license. Except as permitted by such
  license, no part of this software or documentation may be
  reproduced, stored in a retrieval system, or transmitted in any
  form or by any means without the express written consent of
  Intel Corporation.
  This file contains an 'Intel Peripheral Driver' and is
  licensed for Intel CPUs and chipsets under the terms of your
  license agreement with Intel or your vendor. This file may
  be modified by the user, subject to additional terms of the
  license agreement.
 *  Created on: Feb 7, 2020
 *      Author: dwross
 */

#ifndef GPIOTABLEBIRDKEY_H_
#define GPIOTABLEBIRDKEY_H_

//
// 1 = build for BMC test board
// 0 = build for production
// 6 pins are swapped around according to this switch
//
#define BMC_TEST_BOARD_CFG 1

static GPIO_INIT_CONFIG mBirdKeyCfioInitTable [] = {
    // IRQ_LEAK_INT_N (GPIO_0)
        { NORTH_ALL_GPIO_0              , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SMB_DNV_MDC (GPIO_1)
        { NORTH_ALL_GPIO_1              , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SMB_DNV_MDIO (GPIO_2)
        { NORTH_ALL_GPIO_2              , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SW_MUX_SEL_0 (GPIO_3)
        { SOUTH_GROUP1_GPIO_3           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SPI_SAW0_SEL (GPIO_4)
        { SOUTH_GROUP0_GPIO_4           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutLow     , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // RST_SAW0_HSS_N (GPIO_5)
        { SOUTH_GROUP0_GPIO_5           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // IRQ_SAW0_NMC_N (GPIO_6)
        { SOUTH_GROUP0_GPIO_6           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW0_PROGRAM_N (GPIO_7)
        { SOUTH_GROUP0_GPIO_7           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // RST_NFPGA_RESET_N (GPIO_8)
        { SOUTH_GROUP0_GPIO_8           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // IRQ_ETH_INT0_IN_N (GPIO_9)
        { SOUTH_GROUP0_GPIO_9           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_BMC_NFPGA_SPARE_3 (GPIO_10)
        { SOUTH_GROUP1_GPIO_10          , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirNone   , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // LPC_SERIRQ_R (GPIO_11)
        { SOUTH_GROUP1_GPIO_11          , {GpioPadModeNative2  , GpioHostOwnGpio, GpioDirInOut  , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SPI_SOC_TPM_CS_N (GPIO_12)
        { SOUTH_GROUP0_GPIO_12          , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // UART_SOC_UART2_CTS_R (GPIO_13)
        { SOUTH_GROUP0_SMB5_GBE_ALRT_N  , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirOut    , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // IRQ_ETH_INT1_IN_N (GPIO_14)
        { NORTH_ALL_GBE0_SDP0           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SPI_SAW1_SEL (GPIO_15)
        { NORTH_ALL_GBE1_SDP0           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutLow     , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // RST_SAW1_HSS_N (GPIO_16)
        { NORTH_ALL_GBE0_SDP1           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // IRQ_SAW1_NMC_N (GPIO_17)
        { NORTH_ALL_GBE1_SDP1           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW1_PROGRAM_N (GPIO_18)
        { NORTH_ALL_GBE0_SDP2           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW1_H0_SP0 (GPIO_19)
        { NORTH_ALL_GBE1_SDP2           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW1_H1_SP0 (GPIO_20)
        { NORTH_ALL_GBE0_SDP3           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW1_PRSNT0_N (GPIO_21)
        { NORTH_ALL_GBE1_SDP3           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW1_PRSNT1_N (GPIO_22)
        { NORTH_ALL_GBE2_LED0           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SPI_SAW2_SEL (GPIO_23)
        { NORTH_ALL_GBE2_LED1           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutLow     , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // RST_SAW2_HSS_N (GPIO_24)
        { NORTH_ALL_GBE0_I2C_CLK        , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // RQ_SAW2_NMC_N (GPIO_25)
        { NORTH_ALL_GBE0_I2C_DATA       , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW2_PROGRAM_N (GPIO_26)
        { NORTH_ALL_GBE1_I2C_CLK        , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW2_H0_SP0 (GPIO_27)
        { NORTH_ALL_GBE1_I2C_DATA       , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW2_H0_SP0 (GPIO_28)
        { NORTH_ALL_NCSI_RXD0           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutLow     , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW2_PRSNT0_N (GPIO_29)
        { NORTH_ALL_NCSI_CLK_IN         , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW2_PRSNT1_N (GPIO_30)
        { NORTH_ALL_NCSI_RXD1           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SPI_SAW3_SEL (GPIO_31)
        { NORTH_ALL_NCSI_CRS_DV         , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutLow     , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // RST_SAW3_HSS_N (GPIO_32)
        { NORTH_ALL_NCSI_ARB_IN         , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // RQ_SAW3_NMC_N (GPIO_33)
        { NORTH_ALL_NCSI_TX_EN          , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW3_PROGRAM_N (GPIO_34)
        { NORTH_ALL_NCSI_TXD0           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SOC_NCSI_CLK_TXD1 PD (GPIO_35)
        { NORTH_ALL_NCSI_TXD1           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW3_H1_SP0 (GPIO_36)
        { NORTH_ALL_NCSI_ARB_OUT        , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW3_PRSNT0_N (GPIO_37)
        { NORTH_ALL_GBE0_LED0           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW3_PRSNT1_N (GPIO_38)
        { NORTH_ALL_GBE0_LED1           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW0_H0_SP0 (GPIO_39)
        { NORTH_ALL_GBE1_LED0           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW0_H1_SP0 (GPIO_40)
        { NORTH_ALL_GBE1_LED1           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW0_PRSNT0_N (GPIO_41)
        { NORTH_ALL_PCIE_CLKREQ0_N      , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SAW0_PRSNT1_N (GPIO_42)
        { NORTH_ALL_PCIE_CLKREQ1_N      , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_CMM_SLOT_ID0 (GPIO_43)
        { NORTH_ALL_PCIE_CLKREQ2_N      , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_CMM_SLOT_ID1 (GPIO_44)
        { NORTH_ALL_PCIE_CLKREQ3_N      , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_CMM_SLOT_ID2 (GPIO_45)
        { NORTH_ALL_PCIE_CLKREQ4_N      , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SVID_ALERT_N (GPIO_47)
        { NORTH_ALL_SVID_ALERT_N        , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SVID_DATA (GPIO_48)
        { NORTH_ALL_SVID_DATA           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirInOut  , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SVID_CLK (GPIO_49)
        { NORTH_ALL_SVID_CLK            , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirOut    , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // H_THERMTRIP_N (GPIO_50)
        { NORTH_ALL_THERMTRIP_N         , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirOut    , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // H_PROCHOT_N (GPIO_51)
        { NORTH_ALL_PROCHOT_N           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirOut    , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_52)
        { NORTH_ALL_MEMHOT_N            , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermWpu20K,  GpioLockDefault}} ,
    // NC (GPIO_53)
        { SOUTH_DFX_DFX_PORT_CLK0       , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_54)
        { SOUTH_DFX_DFX_PORT_CLK1       , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_55)
        { SOUTH_DFX_DFX_PORT0           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_56)
        { SOUTH_DFX_DFX_PORT1           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_57)
        { SOUTH_DFX_DFX_PORT2           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_58)
        { SOUTH_DFX_DFX_PORT3           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_59)
        { SOUTH_DFX_DFX_PORT4           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_60)
        { SOUTH_DFX_DFX_PORT5           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_61)
        { SOUTH_DFX_DFX_PORT6           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_62)
        { SOUTH_DFX_DFX_PORT7           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_63)
        { SOUTH_DFX_DFX_PORT8           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // LPC_LAD<0> (GPIO_64)
        { SOUTH_GROUP1_ESPI_IO0         , {GpioPadModeNative2  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // LPC_LAD<1> (GPIO_65)
        { SOUTH_GROUP1_ESPI_IO1         , {GpioPadModeNative2  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // LPC_LAD<2> (GPIO_66)
        { SOUTH_GROUP1_ESPI_IO2         , {GpioPadModeNative2  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // LPC_LAD<3> (GPIO_67)
        { SOUTH_GROUP1_ESPI_IO3         , {GpioPadModeNative2  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // LPC_FRAME_N (GPIO_68)
        { SOUTH_GROUP1_ESPI_CS0_N       , {GpioPadModeNative2  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // LPC_CLK0 (GPIO_69)
        { SOUTH_GROUP1_ESPI_CLK         , {GpioPadModeNative2  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_NFPGA_NCONFIG (GPIO_70)
        { SOUTH_GROUP1_ESPI_RST_N       , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // LPC_CLKRUN_N (GPIO_71)
        { SOUTH_GROUP1_ESPI_ALRT0_N     , {GpioPadModeNative2  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SPI_SOC_CS0_N (GPIO_72)
        { SOUTH_GROUP1_SPI_CS0_N        , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SOC_SPI_CS1_N (GPIO_73)
        { SOUTH_GROUP1_SPI_CS1_N        , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SPI_SOC_IO0_MOSI (GPIO_74)
        { SOUTH_GROUP1_SPI_MOSI_IO0     , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SPI_SOC_IO1_MISO (GPIO_75)
        { SOUTH_GROUP1_SPI_MISO_IO1     , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SPI_SOC_IO2 (GPIO_76)
        { SOUTH_GROUP1_SPI_IO2          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SPI_SOC_IO3 (GPIO_77)
        { SOUTH_GROUP1_SPI_IO3          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SPI_SOC_CLK (GPIO_78)
        { SOUTH_GROUP1_SPI_CLK          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_NFPGA_NSTATUS (GPIO_79)
        { SOUTH_GROUP1_SUSPWRDNACK      , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_NFPGA_INIT_DONE (GPIO_80)
        { SOUTH_GROUP1_PMU_SUSCLK       , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_BMC_NFPGA_SPARE_2 (GPIO_81)
        { SOUTH_GROUP1_ADR_TRIGGER      , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirInOut  , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SOC_SLPS45_N (GPIO_82)
        { SOUTH_GROUP1_PMU_SLP_S45_N    , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SOC_SLPS3_N (GPIO_83)
        { SOUTH_GROUP1_PMU_SLP_S3_N     , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // RST_GBE_RESET_N (GPIO_84)
        { SOUTH_GROUP1_PMU_WAKE_N       , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_MIPI60_PWR_BTN_N (GPIO_85)
        { SOUTH_GROUP1_PMU_PWRBTN_N     , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_RESETBUTTON_N (GPIO_86)
        { SOUTH_GROUP1_PMU_RESETBUTTON_N, {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // RST_PMU_PLTRST_R_N (GPIO_87)
        { SOUTH_GROUP1_PMU_PLTRST_N     , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SUS_STAT_N (GPIO_88)
        { SOUTH_GROUP1_SUS_STAT_N       , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_89)
        { SOUTH_GROUP1_SLP_S0IX_N       , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_90)
        { SOUTH_GROUP0_SATA0_LED_N      , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_91)
        { SOUTH_GROUP0_SATA1_LED_N      , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_FPGA_SPI_SEL (GPIO_92)
        { SOUTH_GROUP0_SATA_PDETECT0    , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutLow     , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_BMC_NFPGA_SPARE_0 (GPIO_93)
        { SOUTH_GROUP0_SATA_PDETECT1    , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirInOut  , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // UART_SOC_UART1_CTS (RTS-CTS reversed) (GPIO_94)
        { SOUTH_GROUP0_SATA0_SDOUT      , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // UART_SOC_UART1_RTS (RTS-CTS reversed)  (GPIO_95)
        { SOUTH_GROUP0_SATA1_SDOUT      , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // UART_SOC_UART1_RXD (GPIO_96)
        { SOUTH_GROUP0_UART1_RXD        , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // UART_SOC_UART1_TXD (GPIO_97)
        { SOUTH_GROUP0_UART1_TXD        , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // UART_SOC_UART2_RTS (GPIO_98)
        { SOUTH_GROUP0_PCIE_CLKREQ5_N   , {GpioPadModeNative2  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // UART_SOC_UART2_RXD (GPIO_99)
        { SOUTH_GROUP0_PCIE_CLKREQ6_N   , {GpioPadModeNative2  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // UART_SOC_UART2_TXD (GPIO_100)
        { SOUTH_GROUP0_PCIE_CLKREQ7_N   , {GpioPadModeNative2  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // UART_BMC_RX (GPIO_101)
        { SOUTH_GROUP0_UART0_RXD        , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // UART_BMC_TX (GPIO_102)
        { SOUTH_GROUP0_UART0_TXD        , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,

#if BMC_TEST_BOARD_CFG
    // NC (BMC test card only) (GPIO_103)
        { SOUTH_GROUP0_SMB5_GBE_CLK     , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (BMC test card only) (GPIO_104)
        { SOUTH_GROUP0_SMB5_GBE_DATA    , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
#else
    // DNV_REDFISH_N (production) (GPIO_103)
        { SOUTH_GROUP0_SMB5_GBE_CLK     , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutHigh    , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // QUICK_OFF_N (production) (GPIO_104)
        { SOUTH_GROUP0_SMB5_GBE_DATA    , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
#endif

    // NC (GPIO_105)
        { SOUTH_GROUP0_ERROR2_N         , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_106)
        { SOUTH_GROUP0_ERROR1_N         , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_107)
        { SOUTH_GROUP0_ERROR0_N         , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SOC_CATERR_N (GPIO_108)
        { SOUTH_GROUP0_IERR_N           , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_SOC_MCERR_N (GPIO_109)
        { SOUTH_GROUP0_MCERR_N          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SMB_LEG_SCL (GPIO_110)
        { SOUTH_GROUP0_SMB0_LEG_CLK     , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SMB_LEG_SDA (GPIO_111)
        { SOUTH_GROUP0_SMB0_LEG_DATA    , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SMB_LEG_ALRT_N (GPIO_112)
        { SOUTH_GROUP0_SMB0_LEG_ALRT_N  , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SMB_BDK_HOST_SDA (GPIO_113)
        { SOUTH_GROUP0_SMB1_HOST_DATA   , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // SMB_BDK_HOST_SCL (GPIO_114)
        { SOUTH_GROUP0_SMB1_HOST_CLK    , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_BMC_GREEN_LED0 (GPIO_115)
        { SOUTH_GROUP0_SMB2_PECI_DATA   , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutLow     , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_BMC_RED_LED1 (GPIO_116)
        { SOUTH_GROUP0_SMB2_PECI_CLK    , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutLow     , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_BMC_BLUE_LED2 (GPIO_117)
        { SOUTH_GROUP0_SMB4_CSME0_DATA  , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirOut    , GpioOutLow     , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_NFPGA_CONF_DONE (GPIO_118)
        { SOUTH_GROUP0_SMB4_CSME0_CLK   , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_BMC_NFPGA_SPARE_1 (GPIO_119)
        { SOUTH_GROUP0_SMB4_CSME0_ALRT_N, {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirInOut  , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_BDK_OC1_USB_N (GPIO_120)
        { SOUTH_GROUP0_USB_OC0_N        , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // CLK_25M_FLEX_CLK_ETH_SW (GPIO_121)
        { SOUTH_GROUP0_FLEX_CLK_SE0     , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // CLK_25M_FLEX_CLK_NFPGA (GPIO_122)
        { SOUTH_GROUP0_FLEX_CLK_SE1     , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // EMMC_SOC_CMD (GPIO_123)
        { SOUTH_GROUP1_EMMC_CMD         , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermWpu20K,  GpioLockDefault}} ,
    // EMMC_SOC_STROBE (GPIO_124)
        { SOUTH_GROUP1_EMMC_STROBE      , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // EMMC_SOC_CLK (GPIO_125)
        { SOUTH_GROUP1_EMMC_CLK         , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermWpd20K,  GpioLockDefault}} ,
    // EMMC_SOC_DATA0 (GPIO_126)
        { SOUTH_GROUP1_EMMC_D0          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermWpu20K,  GpioLockDefault}} ,
    // EMMC_SOC_DATA1 (GPIO_127)
        { SOUTH_GROUP1_EMMC_D1          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermWpu20K,  GpioLockDefault}} ,
    // EMMC_SOC_DATA2 (GPIO_128)
        { SOUTH_GROUP1_EMMC_D2          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermWpu20K,  GpioLockDefault}} ,
    // EMMC_SOC_DATA3 (GPIO_129)
        { SOUTH_GROUP1_EMMC_D3          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermWpu20K,  GpioLockDefault}} ,
    // EMMC_SOC_DATA4 (GPIO_130)
        { SOUTH_GROUP1_EMMC_D4          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermWpu20K,  GpioLockDefault}} ,
    // EMMC_SOC_DATA5 (GPIO_131)
        { SOUTH_GROUP1_EMMC_D5          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermWpu20K,  GpioLockDefault}} ,
    // EMMC_SOC_DATA6 (GPIO_132)
        { SOUTH_GROUP1_EMMC_D6          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermWpu20K,  GpioLockDefault}} ,
    // EMMC_SOC_DATA7 (GPIO_133)
        { SOUTH_GROUP1_EMMC_D7          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermWpu20K,  GpioLockDefault}} ,
    // PU_BRD_ID_0 (GPIO_134)
        { SOUTH_DFX_DFX_PORT9           , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // PU_BRD_ID_1 (GPIO_135)
        { SOUTH_DFX_DFX_PORT10          , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (production) (GPIO_136)
        { SOUTH_DFX_DFX_PORT11          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,

#if BMC_TEST_BOARD_CFG
    // FM_SW_MUX_SEL_1 (BMC test card only) (GPIO_137)
        { SOUTH_DFX_DFX_PORT12          , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
#else
    // NC (production) (GPIO_137)
        { SOUTH_DFX_DFX_PORT12          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
#endif

    // NC (GPIO_138)
        { SOUTH_DFX_DFX_PORT13          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_139)
        { SOUTH_DFX_DFX_PORT14          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // NC (GPIO_140)
        { SOUTH_DFX_DFX_PORT15          , {GpioPadModeNative1  , GpioHostOwnGpio, GpioDirDefault, GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // PU_BRD_ID_5 (GPIO_146)
        { SOUTH_GROUP0_CX_PRDY_N        , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // FM_BPK_PRSNT1_N (GPIO_147)
        { SOUTH_GROUP0_CX_PREQ_N        , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // PU_CTBTRIGINOUT (GPIO_148)
        { SOUTH_GROUP0_CTBTRIGINOUT     , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // PD_CTBRIGOUT (GPIO_149)
        { SOUTH_GROUP0_CTBTRIGOUT       , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // PU_BRD_ID_2 (GPIO_150)
        { SOUTH_GROUP0_DFX_SPARE2       , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // PU_BRD_ID_3 (GPIO_151)
        { SOUTH_GROUP0_DFX_SPARE3       , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
    // PU_BRD_ID_4 (GPIO_152)
        { SOUTH_GROUP0_DFX_SPARE4       , {GpioPadModeGpio     , GpioHostOwnGpio, GpioDirIn     , GpioOutDefault , GpioIntDefault, GpioResetDeep, GpioTermDefault, GpioLockDefault}} ,
};
#endif /* GPIOTABLEBIRDKEY_H_ */
