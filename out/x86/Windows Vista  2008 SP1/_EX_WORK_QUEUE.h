#pragma once
/* ------------------ */

#include <_KQUEUE.h>
#include <EX_QUEUE_WORKER_INFO.h>

//0x3c bytes (sizeof)
struct _EX_WORK_QUEUE
{
    struct _KQUEUE WorkerQueue;                                             //0x0
    ULONG DynamicThreadCount;                                               //0x28
    ULONG WorkItemsProcessed;                                               //0x2c
    ULONG WorkItemsProcessedLastPass;                                       //0x30
    ULONG QueueDepthLastPass;                                               //0x34
    union EX_QUEUE_WORKER_INFO Info;                                        //0x38
};
