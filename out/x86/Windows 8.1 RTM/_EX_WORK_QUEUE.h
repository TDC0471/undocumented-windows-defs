#pragma once
/* ------------------ */

#include <_KPRIQUEUE.h>

//0x1ac bytes (sizeof)
struct _EX_WORK_QUEUE
{
    struct _KPRIQUEUE WorkPriQueue;                                         //0x0
    volatile ULONG WorkItemsProcessed;                                      //0x19c
    ULONG WorkItemsProcessedLastPass;                                       //0x1a0
    volatile LONG ThreadCount;                                              //0x1a4
    volatile UCHAR TryFailed;                                               //0x1a8
};
/* Used in */
// _ENODE

