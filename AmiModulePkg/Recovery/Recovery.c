//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2015, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

/** @file
  This file contains upper level Recovery functionality

**/

#include <PiPei.h>
#include <AmiStatusCodes.h>
#include <AmiHobs.h>
#include <Token.h>
#include <FlashUpd.h>

#include <Ppi/RecoveryModule.h>
#include <Ppi/DeviceRecoveryModule.h>
#include <Ppi/PeiRecoverySerialModePpi.h>

#include <Guid/AmiRecoveryDevice.h>

#include <Library/HobLib.h>
#include <Library/PcdLib.h>
#include <Library/DebugLib.h>
#include <Library/PeiServicesLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/ReportStatusCodeLib.h>


#define BLOCK  &gBlockDeviceCapsuleGuid
#define SERIAL &gSerialCapsuleGuid
#define OEM    &gOemCapsuleGuid

EFI_GUID* RecoveryDeviceOrder[] = {RECOVERY_DEVICE_ORDER NULL}; //!< Array that describes recovery device trying order

EFI_STATUS LoadRecoveryCapsule(
	IN EFI_PEI_SERVICES **PeiServices,
	IN struct _EFI_PEI_RECOVERY_MODULE_PPI *This
);

EFI_PEI_RECOVERY_MODULE_PPI RecoveryModule = {LoadRecoveryCapsule}; //!< Recovery interface

// PPI to be installed
static EFI_PEI_PPI_DESCRIPTOR RecoveryPpiList[] =
{ 
	{
		EFI_PEI_PPI_DESCRIPTOR_PPI | EFI_PEI_PPI_DESCRIPTOR_TERMINATE_LIST,
		&gEfiPeiRecoveryModulePpiGuid, &RecoveryModule
	}	
};

EFI_PHYSICAL_ADDRESS RecoveryBuffer = 0; //!< Address of the recovery image in memory
UINTN RecoveryBufferSize = 0;            //!< Recovery image size
RECOVERY_IMAGE_HOB *pRecoveryHob;        //!< Pointer to recovery image hob

EFI_STATUS ProcessUpdateCapsule(
    IN EFI_PEI_SERVICES **PeiServices,
	RECOVERY_IMAGE_HOB *RecoveryHob
);

/**
  This function verifies recovery image
  
  @param PeiServices  Pointer to pointer to EFI_PEI_SERVICES structure
  @param Buffer       Pointer to pointer to image to verify
  @param Size         Pointer to size of the image to verify
  @param FailedTask   Pointer to store verification error if any

  @retval EFI_SUCCESS Image verification is successful
  @retval other       error occured during execution

**/
EFI_STATUS VerifyFwImage (
  IN CONST EFI_PEI_SERVICES  **PeiServices,
  IN VOID              **Buffer,
  IN OUT UINT32         *Size,
  OUT UINT32            *FailedTask
)
#if defined(SecFlashUpd_SUPPORT) && SecFlashUpd_SUPPORT == 1
;
#define RECOVERY_IMAGE_SIZE FWCAPSULE_IMAGE_SIZE
#else
{ 
    if(FailedTask)
        *FailedTask = 0;
    return EFI_SUCCESS; 
}
#define RECOVERY_IMAGE_SIZE FLASH_SIZE
#endif

