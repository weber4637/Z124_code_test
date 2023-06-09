/** @file
  Header file for PchHsioLib.

@copyright
 Copyright (c) 2014 - 2015 Intel Corporation. All rights reserved
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
#ifndef _PCH_HSIO_LIB_H_
#define _PCH_HSIO_LIB_H_

#define PCH_HSIO_iolane0_RX  	0x100			//< First lane RX offset for DNV in WM

// Denverton AptioV override start - EIP#425735
#define PCH_HSIO_iolaneX_TxRx     0x200           //< incremental TxRx HSIO DWord ffset for DNV 
// Denverton AptioV override end - EIP#425735

/**
  Represents HSIO lane
**/
typedef struct {
  UINT8        Index; ///< Lane index
  UINT8        Pid;   ///< Sideband ID
  UINT16       Base;  ///< Sideband base address
} HSIO_LANE;

/**
  The function returns the Port Id and lane owner for the specified lane

  @param[in]  PhyMode             Phymode that needs to be checked
  @param[out] Pid                 Common Lane End Point ID
  @param[out] LaneOwner           Lane Owner

  @retval EFI_SUCCESS             Read success
  @retval EFI_INVALID_PARAMETER   Invalid lane number
**/
EFI_STATUS
EFIAPI
PchGetLaneInfo (
  IN  UINT32                            LaneNum,
  OUT UINT8                             *PortId,
  OUT UINT8                             *LaneOwner
  );

/**
  Get HSIO lane representation needed to perform any operation on the lane.

  @param[in]  LaneIndex  Number of the HSIO lane
  @param[out] HsioLane   HSIO lane representation
**/
VOID
HsioGetLane (
  IN   UINT8       LaneIndex,
  OUT  HSIO_LANE   *HsioLane
  );

/**
  Determine the lane number of a specified port

  @param[in]  PcieLaneIndex             PCIE Root Port Lane Index
  @param[out] LaneNum                   Lane Number

  @retval EFI_SUCCESS                   Lane number valid.
  @retval EFI_UNSUPPORTED               Incorrect input device port
**/
EFI_STATUS
PchGetPcieLaneNum (
  UINT32              PcieLaneIndex,
  UINT8               *LaneNum
  );

/**
  Determine the lane number of a specified port

  @param[in]  SataLaneIndex             Sata Lane Index
  @param[out] LaneNum                   Lane Number

  @retval EFI_SUCCESS                   Lane number valid.
  @retval EFI_UNSUPPORTED               Incorrect input device port
**/
EFI_STATUS
PchGetSataLaneNum (
  UINT32              SataLaneIndex,
  UINT8               *LaneNum
  );

/**
  Determine the lane number of a specified port

  @param[in]  Usb3LaneIndex             USB3 Lane Index
  @param[out] LaneNum                   Lane Number

  @retval EFI_SUCCESS                   Lane number valid.
  @retval EFI_UNSUPPORTED               Incorrect input device port
**/
EFI_STATUS
PchGetUsb3LaneNum (
  UINT32              Usb3LaneIndex,
  UINT8               *LaneNum
  );

/**
  Determine the lane number of a specified port

  @param[out] LaneNum                   GBE Lane Number

  @retval EFI_SUCCESS                   Lane number valid.
  @retval EFI_UNSUPPORTED               Incorrect input device port
**/
EFI_STATUS
PchGetGbeLaneNum (
  UINT8               *LaneNum
  );

#endif // _PCH_HSIO_LIB_H_
