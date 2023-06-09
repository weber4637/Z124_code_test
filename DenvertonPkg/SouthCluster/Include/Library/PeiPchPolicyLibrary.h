/** @file
  Prototype of the PeiPchPolicy library.

@copyright
  Copyright (c) 2014 Intel Corporation. All rights reserved
  This software and associated documentation (if any) is furnished
  under a license and may only be used or copied in accordance
  with the terms of the license. Except as permitted by such
  license, no part of this software or documentation may be
  reproduced, stored in a retrieval system, or transmitted in any
  form or by any means without the express written consent of
  Intel Corporation.
  This file contains an 'Intel Peripheral Driver' and uniquely
  identified as "Intel Reference Module" and is
  licensed for Intel CPUs and chipsets under the terms of your
  license agreement with Intel or your vendor.  This file may
  be modified by the user, subject to additional terms of the
  license agreement
**/
#ifndef _PEI_PCH_POLICY_LIBRARY_H_
#define _PEI_PCH_POLICY_LIBRARY_H_

#include <Ppi/PchPolicy.h>

/**
  PchCreatePolicyDefaults creates the default setting of PCH Policy.
  It allocates and zero out buffer, and fills in the Intel default settings.

  @param[out] PchPolicyPpi              The pointer to get PCH Policy PPI instance

  @retval EFI_SUCCESS                   The policy default is initialized.
  @retval EFI_OUT_OF_RESOURCES          Insufficient resources to create buffer
**/
EFI_STATUS
EFIAPI
PchCreatePolicyDefaults (
  OUT  PCH_POLICY_PPI          **PchPolicyPpi
  );

/**
  PchInstallPolicyPpi installs PchPolicyPpi.
  While installed, RC assumes the Policy is ready and finalized. So please update and override
  any setting before calling this function.

  @param[in] PchPolicyPpi               The pointer to PCH Policy PPI instance

  @retval EFI_SUCCESS                   The policy is installed.
  @retval EFI_OUT_OF_RESOURCES          Insufficient resources to create buffer
**/
EFI_STATUS
EFIAPI
PchInstallPolicyPpi (
  IN  PCH_POLICY_PPI           *PchPolicyPpi
  );

#endif // _PEI_PCH_POLICY_LIBRARY_H_
