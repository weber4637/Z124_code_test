/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2015 - 2018 Intel Corporation. <BR>

  The source code contained or described herein and all documents related to the
  source code ("Material") are owned by Intel Corporation or its suppliers or
  licensors. Title to the Material remains with Intel Corporation or its suppliers
  and licensors. The Material may contain trade secrets and proprietary    and
  confidential information of Intel Corporation and its suppliers and licensors,
  and is protected by worldwide copyright and trade secret laws and treaty
  provisions. No part of the Material may be used, copied, reproduced, modified,
  published, uploaded, posted, transmitted, distributed, or disclosed in any way
  without Intel's prior express written permission.

  No license under any patent, copyright, trade secret or other intellectual
  property right is granted to or conferred upon you by disclosure or delivery
  of the Materials, either expressly, by implication, inducement, estoppel or
  otherwise. Any license under such intellectual property rights must be
  express and approved by Intel in writing.

  Unless otherwise agreed by Intel in writing, you may not remove or alter
  this notice or any other notice embedded in Materials by Intel or
  Intel's suppliers or licensors in any way.
**/

#ifndef _SPS_FSP_HMRFPO_PROTOCOL_H_
#define _SPS_FSP_HMRFPO_PROTOCOL_H_

extern EFI_GUID gSpsFspHmrfpoProtocolGuid;

typedef struct _SPS_FSP_HMRFPO_PROTOCOL_ _SPS_FSP_HMRFPO_PROTOCOL;

typedef EFI_STATUS (EFIAPI *HMRFPO_FSP_LOCK_FUNC)(VOID);

typedef struct _SPS_FSP_HMRFPO_ENABLE_DATA_ {

  UINT32    FactoryBase;    // OUT: Pointer to enabled region
  UINT32    FactoryLimit;   // OUT: Enabled region size

} SPS_FSP_HMRFPO_ENABLE_DATA;


typedef EFI_STATUS (EFIAPI *HMRFPO_FSP_ENABLE_FUNC)(SPS_FSP_HMRFPO_ENABLE_DATA *);

typedef EFI_STATUS (EFIAPI *HMRFPO_FSP_MERESET_FUNC)(VOID);

typedef struct {
  UINT16 Minor;
  UINT16 Major;
  UINT16 Build;
  UINT16 Patch;
} ME_FW_VERSION;

typedef struct _SPS_FSP_HMRFPO_PROTOCOL_ {

  ME_FW_VERSION   ActiveFwVersion;     // Active operational firmware
  ME_FW_VERSION   RecoveryFwVersion;   // Recovery firmware
  ME_FW_VERSION   BackupFwVersion;     // Backup operational firmware (optional)

  HMRFPO_FSP_LOCK_FUNC     Lock;
  HMRFPO_FSP_ENABLE_FUNC   Enable;
  HMRFPO_FSP_MERESET_FUNC  MeReset;

} SPS_FSP_HMRFPO_PROTOCOL;

#endif // _SPS_FSP_HMRFPO_PROTOCOL_H_

