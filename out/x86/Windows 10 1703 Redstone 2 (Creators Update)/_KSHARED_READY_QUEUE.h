#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x140 bytes (sizeof)
struct _KSHARED_READY_QUEUE
{
    ULONG Lock;                                                             //0x0
    ULONG ReadySummary;                                                     //0x4
    struct _LIST_ENTRY ReadyListHead[32];                                   //0x8
    CHAR RunningSummary[32];                                                //0x108
    UCHAR Span;                                                             //0x128
    UCHAR LowProcIndex;                                                     //0x129
    UCHAR QueueIndex;                                                       //0x12a
    UCHAR ProcCount;                                                        //0x12b
    UCHAR ScanOwner;                                                        //0x12c
    UCHAR Spare[3];                                                         //0x12d
    ULONG Affinity;                                                         //0x130
    ULONG ReadyThreadCount;                                                 //0x134
    ULONGLONG ReadyQueueExpectedRunTime;                                    //0x138
};
/* Used in */
// _KPRCB

