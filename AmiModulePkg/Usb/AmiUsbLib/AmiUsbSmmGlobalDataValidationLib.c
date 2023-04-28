//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2017, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

/** @file AmiUsbSmmGlobalDataValidationLib.c
  Source code for the AmiUsbSmmGlobalDataValidationLib library class.

  AmiUsbSmmGlobalDataValidationLib Function source code.
**/

#include <Uefi.h>
#include <Library/SmmServicesTableLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/AmiBufferValidationLib.h>
#include "../Rt/UsbDef.h"
#include "../Rt/Xhci.h"
#include <Library/AmiUsbSmmGlobalDataValidationLib.h>

//extern UINT32  mCrcTable[256];
//extern EFI_STATUS EFIAPI RuntimeDriverCalculateCrc32(VOID *, UINTN, UINT32*);
//extern VOID RuntimeDriverInitializeCrc32Table(VOID);

AMI_USB_SMM_PROTOCOL	*gAmiUsbSmmProtocol = NULL;

typedef struct {
    UINT32                  UsbLegSupOffSet;
    XHCI_DCBAA              *DcbaaPtr;
    TRB_RING                *XfrRings;
    UINTN                   XfrTrbs;
    VOID					*DeviceContext;
    VOID					*InputContext;
    UINT64                  *ScratchBufEntry;
    UINT32                  HashValue;
    UINT8					ContextSize;
    XHCI_HC_CAP_REGS        CapRegs;
} USB3_HC_CONSTANT_DATA;

typedef struct {
    UINT8           HcType;
    UINT8           OpRegOffset;
    UINT8           ExtCapPtr;
    UINT16          BusDevFuncNum;
    UINT16          AsyncListSize;
    UINT32          *FrameList;
    UINTN           BaseAddressSize;
    VOID            *UsbBusData;
    VOID            *IsocTds;
    UINT32          HashValue;
} USB_HC_CONSTANT_DATA;

typedef struct {
    HCD_HEADER                  HcdriverTable[MAX_HC_TYPES];
    DEV_DRIVER                  DevDriverTable[MAX_DEVICE_TYPES];
    DEV_DRIVER                  DelayedDrivers[MAX_DEVICE_TYPES];
    CALLBACK_FUNC               CallBackFunctionTable[MAX_CALLBACK_FUNCTION];
    UINT8                       *MemBlockStart;
    UINT32			            MemPages;
    UINT8                       *UsbTempBuffer;
    UINT8                       *UsbMassConsumeBuffer;
    UINT32                      *MemBlkSts;
    UINTN                       PciExpressBaseAddress;
    VOID                        *QueueCnnctDiscData;
    int                         QueueCnnctDiscMaxSize;
    VOID                        *IccQueueCnnctDiscData;
    int                         IccQueueCnnctDiscMaxSize;
    UINT32                      HashValue;
} USB_CONSTANT_DATA;

#define MAX_USB_HC                  50
USB_CONSTANT_DATA           gUsbConStantData = {0};
USB_HC_CONSTANT_DATA        gHcStrucData[MAX_USB_HC];
USB3_HC_CONSTANT_DATA       gUsb3HcStrucData[MAX_USB_HC];
UINT8                       gStaticUsbDataError;

