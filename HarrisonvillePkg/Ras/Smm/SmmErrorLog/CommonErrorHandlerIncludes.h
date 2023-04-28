//
// This file contains an 'Intel Peripheral Driver' and is      
// licensed for Intel CPUs and chipsets under the terms of your
// license agreement with Intel or your vendor.  This file may 
// be modified by the user, subject to additional terms of the 
// license agreement                                           
//
/*++

Copyright (c) 1996 - 2015, Intel Corporation.

This source code and any documentation accompanying it ("Material") is furnished
under license and may only be used or copied in accordance with the terms of that
license.  No license, express or implied, by estoppel or otherwise, to any
intellectual property rights is granted to you by disclosure or delivery of these
Materials.  The Materials are subject to change without notice and should not be
construed as a commitment by Intel Corporation to market, license, sell or support
any product or technology.  Unless otherwise provided for in the license under which
this Material is provided, the Material is provided AS IS, with no warranties of
any kind, express or implied, including without limitation the implied warranties
of fitness, merchantability, or non-infringement.  Except as expressly permitted by
the license for the Material, neither Intel Corporation nor its suppliers assumes
any responsibility for any errors or inaccuracies that may appear herein.  Except
as expressly permitted by the license for the Material, no part of the Material
may be reproduced, stored in a retrieval system, transmitted in any form, or
distributed by any means without the express written consent of Intel Corporation.


Module Name:  

CommonErrorHandlerIncludes.h

Abstract:

  This file defines common equates.

--*/

#ifndef _COMMON_ERRORHANDLER_INCLUDES_H_
#define _COMMON_ERRORHANDLER_INCLUDES_H_

#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/IoLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/SmmServicesTableLib.h>
#include <Library\PciExpressLib.h>
#include <Library/PchPcrLib.h>
#include <Library/PciLib.h>
#include <Library/HobLib.h>

#include <Protocol/SmmBase2.h>
#include <Protocol/WheaPlatformSupport.h>
//#include <Protocol/SmmRtProtocol.h>   Anulated in DNV core sync BP 1.333, jambrizm
#include <Protocol/SmmSxDispatch2.h>
#include <Protocol/SmmSwDispatch2.h>
#include <Protocol/SmmStatusCode.h>
#include <Protocol/GlobalNvsArea.h>
#include <Protocol/SmmReadyToLock.h>
#include <IncludePrivate/PchPolicyHob.h>
#include <Include/SimicsDebug.h>

#include "SmmErrorHandler.h"
#include "PcieErrorHandler.h"
#include "SouthComplexErrorHandler.h"
#include "NorthComplexErrorHandler.h"
#include "MemoryErrorHandler.h"
#include "WheaPlatformDefs.h"
#include "RasPolicy.h"

// Denverton Aptiov override Start - EIP#249150
#include <Ras\RuntimeErrorlog\RtErrorlog.h>
#include "Token.h"
// Denverton Aptiov override End - EIP#249150

//
// Bit map macro
//
#ifndef BIT0

#define BIT63   0x8000000000000000
#define BIT62   0x4000000000000000
#define BIT61   0x2000000000000000
#define BIT60   0x1000000000000000
#define BIT59   0x0800000000000000
#define BIT58   0x0400000000000000
#define BIT57   0x0200000000000000
#define BIT56   0x0100000000000000
#define BIT55   0x0080000000000000
#define BIT54   0x0040000000000000
#define BIT53   0x0020000000000000
#define BIT52   0x0010000000000000
#define BIT51   0x0008000000000000
#define BIT50   0x0004000000000000
#define BIT49   0x0002000000000000
#define BIT48   0x0001000000000000
#define BIT47   0x0000800000000000
#define BIT46   0x0000400000000000
#define BIT45   0x0000200000000000
#define BIT44   0x0000100000000000
#define BIT43   0x0000080000000000
#define BIT42   0x0000040000000000
#define BIT41   0x0000020000000000
#define BIT40   0x0000010000000000
#define BIT39   0x0000008000000000
#define BIT38   0x0000004000000000
#define BIT37   0x0000002000000000
#define BIT36   0x0000001000000000
#define BIT35   0x0000000800000000
#define BIT34   0x0000000400000000
#define BIT33   0x0000000200000000
#define BIT32   0x0000000100000000

#define BIT31   0x80000000
#define BIT30   0x40000000
#define BIT29   0x20000000
#define BIT28   0x10000000
#define BIT27   0x08000000
#define BIT26   0x04000000
#define BIT25   0x02000000
#define BIT24   0x01000000
#define BIT23   0x00800000
#define BIT22   0x00400000
#define BIT21   0x00200000
#define BIT20   0x00100000
#define BIT19   0x00080000
#define BIT18   0x00040000
#define BIT17   0x00020000
#define BIT16   0x00010000
#define BIT15   0x00008000
#define BIT14   0x00004000
#define BIT13   0x00002000
#define BIT12   0x00001000
#define BIT11   0x00000800
#define BIT10   0x00000400
#define BIT9    0x00000200
#define BIT8    0x00000100
#define BIT7    0x00000080
#define BIT6    0x00000040
#define BIT5    0x00000020
#define BIT4    0x00000010
#define BIT3    0x00000008
#define BIT2    0x00000004
#define BIT1    0x00000002
#define BIT0    0x00000001
#endif

#define DISABLED         0x00
#define ENABLED          0x01
#define AUTO             0x02
#endif


