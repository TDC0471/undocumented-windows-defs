#pragma once
/* ------------------ */

#include <_CPTABLEINFO.h>

//0xb8 bytes (sizeof)
struct _RTL_NLS_STATE
{
    struct _CPTABLEINFO DefaultAcpTableInfo;                                //0x0
    struct _CPTABLEINFO DefaultOemTableInfo;                                //0x40
    USHORT* ActiveCodePageData;                                             //0x80
    USHORT* OemCodePageData;                                                //0x88
    USHORT* LeadByteInfo;                                                   //0x90
    USHORT* OemLeadByteInfo;                                                //0x98
    USHORT* CaseMappingData;                                                //0xa0
    USHORT* UnicodeUpcaseTable844;                                          //0xa8
    USHORT* UnicodeLowercaseTable844;                                       //0xb0
};
/* Used in */
// _ESERVERSILO_GLOBALS