/**
EFI_STATUS
CalculateUsbGlobalConstantDataCrc32(
    USB_GLOBAL_DATA         *UsbData,
    UINT32                  *Crc32
)
{
    USB_CONSTANT_DATA           UsbConStantData = {0};
    UINTN                       Index = 0;
    HC_STRUC                    *HcStruc;
    USB3_HOST_CONTROLLER        *Usb3Hc = NULL;
    UINTN                       HcInitializedNumber = 0;
    UINTN                       Usb3HcInitializedNumber = 0;
    UINTN                       HcStrucDataIndex = 0;
    UINTN                       Usb3HcStrucDataIndex = 0;
    USB_HC_CONSTANT_DATA        *HcStrucData = NULL;
    USB3_HC_CONSTANT_DATA       *Usb3HcStrucData = NULL;
    EFI_STATUS                  Status;
    UINT32                      Crc32Value[3] = {0};

    if (gAmiUsbSmmProtocol == NULL) {
        return EFI_NOT_READY;
    }
    
    CopyMem(UsbConStantData.HcdriverTable, UsbData->aHCDriverTable, sizeof(UsbConStantData.HcdriverTable));
    CopyMem(UsbConStantData.DevDriverTable, UsbData->aDevDriverTable, sizeof(UsbConStantData.DevDriverTable));
    CopyMem(UsbConStantData.DelayedDrivers, UsbData->aDelayedDrivers, sizeof(UsbConStantData.DelayedDrivers));
    CopyMem(UsbConStantData.CallBackFunctionTable, UsbData->aCallBackFunctionTable, sizeof(UsbConStantData.CallBackFunctionTable));
   
    UsbConStantData.UsbTempBuffer = UsbData->fpUSBTempBuffer;
    UsbConStantData.UsbMassConsumeBuffer = UsbData->fpUSBMassConsumeBuffer;
    UsbConStantData.PciExpressBaseAddress = UsbData->PciExpressBaseAddress;
    UsbConStantData.MemBlkSts = UsbData->aMemBlkSts;
    UsbConStantData.MemBlockStart = UsbData->fpMemBlockStart;
    UsbConStantData.MemPages = UsbData->MemPages;
    UsbConStantData.QueueCnnctDiscData = UsbData->QueueCnnctDisc.data;
    UsbConStantData.QueueCnnctDiscMaxSize = UsbData->QueueCnnctDisc.maxsize;
    UsbConStantData.IccQueueCnnctDiscData = UsbData->ICCQueueCnnctDisc.data;
    UsbConStantData.IccQueueCnnctDiscMaxSize = UsbData->ICCQueueCnnctDisc.maxsize;
    UsbConStantData.HashValue = gAmiUsbSmmProtocol->GlobalDataValidation.Crc32Hash;

    for (Index = 0; Index < UsbData->HcTableCount; Index++) {
        HcStruc = UsbData->HcTable[Index];
        if (HcStruc == NULL) {
            continue;
        }
        if (HcStruc->dHCFlag & (HC_STATE_RUNNING |HC_STATE_INITIALIZED)) {
            HcInitializedNumber++;
            if (HcStruc->usbbus_data) {
                Usb3HcInitializedNumber++;
            }
        }
    }

    if (HcInitializedNumber != 0) {
        Status = gSmst->SmmAllocatePool(EfiRuntimeServicesData, 
                sizeof(USB_HC_CONSTANT_DATA) * HcInitializedNumber,
                (VOID**)&HcStrucData);

        if (EFI_ERROR(Status)) {
            return Status;
        }
        ZeroMem(HcStrucData, sizeof(USB_HC_CONSTANT_DATA) * HcInitializedNumber);
    }

    if (Usb3HcInitializedNumber != 0) {

        Status = gSmst->SmmAllocatePool(EfiRuntimeServicesData, 
                sizeof(USB3_HC_CONSTANT_DATA) * Usb3HcInitializedNumber,
                (VOID**)&Usb3HcStrucData);

        if (EFI_ERROR(Status)) {
            return Status;
        }

        ZeroMem(Usb3HcStrucData, sizeof(USB3_HC_CONSTANT_DATA) * Usb3HcInitializedNumber);
    }

    for (Index = 0; Index < UsbData->HcTableCount; Index++) {
        HcStruc = UsbData->HcTable[Index];
        if (HcStruc == NULL) {
            continue;
        }
        Status = AmiValidateMemoryBuffer((VOID*)HcStruc, sizeof(HC_STRUC));
        if (EFI_ERROR(Status)) {
            return Status;
        }        
        if (HcStruc->dHCFlag & (HC_STATE_RUNNING |HC_STATE_INITIALIZED)) {
            HcStrucData[HcStrucDataIndex].HcType = HcStruc->bHCType;
            HcStrucData[HcStrucDataIndex].FrameList = HcStruc->fpFrameList;
            HcStrucData[HcStrucDataIndex].AsyncListSize = HcStruc->wAsyncListSize;
            HcStrucData[HcStrucDataIndex].BaseAddressSize = HcStruc->BaseAddressSize;
            HcStrucData[HcStrucDataIndex].BusDevFuncNum = HcStruc->wBusDevFuncNum;
            HcStrucData[HcStrucDataIndex].OpRegOffset = HcStruc->bOpRegOffset;
            HcStrucData[HcStrucDataIndex].ExtCapPtr = HcStruc->bExtCapPtr;
            HcStrucData[HcStrucDataIndex].UsbBusData = HcStruc->usbbus_data;
            HcStrucData[HcStrucDataIndex].IsocTds = HcStruc->IsocTds;
            HcStrucData[HcStrucDataIndex].HashValue = gAmiUsbSmmProtocol->GlobalDataValidation.Crc32Hash;
            HcStrucDataIndex++;
            if (HcStruc->usbbus_data) {
                Usb3Hc = HcStruc->usbbus_data;
                Status = AmiValidateMemoryBuffer((VOID*)Usb3Hc, sizeof(USB3_HOST_CONTROLLER));
                if (EFI_ERROR(Status)) {
                    return Status;
                }
                Usb3HcStrucData[Usb3HcStrucDataIndex].UsbLegSupOffSet = Usb3Hc->UsbLegSupOffSet;
                Usb3HcStrucData[Usb3HcStrucDataIndex].DcbaaPtr = Usb3Hc->DcbaaPtr;
                Usb3HcStrucData[Usb3HcStrucDataIndex].XfrRings = Usb3Hc->XfrRings;
                Usb3HcStrucData[Usb3HcStrucDataIndex].XfrTrbs = Usb3Hc->XfrTrbs;
                Usb3HcStrucData[Usb3HcStrucDataIndex].DeviceContext = Usb3Hc->DeviceContext;
                Usb3HcStrucData[Usb3HcStrucDataIndex].InputContext = Usb3Hc->InputContext;
                Usb3HcStrucData[Usb3HcStrucDataIndex].ScratchBufEntry = Usb3Hc->ScratchBufEntry;
                Usb3HcStrucData[Usb3HcStrucDataIndex].ContextSize = Usb3Hc->ContextSize;
                Usb3HcStrucData[Usb3HcStrucDataIndex].CapRegs = Usb3Hc->CapRegs;
                Usb3HcStrucData[Usb3HcStrucDataIndex].HashValue = gAmiUsbSmmProtocol->GlobalDataValidation.Crc32Hash;
                Usb3HcStrucDataIndex++;
            }
        }
    }

    if (HcInitializedNumber != 0) {
    	Status = RuntimeDriverCalculateCrc32((UINT8*)HcStrucData, 
    			(UINTN)(sizeof(USB_HC_CONSTANT_DATA) * HcInitializedNumber), &Crc32Value[0]);
        Status = gSmst->SmmFreePool(HcStrucData);
        if (EFI_ERROR(Status)) {
            return Status;
        }
    }

    if (Usb3HcInitializedNumber != 0) {
    	Status = RuntimeDriverCalculateCrc32((UINT8*)Usb3HcStrucData, 
    			(UINTN)(sizeof(USB3_HC_CONSTANT_DATA) * Usb3HcInitializedNumber), &Crc32Value[1]);
        Status = gSmst->SmmFreePool(Usb3HcStrucData);
        if (EFI_ERROR(Status)) {
            return Status;
        }
    }
    Status = RuntimeDriverCalculateCrc32((UINT8*)&UsbConStantData, sizeof(UsbConStantData), &Crc32Value[2]);
    
    RuntimeDriverCalculateCrc32((UINT8*)Crc32Value, sizeof(Crc32Value), Crc32);
    
    return EFI_SUCCESS;
}
**/

