#pragma once
/* ------------------ */

#include <_KPRIQUEUE.h>
#include <_ENODE.h>
#include <_EXQUEUEINDEX.h>

//0x2d0 bytes (sizeof)
struct _EX_WORK_QUEUE
{
    struct _KPRIQUEUE WorkPriQueue;                                         //0x0
    struct _ENODE* Node;                                                    //0x2b0
    volatile ULONG WorkItemsProcessed;                                      //0x2b8
    ULONG WorkItemsProcessedLastPass;                                       //0x2bc
    volatile LONG ThreadCount;                                              //0x2c0
    LONG MinThreads:31;                                                     //0x2c4
    volatile ULONG TryFailed:1;                                             //0x2c4
    LONG MaxThreads;                                                        //0x2c8
    enum _EXQUEUEINDEX QueueIndex;                                          //0x2cc
};
/* Used in */
// _ENODE

