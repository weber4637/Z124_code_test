/** @file
  Register names for PCH DCI device

  Conventions:

  - Prefixes:
    Definitions beginning with "R_" are registers
    Definitions beginning with "B_" are bits within registers
    Definitions beginning with "V_" are meaningful values within the bits
    Definitions beginning with "S_" are register sizes
    Definitions beginning with "N_" are the bit position
  - In general, PCH registers are denoted by "_PCH_" in register names
  - Registers / bits that are different between PCH generations are denoted by
    "_PCH_[generation_name]_" in register/bit names.
  - Registers / bits that are specific to PCH-H denoted by "_H_" in register/bit names.
    Registers / bits that are specific to PCH-LP denoted by "_LP_" in register/bit names.
    e.g., "_PCH_H_", "_PCH_LP_"
    Registers / bits names without _H_ or _LP_ apply for both H and LP.
  - Registers / bits that are different between SKUs are denoted by "_[SKU_name]"
    at the end of the register/bit names
  - Registers / bits of new devices introduced in a PCH generation will be just named
    as "_PCH_" without [generation_name] inserted.

@copyright
 Copyright (c) 2014 Intel Corporation. All rights reserved
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
#ifndef _PCH_REGS_DCI_H_
#define _PCH_REGS_DCI_H_

//
// DCI PCR Registers
//
#define R_PCH_PCR_DCI_ECTRL                       0x04            ///< DCI Control Register
#define B_PCH_PCR_DCI_ECTRL_HDCIEN                BIT4            ///< Host DCI enable
#define R_PCH_PCR_DCI_ECKPWRCTL                   0x08            ///< DCI Power Control
#define R_PCH_PCR_DCI_PCE                         0x30            ///< DCI Power Control Enable Register
#define B_PCH_PCR_DCI_PCE_HAE                     BIT5            ///< Hardware Autonomous Enable
#define B_PCH_PCR_DCI_PCE_D3HE                    BIT2            ///< D3-Hot Enable
#define B_PCH_PCR_DCI_PCE_I3E                     BIT1            ///< I3 Enable
#define B_PCH_PCR_DCI_PCE_PMCRE                   BIT0            ///< PMC Request Enable

#endif