EFI_STATUS
EFIAPI
ValidateStaticUsbData(
    USB_GLOBAL_DATA *UsbData
)
{
    UINTN    Index = 0;
    UINTN    HcStrucDataIndex = 0;
    UINTN    Usb3HcStrucDataIndex = 0;
    EFI_STATUS                  Status;
    USB3_HOST_CONTROLLER        *Usb3Hc = NULL;
    HC_STRUC                    *HcStruc;

    if (gAmiUsbSmmProtocol == NULL) {
        return EFI_NOT_READY;
    }
    
    gStaticUsbDataError = 0x01;
    if (CompareMem(gUsbConStantData.HcdriverTable, UsbData->aHCDriverTable, sizeof(HCD_HEADER)*MAX_HC_TYPES)!=0)
        return EFI_ACCESS_DENIED;
    
    gStaticUsbDataError = 0x02;
    if (CompareMem(gUsbConStantData.DevDriverTable, UsbData->aDevDriverTable, sizeof(DEV_DRIVER)*MAX_DEVICE_TYPES)!=0)
        return EFI_ACCESS_DENIED;
        
    gStaticUsbDataError = 0x03;
    if (CompareMem(gUsbConStantData.DelayedDrivers, UsbData->aDelayedDrivers, sizeof(DEV_DRIVER)*MAX_DEVICE_TYPES)!=0)
        return EFI_ACCESS_DENIED;
        
    gStaticUsbDataError = 0x04;
    if (CompareMem(gUsbConStantData.CallBackFunctionTable, UsbData->aCallBackFunctionTable, sizeof(CALLBACK_FUNC)*MAX_CALLBACK_FUNCTION)!=0)
        return EFI_ACCESS_DENIED;
    
    gStaticUsbDataError = 0x05;
    if (gUsbConStantData.UsbTempBuffer != UsbData->fpUSBTempBuffer)
        return EFI_ACCESS_DENIED;
        
    if (gUsbConStantData.UsbMassConsumeBuffer != UsbData->fpUSBMassConsumeBuffer)
        return EFI_ACCESS_DENIED;
        
    gStaticUsbDataError = 0x06;
    if (gUsbConStantData.PciExpressBaseAddress != UsbData->PciExpressBaseAddress)
        return EFI_ACCESS_DENIED;
        
    gStaticUsbDataError = 0x07;
    if (gUsbConStantData.MemBlkSts != UsbData->aMemBlkSts)
        return EFI_ACCESS_DENIED;
        
    gStaticUsbDataError = 0x08;
    if (gUsbConStantData.MemBlockStart != UsbData->fpMemBlockStart)
        return EFI_ACCESS_DENIED;
        
    gStaticUsbDataError = 0x09;
    if (gUsbConStantData.MemPages != UsbData->MemPages)
        return EFI_ACCESS_DENIED;
    
    gStaticUsbDataError = 0x0a;
    if (gUsbConStantData.QueueCnnctDiscData != UsbData->QueueCnnctDisc.data)
        return EFI_ACCESS_DENIED;
        
    gStaticUsbDataError = 0x0b;
    if (gUsbConStantData.QueueCnnctDiscMaxSize != UsbData->QueueCnnctDisc.maxsize)
        return EFI_ACCESS_DENIED;
        
    gStaticUsbDataError = 0x0c;
    if (gUsbConStantData.IccQueueCnnctDiscData != UsbData->ICCQueueCnnctDisc.data)
        return EFI_ACCESS_DENIED;
        
    gStaticUsbDataError = 0x0d;
    if (gUsbConStantData.IccQueueCnnctDiscMaxSize != UsbData->ICCQueueCnnctDisc.maxsize)
        return EFI_ACCESS_DENIED;


    for (Index = 0; Index < UsbData->HcTableCount; Index++) {
        HcStruc = UsbData->HcTable[Index];
        if (HcStruc == NULL) {
            continue;
        }     
        gStaticUsbDataError = 0x0e;
        Status = AmiValidateMemoryBuffer((VOID*)HcStruc, sizeof(HC_STRUC));
        if (EFI_ERROR(Status)) {
            return Status;
        } 
        if (HcStruc->dHCFlag & (HC_STATE_RUNNING |HC_STATE_INITIALIZED)) {
            gStaticUsbDataError = 0x0f;
            if (gHcStrucData[HcStrucDataIndex].HcType != HcStruc->bHCType)
                return EFI_ACCESS_DENIED;
                
            gStaticUsbDataError = 0x10;
            if (gHcStrucData[HcStrucDataIndex].FrameList != HcStruc->fpFrameList)
                return EFI_ACCESS_DENIED;
            
            gStaticUsbDataError = 0x11;
            if (gHcStrucData[HcStrucDataIndex].AsyncListSize != HcStruc->wAsyncListSize)
                return EFI_ACCESS_DENIED;
                
            gStaticUsbDataError = 0x12;
            if (gHcStrucData[HcStrucDataIndex].BaseAddressSize != HcStruc->BaseAddressSize)
                return EFI_ACCESS_DENIED;
                
            gStaticUsbDataError = 0x13;
            if (gHcStrucData[HcStrucDataIndex].BusDevFuncNum != HcStruc->wBusDevFuncNum)
                return EFI_ACCESS_DENIED;
                
            gStaticUsbDataError = 0x14;
            if (gHcStrucData[HcStrucDataIndex].OpRegOffset != HcStruc->bOpRegOffset)
                return EFI_ACCESS_DENIED;
                
            gStaticUsbDataError = 0x15;
            if (gHcStrucData[HcStrucDataIndex].ExtCapPtr != HcStruc->bExtCapPtr)
                return EFI_ACCESS_DENIED;
                
            gStaticUsbDataError = 0x16;
            if (gHcStrucData[HcStrucDataIndex].UsbBusData != HcStruc->usbbus_data)
                return EFI_ACCESS_DENIED;
                
            gStaticUsbDataError = 0x17;
            if (gHcStrucData[HcStrucDataIndex].IsocTds != HcStruc->IsocTds)
                return EFI_ACCESS_DENIED;
            HcStrucDataIndex++;
            if (HcStruc->usbbus_data) {
                Usb3Hc = HcStruc->usbbus_data;
                gStaticUsbDataError = 0x18;
                Status = AmiValidateMemoryBuffer((VOID*)Usb3Hc, sizeof(USB3_HOST_CONTROLLER));
                if (EFI_ERROR(Status)) {
                    return Status;
                }
                gStaticUsbDataError = 0x19;
                if (gUsb3HcStrucData[Usb3HcStrucDataIndex].UsbLegSupOffSet != Usb3Hc->UsbLegSupOffSet)
                    return EFI_ACCESS_DENIED;
                
                gStaticUsbDataError = 0x1a;
                if (gUsb3HcStrucData[Usb3HcStrucDataIndex].DcbaaPtr != Usb3Hc->DcbaaPtr)
                    return EFI_ACCESS_DENIED;
                    
                gStaticUsbDataError = 0x1b;
                if (gUsb3HcStrucData[Usb3HcStrucDataIndex].XfrRings != Usb3Hc->XfrRings)
                    return EFI_ACCESS_DENIED;
                
                gStaticUsbDataError = 0x1c;
                if (gUsb3HcStrucData[Usb3HcStrucDataIndex].XfrTrbs != Usb3Hc->XfrTrbs)
                    return EFI_ACCESS_DENIED;
                    
                gStaticUsbDataError = 0x1d;
                if (gUsb3HcStrucData[Usb3HcStrucDataIndex].DeviceContext != Usb3Hc->DeviceContext)
                    return EFI_ACCESS_DENIED;
                    
                gStaticUsbDataError = 0x1e;
                if (gUsb3HcStrucData[Usb3HcStrucDataIndex].InputContext != Usb3Hc->InputContext)
                    return EFI_ACCESS_DENIED;
                
                gStaticUsbDataError = 0x1f;
                if (gUsb3HcStrucData[Usb3HcStrucDataIndex].ScratchBufEntry != Usb3Hc->ScratchBufEntry)
                    return EFI_ACCESS_DENIED;
                
                gStaticUsbDataError = 0x20;
                if (gUsb3HcStrucData[Usb3HcStrucDataIndex].ContextSize != Usb3Hc->ContextSize)
                    return EFI_ACCESS_DENIED;
                    
                gStaticUsbDataError = 0x21;
                if (CompareMem(&gUsb3HcStrucData[Usb3HcStrucDataIndex].CapRegs, &Usb3Hc->CapRegs, sizeof(XHCI_HC_CAP_REGS)))
                    return EFI_ACCESS_DENIED;
                Usb3HcStrucDataIndex++;
            }
        }
    }


    gStaticUsbDataError = 0x22;
    Status = AmiValidateMemoryBuffer(UsbData->gUsbSkipListTable, sizeof(USB_SKIP_LIST)*MAX_SKIP_TABLE_COUNT);
    if (EFI_ERROR(Status)) {
        return Status;
    } 

    gStaticUsbDataError = 0;
    return EFI_SUCCESS; 
}

