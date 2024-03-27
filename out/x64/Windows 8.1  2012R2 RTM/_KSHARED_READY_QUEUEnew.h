#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x268 bytes (sizeof)
struct _KSHARED_READY_QUEUE
{
    ULONGLONG Lock;                                                         //0x0
    ULONG ReadySummary;                                                     //0x8
    struct _LIST_ENTRY ReadyListHead[32];                                   //0x10
    CHAR RunningSummary[64];                                                //0x210
    ULONG Span;                                                             //0x250
    ULONG LowProcIndex;                                                     //0x254
    ULONG QueueIndex;                                                       //0x258
    ULONG ProcCount;                                                        //0x25c
    ULONGLONG Affinity;                                                     //0x260
};
/* Used in */
// _KPRCB

