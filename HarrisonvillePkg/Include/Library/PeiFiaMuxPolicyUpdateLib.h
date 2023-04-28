/** @file

@copyright
 Copyright (c) 2015 Intel Corporation. All rights reserved
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

#ifndef _PEI_FIA_MUX_POLICY_UPDATE_LIB_H_
#define _PEI_FIA_MUX_POLICY_UPDATE_LIB_H_

EFI_STATUS
EFIAPI
UpdatePeiFiaMuxPolicy(
  IN OUT  FIA_MUX_GLOBAL_POLICY_PPI         *FiaMuxGlobalPolicyPpi
  )
/*++

Routine Description:

  This function performs FIA MUX PEI Policy initialzation.

Arguments:

  FiaMuxGlobalPolicyPpi         The FIA MUX Policy PPI instance

Returns:

  EFI_SUCCESS             The PPI is installed and initialized.
  EFI ERRORS              The PPI is not successfully installed.
  EFI_OUT_OF_RESOURCES    Do not have enough resources to initialize the driver

--*/
;

/*++

Routine Description:

  This Functions overrides FIA MUX configure from setup if allowed

Arguments:

  FiaMuxGlobalPolicyPpi         The FIA MUX Policy PPI instance

Returns:

  EFI_SUCCESS             The PPI is installed and initialized.
  EFI ERRORS              The PPI is not successfully installed.

--*/
EFI_STATUS
EFIAPI
SetupOverrideFiaMuxPolicy (
  IN OUT FIA_MUX_GLOBAL_POLICY_PPI *FiaMuxGlobalPolicyPpi
  )
;
#endif
