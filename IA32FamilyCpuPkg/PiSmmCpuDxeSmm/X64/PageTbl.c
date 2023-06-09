/*++
  This file contains an 'Intel Peripheral Driver' and is        
  licensed for Intel CPUs and chipsets under the terms of your  
  license agreement with Intel or your vendor.  This file may   
  be modified by the user, subject to additional terms of the   
  license agreement                                             
--*/
/** @file

Page Fault (#PF) handler for X64 processors

Copyright (c) 2009 - 2015, Intel Corporation. All rights reserved.<BR>
This software and associated documentation (if any) is furnished
under a license and may only be used or copied in accordance
with the terms of the license. Except as permitted by such
license, no part of this software or documentation may be
reproduced, stored in a retrieval system, or transmitted in any
form or by any means without the express written consent of
Intel Corporation.

**/

#include "PiSmmCpuDxeSmm.h"

#define PAGE_TABLE_PAGES            8
#define IA32_PG_PMNT                (1ull << 62)
#define ACC_MAX_BIT                 BIT3
LIST_ENTRY                          mPagePool = INITIALIZE_LIST_HEAD_VARIABLE (mPagePool);
SPIN_LOCK                           mPFLock;
BOOLEAN                             m1GPageTableSupport = FALSE;

/**
  Check if 1-GByte pages is supported by processor or not.
  
  @retval TRUE   1-GByte pages is supported.
  @retval FALSE  1-GByte pages is not supported.

**/
BOOLEAN
Is1GPageSupport (
  VOID
  )
{
  UINT32         RegEax;
  UINT32         RegEdx;

  AsmCpuid (0x80000000, &RegEax, NULL, NULL, NULL);
  if (RegEax >= 0x80000001) {
    AsmCpuid (0x80000001, NULL, NULL, NULL, &RegEdx);
    if ((RegEdx & BIT26) != 0) {
      return TRUE;
    }
  }
  return FALSE;
}

/**
  Set sub-entries number in entry.
  
  @param[in, out] Entry        Pointer to entry
  @param[in]      SubEntryNum  Sub-entries number based on 0:
                               0 means there is 1 sub-entry under this entry 
                               0x1ff means there is 512 sub-entries under this entry

**/
VOID
SetSubEntriesNum (
  IN OUT UINT64               *Entry,
  IN     UINT64               SubEntryNum
  )
{
  //
  // Sub-entries number is saved in BIT52 to BIT60 (reserved field) in Entry
  //
  *Entry = BitFieldWrite64 (*Entry, 52, 60, SubEntryNum);
}

/**
  Return sub-entries number in entry.
  
  @param[in] Entry        Pointer to entry

  @return Sub-entries number based on 0:
          0 means there is 1 sub-entry under this entry 
          0x1ff means there is 512 sub-entries under this entry 
**/
UINT64
GetSubEntriesNum (
  IN UINT64            *Entry
  )
{
  //
  // Sub-entries number is saved in BIT52 to BIT60 (reserved field) in Entry
  //
  return BitFieldRead64 (*Entry, 52, 60);
}

