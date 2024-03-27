#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x38 bytes (sizeof)
struct _PPM_VETO_ENTRY
{
    struct _LIST_ENTRY Link;                                                //0x0
    ULONG VetoReason;                                                       //0x8
    ULONG ReferenceCount;                                                   //0xc
    ULONGLONG HitCount;                                                     //0x10
    ULONGLONG LastActivationTime;                                           //0x18
    ULONGLONG TotalActiveTime;                                              //0x20
    ULONGLONG CsActivationTime;                                             //0x28
    ULONGLONG CsActiveTime;                                                 //0x30
};
/* Used in */
// _PPM_VETO_ACCOUNTING

