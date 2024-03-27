#pragma once
/* ------------------ */

#include <_POP_FX_PLUGIN.h>
#include <_LIST_ENTRY.h>
#include <_KSEMAPHORE.h>
#include <_POP_FX_WORK_POOL_ITEM.h>
#include <_KTHREAD.h>

//0xa0 bytes (sizeof)
struct _POP_FX_WORK_POOL
{
    struct _POP_FX_PLUGIN* Plugin;                                          //0x0
    ULONG EmergencyWorkQueueLock;                                           //0x4
    struct _LIST_ENTRY EmergencyWorkQueue;                                  //0x8
    struct _KSEMAPHORE WorkPoolQueues[2];                                   //0x10
    volatile LONG WorkItemStatus;                                           //0x38
    struct _POP_FX_WORK_POOL_ITEM WorkItems[4];                             //0x3c
    struct _KTHREAD* EmergencyWorkerThread;                                 //0x8c
    struct _KTHREAD* DynamicWorkerThreads[4];                               //0x90
};
/* Used in */
// _POP_FX_PLUGIN
// _POP_FX_WORK_POOL_ITEM

