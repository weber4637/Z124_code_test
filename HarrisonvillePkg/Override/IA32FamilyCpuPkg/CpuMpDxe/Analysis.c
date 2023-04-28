/*++
  This file contains an 'Intel Peripheral Driver' and is        
  licensed for Intel CPUs and chipsets under the terms of your  
  license agreement with Intel or your vendor.  This file may   
  be modified by the user, subject to additional terms of the   
  license agreement                                             
--*/
/** @file
  Code for Analysis phase.

  Copyright (c) 2006 - 2016, Intel Corporation. All rights reserved.<BR>
  This software and associated documentation (if any) is furnished
  under a license and may only be used or copied in accordance
  with the terms of the license. Except as permitted by such
  license, no part of this software or documentation may be
  reproduced, stored in a retrieval system, or transmitted in any
  form or by any means without the express written consent of
  Intel Corporation.

  Module Name:  Analysis.c

**/

#include "Cpu.h"
#include "Feature.h"
#include "ProgramBeforeReset.h"

// Denverton AptioV Override EIP# 408897: Implement PPIN support on Denverton platform - Start

CHAR16 mProcPpinVarName[] = L"ProcPpin";
#define PROC_PPIN_VAR_GUID { 0xed3d6bca, 0x59d, 0x4f57, {0xa0, 0x79, 0x39, 0x6e, 0x7b, 0xb2, 0xd8, 0x6 }}
EFI_GUID mProcPpinVariableGuid = PROC_PPIN_VAR_GUID;

#define     MSR_PPIN_CTL 0x4E
#define     MSR_PPIN     0x4F

VOID
PpinInit (
    BOOLEAN PpinControl        
)
{

    EFI_STATUS    Status;
    UINT64        msrReg;
    UINT8         PpinEnable = 0;
    UINT64        ProcPpin = 0;

//    procPpin.hi = 0x0;
//    procPpin.lo = 0x0;

      //
      // To enable PPIN, Bit1 of PPIN_CTRL_MSR needs to be set to 1
      //
      if(PpinControl) {
        PpinEnable = 0x02;  // Enabled and unlocked
      }
      else {
        PpinEnable = 0x00;  // Disable and unlocked
      }
    
          //
          // if CPU supports PPIN
          //
          msrReg = AsmReadMsr64(MSR_PLATFORM_INFO);
          if((msrReg & BIT23) == 0)  return; // CPU is not PPIN capable
    
          //
          // Check if PPIN_CTRL MSR is locked
          //
          msrReg = AsmReadMsr64(MSR_PPIN_CTL);
          if (msrReg & BIT0)  return;  // PPIN_CTRL MSR is locked
    
          //
          // Program PPIN_CTRL MSR
          //
          msrReg = (msrReg & 0xFFFFFFFC) | PpinEnable;
          AsmMsrAndThenOr64(MSR_PPIN_CTL, 0xFFFFFFFFFFFFFFFC, PpinEnable);
          
         //
         // Get PPIN
         //
          if (PpinEnable == 0)  return;       // PPIN not Enabled. Read of PPIN MSR results in a #GP.
          ProcPpin = AsmReadMsr64(MSR_PPIN);  // Read PPIN Value from MSR 04Fh  
          
          //
          // Save PPIN into NVRAM
          //
          
          Status = gRT->SetVariable(mProcPpinVarName,
                                      &mProcPpinVariableGuid,
                                      EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS,
                                      (UINTN)sizeof(UINT64),
                                      &ProcPpin);

}
// Denverton AptioV Override EIP# 408897: Implement PPIN support on Denverton platform - End

