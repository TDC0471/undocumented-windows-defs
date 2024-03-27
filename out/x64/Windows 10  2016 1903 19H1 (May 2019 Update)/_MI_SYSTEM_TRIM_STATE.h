#pragma once
/* ------------------ */

#include <_KEVENT.h>

//0x40 bytes (sizeof)
struct _MI_SYSTEM_TRIM_STATE
{
    ULONGLONG ExpansionLock;                                                //0x0
    volatile LONG TrimInProgressCount;                                      //0x8
    struct _KEVENT PeriodicWorkingSetEvent;                                 //0x10
    ULONG TrimAllPageFaultCount[3];                                         //0x28
};
/* Used in */
// _MI_SYSTEM_INFORMATION

