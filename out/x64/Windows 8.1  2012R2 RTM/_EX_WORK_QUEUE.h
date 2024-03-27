#pragma once
/* ------------------ */

#include <_KPRIQUEUE.h>

//0x2c0 bytes (sizeof)
struct _EX_WORK_QUEUE
{
    struct _KPRIQUEUE WorkPriQueue;                                         //0x0
    volatile ULONG WorkItemsProcessed;                                      //0x2b0
    ULONG WorkItemsProcessedLastPass;                                       //0x2b4
    volatile LONG ThreadCount;                                              //0x2b8
    volatile UCHAR TryFailed;                                               //0x2bc
};
/* Used in */
// _ENODE