/**
  Create PageTable for SMM use.

  @return The address of PML4 (to set CR3).

**/
UINT32
SmmInitPageTable (
  VOID
  )
{
  EFI_PHYSICAL_ADDRESS              Pages;
  UINT64                            *PTEntry;
  LIST_ENTRY                        *FreePage;
  UINTN                             Index;
  UINTN                             PageFaultHandlerHookAddress;
  IA32_IDT_GATE_DESCRIPTOR          *IdtEntry;

  //
  // Initialize spin lock
  //
  InitializeSpinLock (&mPFLock);

  m1GPageTableSupport = Is1GPageSupport ();
  //
  // Generate PAE page table for the first 4GB memory space
  //
  Pages = Gen4GPageTable (PAGE_TABLE_PAGES + 1);

  //
  // Set IA32_PG_PMNT bit to mask this entry
  //
  PTEntry = (UINT64*)(UINTN)Pages;
  for (Index = 0; Index < 4; Index++) {
    PTEntry[Index] |= IA32_PG_PMNT;
  }

  //
  // Fill Page-Table-Level4 (PML4) entry
  //
  PTEntry = (UINT64*)(UINTN)(Pages - EFI_PAGES_TO_SIZE (PAGE_TABLE_PAGES + 1));
  *PTEntry = Pages + IA32_PG_P;
  ZeroMem (PTEntry + 1, EFI_PAGE_SIZE - sizeof (*PTEntry));
  //
  // Set sub-entries number 
  //
  SetSubEntriesNum (PTEntry, 3);

  //
  // Add remaining pages to page pool
  //
  FreePage = (LIST_ENTRY*)(PTEntry + EFI_PAGE_SIZE / sizeof (*PTEntry));
  while ((UINTN)FreePage < Pages) {
    InsertTailList (&mPagePool, FreePage);
    FreePage += EFI_PAGE_SIZE / sizeof (*FreePage);
  }

  if (FeaturePcdGet (PcdCpuSmmProfileEnable)) {
    //
    // Set own Page Fault entry instead of the default one, because SMM Profile
    // feature depends on IRET instruction to do Single Step
    //
    PageFaultHandlerHookAddress = (UINTN)PageFaultIdtHandlerSmmProfile;
    IdtEntry  = (IA32_IDT_GATE_DESCRIPTOR *) gcSmiIdtr.Base;
    IdtEntry += EXCEPT_IA32_PAGE_FAULT;
    IdtEntry->Bits.OffsetLow      = (UINT16)PageFaultHandlerHookAddress;
    IdtEntry->Bits.Reserved_0     = 0;
    IdtEntry->Bits.GateType       = IA32_IDT_GATE_TYPE_INTERRUPT_32;
    IdtEntry->Bits.OffsetHigh     = (UINT16)(PageFaultHandlerHookAddress >> 16);
    IdtEntry->Bits.OffsetUpper    = (UINT32)(PageFaultHandlerHookAddress >> 32);
    IdtEntry->Bits.Reserved_1     = 0;
  } else {
    //
    // Register Smm Page Fault Handler
    //
    SmmRegisterExceptionHandler (&mSmmCpuService, EXCEPT_IA32_PAGE_FAULT, SmiPFHandler);
  }

  //
  // Additional SMM IDT initialization for Smm stack guard
  //
  if (FeaturePcdGet (PcdCpuSmmStackGuard)) {
    InitializeIDTSmmStackGuard ();
  }

  if (mSmmProtectedModeEnable) {
    //
    // Patch CR3 for SMM Protected Mode
    //
    gSmiExceptionCr3 = (UINT32)(UINTN)PTEntry;
  }

  //
  // Return the address of PML4 (to set CR3)
  //
  return (UINT32)(UINTN)PTEntry;
}

/**
  Set access record in entry.
  
  @param[in, out] Entry        Pointer to entry
  @param[in]      Acc          Access record value

**/
VOID
SetAccNum (
  IN OUT UINT64               *Entry,
  IN     UINT64               Acc
  )
{
  //
  // Access record is saved in BIT9 to BIT11 (reserved field) in Entry
  //
  *Entry = BitFieldWrite64 (*Entry, 9, 11, Acc);
}

/**
  Return access record in entry.
  
  @param[in] Entry        Pointer to entry

  @return Access record value.

**/
UINT64
GetAccNum (
  IN UINT64            *Entry
  )
{
  //
  // Access record is saved in BIT9 to BIT11 (reserved field) in Entry
  //
  return BitFieldRead64 (*Entry, 9, 11);
}

