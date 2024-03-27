#pragma once
/* ------------------ */

#include <_KNODE.h>
#include <_EX_WORK_QUEUE.h>
#include <_KEVENT.h>
#include <_KTIMER.h>
#include <_KWAIT_BLOCK.h>
#include <_ETHREAD.h>

//0x340 bytes (sizeof)
struct _ENODE
{
    struct _KNODE Ncb;                                                      //0x0
    struct _EX_WORK_QUEUE* volatile ExWorkQueues[8];                        //0xc0
    struct _EX_WORK_QUEUE ExWorkQueue;                                      //0xe0
    struct _KEVENT ExpThreadSetManagerEvent;                                //0x298
    struct _KTIMER ExpDeadlockTimer;                                        //0x2a8
    struct _KEVENT ExpThreadReaperEvent;                                    //0x2d0
    struct _KWAIT_BLOCK WaitBlocks[3];                                      //0x2e0
    struct _ETHREAD* ExpWorkerThreadBalanceManagerPtr;                      //0x328
    ULONG ExpWorkerSeed;                                                    //0x32c
    union
    {
        struct
        {
            volatile ULONG ExWorkerFullInit:1;                              //0x330
            volatile ULONG ExWorkerStructInit:1;                            //0x330
        };
        volatile ULONG ExWorkerFlags;                                       //0x330
    };
};
/* Used in */
// _EX_WORK_QUEUE

