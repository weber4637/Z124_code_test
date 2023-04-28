/** @file
  MKHI Messages

@copyright
  Copyright (c) 2010 - 2015 Intel Corporation. All rights reserved
  This software and associated documentation (if any) is furnished
  under a license and may only be used or copied in accordance
 with the terms of the license. Except as permitted by the
  license, no part of this software or documentation may be
  reproduced, stored in a retrieval system, or transmitted in any
  form or by any means without the express written consent of
  Intel Corporation.
  This file contains an 'Intel Peripheral Driver' and uniquely
  identified as "Intel Reference Module" and is
  licensed for Intel CPUs and chipsets under the terms of your
  license agreement with Intel or your vendor.  This file may
  be modified by the user, subject to additional terms of the
  license agreement
**/
#ifndef _MKHI_MSGS_H
#define _MKHI_MSGS_H

#ifndef VOLATILE
#define VOLATILE volatile
#endif //VOLATILE

#pragma pack(1)

///
/// Host Address of Fixed Address MEI Header -
/// This is the logical address of the Host client of the message. This address
/// is assigned when the host client registers itself with the Host MEI driver.
///
/// Address 0 is statically allocated for MEI bus message protocol that assists in MEI bus
/// enumeration, power management, error and other bus control functionality.
///
/// Address 1 is statically allocated for host AMT/ASF message
///
#define BIOS_FIXED_HOST_ADDR          0
#define PREBOOT_FIXED_ME_ADDR         7
#define BIOS_ASF_HOST_ADDR            1

///
/// ME Address of Fixed Address MEI Header -
/// This is the logical address of the Intel(R) ME client
/// of the message. This address is assigned during ME firmware initialization.
///
#define HECI_ASF_MESSAGE_ADDR         0x02
#define HECI_FSC_MESSAGE_ADDR         0x03
#define HECI_POLICY_MANAGER_ADDR      0x05
#define HECI_ME_PASSWORD_SERVICE_ADDR 0x06
#define HECI_CORE_MESSAGE_ADDR        0x07
#define HECI_ICC_MESSAGE_ADDR         0x08
#define HECI_TR_MESSAGE_ADDR          0x09
#define HECI_SPI_MESSAGE_ADDR         0x0A

#define NON_BLOCKING                  0
#define BLOCKING                      1

//
// command handle by HCI
//
#define GEN_GET_MKHI_VERSION_CMD      0x01
#define GEN_GET_MKHI_VERSION_CMD_ACK  0x81
#define GEN_GET_FW_VERSION_CMD        0x02
#define GEN_GET_FW_VERSION_CMD_ACK    0x82
#define GEN_UNCFG_WO_PWD_CMD          0x0D
#define GEN_UNCFG_WO_PWD_CMD_ACK      0x8D
#define GEN_SET_ME_RESET_HALT_CMD     0x10
#define GEN_SET_ME_RESET_HALT_CMD_ACK 0x90

#define FWCAPS_GET_RULE_CMD           0x02
#define FWCAPS_SET_RULE_CMD           0x03

//
// Enums for Result field of MHKI Header
//
#define ME_SUCCESS                    0x00
#define ME_ERROR_ALIAS_CHECK_FAILED   0x01
#define ME_INVALID_MESSAGE            0x02
#define ME_M1_DATA_OLDER_VER          0x03
#define ME_M1_DATA_INVALID_VER        0x04
#define ME_INVALID_M1_DATA            0x05

//
// MDES
//
#define MDES_ENABLE_MKHI_CMD      0x09            ///< @deprecated
#define MDES_ENABLE_MKHI_CMD_ACK  0x89            ///< @deprecated

///
/// IFR Update
///
#define MEFWCAPS_ME_FWU_IFR_RULE  0x2E

//
// Manageability State Control
//
#define FIRMWARE_CAPABILITY_OVERRIDE_CMD      0x14
#define FIRMWARE_CAPABILITY_OVERRIDE_CMD_ACK  0x94

//
// End of Post Codes
//
#define HECI_EOP_STATUS_SUCCESS       0x0
#define HECI_EOP_PERFORM_GLOBAL_RESET 0x1

