#undef MIN
#undef MAX
/*-----------------------------------------------------------------------------
-------------------------------------------------------------------------------

 Intel(R) Confidential
 Intel Goldmont Processor Power Management BIOS Reference Code
 Copyright (c) 2006-2015 Intel Corporation
 Filename:    CPU0CST.ASL
 Revision:    Refer to Readme
 Date:        Refer to Readme

--------------------------------------------------------------------------------
-------------------------------------------------------------------------------

 This Processor Power Management BIOS Source Code is furnished under license
 and may only be used or copied in accordance with the terms of the license.
 The information in this document is furnished for informational use only, is
 subject to change without notice, and should not be construed as a commitment
 by Intel Corporation. Intel Corporation assumes no responsibility or liability
 for any errors or inaccuracies that may appear in this document or any
 software that may be provided in association with this document.

 Except as permitted by such license, no part of this document may be
 reproduced, stored in a retrieval system, or transmitted in any form or by
 any means without the express written consent of Intel Corporation.

 WARNING: You are authorized and licensed to install and use this BIOS code
 ONLY on an IST PC. This utility may damage any system that does not
 meet these requirements.

    An IST PC is a computer which
    (1) Is capable of seamlessly and automatically transitioning among
    multiple performance states (potentially operating at different
    efficiency ratings) based upon power source changes, END user
    preference, processor performance demand, and thermal conditions; and
    (2) Includes an Intel Pentium II processors, Intel Pentium III
    processor, Mobile Intel Pentium III Processor-M, Mobile Intel Pentium 4
    Processor-M, Intel Pentium M Processor, or any other future Intel
    processors that incorporates the capability to transition between
    different performance states by altering some, or any combination of,
    the following processor attributes: core voltage, core frequency, bus
    frequency, number of processor cores available, or any other attribute
    that changes the efficiency (instructions/unit time-power) at which the
    processor operates.

-------------------------------------------------------------------------------
-------------------------------------------------------------------------------

NOTES:
    (1) <TODO> - IF the trap range and port definitions do not match those
    specified by this reference code, this file must be modified IAW the
    individual implmentation.

--------------------------------------------------------------------------------
------------------------------------------------------------------------------*/
/*++
  This file contains an 'Intel Peripheral Driver' and is
  licensed for Intel CPUs and chipsets under the terms of your  
  license agreement with Intel or your vendor.  This file may   
  be modified by the user, subject to additional terms of the   
  license agreement                                             
--*/                                                                      
DefinitionBlock (
  "CPU0CST.aml",
  "SSDT",
  2,
  "PmRef",
  "Cpu0Cst",
  0x3001
  )
{
External(\_PR.CPU0, DeviceObj)
External(PWRS)
External(CFGD)
External(PDC0)
Scope(\_PR.CPU0)
{
        Method (_CST, 0)
        {

                    Return( Package()
                    {
                        2,
                        Package()
                        {   // C1E, MWAIT
                            ResourceTemplate(){Register(FFixedHW, 1, 2, 0x01, 1)},
                            1,
                            1,
                            1000
                        },
                        Package()
                        {
                            // C6L, MWAIT Extension
                            ResourceTemplate(){Register(FFixedHW, 1, 2, 0x21, 1)},
                            2,
                            50,
                            10
                        },
                    })
        }
}
}