/**
  Return and update the access record in entry.

  @param[in, out]  Entry    Pointer to entry

  @return Access record value.

**/
UINT64
GetAndUpdateAccNum (
  IN OUT UINT64      *Entry
  )
{
  UINT64         Acc;
 
  Acc = GetAccNum (Entry);
  if ((*Entry & IA32_PG_A) != 0) {
    //
    // If this entry has been accessed, clear access flag in Entry and update access record
    // to the initializ value 7, adding ACC_MAX_BIT is to make it larger than others
    //
    *Entry &= ~(UINT64)(UINTN)IA32_PG_A;
    SetAccNum (Entry, 0x7);
    return (0x7 + ACC_MAX_BIT);
  } else {
    if (Acc != 0) {
      //
      // If the access record is not the smallest value 0, minus 1 and update the access record field
      //
      SetAccNum (Entry, Acc - 1);
    }
  }
  return Acc;
}

/**
  Reclaim free pages for PageFault handler.

  Search the whole entries tree to find the leaf entry that has the smallest 
  access record value. Insert the page pointed by this leaf entry into the
  page pool. And check its upper entries if need to be inserted into the page
  pool or not.

**/
VOID
ReclaimPages (
  VOID
  )
{
  UINT64                       *Pml4;
  UINT64                       *Pdpt;
  UINT64                       *Pdt;
  UINTN                        Pml4Index;
  UINTN                        PdptIndex;
  UINTN                        PdtIndex;
  UINTN                        MinPml4;
  UINTN                        MinPdpt;
  UINTN                        MinPdt;
  UINT64                       MinAcc;
  UINT64                       Acc;
  UINT64                       SubEntriesNum;
  BOOLEAN                      PML4EIgnore;
  BOOLEAN                      PDPTEIgnore;
  UINT64                       *ReleasePageAddress;

  Pml4 = NULL;
  Pdpt = NULL;
  Pdt  = NULL;
  MinAcc  = (UINT64)-1;
  MinPml4 = (UINTN)-1;
  MinPdpt = (UINTN)-1;
  MinPdt  = (UINTN)-1;
  Acc     = 0;
  ReleasePageAddress = 0;

  //
  // Fristly, find the leaf entry has the smallest access record value
  //
  Pml4 = (UINT64*)(UINTN)(AsmReadCr3 () & gPhyMask);
  for (Pml4Index = 0; Pml4Index < EFI_PAGE_SIZE / sizeof (*Pml4); Pml4Index++) { 
    if ((Pml4[Pml4Index] & IA32_PG_P) == 0 || (Pml4[Pml4Index] & IA32_PG_PMNT) != 0) {
      //
      // If the PML4 entry is not present or is masked, skip it
      //
      continue;
    }
    Pdpt = (UINT64*)(UINTN)(Pml4[Pml4Index] & gPhyMask);
    PML4EIgnore = FALSE;
    for (PdptIndex = 0; PdptIndex < EFI_PAGE_SIZE / sizeof (*Pdpt); PdptIndex++) {
      if ((Pdpt[PdptIndex] & IA32_PG_P) == 0 || (Pdpt[PdptIndex] & IA32_PG_PMNT) != 0) {
        //
        // If the PDPT entry is not present or is masked, skip it
        //
        if ((Pdpt[PdptIndex] & IA32_PG_PMNT) != 0) {
          //
          // If the PDPT entry is masked, we will ignore checking the PML4 entry
          //
          PML4EIgnore = TRUE;
        }
        continue;
      }
      if ((Pdpt[PdptIndex] & IA32_PG_PS) == 0) {
        //
        // It's not 1-GByte pages entry, it should be a PDPT entry, 
        // we will not check PML4 entry more
        //
        PML4EIgnore = TRUE;
        Pdt =  (UINT64*)(UINTN)(Pdpt[PdptIndex] & gPhyMask);
        PDPTEIgnore = FALSE;
        for (PdtIndex = 0; PdtIndex < EFI_PAGE_SIZE / sizeof(*Pdt); PdtIndex++) {
          if ((Pdt[PdtIndex] & IA32_PG_P) == 0 || (Pdt[PdtIndex] & IA32_PG_PMNT) != 0) {
            //
            // If the PD entry is not present or is masked, skip it
            //
            if ((Pdt[PdtIndex] & IA32_PG_PMNT) != 0) {
              //
              // If the PD entry is masked, we will not PDPT entry more
              //
              PDPTEIgnore = TRUE;
            }
            continue;
          } 
          if ((Pdt[PdtIndex] & IA32_PG_PS) == 0) {
            //
            // It's not 2 MByte page table entry, it should be PD entry
            // we will find the entry has the smallest access record value
            //
            PDPTEIgnore = TRUE;
            Acc = GetAndUpdateAccNum (Pdt + PdtIndex);
            if (Acc < MinAcc) {
              //
              // If the PD entry has the smallest access record value,
              // save the Page address to be released
              //
              MinAcc  = Acc;
              MinPml4 = Pml4Index;
              MinPdpt = PdptIndex;
              MinPdt  = PdtIndex;
              ReleasePageAddress = Pdt + PdtIndex;
            }
          }
        }
        if (!PDPTEIgnore) {
          //
          // If this PDPT entry has no PDT entries pointer to 4 KByte pages,
          // it should only has the entries point to 2 MByte Pages
          //
          Acc = GetAndUpdateAccNum (Pdpt + PdptIndex);
          if (Acc < MinAcc) {
            //
            // If the PDPT entry has the smallest access record value,
            // save the Page address to be released
            //
            MinAcc  = Acc;
            MinPml4 = Pml4Index;
            MinPdpt = PdptIndex;
            MinPdt  = (UINTN)-1;
            ReleasePageAddress = Pdpt + PdptIndex;
          }
        }
      }
    }
    if (!PML4EIgnore) {
      //
      // If PML4 entry has no the PDPT entry pointer to 2 MByte pages,
      // it should only has the entries point to 1 GByte Pages
      //
      Acc = GetAndUpdateAccNum (Pml4 + Pml4Index);
      if (Acc < MinAcc) {
        //
        // If the PML4 entry has the smallest access record value,
        // save the Page address to be released
        //
        MinAcc  = Acc;
        MinPml4 = Pml4Index;
        MinPdpt = (UINTN)-1;
        MinPdt  = (UINTN)-1;
        ReleasePageAddress = Pml4 + Pml4Index; 
      }
    }
  }
  //
  // Make sure one PML4/PDPT/PD entry is selected
  //
  ASSERT (MinAcc != (UINT64)-1);

  //
  // Secondly, insert the page pointed by this entry into page pool and clear this entry
  //
  InsertTailList (&mPagePool, (LIST_ENTRY*)(UINTN)(*ReleasePageAddress & gPhyMask));
  *ReleasePageAddress = 0;
 
  //
  // Lastly, check this entry's upper entries if need to be inserted into page pool
  // or not
  //
  while (TRUE) {
    if (MinPdt != (UINTN)-1) {
      //
      // If 4 KByte Page Table is released, check the PDPT entry
      //
      Pdpt = (UINT64*)(UINTN)(Pml4[MinPml4] & gPhyMask);
      SubEntriesNum = GetSubEntriesNum(Pdpt + MinPdpt);
      if (SubEntriesNum == 0) {
        //
        // Release the empty Page Directory table if there was no more 4 KByte Page Table entry
        // clear the Page directory entry
        //
        InsertTailList (&mPagePool, (LIST_ENTRY*)(UINTN)(Pdpt[MinPdpt] & gPhyMask));
        Pdpt[MinPdpt] = 0;
        //
        // Go on checking the PML4 table
        //
        MinPdt = (UINTN)-1;
        continue;
      }
      //
      // Update the sub-entries filed in PDPT entry and exit
      //
      SetSubEntriesNum (Pdpt + MinPdpt, SubEntriesNum - 1);
      break;
    }
    if (MinPdpt != (UINTN)-1) {
      //
      // One 2MB Page Table is released or Page Directory table is released, check the PML4 entry
      //
      SubEntriesNum = GetSubEntriesNum (Pml4 + MinPml4);
      if (SubEntriesNum == 0) {
        //
        // Release the empty PML4 table if there was no more 1G KByte Page Table entry
        // clear the Page directory entry
        //
        InsertTailList (&mPagePool, (LIST_ENTRY*)(UINTN)(Pml4[MinPml4] & gPhyMask));
        Pml4[MinPml4] = 0;
        MinPdpt = (UINTN)-1;
        continue;
      }
      //
      // Update the sub-entries filed in PML4 entry and exit
      //
      SetSubEntriesNum (Pml4 + MinPml4, SubEntriesNum - 1);
      break;
    }
    //
    // PLM4 table has been released before, exit it
    //
    break;
  }
}

