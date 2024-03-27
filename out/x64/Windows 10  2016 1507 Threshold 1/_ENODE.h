#pragma once
/* ------------------ */

#include <_KNODE.h>
#include <_EX_WORK_QUEUE.h>
#include <_KEVENT.h>
#include <_KTIMER.h>
#include <_KWAIT_BLOCK.h>
#include <_ETHREAD.h>

//0x540 bytes (sizeof)
struct _ENODE
{
    struct _KNODE Ncb;                                                      //0x0
    struct _EX_WORK_QUEUE* volatile ExWorkQueues[8];                        //0x100
    struct _EX_WORK_QUEUE ExWorkQueue;                                      //0x140
    struct _KEVENT ExpThreadSetManagerEvent;                                //0x410
    struct _KTIMER ExpDeadlockTimer;                                        //0x428
    struct _KEVENT ExpThreadReaperEvent;                                    //0x468
    struct _KWAIT_BLOCK WaitBlocks[3];                                      //0x480
    struct _ETHREAD* ExpWorkerThreadBalanceManagerPtr;                      //0x510
    ULONG ExpWorkerSeed;                                                    //0x518
    union
    {
        struct
        {
            volatile ULONG ExWorkerFullInit:1;                              //0x51c
            volatile ULONG ExWorkerStructInit:1;                            //0x51c
        };
        volatile ULONG ExWorkerFlags;                                       //0x51c
    };
};
/* Used in */
// _EX_WORK_QUEUE

