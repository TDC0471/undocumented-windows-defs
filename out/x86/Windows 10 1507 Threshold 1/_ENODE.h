#pragma once
/* ------------------ */

#include <_KNODE.h>
#include <_EX_WORK_QUEUE.h>
#include <_KEVENT.h>
#include <_KTIMER.h>
#include <_KWAIT_BLOCK.h>
#include <_ETHREAD.h>

//0x380 bytes (sizeof)
struct _ENODE
{
    struct _KNODE Ncb;                                                      //0x0
    struct _EX_WORK_QUEUE* volatile ExWorkQueues[8];                        //0x100
    struct _EX_WORK_QUEUE ExWorkQueue;                                      //0x120
    struct _KEVENT ExpThreadSetManagerEvent;                                //0x2d8
    struct _KTIMER ExpDeadlockTimer;                                        //0x2e8
    struct _KEVENT ExpThreadReaperEvent;                                    //0x310
    struct _KWAIT_BLOCK WaitBlocks[3];                                      //0x320
    struct _ETHREAD* ExpWorkerThreadBalanceManagerPtr;                      //0x368
    ULONG ExpWorkerSeed;                                                    //0x36c
    union
    {
        struct
        {
            volatile ULONG ExWorkerFullInit:1;                              //0x370
            volatile ULONG ExWorkerStructInit:1;                            //0x370
        };
        volatile ULONG ExWorkerFlags;                                       //0x370
    };
};
/* Used in */
// _EX_WORK_QUEUE

