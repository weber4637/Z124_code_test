/** @file
  Ia32-specific functionality for DxeLoad.

Copyright (c) 2006 - 2015, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#include "DxeIpl.h"
#include "VirtualMemory.h"

#define IDT_ENTRY_COUNT       32

typedef struct _X64_IDT_TABLE {
  //
  // Reserved 4 bytes preceding PeiService and IdtTable,
  // since IDT base address should be 8-byte alignment.
  //
  UINT32                   Reserved;
  CONST EFI_PEI_SERVICES   **PeiService;
  X64_IDT_GATE_DESCRIPTOR  IdtTable[IDT_ENTRY_COUNT];
} X64_IDT_TABLE;

//
// Global Descriptor Table (GDT)
//
GLOBAL_REMOVE_IF_UNREFERENCED IA32_GDT gGdtEntries[] = {
/* selector { Global Segment Descriptor                              } */
/* 0x00 */  {{0,      0,  0,  0,    0,  0,  0,  0,    0,  0, 0,  0,  0}}, //null descriptor
/* 0x08 */  {{0xffff, 0,  0,  0x2,  1,  0,  1,  0xf,  0,  0, 1,  1,  0}}, //linear data segment descriptor
/* 0x10 */  {{0xffff, 0,  0,  0xf,  1,  0,  1,  0xf,  0,  0, 1,  1,  0}}, //linear code segment descriptor
/* 0x18 */  {{0xffff, 0,  0,  0x3,  1,  0,  1,  0xf,  0,  0, 1,  1,  0}}, //system data segment descriptor
/* 0x20 */  {{0xffff, 0,  0,  0xa,  1,  0,  1,  0xf,  0,  0, 1,  1,  0}}, //system code segment descriptor
/* 0x28 */  {{0,      0,  0,  0,    0,  0,  0,  0,    0,  0, 0,  0,  0}}, //spare segment descriptor
/* 0x30 */  {{0xffff, 0,  0,  0x2,  1,  0,  1,  0xf,  0,  0, 1,  1,  0}}, //system data segment descriptor
/* 0x38 */  {{0xffff, 0,  0,  0xa,  1,  0,  1,  0xf,  0,  1, 0,  1,  0}}, //system code segment descriptor
/* 0x40 */  {{0,      0,  0,  0,    0,  0,  0,  0,    0,  0, 0,  0,  0}}, //spare segment descriptor
};

//
// IA32 Gdt register
//
GLOBAL_REMOVE_IF_UNREFERENCED CONST IA32_DESCRIPTOR gGdt = {
  sizeof (gGdtEntries) - 1,
  (UINTN) gGdtEntries
  };

GLOBAL_REMOVE_IF_UNREFERENCED  IA32_DESCRIPTOR gLidtDescriptor = {
  sizeof (X64_IDT_GATE_DESCRIPTOR) * IDT_ENTRY_COUNT - 1,
  0
};

/**
  Allocates and fills in the Page Directory and Page Table Entries to
  establish a 4G page table.

  @param[in] StackBase  Stack base address.
  @param[in] StackSize  Stack size.

  @return The address of page table.

**/
UINTN
Create4GPageTablesIa32Pae (
  IN EFI_PHYSICAL_ADDRESS   StackBase,
  IN UINTN                  StackSize
  )
{  
  UINT8                                         PhysicalAddressBits;
  EFI_PHYSICAL_ADDRESS                          PhysicalAddress;
  UINTN                                         IndexOfPdpEntries;
  UINTN                                         IndexOfPageDirectoryEntries;
  UINT32                                        NumberOfPdpEntriesNeeded;
  PAGE_MAP_AND_DIRECTORY_POINTER                *PageMap;
  PAGE_MAP_AND_DIRECTORY_POINTER                *PageDirectoryPointerEntry;
  PAGE_TABLE_ENTRY                              *PageDirectoryEntry;
  UINTN                                         TotalPagesNum;
  UINTN                                         PageAddress;

  PhysicalAddressBits = 32;

  //
  // Calculate the table entries needed.
  //
  NumberOfPdpEntriesNeeded = (UINT32) LShiftU64 (1, (PhysicalAddressBits - 30));

  TotalPagesNum = NumberOfPdpEntriesNeeded + 1;
  PageAddress = (UINTN) AllocatePages (TotalPagesNum);
  ASSERT (PageAddress != 0);

  PageMap = (VOID *) PageAddress;
  PageAddress += SIZE_4KB;

  PageDirectoryPointerEntry = PageMap;
  PhysicalAddress = 0;

  for (IndexOfPdpEntries = 0; IndexOfPdpEntries < NumberOfPdpEntriesNeeded; IndexOfPdpEntries++, PageDirectoryPointerEntry++) {
    //
    // Each Directory Pointer entries points to a page of Page Directory entires.
    // So allocate space for them and fill them in in the IndexOfPageDirectoryEntries loop.
    //       
    PageDirectoryEntry = (VOID *) PageAddress;
    PageAddress += SIZE_4KB;

    //
    // Fill in a Page Directory Pointer Entries
    //
    PageDirectoryPointerEntry->Uint64 = (UINT64) (UINTN) PageDirectoryEntry;
    PageDirectoryPointerEntry->Bits.Present = 1;

    for (IndexOfPageDirectoryEntries = 0; IndexOfPageDirectoryEntries < 512; IndexOfPageDirectoryEntries++, PageDirectoryEntry++, PhysicalAddress += SIZE_2MB) {
      if ((PhysicalAddress < StackBase + StackSize) && ((PhysicalAddress + SIZE_2MB) > StackBase)) {
        //
        // Need to split this 2M page that covers stack range.
        //
        Split2MPageTo4K (PhysicalAddress, (UINT64 *) PageDirectoryEntry, StackBase, StackSize);
      } else {
        //
        // Fill in the Page Directory entries
        //
        PageDirectoryEntry->Uint64 = (UINT64) PhysicalAddress;
        PageDirectoryEntry->Bits.ReadWrite = 1;
        PageDirectoryEntry->Bits.Present = 1;
        PageDirectoryEntry->Bits.MustBe1 = 1;
      }
    }
  }

  for (; IndexOfPdpEntries < 512; IndexOfPdpEntries++, PageDirectoryPointerEntry++) {
    ZeroMem (
      PageDirectoryPointerEntry,
      sizeof (PAGE_MAP_AND_DIRECTORY_POINTER)
      );
  }

  return (UINTN) PageMap;
}

