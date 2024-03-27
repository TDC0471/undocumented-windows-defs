#pragma once
/* ------------------ */

#include <_KQUEUE.h>
#include <EX_QUEUE_WORKER_INFO.h>

//0x58 bytes (sizeof)
struct _EX_WORK_QUEUE
{
    struct _KQUEUE WorkerQueue;                                             //0x0
    ULONG DynamicThreadCount;                                               //0x40
    ULONG WorkItemsProcessed;                                               //0x44
    ULONG WorkItemsProcessedLastPass;                                       //0x48
    ULONG QueueDepthLastPass;                                               //0x4c
    union EX_QUEUE_WORKER_INFO Info;                                        //0x50
};