/**
  Configures Processor Feature List for all processors.

  This function configures Processor Feature List for all processors.

**/
VOID
ConfigProcessorFeatureList (
  VOID
  )
{
  //
  // Configure Feature List for Thermal Management
  //
  if (FeaturePcdGet (PcdCpuThermalManagementFlag)) {
    ThermalManagementConfigFeatureList ();
  }
  //
  // Configure Feature List for Max CPUID Value Limit
  //
  if (FeaturePcdGet (PcdCpuMaxCpuIDValueLimitFlag)) {
    MaxCpuidLimitConfigFeatureList ();
  }
  //
  // Configure Feature List for MONITOR/MWAIT instructions
  //
  if (FeaturePcdGet (PcdCpuMonitorMwaitFlag)) {
    MonitorMwaitConfigFeatureList ();
  }
  //
  // Configure Feature List for C1E
  //
  if (FeaturePcdGet (PcdCpuEnhancedCStateFlag)) {
    C1eConfigFeatureList ();
  }
  //
  // Configure Feature List for Machine Check
  //
  if (FeaturePcdGet (PcdCpuMachineCheckFlag)) {
    MachineCheckConfigFeatureList ();
  }
  //
  // Configure Feature List for Enhanced Intel Speedstep Technology
  //
  if (FeaturePcdGet (PcdCpuEistFlag)) {
    EistConfigFeatureList ();
  }
  //
  // Configure Feature List for execute disable bit
  //
  if (FeaturePcdGet (PcdCpuExecuteDisableBitFlag)) {
    XdConfigFeatureList ();
  }
  //
  // Configure Feature List for VT and LT
  //
  if (FeaturePcdGet (PcdCpuVtLtFlag)) {
    VtLtConfigFeatureList ();
  }
  //
  // Configure Feature List for fast string
  //
  if (FeaturePcdGet (PcdCpuFastStringFlag)) {
    FastStringConfigFeatureList ();
  }
  //
  // Configure Feature List for L2 prefetcher
  //
  if (FeaturePcdGet (PcdCpuL2PrefetcherFlag)) {
    L2PrefetcherConfigFeatureList ();
  }
  //
  // Configure Feature List for L1 Data prefetcher
  //
  if (FeaturePcdGet (PcdCpuL1DataPrefetcherFlag)) {
    L1DataPrefetcherConfigFeatureList ();
  }
  //
  // Configure Feature List for hardware prefetcher
  //
  if (FeaturePcdGet (PcdCpuHardwarePrefetcherFlag)) {
    HardwarePrefetcherConfigFeatureList ();
  }
  //
  // Configure Feature List for adjacent cache line prefetch
  //
  if (FeaturePcdGet (PcdCpuAdjacentCacheLinePrefetchFlag)) {
    AdjacentCacheLinePrefetchConfigFeatureList ();
  }
  //
  // Configure Feature List for DCU prefetcher
  //
  if (FeaturePcdGet (PcdCpuDcuPrefetcherFlag)) {
    DcuPrefetcherConfigFeatureList ();
  }
  //
  // Configure Feature List for IP prefetcher
  //
  if (FeaturePcdGet (PcdCpuIpPrefetcherFlag)) {
    IpPrefetcherConfigFeatureList ();
  }
  //
  // Configure Feature List for DCU prefetcher
  //
  if (FeaturePcdGet (PcdCpuMlcStreamerPrefetcherFlag)) {
    MlcStreamerPrefetcherConfigFeatureList ();
  }
  //
  // Configure Feature List for IP prefetcher
  //
  if (FeaturePcdGet (PcdCpuMlcSpatialPrefetcherFlag)) {
    MlcSpatialPrefetcherConfigFeatureList ();
  }
  //
  // Configure Feature List for signal break on FERR#
  //
  if (FeaturePcdGet (PcdCpuFerrSignalBreakFlag)) {
    FerrSignalBreakConfigFeatureList ();
  }
  //
  // Configure Feature List for Platform Environment Control Interface
  //
  if (FeaturePcdGet (PcdCpuPeciFlag)) {
    PeciConfigFeatureList ();
  }
  //
  // Configure Gate A20M Feature
  //
  if (FeaturePcdGet (PcdCpuGateA20MDisableFlag)) {
    A20mConfigureFeatureList ();
  }
  //
  // Configure Feature List for Three Strike Counter feature.
  //
  if (FeaturePcdGet (PcdCpuThreeStrikeCounterFlag)) {
    ThreeStrikeCounterConfigFeatureList  ();
  }
  //
  // Config Feature List for Engergy Performance Bias feature.
  //
  if (FeaturePcdGet (PcdCpuEnergyPerformanceBiasFlag)) {
    EnergyPerformanceBiasConfigFeatureList  ();
  }
  //
  // Config Feature List for T-State feature.
  //
  if (FeaturePcdGet (PcdCpuTStateFlag)) {
    TStateConfigFeatureList  ();
  }
  //
  // Config Feature List for AES feature.
  //
  if (FeaturePcdGet (PcdCpuAesFlag)) {
    AesConfigFeatureList  ();
  }
  //
  // Config Feature List for DCA feature.
  //
  if (FeaturePcdGet (PcdCpuDcaFlag)) {
    DcaConfigFeatureList  ();
  }
  //
  // Config Feature List for C-State feature.
  //
  if (FeaturePcdGet (PcdCpuCStateFlag)) {
    CStateConfigFeatureList  ();
  }
  //
  // Config Feature List for APIC TPR Update Message feature.
  //
  if (FeaturePcdGet (PcdCpuApicTprUpdateMessageFlag)) {
    ApicTprUpdateMessageConfigFeatureList  ();
  }
  //
  // Config Feature List for IA Untrusted Mode feature.
  //
  if (FeaturePcdGet (PcdCpuEnableIaUntrustedModeFlag)) {
    IaUntrustedModeConfigFeatureList  ();
  }
  //
  // Config Feature List for PECI Downstream feature.
  //
  if (FeaturePcdGet (PcdCpuPeciDownstreamWriteFlag)) {
    PeciDownstreamFeatureList ();
  }
  
  PpinInit(PcdGet32(PcdCpuProcessorFeatureUserConfiguration) & PCD_CPU_PPIN_BIT ? TRUE : FALSE); // Denverton AptioV Override EIP# 408897: Implement PPIN support on Denverton platform

}

