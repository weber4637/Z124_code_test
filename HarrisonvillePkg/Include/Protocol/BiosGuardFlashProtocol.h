/** @file
  Defines base cryptographic library APIs.
  The Base Cryptographic Library provides implementations of basic cryptography
  primitives (Hash Serials, HMAC, RSA, Diffie-Hellman, etc) for UEFI security
  functionality enabling.

@copyright
 Copyright (c) 2009 - 2014 Intel Corporation. All rights reserved
 This software and associated documentation (if any) is furnished
 under a license and may only be used or copied in accordance
 with the terms of the license. Except as permitted by the
 license, no part of this software or documentation may be
 reproduced, stored in a retrieval system, or transmitted in any
 form or by any means without the express written consent of
 Intel Corporation.
 This file contains a 'Sample Driver' and is licensed as such
 under the terms of your license agreement with Intel or your
 vendor. This file may be modified by the user, subject to
 the additional terms of the license agreement.

@par Specification Reference:
**/


#ifndef __BIOSGUARD_FLASH_PROTOCOL_H__
#define __BIOSGUARD_FLASH_PROTOCOL_H__

//
// GUID to locate BIOS Guard SMM Protocol
//
#define SMM_BIOSGUARD_PROTOCOL_GUID \
  { 0x17565311, 0x4b71, 0x4340, { 0x88, 0xaa, 0xdc, 0x9f, 0x44, 0x22, 0xe5, 0x3a } }

//
// Forward reference for ANSI C compatibility
//
typedef struct _BIOSGUARD_PROTOCOL     BIOSGUARD_PROTOCOL;

/**
  This service will write BIOSGUARD_DIRECTORY MSR and invoke the BIOS Guard Module by writing to PLAT_FRMW_PROT_TRIGGER MSR for writing/erasing to flash.
  BIOS should invoke BIOSGUARD_PROTOCOL.Write() or BIOSGUARD_PROTOCOL.Erase() function prior to calling BIOSGUARD_PROTOCOL.Execute() for flash writes/erases (except for BiosUpdate).
  Write()/Erase() function will render BIOS Guard script during execution.
  Execute() function will implement the following steps:
  1. Update BIOS Guard directory with address of BGUP.
  2. All the AP's except the master thread are put to sleep.
  3. BIOS Guard module is invoked from BSP to execute desired operation.
  If BiosUpdate flag is set to true, BGUP (BGUP Header + BIOS Guard Script + Update data) is part of data that is passed to SMI Handler. SMI Handler invokes BIOS Guard module to process the update.
  This function would be called by runtime driver, please do not use any MMIO macro here.

  @param[in] This                Pointer to the BIOSGUARD_PROTOCOL instance.
  @param[in] BiosUpdate          Flag to indicate flash update is requested by the Tool

  @retval EFI_SUCCESS            Successfully completed flash operation.
  @retval EFI_INVALID_PARAMETER  The parameters specified are not valid.
  @retval EFI_UNSUPPORTED        The CPU or SPI memory is not supported.
  @retval EFI_DEVICE_ERROR       Device error, command aborts abnormally.
**/
typedef
EFI_STATUS
(EFIAPI *BIOSGUARD_EXECUTE) (
  IN     BIOSGUARD_PROTOCOL  *This,
  IN     BOOLEAN             BiosUpdate
  );

/**
  This service fills BIOS Guard script buffer for flash writes.
  BIOS should invoke this function prior to calling BIOSGUARD_PROTOCOL.Execute() with all the relevant data required for flash write.
  This function will not invoke BIOS Guard Module, only create script required for writing to flash.
  This function would be called by runtime driver, please do not use any MMIO macro here.

  @param[in] This           Pointer to the BIOSGUARD_PROTOCOL instance.
  @param[in] Address        This value specifies the offset from the start of the SPI Flash component where BIOS Image is located.
  @param[in] DataByteCount  Number of bytes in the data portion.
  @param[in] Buffer         Pointer to caller-allocated buffer containing the dada sent.
**/
typedef
VOID
(EFIAPI *BIOSGUARD_WRITE) (
  IN     BIOSGUARD_PROTOCOL  *This,
  IN     UINTN               Address,
  IN     UINT32              DataByteCount,
  IN OUT UINT8               *Buffer
  );

/**
  This service fills BIOS Guard script buffer for erasing blocks in flash.
  BIOS should invoke this function prior to calling BIOSGUARD_PROTOCOL.Execute() with all the relevant data required for flash erase.
  This function will not invoke BIOS Guard module, only create script required for erasing each block in the flash.
  This function would be called by runtime driver, please do not use any MMIO macro here.

  @param[in] This     Pointer to the BIOSGUARD_PROTOCOL instance.
  @param[in] Address  This value specifies the offset from the start of the SPI Flash component where BIOS Image is located.
**/
typedef
VOID
(EFIAPI *BIOSGUARD_ERASE) (
  IN     BIOSGUARD_PROTOCOL  *This,
  IN     UINTN               Address
  );

#ifndef BIOSGUARD_DIRECTORY_MAX_SIZE
#define BIOSGUARD_DIRECTORY_MAX_SIZE               6
#endif

typedef struct {
  UINT64                Msr_115_BiosGuardDirAddr; // MSR_PLAT_FRMW_PROT_TRIG_PARAM;  
  EFI_PHYSICAL_ADDRESS  BiosGuardDir[BIOSGUARD_DIRECTORY_MAX_SIZE]; 
  UINT64                BgpdtHash[4];  
} SV_BIOSGUARD_INFO;

/**
  This protocol provides all the services required for flash writes/erases via BIOS Guard
  BIOS Guard Module can only be launched from SMM, this means that all flash writes & erases
  that BIOS needs to do must flow thru SMI Handler and so dependency on SMM_BASE_PROTOCOL
  for installing BIOS Guard Protocol. Prior to BIOS Guard SMM Protocol being installed there should
  be no writes/erases to flash.
**/
struct _BIOSGUARD_PROTOCOL {
  BIOSGUARD_WRITE    Write;    ///< Invoked to fill up BIOS Guard script buffer for flash writes
  BIOSGUARD_ERASE    Erase;    ///< Invoked to fill up BIOS Guard script buffer for flash erases
  BIOSGUARD_EXECUTE  Execute;  ///< Will trigger invocation of BIOS Guard module
};

//
// Extern the GUID for protocol users.
//
extern EFI_GUID                   gSmmBiosGuardProtocolGuid;

#endif
