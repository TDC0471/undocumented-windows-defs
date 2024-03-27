#pragma once
/* ------------------ */

#include <_KEVENT.h>

//0x40 bytes (sizeof)
struct _MI_SYSTEM_TRIM_STATE
{
    ULONG ExpansionLock;                                                    //0x0
    volatile LONG TrimInProgressCount;                                      //0x4
    struct _KEVENT PeriodicWorkingSetEvent;                                 //0x8
    ULONG TrimAllPageFaultCount[3];                                         //0x18
};
/* Used in */
// _MI_SYSTEM_INFORMATION