/**
  Produces Register Tables for all processors.

  This function produces Register Tables for all processors.

**/
VOID
ProduceRegisterTable (
  VOID
  )
{

  UINTN          ProcessorNumber;
  UINT8          Index;
  CPU_FEATURE_ID FeatureID;
  VOID           *Attribute;

  //
  // Parse Processor Feature Lists and translate to Register Tables for all processors.
  //
  for (ProcessorNumber = 0; ProcessorNumber < mCpuConfigContextBuffer.NumberOfProcessors; ProcessorNumber++) {
    
    //
    // Traverse Processor Feature List for this logical processor.
    //
    Index = 1;
    FeatureID = GetProcessorFeatureEntry (ProcessorNumber, Index, &Attribute);
    Index++;
    while (FeatureID != CpuFeatureMaximum) {

      switch (FeatureID) {

      case ThermalManagement:
        if (FeaturePcdGet (PcdCpuThermalManagementFlag)) {
         ThermalManagementReg (ProcessorNumber, Attribute);
        }
        break;

      case MaxCpuidValueLimit:
        if (FeaturePcdGet (PcdCpuMaxCpuIDValueLimitFlag)) {
          MaxCpuidLimitReg (ProcessorNumber, Attribute);
        }
        break;

      case MonitorMwait:
        if (FeaturePcdGet (PcdCpuMonitorMwaitFlag)) {
          MonitorMwaitReg (ProcessorNumber, Attribute);
        }
        break;

      case C1e:
        if (FeaturePcdGet (PcdCpuEnhancedCStateFlag)) {
          C1eReg (ProcessorNumber, Attribute);
        }
        break;

      case MachineCheck:
        if (FeaturePcdGet (PcdCpuMachineCheckFlag)) {
          MachineCheckReg (ProcessorNumber, Attribute);
        }
        break;
      
      case Eist:
        if (FeaturePcdGet (PcdCpuEistFlag)) {
          //
          // Turbo Mode feature is handled together with EIST feature.
          //
          EistReg (ProcessorNumber, Attribute);
        }
        break;
      
      case ExecuteDisableBit:
        if (FeaturePcdGet (PcdCpuExecuteDisableBitFlag)) {
          XdReg (ProcessorNumber, Attribute);
        }
        break;

      case Vt:
        if (FeaturePcdGet (PcdCpuVtLtFlag)) {
          VtLtReg (ProcessorNumber, Attribute);
        }
        break;

      case FastString:
        if (FeaturePcdGet (PcdCpuFastStringFlag)) {
          FastStringReg (ProcessorNumber, Attribute);
        }
        break;

      case L2Prefetcher:
        if (FeaturePcdGet (PcdCpuL2PrefetcherFlag)) {
          L2PrefetcherReg (ProcessorNumber, Attribute);
        }
        break;

      case L1DataPrefetcher:
        if (FeaturePcdGet (PcdCpuL1DataPrefetcherFlag)) {
          L1DataPrefetcherReg (ProcessorNumber, Attribute);
        }
        break;

      case HardwarePrefetcher:
        if (FeaturePcdGet (PcdCpuHardwarePrefetcherFlag)) {
          HardwarePrefetcherReg (ProcessorNumber, Attribute);
        }
        break;

      case AdjacentCacheLinePrefetch:
        if (FeaturePcdGet (PcdCpuAdjacentCacheLinePrefetchFlag)) {
          AdjacentCacheLinePrefetchReg (ProcessorNumber, Attribute);
        }
        break;

      case DcuPrefetcher:
        if (FeaturePcdGet (PcdCpuDcuPrefetcherFlag)) {
          DcuPrefetcherReg (ProcessorNumber, Attribute);
        }
        break;

      case IpPrefetcher:
        if (FeaturePcdGet (PcdCpuIpPrefetcherFlag)) {
          IpPrefetcherReg (ProcessorNumber, Attribute);
        }
        break;

      case MlcStreamerPrefetcher:
        if (FeaturePcdGet (PcdCpuMlcStreamerPrefetcherFlag)) {
          MlcStreamerPrefetcherReg (ProcessorNumber, Attribute);
        }
        break;

      case MlcSpatialPrefetcher:
        if (FeaturePcdGet (PcdCpuMlcSpatialPrefetcherFlag)) {
          MlcSpatialPrefetcherReg (ProcessorNumber, Attribute);
        }
        break;

      case FerrSignalBreak:
        if (FeaturePcdGet (PcdCpuFerrSignalBreakFlag)) {
          FerrSignalBreakReg (ProcessorNumber, Attribute);
        }
        break;

      case Peci:
        if (FeaturePcdGet (PcdCpuPeciFlag)) {
          PeciReg (ProcessorNumber, Attribute);
        }
        break;

      case GateA20MDisable:
        if (FeaturePcdGet (PcdCpuGateA20MDisableFlag)) {
          A20mRegs (ProcessorNumber, Attribute);
        }
        break;

      case ThreeStrikeCounter:
        if (FeaturePcdGet (PcdCpuThreeStrikeCounterFlag)) {
          ThreeStrikeCounterReg (ProcessorNumber, Attribute);
        }
        break;

      case EnergyPerformanceBias:
        if (FeaturePcdGet (PcdCpuEnergyPerformanceBiasFlag)) {
          EnergyPerformanceBiasReg (ProcessorNumber, Attribute);
        }
        break;

      case TState:
        if (FeaturePcdGet (PcdCpuTStateFlag)) {
          TStateReg (ProcessorNumber, Attribute);
        }
        break;

      case Aes:
        if (FeaturePcdGet (PcdCpuAesFlag)) {
          AesReg (ProcessorNumber, Attribute);
        }
        break;

      case Dca:
        DEBUG ((DEBUG_INFO, "--------- Dca %X----------------\n" , ProcessorNumber ));  
        if (FeaturePcdGet (PcdCpuDcaFlag)) {
          DcaReg (ProcessorNumber, Attribute);
        }
        break;

      case CState:
        if (FeaturePcdGet (PcdCpuCStateFlag)) {
          CStateReg (ProcessorNumber, Attribute);
        }
        break;

      case ApicTprUpdateMessage:
        if (FeaturePcdGet (PcdCpuApicTprUpdateMessageFlag)) {
          ApicTprUpdateMessageReg (ProcessorNumber, Attribute);
        }
        break;


      case PeciDownstreamWrite:
        if (FeaturePcdGet (PcdCpuPeciDownstreamWriteFlag)) {
          PeciDownstreamReg (ProcessorNumber, Attribute);
        }
        break;

      default:
        break;
      }

      FeatureID = GetProcessorFeatureEntry (ProcessorNumber, Index, &Attribute);
      Index++;
    }
  }
}

