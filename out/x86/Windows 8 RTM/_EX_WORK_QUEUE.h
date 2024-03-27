#pragma once
/* ------------------ */

#include <_KQUEUE.h>

//0x38 bytes (sizeof)
struct _EX_WORK_QUEUE
{
    struct _KQUEUE WorkerQueue;                                             //0x0
    volatile ULONG WorkItemsProcessed;                                      //0x28
    ULONG WorkItemsProcessedLastPass;                                       //0x2c
    volatile LONG ThreadCount;                                              //0x30
    volatile UCHAR TryFailed;                                               //0x34
};
/* Used in */
// _ENODE