///
/// Typedef for GroupID
///
typedef enum {
  MKHI_CBM_GROUP_ID   = 0,
  MKHI_PM_GROUP_ID,
  MKHI_PWD_GROUP_ID,
  MKHI_FWCAPS_GROUP_ID,
  MKHI_APP_GROUP_ID,
  MKHI_SPI_GROUP_ID,
  MKHI_MDES_GROUP_ID  = 8,
  MKHI_MCA_GROUP_ID   = 0x0A,
  MKHI_MAX_GROUP_ID   = 0x11,
  MKHI_GEN_GROUP_ID   = 0xFF
} MKHI_GROUP_ID;

///
/// MKHI host message header. This header is part of HECI message sent from MEBx via
/// Host Configuration Interface (HCI). ME Configuration Manager or Power Configuration
/// Manager also include this header with appropriate fields set as part of the
/// response message to the HCI.
///
typedef union _MKHI_MESSAGE_HEADER {
  UINT32  Data;
  struct {
    UINT32  GroupId    : 8;
    UINT32  Command    : 7;
    UINT32  IsResponse : 1;
    UINT32  Reserved   : 8;
    UINT32  Result     : 8;
  } Fields;
} MKHI_MESSAGE_HEADER;

///
/// End of Post ACK message
///
typedef struct _CBM_EOP_ACK_DATA {
  UINT32  RequestedActions;
} CBM_EOP_ACK_DATA;

typedef struct _GEN_END_OF_POST_ACK {
  MKHI_MESSAGE_HEADER Header;
  CBM_EOP_ACK_DATA    Data;
} GEN_END_OF_POST_ACK;

typedef union _MKHI_VERSION {
  UINT32  Data;
  struct {
    UINT32  Minor : 16;
    UINT32  Major : 16;
  } Fields;
} MKHI_VERSION;


///
/// MKHI version messages
///
typedef struct _GEN_GET_MKHI_VERSION {
  MKHI_MESSAGE_HEADER MKHIHeader;
} GEN_GET_MKHI_VERSION;

typedef struct _GET_MKHI_VERSION_ACK_DATA {
  MKHI_VERSION  MKHIVersion;
} GET_MKHI_VERSION_ACK_DATA;

typedef struct _GEN_GET_MKHI_VERSION_ACK {
  MKHI_MESSAGE_HEADER       MKHIHeader;
  GET_MKHI_VERSION_ACK_DATA Data;
} GEN_GET_MKHI_VERSION_ACK;

///
/// FW version messages
///
typedef struct _GEN_GET_FW_VER {
  MKHI_MESSAGE_HEADER MKHIHeader;
} GEN_GET_FW_VER;

typedef struct _GEN_GET_FW_VER_ACK_DATA {
  UINT32  CodeMinor    : 16;
  UINT32  CodeMajor    : 16;
  UINT32  CodeBuildNo  : 16;
  UINT32  CodeHotFix   : 16;
  UINT32  RcvyMinor    : 16;
  UINT32  RcvyMajor    : 16;
  UINT32  RcvyBuildNo  : 16;
  UINT32  RcvyHotFix   : 16;
  UINT32  FitcMinor    : 16;
  UINT32  FitcMajor    : 16;
  UINT32  FitcBuildNo  : 16;
  UINT32  FitcHotFix   : 16;
} GEN_GET_FW_VER_ACK_DATA;

typedef struct _GEN_GET_FW_VER_ACK {
  MKHI_MESSAGE_HEADER     MKHIHeader;
  GEN_GET_FW_VER_ACK_DATA Data;
} GEN_GET_FW_VER_ACK;

///
///  Set Manufacturing ME Reset and Halt messages
///
typedef struct _GEN_SET_ME_RESET_HALT {
  MKHI_MESSAGE_HEADER     MKHIHeader;
} GEN_SET_ME_RESET_HALT;

typedef struct _GEN_SET_ME_RESET_HALT_ACK {
  MKHI_MESSAGE_HEADER     MKHIHeader;
} GEN_SET_ME_RESET_HALT_ACK;

///
/// Unconfig without password messages
///
typedef struct _GEN_UNCFG_WO_PWD {
  MKHI_MESSAGE_HEADER MKHIHeader;
} GEN_UNCFG_WO_PWD;

typedef struct _GEN_UNCFG_WO_PWD_ACK {
  MKHI_MESSAGE_HEADER MKHIHeader;
} GEN_UNCFG_WO_PWD_ACK;

///
/// Get Firmware Capability MKHI
///
typedef struct _GET_RULE_DATA {
  UINT32  RuleId;
} GET_RULE_DATA;

