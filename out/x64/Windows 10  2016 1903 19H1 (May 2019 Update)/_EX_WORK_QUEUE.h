#pragma once
/* ------------------ */

#include <_KPRIQUEUE.h>
#include <_EX_PARTITION.h>
#include <_ENODE.h>
#include <_EXQUEUEINDEX.h>
#include <_KEVENT.h>

//0x2e0 bytes (sizeof)
struct _EX_WORK_QUEUE
{
    struct _KPRIQUEUE WorkPriQueue;                                         //0x0
    struct _EX_PARTITION* Partition;                                        //0x2b0
    struct _ENODE* Node;                                                    //0x2b8
    volatile ULONG WorkItemsProcessed;                                      //0x2c0
    ULONG WorkItemsProcessedLastPass;                                       //0x2c4
    volatile LONG ThreadCount;                                              //0x2c8
    LONG MinThreads:31;                                                     //0x2cc
    volatile ULONG TryFailed:1;                                             //0x2cc
    LONG MaxThreads;                                                        //0x2d0
    enum _EXQUEUEINDEX QueueIndex;                                          //0x2d4
    struct _KEVENT* AllThreadsExitedEvent;                                  //0x2d8
};
/* Used in */
// _EX_PARTITION

