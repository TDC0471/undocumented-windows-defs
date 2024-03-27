#pragma once
/* ------------------ */

#include <_POP_FX_PLUGIN.h>
#include <_LIST_ENTRY.h>
#include <_KSEMAPHORE.h>
#include <_POP_FX_WORK_POOL_ITEM.h>
#include <_KTHREAD.h>

//0x130 bytes (sizeof)
struct _POP_FX_WORK_POOL
{
    struct _POP_FX_PLUGIN* Plugin;                                          //0x0
    ULONGLONG EmergencyWorkQueueLock;                                       //0x8
    struct _LIST_ENTRY EmergencyWorkQueue;                                  //0x10
    struct _KSEMAPHORE WorkPoolQueues[2];                                   //0x20
    volatile LONG WorkItemStatus;                                           //0x60
    struct _POP_FX_WORK_POOL_ITEM WorkItems[4];                             //0x68
    struct _KTHREAD* EmergencyWorkerThread;                                 //0x108
    struct _KTHREAD* DynamicWorkerThreads[4];                               //0x110
};
/* Used in */
// _POP_FX_PLUGIN
// _POP_FX_WORK_POOL_ITEM