EFI_STATUS
EFIAPI
CopyUsbDataToSmram(
    USB_GLOBAL_DATA *UsbData
)
{
    UINTN    Index = 0;
    UINTN    HcStrucDataIndex = 0;
    UINTN    Usb3HcStrucDataIndex = 0;
    EFI_STATUS                  Status;
    USB3_HOST_CONTROLLER        *Usb3Hc = NULL;
    HC_STRUC                    *HcStruc;

    
    CopyMem(gUsbConStantData.HcdriverTable, UsbData->aHCDriverTable, sizeof(HCD_HEADER)*MAX_HC_TYPES);
    CopyMem(gUsbConStantData.DevDriverTable, UsbData->aDevDriverTable, sizeof(DEV_DRIVER)*MAX_DEVICE_TYPES);
    CopyMem(gUsbConStantData.DelayedDrivers, UsbData->aDelayedDrivers, sizeof(DEV_DRIVER)*MAX_DEVICE_TYPES);
    CopyMem(gUsbConStantData.CallBackFunctionTable, UsbData->aCallBackFunctionTable, sizeof(CALLBACK_FUNC)*MAX_CALLBACK_FUNCTION);  

    gUsbConStantData.UsbTempBuffer = UsbData->fpUSBTempBuffer;
    gUsbConStantData.UsbMassConsumeBuffer = UsbData->fpUSBMassConsumeBuffer;
    gUsbConStantData.PciExpressBaseAddress = UsbData->PciExpressBaseAddress;
    gUsbConStantData.MemBlkSts = UsbData->aMemBlkSts;
    gUsbConStantData.MemBlockStart = UsbData->fpMemBlockStart;
    gUsbConStantData.MemPages = UsbData->MemPages;
    gUsbConStantData.QueueCnnctDiscData = UsbData->QueueCnnctDisc.data;
    gUsbConStantData.QueueCnnctDiscMaxSize = UsbData->QueueCnnctDisc.maxsize;
    gUsbConStantData.IccQueueCnnctDiscData = UsbData->ICCQueueCnnctDisc.data;
    gUsbConStantData.IccQueueCnnctDiscMaxSize = UsbData->ICCQueueCnnctDisc.maxsize;

    for (Index = 0; Index < UsbData->HcTableCount; Index++) {
        HcStruc = UsbData->HcTable[Index];
        if (HcStruc == NULL) {
            continue;
        }
        Status = AmiValidateMemoryBuffer((VOID*)HcStruc, sizeof(HC_STRUC));
        if (EFI_ERROR(Status)) {
            return Status;
        } 
        if (HcStruc->dHCFlag & (HC_STATE_RUNNING |HC_STATE_INITIALIZED)) {
            gHcStrucData[HcStrucDataIndex].HcType = HcStruc->bHCType;
            gHcStrucData[HcStrucDataIndex].FrameList = HcStruc->fpFrameList;
            gHcStrucData[HcStrucDataIndex].AsyncListSize = HcStruc->wAsyncListSize;
            gHcStrucData[HcStrucDataIndex].BaseAddressSize = HcStruc->BaseAddressSize;
            gHcStrucData[HcStrucDataIndex].BusDevFuncNum = HcStruc->wBusDevFuncNum;
            gHcStrucData[HcStrucDataIndex].OpRegOffset = HcStruc->bOpRegOffset;
            gHcStrucData[HcStrucDataIndex].ExtCapPtr = HcStruc->bExtCapPtr;
            gHcStrucData[HcStrucDataIndex].UsbBusData = HcStruc->usbbus_data;
            gHcStrucData[HcStrucDataIndex].IsocTds = HcStruc->IsocTds;
            HcStrucDataIndex++;
            if (HcStruc->usbbus_data) {
                Usb3Hc = HcStruc->usbbus_data;
                Status = AmiValidateMemoryBuffer((VOID*)Usb3Hc, sizeof(USB3_HOST_CONTROLLER));
                if (EFI_ERROR(Status)) {
                    return Status;
                }
                gUsb3HcStrucData[Usb3HcStrucDataIndex].UsbLegSupOffSet = Usb3Hc->UsbLegSupOffSet;
                gUsb3HcStrucData[Usb3HcStrucDataIndex].DcbaaPtr = Usb3Hc->DcbaaPtr;
                gUsb3HcStrucData[Usb3HcStrucDataIndex].XfrRings = Usb3Hc->XfrRings;
                gUsb3HcStrucData[Usb3HcStrucDataIndex].XfrTrbs = Usb3Hc->XfrTrbs;
                gUsb3HcStrucData[Usb3HcStrucDataIndex].DeviceContext = Usb3Hc->DeviceContext;
                gUsb3HcStrucData[Usb3HcStrucDataIndex].InputContext = Usb3Hc->InputContext;
                gUsb3HcStrucData[Usb3HcStrucDataIndex].ScratchBufEntry = Usb3Hc->ScratchBufEntry;
                gUsb3HcStrucData[Usb3HcStrucDataIndex].ContextSize = Usb3Hc->ContextSize;
                gUsb3HcStrucData[Usb3HcStrucDataIndex].CapRegs = Usb3Hc->CapRegs;
                Usb3HcStrucDataIndex++;
            }
        }
    }
    return EFI_SUCCESS; 
}



