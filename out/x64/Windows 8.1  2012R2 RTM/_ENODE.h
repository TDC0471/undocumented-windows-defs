#pragma once
/* ------------------ */

#include <_KNODE.h>
#include <_EX_WORK_QUEUE.h>
#include <_KEVENT.h>
#include <_KTIMER.h>
#include <_KWAIT_BLOCK.h>
#include <_ETHREAD.h>

//0x7c0 bytes (sizeof)
struct _ENODE
{
    struct _KNODE Ncb;                                                      //0x0
    struct _EX_WORK_QUEUE ExWorkQueue[2];                                   //0xc0
    struct _KEVENT ExpThreadSetManagerEvent;                                //0x640
    struct _KEVENT ExpBalancerExitEvent;                                    //0x658
    struct _KTIMER ExpDeadlockTimer;                                        //0x670
    struct _KEVENT ExpThreadReaperEvent;                                    //0x6b0
    struct _KWAIT_BLOCK WaitBlocks[4];                                      //0x6c8
    struct _ETHREAD* ExpWorkerThreadBalanceManagerPtr;                      //0x788
    ULONG ExpWorkerSeed;                                                    //0x790
    union
    {
        struct
        {
            volatile ULONG ExWorkerFullInit:1;                              //0x794
            volatile ULONG ExWorkerStructInit:1;                            //0x794
        };
        volatile ULONG ExWorkerFlags;                                       //0x794
    };
};
