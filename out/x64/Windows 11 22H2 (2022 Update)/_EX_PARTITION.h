#pragma once
/* ------------------ */

#include <_EPARTITION.h>
#include <_EX_WORK_QUEUE.h>
#include <_EX_WORK_QUEUE_MANAGER.h>

//0x20 bytes (sizeof)
struct _EX_PARTITION
{
    struct _EPARTITION* PartitionObject;                                    //0x0
    struct _EX_WORK_QUEUE** volatile* WorkQueues;                           //0x8
    struct _EX_WORK_QUEUE_MANAGER** WorkQueueManagers;                      //0x10
    volatile LONG QueueAllocationMask;                                      //0x18
};
/* Used in */
// _EX_WORK_QUEUE
// _EX_WORK_QUEUE_MANAGER

