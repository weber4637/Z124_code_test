/** @file
  Header file for GpioConfig structure used by GPIO library.

@copyright
 Copyright (c) 2014 - 2015 Intel Corporation. All rights reserved
 This software and associated documentation (if any) is furnished
 under a license and may only be used or copied in accordance
 with the terms of the license. Except as permitted by the
 license, no part of this software or documentation may be
 reproduced, stored in a retrieval system, or transmitted in any
 form or by any means without the express written consent of
 Intel Corporation.
 This file contains an 'Intel Peripheral Driver' and is uniquely
 identified as "Intel Reference Module" and is licensed for Intel
 CPUs and chipsets under the terms of your license agreement with
 Intel or your vendor. This file may be modified by the user, subject
 to additional terms of the license agreement.

@par Specification Reference:
**/
#ifndef _GPIO_CONFIG_H_
#define _GPIO_CONFIG_H_

///
/// For any GpioPad usage in code use GPIO_PAD type
///
typedef UINT32 GPIO_PAD;


///
/// For any GpioGroup usage in code use GPIO_GROUP type
///
typedef UINT32 GPIO_GROUP;

/**
  GPIO configuration structure used for pin programming.
  Structure contains fields that can be used to configure pad.
**/
typedef struct {
  /**
  Pad Mode
  Pad can be set as GPIO or one of its native functions.
  When in native mode setting Direction (except Inversion), OutputState,
  InterruptConfig and Host Software Pad Ownership are unnecessary.
  Refer to definition of GPIO_PAD_MODE.
  Refer to EDS for each native mode according to the pad.
  **/
  UINT32 PadMode            : 4;
  /**
  Host Software Pad Ownership
  Set pad to ACPI mode or GPIO Driver Mode.
  Refer to definition of GPIO_HOSTSW_OWN.
  **/
  UINT32 HostSoftPadOwn     : 2;
  /**
  GPIO Direction
  Can choose between In, In with inversion Out, both In and Out, both In with inversion and out or disabling both.
  Refer to definition of GPIO_DIRECTION for supported settings.
  **/
  UINT32 Direction           : 5;
  /**
  Output State
  Set Pad output value.
  Refer to definition of GPIO_OUTPUT_STATE for supported settings.
  This setting takes place when output is enabled.
  **/
  UINT32 OutputState         : 2;
  /**
  GPIO Interrupt Configuration
  Set Pad to cause one of interrupts (IOxAPIC/SCI/SMI/NMI). This setting is applicable only if GPIO is in input mode.
  If GPIO is set to cause an SCI then also Gpe is enabled for this pad.
  Refer to definition of GPIO_INT_CONFIG for supported settings.
  **/
  UINT32 InterruptConfig     : 8;
  /**
  GPIO Power Configuration.
  This setting controls Pad Reset Configuration.
  Refer to definition of GPIO_RESET_CONFIG for supported settings.
  **/
  UINT32 PowerConfig        : 4;

  /**
  GPIO Electrical Configuration
  This setting controls pads termination and voltage tolerance.
  Refer to definition of GPIO_ELECTRICAL_CONFIG for supported settings.
  **/
  UINT32 ElectricalConfig   : 7;

  /**
  GPIO Lock Configuration
  This setting controls pads lock.
  Refer to definition of GPIO_LOCK_CONFIG for supported settings.
  **/
  UINT32 LockConfig         : 3;
  /**
  Additional GPIO configuration
  Refer to definition of GPIO_OTHER_CONFIG for supported settings.
  **/
  UINT32 OtherSettings     :  2;
  UINT32 RsvdBits          : 27;    ///< Reserved bits for future extension
} GPIO_CONFIG;


typedef enum {
  GpioHardwareDefault = 0x0
} GPIO_HARDWARE_DEFAULT;

///
/// GPIO Pad Mode
///

typedef enum {
  GpioPadModeGpio     = 0x1,
  GpioPadModeNative1  = 0x3,
  GpioPadModeNative2  = 0x5,
  GpioPadModeNative3  = 0x7,
  GpioPadModeNative4  = 0x9
} GPIO_PAD_MODE;


///
/// Host Software Pad Ownership modes
///
typedef enum {
  GpioHostOwnDefault = 0x0,   ///< Leave ownership value unmodified
  GpioHostOwnAcpi    = 0x1,   ///< Set HOST ownership to ACPI
  GpioHostOwnGpio    = 0x3    ///< Set HOST ownership to GPIO
} GPIO_HOSTSW_OWN;

///
/// GPIO Direction
///
typedef enum {
  GpioDirDefault    = 0x0,                ///< Leave pad direction setting unmodified
  GpioDirInOut      = (0x1 | (0x1 << 3)), ///< Set pad for both output and input
  GpioDirInInvOut   = (0x1 | (0x3 << 3)), ///< Set pad for both output and input with inversion
  GpioDirIn         = (0x3 | (0x1 << 3)), ///< Set pad for input only
  GpioDirInInv      = (0x3 | (0x3 << 3)), ///< Set pad for input with inversion
  GpioDirOut        = 0x5,                ///< Set pad for output only
  GpioDirNone       = 0x7                 ///< Disable both output and input
} GPIO_DIRECTION;

///
/// GPIO Output State
///
typedef enum {
  GpioOutDefault = 0x0,   ///< Leave output value unmodified
  GpioOutLow     = 0x1,   ///< Set output to low
  GpioOutHigh    = 0x3    ///< Set output to high
} GPIO_OUTPUT_STATE;

