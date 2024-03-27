#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPRIORITY_STATE.h>
#include <_KHETERO_STATE.h>

//0x2b0 bytes (sizeof)
struct _KSHARED_READY_QUEUE
{
    ULONGLONG Lock;                                                         //0x0
    ULONG ReadySummary;                                                     //0x8
    struct _LIST_ENTRY ReadyListHead[32];                                   //0x10
    union _KPRIORITY_STATE RunningSummary[64];                              //0x210
    union _KHETERO_STATE HeteroRunningSummary[64];                          //0x250
    UCHAR Span;                                                             //0x290
    UCHAR LowProcIndex;                                                     //0x291
    UCHAR QueueIndex;                                                       //0x292
    UCHAR NormalPriorityQueueIndex;                                         //0x293
    UCHAR ProcCount;                                                        //0x294
    UCHAR ScanOwner;                                                        //0x295
    UCHAR Spare[2];                                                         //0x296
    ULONGLONG Affinity;                                                     //0x298
    ULONG ReadyThreadCount;                                                 //0x2a0
    ULONGLONG ReadyQueueExpectedRunTime;                                    //0x2a8
};
/* Used in */
// _KPRCB