EFI_STATUS
EFIAPI
UpdateAmiUsbStaticData(
    USB_GLOBAL_DATA *UsbGlobdaData
)
{
    EFI_STATUS  Status;
//    UINT32      Crc32;
//
//
//    Status = CalculateUsbGlobalConstantDataCrc32(UsbGlobdaData, &Crc32);
//
//    if (EFI_ERROR(Status)) {
//        return Status;
//    }
//
//    gAmiUsbSmmProtocol->GlobalDataValidation.ConstantDataCrc32 = Crc32;

    Status = CopyUsbDataToSmram(UsbGlobdaData);
        
        if (EFI_ERROR(Status)) {
            return Status;
        }  
    
    return EFI_SUCCESS;
}

EFI_STATUS
CheckUsbStaticData(
    VOID *UsbGlobdaData
)
{
    EFI_STATUS  Status;
//    UINT32      Crc32;
//
//    Status = CalculateUsbGlobalConstantDataCrc32(UsbGlobdaData, &Crc32);
//
//    if (EFI_ERROR(Status)) {
//        return Status;
//    }
//
//    if (gAmiUsbSmmProtocol->GlobalDataValidation.ConstantDataCrc32 != Crc32) {
//        return EFI_ACCESS_DENIED;
//    }

    Status = ValidateStaticUsbData(UsbGlobdaData);

    if (EFI_ERROR(Status)) {
        DEBUG((-1, "Static USB data error number : %X  \n",gStaticUsbDataError));
        return Status;
    }

    return EFI_SUCCESS;
}