typedef struct _GEN_GET_FW_CAPSKU {
  MKHI_MESSAGE_HEADER MKHIHeader;
  GET_RULE_DATA       Data;
} GEN_GET_FW_CAPSKU;

typedef union _RULE_ID {
  UINT32  Data;
  struct {
    UINT32  RuleTypeId : 16;
    UINT32  FeatureId  : 8;
    UINT32  Reserved   : 8;
  } Fields;
} RULE_ID;

typedef struct _SET_RULE_DATA {
  RULE_ID RuleId;
  UINT8   RuleDataLen;
  UINT8   RuleData;
} SET_RULE_DATA;

typedef struct _SET_RULE_ACK_DATA {
  UINT32  RuleId;
} SET_RULE_ACK_DATA;

typedef struct _GEN_SET_FW_CAPSKU {
  MKHI_MESSAGE_HEADER MKHIHeader;
  SET_RULE_DATA       Data;
} GEN_SET_FW_CAPSKU;

typedef struct _GEN_SET_FW_CAPSKU_ACK {
  MKHI_MESSAGE_HEADER MKHIHeader;
  SET_RULE_ACK_DATA   Data;
} GEN_SET_FW_CAPSKU_ACK;
typedef union _MEFWCAPS_SKU {
  UINT32  Data;
  struct {
    UINT32  FullNet         : 1;      ///< [0] Full network manageability
    UINT32  StdNet          : 1;      ///< [1] Standard network manageability
    UINT32  Manageability   : 1;      ///< [2] Manageability
    UINT32  SmallBusiness   : 1;      ///< [3] Small business adavantage
    UINT32  IntegratedTouch : 1;      ///< [4] Intel Integrated Touch
    UINT32  Reserved1       : 1;      ///< [5] Reserved
    UINT32  IntelCLS        : 1;      ///< [6] IntelR Capability Licensing Service (CLS)
    UINT32  Reserved2       : 3;      ///< [9:7] Reserved
    UINT32  ISH             : 1;      ///< [10] IntelR Sensor Hub
    UINT32  Reserved3       : 1;      ///< [11] Reserved
    UINT32  PAVP            : 1;      ///< [12] Protected Audio Video Path (PAVP)
    UINT32  Reserved4       : 4;      ///< [16:13] Reserved
    UINT32  IPV6            : 1;      ///< [17] IPV6
    UINT32  KVM             : 1;      ///< [18] KVM Remote Control (KVM)
    UINT32  OCH             : 1;      ///< [19] Outbreak Containment Heuristic (OCH)
    UINT32  DAL             : 1;      ///< [20] Dynamic Application Loader (DAL)
    UINT32  TLS             : 1;      ///< [21] Cipher Transport Layer (TLS)
    UINT32  Reserved5       : 1;      ///< [22] Reserved
    UINT32  WLAN            : 1;      ///< [23] Wireless LAN (WLAN)
    UINT32  Reserved6       : 5;      ///< [28:24] Reserved
    UINT32  PTT             : 1;      ///< [29] Platform Trust Technoogy (PTT)
    UINT32  Reserved7       : 1;      ///< [30] Reserved
    UINT32  NFC             : 1;      ///< [31] Near Field Communication (NFC)
  } Fields;
} MEFWCAPS_SKU;

typedef struct _AT_STATE_FLAG {     ///< @deprecated
  UINT16  LockState             : 1;  ///< Indicate whether the platform is locked */
  UINT16  AuthenticateModule    : 1;  ///< Preferred Authentication Module */
  UINT16  S3Authentication      : 1;  ///< indicates whether S3 authentication  is enabled */
  UINT16  FlashWearOut          : 1;  ///< indicates whether the AT flash partition is currently in violation of flash wear out rules */
  UINT16  FlashVariableSecurity : 1;  ///< indicates whether the AT flash variables have been tampered with */
  UINT16  Reserved              : 11;
} AT_STATE_FLAG;

typedef struct _AT_STATE_INFO {     ///< @deprecated
  UINT8          State;
  UINT8          LastTheftTrigger;
  AT_STATE_FLAG  flags;
} AT_STATE_INFO;

typedef struct _GEN_GET_FW_CAPS_SKU_ACK_DATA {
  UINT32        RuleID;
  UINT8         RuleDataLen;
  MEFWCAPS_SKU  FWCapSku;
} GEN_GET_FW_CAPS_SKU_ACK_DATA;