/**
  The function will check if IA32 PAE is supported.

  @retval TRUE      IA32 PAE is supported.
  @retval FALSE     IA32 PAE is not supported.

**/
BOOLEAN
IsIa32PaeSupport (
  VOID
  )
{
  UINT32            RegEax;
  UINT32            RegEdx;
  BOOLEAN           Ia32PaeSupport;

  Ia32PaeSupport = FALSE;
  AsmCpuid (0x0, &RegEax, NULL, NULL, NULL);
  if (RegEax >= 0x1) {
    AsmCpuid (0x1, NULL, NULL, NULL, &RegEdx);
    if ((RegEdx & BIT6) != 0) {
      Ia32PaeSupport = TRUE;
    }
  }

  return Ia32PaeSupport;
}

/**
  The function will check if Execute Disable Bit is available.

  @retval TRUE      Execute Disable Bit is available.
  @retval FALSE     Execute Disable Bit is not available.

**/
BOOLEAN
IsExecuteDisableBitAvailable (
  VOID
  )
{
  UINT32            RegEax;
  UINT32            RegEdx;
  BOOLEAN           Available;

  Available = FALSE;
  AsmCpuid (0x80000000, &RegEax, NULL, NULL, NULL);
  if (RegEax >= 0x80000001) {
    AsmCpuid (0x80000001, NULL, NULL, NULL, &RegEdx);
    if ((RegEdx & BIT20) != 0) {
      //
      // Bit 20: Execute Disable Bit available.
      //
      Available = TRUE;
    }
  }

  return Available;
}