/**
  This function reads recovery image from recovery device
  
  @param PeiServices     Pointer to pointer to EFI_PEI_SERVICES structure
  @param pDRM            Pointer to recovery device interface
  @param CapsuleInstance Image index
  @param Size            Image size

  @retval EFI_SUCCESS Image retrieved successfully
  @retval other       error occured during execution

**/
EFI_STATUS ReadCapsule(
	IN EFI_PEI_SERVICES **PeiServices,
	IN EFI_PEI_DEVICE_RECOVERY_MODULE_PPI *pDRM, 
	IN UINTN CapsuleInstance, 
	IN UINTN Size
)
{
	EFI_STATUS Status;
    UINT32     FailedStage;

    if(Size > RecoveryBufferSize){
		Status = (*PeiServices)->AllocatePages(PeiServices, EfiRuntimeServicesData, (Size >> 12) + 1, &RecoveryBuffer);
        if (EFI_ERROR(Status)) 
            return Status;

        RecoveryBufferSize = Size;
    }

	DEBUG((EFI_D_INFO | EFI_D_LOAD, "Loading Recovery Image..."));

	Status = pDRM->LoadRecoveryCapsule(PeiServices, pDRM, CapsuleInstance, (VOID*)RecoveryBuffer);

	DEBUG((EFI_D_INFO | EFI_D_LOAD, "done. Status: %r\n",Status));

	if (EFI_ERROR(Status)) 
        return Status;
	
	if (pRecoveryHob->ImageSize == 0) { //size wasn't updated by recovery device
	    pRecoveryHob->ImageSize = RecoveryBufferSize;
	} else {    
	    if (pRecoveryHob->ImageSize > RECOVERY_IMAGE_SIZE)  //recovery image is bigger than ROM size
	        RecoveryBuffer += (pRecoveryHob->ImageSize - FLASH_SIZE);
	}

    Status = VerifyFwImage(PeiServices, (VOID**)&RecoveryBuffer, (UINT32*)&Size, (UINT32*)&FailedStage ); 
    pRecoveryHob->FailedStage = FailedStage;
    pRecoveryHob->Status = (UINT8)Status;
    if (EFI_ERROR(Status )) {
        REPORT_STATUS_CODE(EFI_ERROR_CODE | EFI_ERROR_MAJOR, PEI_RECOVERY_INVALID_CAPSULE);
        return Status;
    }

    pRecoveryHob->Address = RecoveryBuffer;

	return Status;
}

typedef BOOLEAN (*PREDICATE)(EFI_GUID *pType, VOID* pContext);

/**
  This function searches for the recovery device
  
  @param PeiServices Pointer to pointer to EFI_PEI_SERVICES structure
  @param Criteria    Search criteria
  @param pContext    Pointer to search context

  @retval EFI_SUCCESS Image retrieved successfully
  @retval other       Recovery device not found or inaccessible

**/
EFI_STATUS FindRecoveryDevice(
	IN EFI_PEI_SERVICES **PeiServices,
	IN PREDICATE Criteria, 
	IN VOID *pContext
)
{
	EFI_STATUS Status = EFI_SUCCESS;
	BOOLEAN Loaded = FALSE;
	UINTN i = 0;

	do {
		EFI_PEI_DEVICE_RECOVERY_MODULE_PPI *pRecoveryDevice;
		EFI_PEI_PPI_DESCRIPTOR *pDummy;
		UINTN j, n;

		Status = (*PeiServices)->LocatePpi(PeiServices, &gEfiPeiDeviceRecoveryModulePpiGuid, i++, &pDummy, &pRecoveryDevice);
		if (EFI_ERROR(Status)) 
            break;

		Status = pRecoveryDevice->GetNumberRecoveryCapsules(PeiServices, pRecoveryDevice, &n);
		if (EFI_ERROR(Status)) 
            continue;

		for(j = 0; j < n; j++) {
			UINTN Size;
			EFI_GUID CapsuleType;

			Status = pRecoveryDevice->GetRecoveryCapsuleInfo(PeiServices, pRecoveryDevice, j, &Size, &CapsuleType);
			if (EFI_ERROR(Status) || !Criteria(&CapsuleType, pContext)) 
                continue;

			Status = ReadCapsule(PeiServices, pRecoveryDevice, j, Size);
			if (!EFI_ERROR(Status)){
                Loaded = TRUE; 
                REPORT_STATUS_CODE(EFI_PROGRESS_CODE, PEI_RECOVERY_CAPSULE_LOADED);
                break; 
            }
		}
	} while(!Loaded);
	return Status;
}

