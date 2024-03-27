#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
{
    ULONG SecurityAttributeCount;                                           //0x0
    struct _LIST_ENTRY SecurityAttributesList;                              //0x4
    ULONG WorkingSecurityAttributeCount;                                    //0xc
    struct _LIST_ENTRY WorkingSecurityAttributesList;                       //0x10
};
/* Used in */
// _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
// _TOKEN

