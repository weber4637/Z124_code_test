//*****************************************************************
//*****************************************************************
//**                                                             **
//**      (C)Copyright 1985-2008, American Megatrends, Inc.      **
//**                                                             **
//**                     All Rights Reserved.                    **
//**                                                             **
//**      5555 Oakbrook Pkwy, Suite 200, Norcross, GA 30093      **
//**                                                             **
//**                     Phone (770)-246-8600                    **
//**                                                             **
//*****************************************************************
//*****************************************************************
//***************************************************************************
//* This source file was generated automatically using the AMI Setup Script *
//* Processor (SSP).  Do not edit this file.  If changes are needed, edit   *
//* the script file(s) used by SSP to generate this file.                   *
//***************************************************************************
//
// This file is in "Style 2" format. 
// Style 2 format is enabled because AMISSP.EXE
// was invoked with the -S2 command line switch.
//-----------------------------------------------------------------------
#if !defined(_SSP_CONSTANTS_H) && !defined(USING_SSP_MACROS)
#define _SSP_CONSTANTS_H

//------------- If not using macros -------------

#define CMOS_LAYOUT_CHECKSUM 0x093      // Checksum
#define FIRST_CMOS_REGISTER 0x00040     // First CMOS Register
#define LAST_CMOS_REGISTER 0x00050      // Last CMOS Register
#define TOTAL_CMOS_TOKENS 0x0000B       // Total number of tokens
#define TOTAL_NOT_CHECKSUMMED 0x0000C   // Total number of CMOS registers not checksummed
#define TOTAL_NOT_MANAGED 0x00005       // Total number of CMOS registers un-managed

#else
//------------- If using macros -------------

   //-----------------------------------------------------------
   //  Usage Example: (Initializing a local array)              
   //                                                           
   //           #define USING_SSP_MACROS                        
   //           UINT16 Optimal[] = {                            
   //                 #define NvramOptimalDataTable(val) {val}, 
   //                 #include "SspData.h"                    
   //           }                                               
   //-----------------------------------------------------------

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
//             All CMOS Tokens 
#ifndef CmosTokenTable
  #define CmosTokenTable(name,val)
#endif
CmosTokenTable("CMOS_CHECKSUM_HIGH", 0x8200)
CmosTokenTable("CMOS_CHECKSUM_LOW", 0x8208)
CmosTokenTable("CMOS_API_BYTE3", 0x8210)
CmosTokenTable("CMOS_API_BYTE2", 0x8218)
CmosTokenTable("CMOS_API_BYTE1", 0x8220)
CmosTokenTable("CMOS_API_BYTE0", 0x8228)
CmosTokenTable("CMOS_5G_4G_FLAG", 0x8280)
CmosTokenTable("CMOS_MGR_BATTERY_BAD", 0x1230)
CmosTokenTable("CMOS_MGR_CHECKSUM_BAD", 0x1231)
CmosTokenTable("CMOS_MGR_DEFAULTS_LOADED", 0x1232)
CmosTokenTable("CMOS_MGR_FIRST_BOOT_DETECTED", 0x1233)
#ifdef CmosTokenTable
  #undef CmosTokenTable
#endif

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
//             CMOS optimal default values 
#ifndef NvramOptimalDataTable
  #define NvramOptimalDataTable(val)
#endif
  NvramOptimalDataTable(0x000)  // Offset 0x40
  NvramOptimalDataTable(0x000)  // Offset 0x41
  NvramOptimalDataTable(0x000)  // Offset 0x47
  NvramOptimalDataTable(0x000)  // Offset 0x48
  NvramOptimalDataTable(0x000)  // Offset 0x49
  NvramOptimalDataTable(0x000)  // Offset 0x4A
  NvramOptimalDataTable(0x000)  // Offset 0x4B
  NvramOptimalDataTable(0x000)  // Offset 0x4C
  NvramOptimalDataTable(0x000)  // Offset 0x4D
  NvramOptimalDataTable(0x000)  // Offset 0x4E
  NvramOptimalDataTable(0x000)  // Offset 0x4F
  NvramOptimalDataTable(0x0FF)  // Offset 0x50
#ifdef NvramOptimalDataTable
  #undef NvramOptimalDataTable
#endif

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
//             CMOS locations excluded from checksum 
#ifndef NonChecksumTable
  #define NonChecksumTable(val)
#endif
  NonChecksumTable(0x00040)
  NonChecksumTable(0x00041)
  NonChecksumTable(0x00047)
  NonChecksumTable(0x00048)
  NonChecksumTable(0x00049)
  NonChecksumTable(0x0004A)
  NonChecksumTable(0x0004B)
  NonChecksumTable(0x0004C)
  NonChecksumTable(0x0004D)
  NonChecksumTable(0x0004E)
  NonChecksumTable(0x0004F)
  NonChecksumTable(0x00050)
#ifdef NonChecksumTable
  #undef NonChecksumTable
#endif

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
//             List of string and password type tokens 
#ifndef CmosStringsTable
  #define CmosStringsTable(val)
#endif
  CmosStringsTable(0x00000)  // End of table
#ifdef CmosStringsTable
  #undef CmosStringsTable
#endif

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
//             CMOS locations not managed 
#ifndef UnmanagedTable
  #define UnmanagedTable(val)
#endif
  UnmanagedTable(0x42)
  UnmanagedTable(0x43)
  UnmanagedTable(0x44)
  UnmanagedTable(0x45)
  UnmanagedTable(0x46)
#ifdef UnmanagedTable
  #undef UnmanagedTable
#endif

#endif  // #if !defined(_SSP_CONSTANTS_H) && !defined(USING_SSP_MACROS)

//*****************************************************************
//*****************************************************************
//**                                                             **
//**      (C)Copyright 1985-2008, American Megatrends, Inc.      **
//**                                                             **
//**                     All Rights Reserved.                    **
//**                                                             **
//**      5555 Oakbrook Pkwy, Suite 200, Norcross, GA 30093      **
//**                                                             **
//**                     Phone (770)-246-8600                    **
//**                                                             **
//*****************************************************************
//*****************************************************************