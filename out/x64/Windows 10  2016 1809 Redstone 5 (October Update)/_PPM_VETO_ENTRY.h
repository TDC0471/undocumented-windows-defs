#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x40 bytes (sizeof)
struct _PPM_VETO_ENTRY
{
    struct _LIST_ENTRY Link;                                                //0x0
    ULONG VetoReason;                                                       //0x10
    ULONG ReferenceCount;                                                   //0x14
    ULONGLONG HitCount;                                                     //0x18
    ULONGLONG LastActivationTime;                                           //0x20
    ULONGLONG TotalActiveTime;                                              //0x28
    ULONGLONG CsActivationTime;                                             //0x30
    ULONGLONG CsActiveTime;                                                 //0x38
};
/* Used in */
// _PPM_VETO_ACCOUNTING