///
/// GPIO interrupt configuration
/// This setting is applicable only if GPIO is in input mode.
/// GPIO_INT_CONFIG allows to choose which interrupt is generated (IOxAPIC/SCI/SMI/NMI)
/// and how it is triggered (edge or level).
/// Field from GpioIntNmi to GpioIntApic can be OR'ed with GpioIntLevel to GpioIntBothEdgecan
/// to describe an interrupt e.g. GpioIntApic | GpioIntLevel
/// If GPIO is set to cause an SCI then also Gpe is enabled for this pad.
/// Not all GPIO are capable of generating an SMI or NMI interrupt
///

typedef enum {
  GpioIntDefault   = 0x0,         ///< Leave value of interrupt routing unmodified
  GpioIntDis       = 0x1,         ///< Disable IOxAPIC/SCI/SMI/NMI interrupt generation
  GpioIntNmi       = 0x3,         ///< Enable NMI interrupt only
  GpioIntSmi       = 0x5,         ///< Enable SMI interrupt only
  GpioIntSci       = 0x9,         ///< Enable SCI interrupt only
  GpioIntApic      = 0x11,        ///< Enable IOxAPIC interrupt only
  GpioIntLevel     = (0x1 << 5),  ///< Set interrupt as level triggered
  GpioIntEdge      = (0x3 << 5),  ///< Set interrupt as edge triggered (type of edge depends on input inversion)
  GpioIntLvlEdgDis = (0x5 << 5),  ///< Disable interrupt trigger
  GpioIntBothEdge  = (0x7 << 5)   ///< Set interrupt as both edge triggered
} GPIO_INT_CONFIG;

#define GPIO_INT_CONFIG_INT_SOURCE_MASK  0x1F   ///< Mask for GPIO_INT_CONFIG for interrupt source
#define GPIO_INT_CONFIG_INT_TYPE_MASK    0xE0   ///< Mask for GPIO_INT_CONFIG for interrupt type

///
/// GPIO Power Configuration
/// GPIO_RESET_CONFIG allows to set GPIO Reset (used to reset the specified
/// Pad Register fields).
///
typedef enum {
  GpioResetDefault   = 0x0,           ///< Leave value of pad reset unmodified
  GpioResetPwrGood   = 0x1,           ///< Powergood reset
  GpioResetDeep      = 0x3,           ///< Deep GPIO Reset
  GpioResetNormal    = 0x5,           ///< GPIO Reset
  GpioResetResume    = 0x7            ///< Resume Reset (applicable only for GPD group)
} GPIO_RESET_CONFIG;

///
/// GPIO Electrical Configuration
/// Set GPIO termination and Pad Tolerance (applicable only for some pads)
/// Field from GpioTermDefault to GpioTermNative can be OR'ed with GpioTolerance1v8.
///
typedef enum {
  GpioTermDefault    = 0x0,          ///< Leave termination setting unmodified
  GpioTermNone       = 0x1,          ///< none
  GpioTermWpd5K      = 0x5,          ///< 5kOhm weak pull-down
  GpioTermWpd20K     = 0x9,          ///< 20kOhm weak pull-down
  GpioTermWpu1K      = 0x13,         ///< 1kOhm weak pull-up
  GpioTermWpu2K      = 0x17,         ///< 2kOhm weak pull-up
  GpioTermWpu5K      = 0x15,         ///< 5kOhm weak pull-up
  GpioTermWpu20K     = 0x19,         ///< 20kOhm weak pull-up
  GpioTermWpu1K2K    = 0x1B,         ///< 1kOhm & 2kOhm weak pull-up
  GpioTermNative     = 0x1F,         ///< Native function controls pads termination
  GpioNoTolerance1v8 = (0x1 << 5),   ///< Disable 1.8V pad tolerance
  GpioTolerance1v8   = (0x3 << 5)    ///< Enable 1.8V pad tolerance
} GPIO_ELECTRICAL_CONFIG;

#define GPIO_ELECTRICAL_CONFIG_TERMINATION_MASK      0x1F   ///< Mask for GPIO_ELECTRICAL_CONFIG for termination value
#define GPIO_ELECTRICAL_CONFIG_1V8_TOLERANCE_MASK    0x60   ///< Mask for GPIO_ELECTRICAL_CONFIG for 1v8 tolerance setting

///
/// GPIO LockConfiguration
/// Set GPIO configuration lock and output state lock
/// GpioLockPadConfig and GpioLockOutputState can be OR'ed
///
typedef enum {
  GpioLockDefault     = 0x0,          ///< Leave lock setting unmodified
  GpioPadConfigLock   = 0x3,          ///< Lock Pad Configuration
  GpioOutputStateLock = 0x5           ///< Lock GPIO pad output value
} GPIO_LOCK_CONFIG;

///
/// Other GPIO Configuration
/// GPIO_OTHER_CONFIG is used for less often settings and for future extensions
/// Supported settings:
///  - RX raw override to '1' - allows to override input value to '1'
///     This setting is applicable only if in input mode (both in GPIO and native usage).
///     The override takes place at the internal pad state directly from buffer and before the RXINV.
///
typedef enum {
  GpioRxRaw1Default = 0x0,      ///< Use default input override value
  GpioRxRaw1Dis     = 0x1,      ///< Don't override input
  GpioRxRaw1En      = 0x3       ///< Override input to '1'
} GPIO_OTHER_CONFIG;

#endif //_GPIO_CONFIG_H_
