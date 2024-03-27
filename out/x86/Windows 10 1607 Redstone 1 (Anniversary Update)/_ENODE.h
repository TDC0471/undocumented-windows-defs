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
    struct _EX_WORK_QUEUE ExWorkQueue;                                      //0x120
    struct _EX_WORK_QUEUE IoWorkQueue;                                      //0x2d8
    struct _KEVENT ExpThreadSetManagerEvent;                                //0x490
    struct _KTIMER ExpDeadlockTimer;                                        //0x4a0
    struct _KEVENT ExpThreadReaperEvent;                                    //0x4c8
    struct _KWAIT_BLOCK WaitBlocks[3];                                      //0x4d8
    struct _ETHREAD* ExpWorkerThreadBalanceManagerPtr;                      //0x520
    ULONG ExpWorkerSeed;                                                    //0x524
    union
    {
        struct
        {
            volatile ULONG ExWorkerFullInit:1;                              //0x528
            volatile ULONG ExWorkerStructInit:1;                            //0x528
        };
        volatile ULONG ExWorkerFlags;                                       //0x528
    };
};
/* Used in */
// _EX_WORK_QUEUE

