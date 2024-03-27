#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _PPM_VETO_ENTRY
{
    struct _LIST_ENTRY Link;                                                //0x0
    ULONG VetoReason;                                                       //0x10
    ULONG ReferenceCount;                                                   //0x14
};
/* Used in */
// _PPM_VETO_ACCOUNTING

