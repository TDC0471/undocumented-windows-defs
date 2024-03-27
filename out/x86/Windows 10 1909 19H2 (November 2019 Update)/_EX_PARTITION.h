#pragma once
/* ------------------ */

#include <_EPARTITION.h>
#include <_EX_WORK_QUEUE.h>
#include <_EX_WORK_QUEUE_MANAGER.h>

//0x10 bytes (sizeof)
struct _EX_PARTITION
{
    struct _EPARTITION* PartitionObject;                                    //0x0
    struct _EX_WORK_QUEUE** volatile* WorkQueues;                           //0x4
    struct _EX_WORK_QUEUE_MANAGER** WorkQueueManagers;                      //0x8
    volatile LONG QueueAllocationMask;                                      //0xc
};
/* Used in */
// _EX_WORK_QUEUE
// _EX_WORK_QUEUE_MANAGER