/**
   Transfers control to DxeCore.

   This function performs a CPU architecture specific operations to execute
   the entry point of DxeCore with the parameters of HobList.
   It also installs EFI_END_OF_PEI_PPI to signal the end of PEI phase.

   @param DxeCoreEntryPoint         The entry point of DxeCore.
   @param HobList                   The start of HobList passed to DxeCore.

**/
VOID
HandOffToDxeCore (
  IN EFI_PHYSICAL_ADDRESS   DxeCoreEntryPoint,
  IN EFI_PEI_HOB_POINTERS   HobList
  )
{
  EFI_STATUS                Status;
  EFI_PHYSICAL_ADDRESS      BaseOfStack;
  EFI_PHYSICAL_ADDRESS      TopOfStack;
  UINTN                     PageTables;
//*** AMI PORTING BEGIN ***//
// Comment out unused variables
//  X64_IDT_GATE_DESCRIPTOR   *IdtTable;
//  UINTN                     SizeOfTemplate;
//  VOID                      *TemplateBase;
//  EFI_PHYSICAL_ADDRESS      VectorAddress;
//*** AMI PORTING END *****//  
  UINT32                    Index;
//*** AMI PORTING BEGIN ***//
// Comment out unused variables
//  X64_IDT_TABLE             *IdtTableForX64;
//*** AMI PORTING END *****//
  EFI_VECTOR_HANDOFF_INFO   *VectorInfo;
  EFI_PEI_VECTOR_HANDOFF_INFO_PPI *VectorHandoffInfoPpi;
  BOOLEAN                   BuildPageTablesIa32Pae;

  Status = PeiServicesAllocatePages (EfiBootServicesData, EFI_SIZE_TO_PAGES (STACK_SIZE), &BaseOfStack);
  ASSERT_EFI_ERROR (Status);

  if (FeaturePcdGet(PcdDxeIplSwitchToLongMode)) {
    //
    // Compute the top of the stack we were allocated, which is used to load X64 dxe core.
    // Pre-allocate a 32 bytes which confroms to x64 calling convention.
    //
    // The first four parameters to a function are passed in rcx, rdx, r8 and r9.
    // Any further parameters are pushed on the stack. Furthermore, space (4 * 8bytes) for the
    // register parameters is reserved on the stack, in case the called function
    // wants to spill them; this is important if the function is variadic.
    //
    TopOfStack = BaseOfStack + EFI_SIZE_TO_PAGES (STACK_SIZE) * EFI_PAGE_SIZE - 32;

    //
    //  x64 Calling Conventions requires that the stack must be aligned to 16 bytes
    //
    TopOfStack = (EFI_PHYSICAL_ADDRESS) (UINTN) ALIGN_POINTER (TopOfStack, 16);

    //
    // Load the GDT of Go64. Since the GDT of 32-bit Tiano locates in the BS_DATA
    // memory, it may be corrupted when copying FV to high-end memory
    //
    AsmWriteGdtr (&gGdt);
    //
    // Create page table and save PageMapLevel4 to CR3
    //
    PageTables = CreateIdentityMappingPageTables (BaseOfStack, STACK_SIZE);

    //
    // End of PEI phase signal
    //
    //*** AMI PORTING BEGIN ***//
    PERF_START (NULL,"PeiEnd", NULL, 0);
    //*** AMI PORTING END *****//  
    Status = PeiServicesInstallPpi (&gEndOfPeiSignalPpi);
    //*** AMI PORTING BEGIN ***//
    PERF_END (NULL,"PeiEnd", NULL, 0);
    PERF_END (NULL,"DxeIpl", NULL, 0);
    //*** AMI PORTING END *****//    
    ASSERT_EFI_ERROR (Status);

    AsmWriteCr3 (PageTables);

    //
    // Update the contents of BSP stack HOB to reflect the real stack info passed to DxeCore.
    //
    UpdateStackHob (BaseOfStack, STACK_SIZE);
//*** AMI PORTING BEGIN ***//
// Do not change IDT
/*
    SizeOfTemplate = AsmGetVectorTemplatInfo (&TemplateBase);

    Status = PeiServicesAllocatePages (
               EfiBootServicesData,
               EFI_SIZE_TO_PAGES(sizeof (X64_IDT_TABLE) + SizeOfTemplate * IDT_ENTRY_COUNT),
               (EFI_PHYSICAL_ADDRESS *) &IdtTableForX64
               );
    ASSERT_EFI_ERROR (Status);

    //
    // Store EFI_PEI_SERVICES** in the 4 bytes immediately preceding IDT to avoid that
    // it may not be gotten correctly after IDT register is re-written.
    //
    IdtTableForX64->PeiService = GetPeiServicesTablePointer ();

    VectorAddress = (EFI_PHYSICAL_ADDRESS) (UINTN) (IdtTableForX64 + 1);
    IdtTable      = IdtTableForX64->IdtTable;
    for (Index = 0; Index < IDT_ENTRY_COUNT; Index++) {
      IdtTable[Index].Ia32IdtEntry.Bits.GateType    =  0x8e;
      IdtTable[Index].Ia32IdtEntry.Bits.Reserved_0  =  0;
      IdtTable[Index].Ia32IdtEntry.Bits.Selector    =  SYS_CODE64_SEL;

      IdtTable[Index].Ia32IdtEntry.Bits.OffsetLow   = (UINT16) VectorAddress;
      IdtTable[Index].Ia32IdtEntry.Bits.OffsetHigh  = (UINT16) (RShiftU64 (VectorAddress, 16));
      IdtTable[Index].Offset32To63                  = (UINT32) (RShiftU64 (VectorAddress, 32));
      IdtTable[Index].Reserved                      = 0;

      CopyMem ((VOID *) (UINTN) VectorAddress, TemplateBase, SizeOfTemplate);
      AsmVectorFixup ((VOID *) (UINTN) VectorAddress, (UINT8) Index);

      VectorAddress += SizeOfTemplate;
    }

    gLidtDescriptor.Base = (UINTN) IdtTable;

    //
    // Disable interrupt of Debug timer, since new IDT table cannot handle it.
    //
    SaveAndSetDebugTimerInterrupt (FALSE);

    AsmWriteIdtr (&gLidtDescriptor);
*/
// Report status code before launching DxeCore
    DEBUG ((DEBUG_INFO | DEBUG_LOAD, "DXE-Core.Entry(%X)\n", DxeCoreEntryPoint));
    REPORT_STATUS_CODE(EFI_PROGRESS_CODE,DXE_CORE_STARTED);
//*** AMI PORTING END *****//
    //
    // Go to Long Mode and transfer control to DxeCore.
    // Interrupts will not get turned on until the CPU AP is loaded.
    // Call x64 drivers passing in single argument, a pointer to the HOBs.
    //
    AsmEnablePaging64 (
      SYS_CODE64_SEL,
      DxeCoreEntryPoint,
      (EFI_PHYSICAL_ADDRESS)(UINTN)(HobList.Raw),
      0,
      TopOfStack
      );
  } else {
    //
    // Get Vector Hand-off Info PPI and build Guided HOB
    //
    Status = PeiServicesLocatePpi (
               &gEfiVectorHandoffInfoPpiGuid,
               0,
               NULL,
               (VOID **)&VectorHandoffInfoPpi
               );
    if (Status == EFI_SUCCESS) {
      DEBUG ((EFI_D_INFO, "Vector Hand-off Info PPI is gotten, GUIDed HOB is created!\n"));
      VectorInfo = VectorHandoffInfoPpi->Info;
      Index = 1;
      while (VectorInfo->Attribute != EFI_VECTOR_HANDOFF_LAST_ENTRY) {
        VectorInfo ++;
        Index ++;
      }
      BuildGuidDataHob (
        &gEfiVectorHandoffInfoPpiGuid,
        VectorHandoffInfoPpi->Info,
        sizeof (EFI_VECTOR_HANDOFF_INFO) * Index
        );
    }

    //
    // Compute the top of the stack we were allocated. Pre-allocate a UINTN
    // for safety.
    //
    TopOfStack = BaseOfStack + EFI_SIZE_TO_PAGES (STACK_SIZE) * EFI_PAGE_SIZE - CPU_STACK_ALIGNMENT;
    TopOfStack = (EFI_PHYSICAL_ADDRESS) (UINTN) ALIGN_POINTER (TopOfStack, CPU_STACK_ALIGNMENT);

    PageTables = 0;
    BuildPageTablesIa32Pae = (BOOLEAN) (PcdGetBool (PcdSetNxForStack) && IsIa32PaeSupport () && IsExecuteDisableBitAvailable ());
    if (BuildPageTablesIa32Pae) {
      PageTables = Create4GPageTablesIa32Pae (BaseOfStack, STACK_SIZE);
      EnableExecuteDisableBit ();
    }

    //
    // End of PEI phase signal
    //
    //*** AMI PORTING BEGIN ***//
    PERF_START (NULL,"PeiEnd", NULL, 0);
    //*** AMI PORTING END *****//  
    Status = PeiServicesInstallPpi (&gEndOfPeiSignalPpi);
    //*** AMI PORTING BEGIN ***//
    PERF_END (NULL,"PeiEnd", NULL, 0);
    PERF_END (NULL,"DxeIpl", NULL, 0);
    //*** AMI PORTING END *****//    
    ASSERT_EFI_ERROR (Status);

    if (BuildPageTablesIa32Pae) {
      AsmWriteCr3 (PageTables);
      //
      // Set Physical Address Extension (bit 5 of CR4).
      //
      AsmWriteCr4 (AsmReadCr4 () | BIT5);
    }

    //
    // Update the contents of BSP stack HOB to reflect the real stack info passed to DxeCore.
    //
    UpdateStackHob (BaseOfStack, STACK_SIZE);
	
//*** AMI PORTING BEGIN ***//
// Report status code before launching DxeCore
    DEBUG ((DEBUG_INFO | DEBUG_LOAD, "DXE-Core.Entry(%X)\n", DxeCoreEntryPoint));
    REPORT_STATUS_CODE(EFI_PROGRESS_CODE,DXE_CORE_STARTED);
//*** AMI PORTING END *****//

    //
    // Transfer the control to the entry point of DxeCore.
    //
    if (BuildPageTablesIa32Pae) {
      AsmEnablePaging32 (
        (SWITCH_STACK_ENTRY_POINT)(UINTN)DxeCoreEntryPoint,
        HobList.Raw,
        NULL,
        (VOID *) (UINTN) TopOfStack
        );
    } else {
      SwitchStack (
        (SWITCH_STACK_ENTRY_POINT)(UINTN)DxeCoreEntryPoint,
        HobList.Raw,
        NULL,
        (VOID *) (UINTN) TopOfStack
        );
    }
  }
}

