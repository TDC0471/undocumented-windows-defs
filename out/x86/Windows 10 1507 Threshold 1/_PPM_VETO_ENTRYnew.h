#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _PPM_VETO_ENTRY
{
    struct _LIST_ENTRY Link;                                                //0x0
    ULONG VetoReason;                                                       //0x8
    ULONG ReferenceCount;                                                   //0xc
};
/* Used in */
// _PPM_VETO_ACCOUNTING