typedef struct _GEN_GET_FW_CAPSKU_ACK {
  MKHI_MESSAGE_HEADER           MKHIHeader;
  GEN_GET_FW_CAPS_SKU_ACK_DATA  Data;
} GEN_GET_FW_CAPS_SKU_ACK;

typedef union _GEN_GET_FW_CAPS_SKU_BUFFER {
  GEN_GET_FW_CAPSKU       Request;
  GEN_GET_FW_CAPS_SKU_ACK Response;
} GEN_GET_FW_CAPS_SKU_BUFFER;

typedef enum {
  UPDATE_DISABLED     = 0,
  UPDATE_ENABLED
} LOCAL_FW_UPDATE;

typedef enum {
  LOCAL_FW_ALWAYS     = 0,
  LOCAL_FW_NEVER,
  LOCAL_FW_RESTRICTED,
} LOCAL_FW_QUALIFIER;

typedef struct _GEN_LOCAL_FW_UPDATE_DATA {
  UINT32  RuleId;
  UINT8   RuleDataLen;
  UINT8   RuleData;
  UINT8   Reserved[30];
} GEN_LOCAL_FW_UPDATE_DATA;

typedef struct _GEN_GET_LOCAL_FW_UPDATE {
  MKHI_MESSAGE_HEADER MKHIHeader;
  GET_RULE_DATA       Data;
} GEN_GET_LOCAL_FW_UPDATE;

typedef struct _GEN_GET_LOCAL_FW_UPDATE_ACK {
  MKHI_MESSAGE_HEADER       MKHIHeader;
  GEN_LOCAL_FW_UPDATE_DATA  Data;
} GEN_GET_LOCAL_FW_UPDATE_ACK;

typedef struct _GEN_SET_LOCAL_FW_UPDATE {
  MKHI_MESSAGE_HEADER       MKHIHeader;
  GEN_LOCAL_FW_UPDATE_DATA  Data;
} GEN_SET_LOCAL_FW_UPDATE;

typedef struct _GEN_SET_LOCAL_FW_UPDATE_ACK {
  MKHI_MESSAGE_HEADER MKHIHeader;
  GET_RULE_DATA       Data;
} GEN_SET_LOCAL_FW_UPDATE_ACK;

typedef enum {
  NO_BRAND                                    = 0,
  INTEL_AMT_BRAND,
  INTEL_STAND_MANAGEABILITY_BRAND,
  INTEL_LEVEL_III_MANAGEABILITY_UPGRADE_BRAND,
  INTEL_RESERVED_BRAND,
  INTEL_SMALL_BUSINESS_TECHNOLOGY_BRAND,
} PLATFORM_BRAND;

typedef enum {
  INTEL_ME_CONSUMER_FW                        = 3,
  INTEL_ME_CORPORATE_FW,
} ME_IMAGE_TYPE;

#define REGULAR_SKU               0
#define SUPER_SKU                 1

#define PLATFORM_MARKET_CORPORATE 1
#define PLATFORM_MARKET_CONSUMER  2

#define PLATFORM_MOBILE           1
#define PLATFORM_DESKTOP          2
#define PLATFORM_SERVER           4
#define PLATFORM_WORKSTATION      8

typedef union _PLATFORM_TYPE_RULE_DATA {
  UINT32  Data;
  struct {
    UINT32  PlatformTargetUsageType   : 4;
    UINT32  Reserved                  : 2;
    UINT32  SuperSku                  : 1;
    UINT32  Reserved1                 : 1;
    UINT32  IntelMeFwImageType        : 4;
    UINT32  PlatformBrand             : 4;
    UINT32  Reserved2                 : 16;
  } Fields;
} PLATFORM_TYPE_RULE_DATA;

typedef struct _GEN_PLATFORM_TYPE_DATA {
  UINT32                  RuleId;
  UINT8                   RuleDataLen;
  PLATFORM_TYPE_RULE_DATA RuleData;
  UINT8                   Reserved[27];
} GEN_PLATFORM_TYPE_DATA;

typedef struct _GEN_GET_PLATFORM_TYPE {
  MKHI_MESSAGE_HEADER MKHIHeader;
  GET_RULE_DATA       Data;
} GEN_GET_PLATFORM_TYPE;

