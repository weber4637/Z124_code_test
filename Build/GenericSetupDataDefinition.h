#pragma pack(1)
typedef struct{
  UINT8 Numlock;
  UINT8 NEXCOM_MINI_PCIE1;
  UINT8 NEXCOM_MINI_PCIE2;
  UINT8 NEXCOM_4G_LTE;
  #define SETUP_DATA_DEFINITION
  #include <SetupDefinitions.h>
  #undef SETUP_DATA_DEFINITION
} SETUP_DATA;
#pragma pack()

