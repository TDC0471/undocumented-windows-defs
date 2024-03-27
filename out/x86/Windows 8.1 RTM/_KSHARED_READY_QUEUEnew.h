#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x13c bytes (sizeof)
struct _KSHARED_READY_QUEUE
{
    ULONG Lock;                                                             //0x0
    ULONG ReadySummary;                                                     //0x4
    struct _LIST_ENTRY ReadyListHead[32];                                   //0x8
    CHAR RunningSummary[32];                                                //0x108
    ULONG Span;                                                             //0x128
    ULONG LowProcIndex;                                                     //0x12c
    ULONG QueueIndex;                                                       //0x130
    ULONG ProcCount;                                                        //0x134
    ULONG Affinity;                                                         //0x138
};
/* Used in */
// _KPRCB

