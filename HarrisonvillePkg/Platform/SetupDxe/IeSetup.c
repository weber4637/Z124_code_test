/**
  This file contains an 'Intel Peripheral Driver' and is
  licensed for Intel CPUs and chipsets under the terms of your
  license agreement with Intel or your vendor.  This file may
  be modified by the user, subject to additional terms of the
  license agreement
**/
/**
@file

Copyright (c) 2015, Intel Corporation. All rights reserved.
This software and associated documentation (if any) is furnished
under a license and may only be used or copied in accordance
with the terms of the license. Except as permitted by such
license, no part of this software or documentation may be
reproduced, stored in a retrieval system, or transmitted in any
form or by any means without the express written consent of
Intel Corporation.

  Name:
    IeSetup.c

  Description:
    This file contains functions that update IE related strings in BIOS setup.

**/

#ifdef IE_SUPPORT

#include "SetupPlatform.h"
#include <IeHeciRegs.h>

VOID
InitIeSetupStrings(VOID)
{
  CHAR16               *pStrBuf;
  UINTN                StrSize;
  IEFS1                IeFs1;


  DEBUG((EFI_D_INFO, "[IE] InitIeSetupStrings called.\n"));

  StrSize = 0x200;
  pStrBuf = AllocateZeroPool(StrSize);

  ASSERT(pStrBuf != NULL);

  if (pStrBuf) {
    IeFs1.UInt32 = HeciPciReadIefs1();


    DEBUG((EFI_D_INFO, "[IE] IEFS1: 0x%08X\n", IeFs1));

    UnicodeSPrint(pStrBuf, StrSize, L"0x%08X", IeFs1.UInt32);
    HiiSetString(mAdvancedHiiHandle, STRING_TOKEN(STR_IE_FWSTS1_VALUE), pStrBuf, NULL);

  }

} // InitIeSetupStrings()

#endif //IE_SUPPORT