EFI_STATUS
EFIAPI
AmiUsbSmmGlobalDataValidation(
    USB_GLOBAL_DATA *UsbData
)
{
    EFI_STATUS          Status;
    UINT8               *MouseInputBufferEnd;
    UINT8               *KbcharacterBufferEnd;
    UINT8               *KbcScanCodeBufferEnd;
    UINTN               Index;
    DEV_INFO            *DevInfoTableEnd;
    HC_STRUC            *HcStruc;
    
    MouseInputBufferEnd = (UINT8*)((UINTN)UsbData->aMouseInputBuffer + sizeof(UsbData->aMouseInputBuffer));

    if (((UINTN)UsbData->fpMouseInputBufferHeadPtr < (UINTN)UsbData->aMouseInputBuffer) ||
        ((UINTN)UsbData->fpMouseInputBufferHeadPtr > (UINTN)MouseInputBufferEnd) ||
        ((UINTN)UsbData->fpMouseInputBufferTailPtr < (UINTN)UsbData->aMouseInputBuffer) ||
        ((UINTN)UsbData->fpMouseInputBufferTailPtr > (UINTN)MouseInputBufferEnd)) {
        return EFI_ACCESS_DENIED;
    }

    KbcharacterBufferEnd = (UINT8*)((UINTN)UsbData->aKBCCharacterBufferStart + sizeof(UsbData->aKBCCharacterBufferStart));

    if (((UINTN)UsbData->fpKBCCharacterBufferHead < (UINTN)UsbData->aKBCCharacterBufferStart) ||
        ((UINTN)UsbData->fpKBCCharacterBufferHead > (UINTN)KbcharacterBufferEnd) ||
        ((UINTN)UsbData->fpKBCCharacterBufferTail < (UINTN)UsbData->aKBCCharacterBufferStart) ||
        ((UINTN)UsbData->fpKBCCharacterBufferTail > (UINTN)KbcharacterBufferEnd)) {
        return EFI_ACCESS_DENIED;
    }

    KbcScanCodeBufferEnd = (UINT8*)((UINTN)UsbData->aKBCScanCodeBufferStart + sizeof(UsbData->aKBCScanCodeBufferStart));

    if (((UINTN)UsbData->fpKBCScanCodeBufferPtr < (UINTN)UsbData->aKBCScanCodeBufferStart) ||
        ((UINTN)UsbData->fpKBCScanCodeBufferPtr > (UINTN)KbcScanCodeBufferEnd)) {
        return EFI_ACCESS_DENIED;
    }

    DevInfoTableEnd = (DEV_INFO*)((UINTN)UsbData->aDevInfoTable + sizeof(UsbData->aDevInfoTable));

    if (UsbData->fpKeyRepeatDevInfo != NULL) { 
        if (((UINTN)UsbData->fpKeyRepeatDevInfo < (UINTN)UsbData->aDevInfoTable) ||
            ((UINTN)UsbData->fpKeyRepeatDevInfo > (UINTN)DevInfoTableEnd)) {
            return EFI_ACCESS_DENIED;
        }
    }

    for (Index = 0; Index < USB_DEV_HID_COUNT; Index++) {
        if (UsbData->aUSBKBDeviceTable[Index] != NULL) {
            if (((UINTN)(UsbData->aUSBKBDeviceTable[Index]) < (UINTN)UsbData->aDevInfoTable) ||
                ((UINTN)(UsbData->aUSBKBDeviceTable[Index]) > (UINTN)DevInfoTableEnd)) {
                return EFI_ACCESS_DENIED;
            }
        }
    }

    if (UsbData->HcTableCount != 0) {
        Status = AmiValidateMemoryBuffer((VOID*)UsbData->HcTable, sizeof(HC_STRUC*) * UsbData->HcTableCount);
        if (EFI_ERROR(Status)) {
            return EFI_ACCESS_DENIED;
        }
        for (Index = 0; Index < UsbData->HcTableCount; Index++) {
            HcStruc = UsbData->HcTable[Index];
            if (HcStruc == NULL) {
                continue;
            }
           //Check if MMIO address space of usb controller resides in SMRAM region. If yes, don't proceed.
            if (HcStruc->bHCType != USB_HC_UHCI) {
                if (HcStruc->BaseAddress != 0) {
                    Status = AmiValidateMmioBuffer((VOID*)HcStruc->BaseAddress, HcStruc->BaseAddressSize);
                    if (EFI_ERROR(Status)) {
                        DEBUG((DEBUG_ERROR, "Usb Mmio address is invalid, it is in SMRAM\n"));
                        return EFI_ACCESS_DENIED;
                    }
                }
            }
        }
    }

    Status = CheckUsbStaticData(UsbData);
    
    if (EFI_ERROR(Status)) {
        return EFI_ACCESS_DENIED;
    }

    return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
UsbSmmProtocolCallback(
    CONST EFI_GUID  *Protocol,
    VOID            *Interface,
    EFI_HANDLE      Handle
)
{
    EFI_STATUS  Status;
    
    Status = gSmst->SmmLocateProtocol(
                    &gAmiUsbSmmProtocolGuid,
                    NULL,
                    &gAmiUsbSmmProtocol);

    ASSERT_EFI_ERROR(Status);
    
//    RuntimeDriverInitializeCrc32Table(); 
    return Status;
}

EFI_STATUS
EFIAPI
AmiUsbSmmGlobalDataValidationLibLibConstructor(
        IN EFI_HANDLE ImageHandle, 
        IN EFI_SYSTEM_TABLE *SystemTable)
{
    EFI_STATUS  Status;
    VOID        *ProtocolNotifyRegistration;
    

    
    Status = gSmst->SmmLocateProtocol(
                    &gAmiUsbSmmProtocolGuid,
                    NULL,
                    &gAmiUsbSmmProtocol);
    
//    if (Status == EFI_SUCCESS)
//          RuntimeDriverInitializeCrc32Table();  

    if (EFI_ERROR(Status)) {
        Status = gSmst->SmmRegisterProtocolNotify(
                    &gAmiUsbSmmProtocolGuid,
                    UsbSmmProtocolCallback,
                    &ProtocolNotifyRegistration
                    );
    }
    
    return EFI_SUCCESS;
}

//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2017, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