/**
  Allocate free Page for PageFault handler use.

  @return Page address.

**/
UINT64
AllocPage (
  VOID
  )
{
  UINT64                            RetVal;

  if (IsListEmpty (&mPagePool)) {
    //
    // If page pool is empty, reclaim the used pages and insert one into page pool
    //
    ReclaimPages ();
  }

  //
  // Get one free page and remove it from page pool
  //
  RetVal = (UINT64)(UINTN)mPagePool.ForwardLink;
  RemoveEntryList (mPagePool.ForwardLink);
  //
  // Clean this page and return
  //
  ZeroMem ((VOID*)(UINTN)RetVal, EFI_PAGE_SIZE);
  return RetVal;
}

/**
  Page Fault handler for SMM use.

**/
VOID
SmiDefaultPFHandler (
  VOID
  )
{
  UINT64                            *PageTable;
  UINT64                            *Pml4;
  UINT64                            PFAddress;
  UINTN                             StartBit;
  UINTN                             EndBit;
  UINT64                            PTIndex;
  UINTN                             Index;
  SMM_PAGE_SIZE_TYPE                PageSize;
  UINTN                             NumOfPages;
  UINTN                             PageAttribute;
  EFI_STATUS                        Status;
  UINT64                            *UpperEntry;

  //
  // Set default SMM page attribute
  //
  PageSize = SmmPageSize2M;
  NumOfPages = 1;
  PageAttribute = 0;

  EndBit = 0;
  Pml4 = (UINT64*)(AsmReadCr3 () & gPhyMask);
  PFAddress = AsmReadCr2 ();

  Status = GetPlatformPageTableAttribute (PFAddress, &PageSize, &NumOfPages, &PageAttribute);
  //
  // If platform not support page table attribute, set default SMM page attribute
  //
  if (Status != EFI_SUCCESS) {
    PageSize = SmmPageSize2M;
    NumOfPages = 1;
    PageAttribute = 0;
  }
  if (PageSize >= MaxSmmPageSizeType) {
    PageSize = SmmPageSize2M; 
  }
  if (NumOfPages > 512) {
    NumOfPages = 512;
  }

  switch (PageSize) {
  case SmmPageSize4K:
    //
    // BIT12 to BIT20 is Page Table index
    //
    EndBit = 12;
    break;
  case SmmPageSize2M:
    //
    // BIT21 to BIT29 is Page Directory index
    //
    EndBit = 21;
    PageAttribute |= (UINTN)IA32_PG_PS;
    break;
  case SmmPageSize1G:
    if (!m1GPageTableSupport) {
      DEBUG ((EFI_D_ERROR, "1-GByte pages is not supported!"));
      ASSERT (FALSE);
    }
    //
    // BIT30 to BIT38 is Page Directory Pointer Table index
    //
    EndBit = 30;
    PageAttribute |= (UINTN)IA32_PG_PS;
    break; 
  default:
    ASSERT (FALSE);
  }

  //
  // If execute-disable is enabled, set NX bit
  //
  if (mXdEnabled) {
    PageAttribute |= IA32_PG_NX;
  }

  for (Index = 0; Index < NumOfPages; Index++) {
    PageTable  = Pml4;
    UpperEntry = NULL;
    for (StartBit = 39; StartBit > EndBit; StartBit -= 9) {
      PTIndex = BitFieldRead64 (PFAddress, StartBit, StartBit + 8);
      if ((PageTable[PTIndex] & IA32_PG_P) == 0) {
        //
        // If the entry is not present, allocate one page from page pool for it
        //
        PageTable[PTIndex] = AllocPage () | IA32_PG_RW | IA32_PG_P;
      } else {
        //
        // Save the upper entry address
        //
        UpperEntry = PageTable + PTIndex;
      }
      //
      // BIT9 to BIT11 of entry is used to save access record,
      // initailze value is 7
      //
      PageTable[PTIndex] |= (UINT64)IA32_PG_A;
      SetAccNum (PageTable + PTIndex, 7);
      PageTable = (UINT64*)(UINTN)(PageTable[PTIndex] & gPhyMask);
    }

    PTIndex = BitFieldRead64 (PFAddress, StartBit, StartBit + 8);
    if ((PageTable[PTIndex] & IA32_PG_P) != 0) {
      //
      // Check if the entry has already existed, this issue may occur when the different
      // size page entries created under the same entry
      //
      DEBUG ((EFI_D_ERROR, "PageTable = %lx, PTIndex = %x, PageTable[PTIndex] = %lx\n", PageTable, PTIndex, PageTable[PTIndex]));
      DEBUG ((EFI_D_ERROR, "New page table overlapped with old page table!\n"));
      ASSERT (FALSE);
    }
    //
    // Fill the new entry
    //
    PageTable[PTIndex] = (PFAddress & gPhyMask & ~((1ull << EndBit) - 1)) |
                         PageAttribute | IA32_PG_A | IA32_PG_RW | IA32_PG_P;
    if (UpperEntry != NULL) {
      SetSubEntriesNum (UpperEntry, GetSubEntriesNum (UpperEntry) + 1);
    }
    //
    // Get the next page address if we need to create more page tables
    //    
    PFAddress += (1ull << EndBit);
  }
}