typedef struct _GEN_GET_PLATFORM_TYPE_ACK {
  MKHI_MESSAGE_HEADER     MKHIHeader;
  GEN_PLATFORM_TYPE_DATA  Data;
} GEN_GET_PLATFORM_TYPE_ACK;

typedef union _GEN_GET_PLATFORM_TYPE_BUFFER {
  GEN_GET_PLATFORM_TYPE     Request;
  GEN_GET_PLATFORM_TYPE_ACK Response;
} GEN_GET_PLATFORM_TYPE_BUFFER;

typedef struct _GET_FW_FEATURE_STATUS {
  MKHI_MESSAGE_HEADER MKHIHeader;
  UINT32              RuleId;
} GEN_GET_FW_FEATURE_STATUS;

typedef struct _GET_FW_FEATURE_STATUS_ACK {
  MKHI_MESSAGE_HEADER MKHIHeader;
  UINT32              RuleId;
  UINT8               RuleDataLength;
  MEFWCAPS_SKU        RuleData;
} GEN_GET_FW_FEATURE_STATUS_ACK;

typedef struct _SET_FW_FEATURE_STATUS {
  MKHI_MESSAGE_HEADER MKHIHeader;
  UINT32              RuleId;
  UINT8               RuleDataLength;
  UINT32              RuleData;
} SET_FW_FEATURE_STATUS;

typedef struct _SET_FW_FEATURE_STATUS_ACK {
  MKHI_MESSAGE_HEADER MKHIHeader;
  UINT32              RuleId;
} SET_FW_FEATURE_STATUS_ACK;

typedef struct _GEN_AMT_BIOS_SYNCH_INFO {
  MKHI_MESSAGE_HEADER MKHIHeader;
  UINT32              RuleId;
} GEN_AMT_BIOS_SYNCH_INFO;

typedef struct _GEN_AMT_BIOS_SYNCH_INFO_ACK {
  MKHI_MESSAGE_HEADER MKHIHeader;
  UINT32              RuleId;
  UINT8               RuleDataLength;
  UINT32              RuleData;
} GEN_AMT_BIOS_SYNCH_INFO_ACK;

typedef struct _GEN_GET_OEM_TAG_MSG {
  MKHI_MESSAGE_HEADER MKHIHeader;
  UINT32              RuleId;
} GEN_GET_OEM_TAG_MSG;

typedef struct _GEN_GET_OEM_TAG_MSG_ACK {
  MKHI_MESSAGE_HEADER MKHIHeader;
  UINT32              RuleId;
  UINT8               RuleDataLength;
  UINT32              RuleData;
} GEN_GET_OEM_TAG_MSG_ACK;

typedef union _PLATFORM_DEBUG_CAP {
  UINT8   Data;
  struct {
    UINT8 Mdes      : 1;
    UINT8 SvtForPch : 1;
    UINT8 Reserved  : 6;
  } Fields;
} PLATFORM_DEBUG_CAP;

typedef struct _GEN_PLATFORM_DEBUG_CAP_MKHI_CMD_MSG {
  MKHI_MESSAGE_HEADER MKHIHeader;
  PLATFORM_DEBUG_CAP  Capability;
} GEN_PLATFORM_DEBUG_CAP_MKHI_CMD_MSG;

///
/// Manageability State Control MKHI definitions
///
typedef struct _FIRMWARE_CAPABILITY_OVERRIDE_DATA {
  UINT32  EnableFeature;
  UINT32  DisableFeature;
} FIRMWARE_CAPABILITY_OVERRIDE_DATA;

typedef struct _FIRMWARE_CAPABILITY_OVERRIDE {
  MKHI_MESSAGE_HEADER               MKHIHeader;
  FIRMWARE_CAPABILITY_OVERRIDE_DATA FeatureState;
} FIRMWARE_CAPABILITY_OVERRIDE;

typedef enum _FIRMWARE_CAPABILITY_RESPONSE
{
  SET_FEATURE_STATE_ACCEPTED                  = 0,
  SET_FEATURE_STATE_REJECTED
} FIRMWARE_CAPABILITY_RESPONSE;

typedef struct _FIRMWARE_CAPABILITY_OVERRIDE_ACK_DATA {
  FIRMWARE_CAPABILITY_RESPONSE  Response;
} FIRMWARE_CAPABILITY_OVERRIDE_ACK_DATA;

