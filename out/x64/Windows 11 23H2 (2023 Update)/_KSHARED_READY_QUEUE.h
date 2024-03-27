#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPRIORITY_STATE.h>
#include <_KHETERO_STATE.h>
#include <_KDPC.h>
#include <_KSHARED_READY_QUEUE_HETERO_STATISTICS.h>

//0x680 bytes (sizeof)
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
    UCHAR Spare1[2];                                                        //0x296
    ULONGLONG Affinity;                                                     //0x298
    ULONG ReadyThreadCount;                                                 //0x2a0
    UCHAR SoftParkElectionScheduled;                                        //0x2a4
    UCHAR Spare2[3];                                                        //0x2a5
    ULONGLONG ReadyQueueExpectedRunTime;                                    //0x2a8
    ULONGLONG SoftParkElectionGeneration;                                   //0x2b0
    ULONGLONG SoftParkElectionRunTime;                                      //0x2b8
    struct _KDPC SoftParkElectionDpc;                                       //0x2c0
    struct _KSHARED_READY_QUEUE_HETERO_STATISTICS SoftParkElectionHeteroStats; //0x300
};
/* Used in */
// _KPRCB

