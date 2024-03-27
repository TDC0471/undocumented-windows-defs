#pragma once
/* ------------------ */

#include <_KNODE.h>
#include <_EX_WORK_QUEUE.h>
#include <_KEVENT.h>
#include <_KTIMER.h>
#include <_KWAIT_BLOCK.h>
#include <_ETHREAD.h>

//0x500 bytes (sizeof)
struct _ENODE
{
    struct _KNODE Ncb;                                                      //0x0
    struct _EX_WORK_QUEUE* volatile ExWorkQueues[8];                        //0xc0
    struct _EX_WORK_QUEUE ExWorkQueue;                                      //0x100
    struct _KEVENT ExpThreadSetManagerEvent;                                //0x3d0
    struct _KTIMER ExpDeadlockTimer;                                        //0x3e8
    struct _KEVENT ExpThreadReaperEvent;                                    //0x428
    struct _KWAIT_BLOCK WaitBlocks[3];                                      //0x440
    struct _ETHREAD* ExpWorkerThreadBalanceManagerPtr;                      //0x4d0
    ULONG ExpWorkerSeed;                                                    //0x4d8
    union
    {
        struct
        {
            volatile ULONG ExWorkerFullInit:1;                              //0x4dc
            volatile ULONG ExWorkerStructInit:1;                            //0x4dc
        };
        volatile ULONG ExWorkerFlags;                                       //0x4dc
    };
};
/* Used in */
// _EX_WORK_QUEUE