typedef struct _FIRMWARE_CAPABILITY_OVERRIDE_ACK {
  MKHI_MESSAGE_HEADER                   Header;
  FIRMWARE_CAPABILITY_OVERRIDE_ACK_DATA Data;
} FIRMWARE_CAPABILITY_OVERRIDE_ACK;

///
/// Set ACM TPM Data MKHI
///
#define ACM_TPM_DATA_MKHI_DATA        0x00000303
#define ACM_TPM_DATA_RULE_TYPE_ID     0x2F
#define ACM_TPM_DATA_RULE_DATA_LENGTH 0x04

typedef union _TPM_STATE {
  UINT16 Data;
  struct {
    UINT16 Reserved_0     :8;
    UINT16 TpmDeactivate  :1;
    UINT16 Reserved_1     :7;
  } Fields;
} TPM_STATE;

typedef struct _ACM_TPM_DATA {
  RULE_ID   RuleId;
  UINT8     RuleDataLen;
  TPM_STATE TpmState;
  UINT8     Reserved[2];  
} ACM_TPM_DATA;

typedef struct _BIOSNV_SET_ACM_TPM_DATA {
  MKHI_MESSAGE_HEADER MKHIHeader;
  ACM_TPM_DATA        AcmTpmData;
} BIOSNV_SET_ACM_TPM;

typedef struct _BIOSNV_SET_ACM_TPM_DATA_ACK {
  MKHI_MESSAGE_HEADER MKHIHeader;
  RULE_ID             RuleId;
} BIOSNV_SET_ACM_TPM_ACK;

typedef struct _ME_UNCONFIG_ON_RTC_CLEAR_STATE_DATA {
  UINT32  RuleId;
  UINT8   RuleDataLen;
  UINT32  RuleData;
} ME_UNCONFIG_ON_RTC_CLEAR_STATE_DATA;

typedef struct _ME_GET_UNCONFIG_ON_RTC_CLEAR_STATE {
  MKHI_MESSAGE_HEADER MKHIHeader;
  GET_RULE_DATA       Data;
} ME_GET_UNCONFIG_ON_RTC_CLEAR_STATE;

typedef struct _ME_GET_UNCONFIG_ON_RTC_CLEAR_STATE_ACK {
  MKHI_MESSAGE_HEADER                  MKHIHeader;
  ME_UNCONFIG_ON_RTC_CLEAR_STATE_DATA  Data;
} ME_GET_UNCONFIG_ON_RTC_CLEAR_STATE_ACK;

typedef union _ME_GET_UNCONFIG_ON_RTC_CLEAR_STATE_BUFFER {
  ME_GET_UNCONFIG_ON_RTC_CLEAR_STATE     Request;
  ME_GET_UNCONFIG_ON_RTC_CLEAR_STATE_ACK Response;
} ME_GET_UNCONFIG_ON_RTC_CLEAR_STATE_BUFFER;

typedef struct _ME_SET_UNCONFIG_ON_RTC_CLEAR_STATE {
  MKHI_MESSAGE_HEADER                  MKHIHeader;
  ME_UNCONFIG_ON_RTC_CLEAR_STATE_DATA  Data;
} ME_SET_UNCONFIG_ON_RTC_CLEAR_STATE;

typedef struct _ME_SET_UNCONFIG_ON_RTC_CLEAR_STATE_ACK {
  MKHI_MESSAGE_HEADER MKHIHeader;
  GET_RULE_DATA       Data;
} ME_SET_UNCONFIG_ON_RTC_CLEAR_STATE_ACK;

typedef union _ME_SET_UNCONFIG_ON_RTC_CLEAR_STATE_BUFFER {
  ME_SET_UNCONFIG_ON_RTC_CLEAR_STATE     Request;
  ME_SET_UNCONFIG_ON_RTC_CLEAR_STATE_ACK Response;
} ME_SET_UNCONFIG_ON_RTC_CLEAR_STATE_BUFFER;

typedef struct _CORE_BIOS_DONE {
  MKHI_MESSAGE_HEADER    MKHIHeader;
} CORE_BIOS_DONE;

typedef struct _CORE_BIOS_DONE_ACK {
  MKHI_MESSAGE_HEADER    MKHIHeader;
} CORE_BIOS_DONE_ACK;

#pragma pack()

#endif // _MKHI_MSGS_H