/**
  Produces Pre-SMM-Init Register Tables for all processors.

  This function produces Pre-SMM-Init Register Tables for all processors.

**/
VOID
ProducePreSmmInitRegisterTable (
  VOID
  )
{
  UINTN  ProcessorNumber;
  UINT32 ApicId;

  for (ProcessorNumber = 0; ProcessorNumber < mCpuConfigContextBuffer.NumberOfProcessors; ProcessorNumber++) {
    ApicId = mCpuConfigContextBuffer.CollectedDataBuffer[ProcessorNumber].CpuMiscData.InitialApicID;
    mCpuConfigContextBuffer.PreSmmInitRegisterTable[ProcessorNumber].InitialApicId = ApicId;

    //
    // Microcode update must be first item in the register table.
    //
    if (FeaturePcdGet (PcdCpuMicrocodeUpdateFlag)) {
      MicrocodeReg (ProcessorNumber, TRUE);
    }

    if (FeaturePcdGet (PcdCpuSocketIdReassignmentFlag)) {
      SocketIdReg (ProcessorNumber);
    }

    if (FeaturePcdGet (PcdCpuX2ApicFlag)) {
      X2ApicReg (ProcessorNumber);
    }
  }
}

/**
  Produces register table according to output of Data Collection phase.
  
  This function produces register table according to output of Data Collection phase.

**/
VOID
AnalysisPhase (
  VOID
  )
{
  UINTN                     Index;
  UINTN                     ProcessorNumber;
  CPU_REGISTER_TABLE        *RegisterTable;
  CPU_REGISTER_TABLE_ENTRY  *RegisterTableEntry;
  UINT8                     CallbackSignalValue;
  UINT32                    DebugOutputLevel;

  //
  // Set PcdCpuCallbackSignal to trigger callback function, and reads the value back.
  //
  CallbackSignalValue = SetAndReadCpuCallbackSignal (CPU_PROCESSOR_FEATURE_LIST_CONFIG_SIGNAL);
  //
  // Checks whether the callback function requests to bypass Processor Feature List configuration.
  //
  if (CallbackSignalValue != CPU_BYPASS_SIGNAL) {
    //
    // Configure Processor Feature List for all logical processors.
    //
    ConfigProcessorFeatureList ();
  }

  //
  // Write programming for CPU-only reset at the start of register table
  //
  for (ProcessorNumber = 0; ProcessorNumber < mCpuConfigContextBuffer.NumberOfProcessors; ProcessorNumber++) {
    ProgramBeforeReset (ProcessorNumber);
  }

  //
  // Set PcdCpuCallbackSignal to trigger callback function, and reads the value back.
  //
  CallbackSignalValue = SetAndReadCpuCallbackSignal (CPU_REGISTER_TABLE_TRANSLATION_SIGNAL);
  //
  // Checks whether the callback function requests to bypass Register Table translation.
  //
  if (CallbackSignalValue != CPU_BYPASS_SIGNAL) {
    //
    // Produce register tables for all logical processors.
    //
    ProduceRegisterTable ();
  }

  //
  // Debug information
  //
  for (ProcessorNumber = 0; ProcessorNumber < mCpuConfigContextBuffer.NumberOfProcessors; ProcessorNumber++) {
    if (ProcessorNumber == mCpuConfigContextBuffer.BspNumber) {
      DebugOutputLevel = EFI_D_INFO;
    } else {
      DebugOutputLevel = EFI_D_VERBOSE;
    }
    RegisterTable = &mCpuConfigContextBuffer.RegisterTable[ProcessorNumber];
    for (Index = 0; Index < RegisterTable->TableLength; Index++) {
      RegisterTableEntry = &RegisterTable->RegisterTableEntry[Index];
      
      switch (RegisterTableEntry->RegisterType) {
      case Msr:
        DEBUG ((DebugOutputLevel, "Processor: %d:   MSR: %x, Bit Start: %d, Bit Length: %d, Value: %lx\r\n", ProcessorNumber, RegisterTableEntry->Index, RegisterTableEntry->ValidBitStart, RegisterTableEntry->ValidBitLength, RegisterTableEntry->Value));
        break;
      case ControlRegister:
        DEBUG ((DebugOutputLevel, "Processor: %d:    CR: %x, Bit Start: %d, Bit Length: %d, Value: %lx\r\n", ProcessorNumber, RegisterTableEntry->Index, RegisterTableEntry->ValidBitStart, RegisterTableEntry->ValidBitLength, RegisterTableEntry->Value));
        break;
      case MemoryMapped:
        DEBUG ((DebugOutputLevel, "Processor: %d:  MMIO: %x, Bit Start: %d, Bit Length: %d, Value: %lx\r\n", ProcessorNumber, RegisterTableEntry->Index, RegisterTableEntry->ValidBitStart, RegisterTableEntry->ValidBitLength, RegisterTableEntry->Value));
        break;
      case CacheControl:
        DEBUG ((DebugOutputLevel, "Processor: %d: CACHE: %x, Bit Start: %d, Bit Length: %d, Value: %lx\r\n", ProcessorNumber, RegisterTableEntry->Index, RegisterTableEntry->ValidBitStart, RegisterTableEntry->ValidBitLength, RegisterTableEntry->Value));
        break;
      default:
        break;
      }    
    }
  }
  DEBUG ((EFI_D_INFO, "Capability: %8x\r\n", PcdGet32 (PcdCpuProcessorFeatureCapability)));
  DEBUG ((EFI_D_INFO, "Configuration: %8x\r\n", PcdGet32 (PcdCpuProcessorFeatureUserConfiguration)));
  DEBUG ((EFI_D_INFO, "Setting: %8x\r\n", PcdGet32 (PcdCpuProcessorFeatureSetting)));
}
