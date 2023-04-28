/** @file
  Interface definition details between MRC and platform drivers during PEI phase.

@copyright
  Copyright (c) 2010 - 2015 Intel Corporation. All rights reserved
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
#ifndef _PLX_SETUP_POLICY_PPI_H_
#define _PLX_SETUP_POLICY_PPI_H_

#include <Uefi.h>

#define PLX_SETUP_POLICY_PPI_REVISION   1

//
// Extern the GUID for protocol users.
//
extern EFI_GUID gPlxSetupPpiGuid;


typedef struct {
    UINT8   NtbBarWidth;
    UINT64  NtbBarSize;
} PLX_SETUP_POLICY_PPI;

#endif //_PLX_SETUP_POLICY_PPI_H_




