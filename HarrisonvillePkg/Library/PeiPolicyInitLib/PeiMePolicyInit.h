/** @file
  Header file for the PeiMePolicyInit

@copyright
 Copyright (c) 2012 - 2014 Intel Corporation. All rights reserved
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
#ifndef _PEI_ME_POLICY_INIT_H_
#define _PEI_ME_POLICY_INIT_H_

#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/PeiServicesLib.h>
#include <Library/PeiMePolicyLib.h>

#include <Ppi/MePolicyPei.h>
#include <PeiMePolicyUpdateLib.h>
#include <FirwmareConfigurations.h>
//
// Function implementations
//
/**
  This PEIM performs ME PEI Policy initialzation.

  @param[in]  FirmwareConfiguration  It uses to skip specific policy init that depends
                                     on the 'FirmwareConfiguration' varaible.

  @retval     EFI_SUCCESS            The PPI is installed and initialized.
  @retval     EFI ERRORS             The PPI is not successfully installed.
  @retval     EFI_OUT_OF_RESOURCES   Do not have enough resources to initialize the driver
**/
EFI_STATUS
EFIAPI
PeiMePolicyInit (
  IN UINT8                     FirmwareConfiguration
  );

#endif // _PEI_ME_POLICY_INIT_H_
