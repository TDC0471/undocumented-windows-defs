#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x30 bytes (sizeof)
struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
{
    ULONG SecurityAttributeCount;                                           //0x0
    struct _LIST_ENTRY SecurityAttributesList;                              //0x8
    ULONG WorkingSecurityAttributeCount;                                    //0x18
    struct _LIST_ENTRY WorkingSecurityAttributesList;                       //0x20
};
/* Used in */
// _TOKEN

