/*++
//
// This file contains an 'Intel Peripheral Driver' and is
// licensed for Intel CPUs and chipsets under the terms of your
// license agreement with Intel or your vendor.  This file may
// be modified by the user, subject to additional terms of the
// license agreement
//

Copyright (c) 2020 Intel Corporation. All rights reserved
This software and associated documentation (if any) is furnished
under a license and may only be used or copied in accordance
with the terms of the license. Except as permitted by such
license, no part of this software or documentation may be
reproduced, stored in a retrieval system, or transmitted in any
form or by any means without the express written consent of
Intel Corporation.


Module Name:

  Bver.h

Abstract:

  This file describes the contents of the BVER ACPI system descriptor table (SDT).

--*/

#ifndef _ACPI_BVER_H_
#define _ACPI_BVER_H_

//
// Statements that include other files
//
#include <IndustryStandard/Acpi.h>

//
// Format of the "payload" area read from geoSPI chip
// This data is copied to the BVER table
//
/*
typedef struct {
    char *dev;      // path to MTD, not part of the data payload

// Of these parameters, "slot, chassis, & cabinet" should be given
    int index;      // Lemming ID, within a slot / blade
    int slot;       // Slot within a chassis [0-7]
    int chassis;    /* Chassis within a cab [0-7]
    int cabinet;    // Rack index

// The rest of these are optional and the nC/sC will function ok without
    int nvid;       // Node Management Network VLAN ID
    int hvid;       // Hardware Management Network VLAN ID

    char *gmac;     // Base geo-encoded MAC addr for Management IF
    char *name;     // Short host name
    char *hash;     // Glibc "shadow" compatible superuser password hash
} geoargs_t;
*/

#pragma pack(1)

typedef struct {
  CHAR16    BoardId[7];             // "TRFTCRB"
  CHAR16    BoardRev;               // "1"
  CHAR16    Dot1;                   // "."
  CHAR16    BoardExt[3];            // "000"
  CHAR16    Dot2;                   // "."
  CHAR16    VersionMajor[4];        // "0008"
  CHAR16    Dot3;                   // "."
  CHAR16    BuildType;              // "D"
  CHAR16    VersionMinor[2];        // "03"
  CHAR16    Dot4;                   // "."
  CHAR16    TimeStamp[10];          // "YYMMDDHHMM"
  CHAR16    NullTerminator;         // 0x0000
} BIOS_ID_STRING;

//
// A signature precedes the BIOS ID string in the FV to enable search by external tools.
//
typedef struct {
  UINT8             Signature[8];   // "$IBIOSI$"
  BIOS_ID_STRING    BiosIdString;   // "TRFTCRB1.000.0008.D03.1501301017"
} BIOS_ID_IMAGE;

#define EFI_BVER_TABLE_SIGNATURE          SIGNATURE_32('B','V','E','R')

//
// BIOS Version structure
//
typedef struct {
  CHAR16    BiosIdString[32 + 1];                       // null-terminated string e.g. HAVLCRB0.X64.0016.D13.2002290115
  CHAR16    BiosVersion[8 + 1];                         // string + null-termination e.g. 0016.D13/0
} BVER_STRUCTURE;

//
// geoSPI chip data header
//
typedef struct {
  UINT32  Dcrc;                 // Stored data CRC, host endian
  UINT32  Magic;                // Magic value, host endian
  UINT32  Version;              // Flash format version or storage type
  UINT32  PayloadLen;           // Length of payload byte string
} GEO_SPI_HEADER_STRUCTURE;

//
// Complete BVER SDT structure
//
typedef struct {
  EFI_ACPI_DESCRIPTION_HEADER   Header;
  BVER_STRUCTURE                BverData;
  GEO_SPI_HEADER_STRUCTURE      GeoSpiHeader;
  UINT8                         PayloadStr[0x10000 - sizeof(GEO_SPI_HEADER_STRUCTURE)];    // Payload data, variable length, max 64K minus header
} EFI_BVER_ACPI_DESCRIPTION_TABLE;

#pragma pack()

//
// This is copied from Include\Acpi.h
//
#define CREATOR_ID_INTEL        0x4C544E49  //"LTNI""INTL"(Intel)
#define CREATOR_REV_INTEL       0x20090903
// Defined already in AmiCompatibilityPkg\Include\AmiProtocol.h
//#define EFI_ACPI_TABLE_VERSION_ALL  (EFI_ACPI_TABLE_VERSION_1_0B|EFI_ACPI_TABLE_VERSION_2_0|EFI_ACPI_TABLE_VERSION_3_0)

#endif