/**
  This function searches for the particular GUID in supplied GUID list
  
  @param CapsuleType Pointer GUID to search
  @param List        Pointer to pointer to GUID list

  @retval TRUE  GUID is not found
  @retval FALSE GUID is found

**/
BOOLEAN UnknownType(
        EFI_GUID *CapsuleType, 
        EFI_GUID **List
        )
{
	EFI_GUID **pType;
	for(pType = List; *pType; pType++) if (CompareGuid(*pType,CapsuleType)) return FALSE;
	return TRUE;
}

/**
  This function checks if Firmware Update was initiated by Capsule
  
  @retval TRUE  Firmware Update was initiated by Capsule
  @retval FALSE Firmware Update was not initiated by Capsule

**/
BOOLEAN IsCapsuleUpdate (VOID)
{
    EFI_STATUS Status;
    VOID *d;
    static const EFI_GUID FlashUpdBootModePpiGuid = 
        { 0x2a6e902b, 0xf1f3, 0x4275, { 0xbc, 0x7b, 0x40, 0xfd, 0x4b, 0x54, 0x81, 0xe7 }};
    
    Status = PeiServicesLocatePpi (&FlashUpdBootModePpiGuid, 0, NULL, &d);
    return (EFI_ERROR (Status)) ? FALSE : TRUE;
}

/**
  This function implements upper level recovery interface
  
  @param PeiServices Pointer to pointer to EFI_PEI_SERVICES structure
  @param This        Pointer to EFI_PEI_RECOVERY_MODULE_PPI instance

  @retval EFI_SUCCESS Image retrieved successfully
  @retval other       Recovery image not found or corrupted

**/
EFI_STATUS LoadRecoveryCapsule(
	IN EFI_PEI_SERVICES **PeiServices,
	IN EFI_PEI_RECOVERY_MODULE_PPI *This
)
{
	EFI_GUID **ppType;
	EFI_STATUS Status;
	UINTN i;
	EFI_BOOT_MODE BootMode;

    REPORT_STATUS_CODE(EFI_PROGRESS_CODE, PEI_RECOVERY_STARTED);

// Create Recovery Hob
	Status = (*PeiServices)->CreateHob(
		PeiServices, EFI_HOB_TYPE_GUID_EXTENSION, 
		sizeof(RECOVERY_IMAGE_HOB), &pRecoveryHob);

    if (EFI_ERROR(Status)) 
        return Status;

    pRecoveryHob->Header.Name = gAmiRecoveryImageHobGuid;
    pRecoveryHob->Address = 0;
    pRecoveryHob->FailedStage = 0;
    pRecoveryHob->ImageSize = 0;
	pRecoveryHob->Status = (UINT8)EFI_NOT_FOUND;

	Status = (*PeiServices)->GetBootMode(PeiServices, &BootMode);
	if (!EFI_ERROR(Status) && BootMode == BOOT_ON_FLASH_UPDATE && IsCapsuleUpdate ())
		return ProcessUpdateCapsule(PeiServices, pRecoveryHob);
    
	for(i = 0; i < RECOVERY_SCAN_RETRIES; i++) {
		for(ppType = RecoveryDeviceOrder; *ppType; ppType++) {
			Status = FindRecoveryDevice(PeiServices,CompareGuid,*ppType);
			if (!EFI_ERROR(Status)) 
                return Status;
		}

		Status = FindRecoveryDevice(PeiServices, UnknownType, RecoveryDeviceOrder);
		if (!EFI_ERROR(Status)) break;
	}

    if (EFI_ERROR(Status)) { 
        REPORT_STATUS_CODE(EFI_ERROR_CODE | EFI_ERROR_MAJOR, PEI_RECOVERY_NO_CAPSULE);
        pRecoveryHob->Status = (UINT8)Status;
    }

	return Status;
}

/**
  This function initialize recovery functionality by installing the recovery PPI.
  
  @param FileHandle  Handle of this PEIM
  @param PeiServices Pointer to pointer to EFI_PEI_SERVICES structure

  @retval EFI_SUCCESS Recovery interface installed
  @retval other       Error during execution
**/
EFI_STATUS
EFIAPI
RecoveryEntry (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )
{
	return (*PeiServices)->InstallPpi(PeiServices,RecoveryPpiList);
}


//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2015, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
