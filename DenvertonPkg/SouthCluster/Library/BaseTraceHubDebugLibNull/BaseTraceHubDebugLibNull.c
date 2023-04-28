/** @file
  Null instance of TraceHub supporting function

@copyright
 Copyright (c) 2014-2016 Intel Corporation. All rights reserved
 This software and associated documentation (if any) is furnished
 under a license and may only be used or copied in accordance
 with the terms of the license. Except as permitted by the
 license, no part of this software or documentation may be
 reproduced, stored in a retrieval system, or transmitted in any
 form or by any means without the express written consent of
 Intel Corporation.
 This file contains a 'Framework Driver' and is licensed as such
 under the terms of your license agreement with Intel or your
 vendor. This file may be modified by the user, subject to
 the additional terms of the license agreement.

@par Specification Reference:
**/

#include <Uefi/UefiBaseType.h>

RETURN_STATUS
EFIAPI
TraceHubDebugWrite (
  IN UINTN    ErrorLevel,
  IN UINT8    *Buffer,
  IN UINTN    NumberOfBytes
  )
{
  return RETURN_UNSUPPORTED;
}