/**
  ThePage Fault handler wrapper for SMM use.

  @param  InterruptType    Defines the type of interrupt or exception that
                           occurred on the processor.This parameter is processor architecture specific.
  @param  SystemContext    A pointer to the processor context when
                           the interrupt occurred on the processor.
**/
VOID
EFIAPI
SmiPFHandler (
    IN EFI_EXCEPTION_TYPE   InterruptType,
    IN EFI_SYSTEM_CONTEXT   SystemContext
  )
{
  UINTN             PFAddress;

  ASSERT (InterruptType == EXCEPT_IA32_PAGE_FAULT);
  
  AcquireSpinLock (&mPFLock);

  PFAddress = AsmReadCr2 ();

  //
  // If a page fault occurrs in SMRAM range, it should be in a SMM stack guard page.
  //
  if ((FeaturePcdGet (PcdCpuSmmStackGuard)) && 
      (PFAddress >= mCpuHotPlugData.SmrrBase) && 
      (PFAddress < (mCpuHotPlugData.SmrrBase + mCpuHotPlugData.SmrrSize))) {
    DEBUG ((EFI_D_ERROR, "SMM stack overflow!\n"));
    CpuDeadLoop ();
  }

  //
  // If a page fault occurs in SMM range
  //
  if ((PFAddress < mCpuHotPlugData.SmrrBase) || 
      (PFAddress >= mCpuHotPlugData.SmrrBase + mCpuHotPlugData.SmrrSize)) {
    if ((SystemContext.SystemContextX64->ExceptionData & IA32_PF_EC_ID) != 0) {
      DEBUG ((EFI_D_ERROR, "Code executed on IP(0x%lx) out of SMM range after SMM is locked!\n", PFAddress));
      DEBUG_CODE (
        DumpModuleInfoByIp (*(UINTN *)(UINTN)SystemContext.SystemContextX64->Rsp);
      );
      CpuDeadLoop ();
    }
  }

  if (FeaturePcdGet (PcdCpuSmmProfileEnable)) {
    SmmProfilePFHandler (
      SystemContext.SystemContextX64->Rip,
      SystemContext.SystemContextX64->ExceptionData
      );
  } else {
    SmiDefaultPFHandler ();
  }
  
  ReleaseSpinLock (&mPFLock);
}

