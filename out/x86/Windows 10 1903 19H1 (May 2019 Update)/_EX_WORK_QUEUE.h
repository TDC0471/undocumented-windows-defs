#pragma once
/* ------------------ */

#include <_KPRIQUEUE.h>
#include <_EX_PARTITION.h>
#include <_ENODE.h>
#include <_EXQUEUEINDEX.h>
#include <_KEVENT.h>

//0x1c0 bytes (sizeof)
struct _EX_WORK_QUEUE
{
    struct _KPRIQUEUE WorkPriQueue;                                         //0x0
    struct _EX_PARTITION* Partition;                                        //0x19c
    struct _ENODE* Node;                                                    //0x1a0
    volatile ULONG WorkItemsProcessed;                                      //0x1a4
    ULONG WorkItemsProcessedLastPass;                                       //0x1a8
    volatile LONG ThreadCount;                                              //0x1ac
    LONG MinThreads:31;                                                     //0x1b0
    volatile ULONG TryFailed:1;                                             //0x1b0
    LONG MaxThreads;                                                        //0x1b4
    enum _EXQUEUEINDEX QueueIndex;                                          //0x1b8
    struct _KEVENT* AllThreadsExitedEvent;                                  //0x1bc
};
/* Used in */
// _EX_PARTITION

