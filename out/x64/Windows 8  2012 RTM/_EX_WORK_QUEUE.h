#pragma once
/* ------------------ */

#include <_KQUEUE.h>

//0x50 bytes (sizeof)
struct _EX_WORK_QUEUE
{
    struct _KQUEUE WorkerQueue;                                             //0x0
    volatile ULONG WorkItemsProcessed;                                      //0x40
    ULONG WorkItemsProcessedLastPass;                                       //0x44
    volatile LONG ThreadCount;                                              //0x48
    volatile UCHAR TryFailed;                                               //0x4c
};
/* Used in */
// _ENODE

