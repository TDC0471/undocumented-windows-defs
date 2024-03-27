#pragma once
/* ------------------ */

#include <_KPRIQUEUE.h>
#include <_ENODE.h>
#include <_EXQUEUEINDEX.h>

//0x1b8 bytes (sizeof)
struct _EX_WORK_QUEUE
{
    struct _KPRIQUEUE WorkPriQueue;                                         //0x0
    struct _ENODE* Node;                                                    //0x19c
    volatile ULONG WorkItemsProcessed;                                      //0x1a0
    ULONG WorkItemsProcessedLastPass;                                       //0x1a4
    volatile LONG ThreadCount;                                              //0x1a8
    LONG MinThreads:31;                                                     //0x1ac
    volatile ULONG TryFailed:1;                                             //0x1ac
    LONG MaxThreads;                                                        //0x1b0
    enum _EXQUEUEINDEX QueueIndex;                                          //0x1b4
};
/* Used in */
// _ENODE

