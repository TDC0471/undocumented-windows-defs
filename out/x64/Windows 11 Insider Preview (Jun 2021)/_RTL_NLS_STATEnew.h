#pragma once
/* ------------------ */

#include <_CPTABLEINFO.h>

//0xb8 bytes (sizeof)
struct _RTL_NLS_STATE
{
    struct _CPTABLEINFO DefaultAcpTableInfo;                                //0x0
    struct _CPTABLEINFO DefaultOemTableInfo;                                //0x40
    WCHAR* ActiveCodePageData;                                              //0x80
    WCHAR* OemCodePageData;                                                 //0x88
    WCHAR* LeadByteInfo;                                                    //0x90
    WCHAR* OemLeadByteInfo;                                                 //0x98
    WCHAR* CaseMappingData;                                                 //0xa0
    WCHAR* UnicodeUpcaseTable844;                                           //0xa8
    WCHAR* UnicodeLowercaseTable844;                                        //0xb0
};
/* Used in */
// _ESERVERSILO_GLOBALS

