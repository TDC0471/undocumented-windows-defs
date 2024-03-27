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
    struct _EX_WORK_QUEUE ExWorkQueue[2];                                   //0xc0
    struct _KEVENT ExpThreadSetManagerEvent;                                //0x418
    struct _KEVENT ExpBalancerExitEvent;                                    //0x428
    struct _KTIMER ExpDeadlockTimer;                                        //0x438
    struct _KEVENT ExpThreadReaperEvent;                                    //0x460
    struct _KWAIT_BLOCK WaitBlocks[4];                                      //0x470
    struct _ETHREAD* ExpWorkerThreadBalanceManagerPtr;                      //0x4d0
    ULONG ExpWorkerSeed;                                                    //0x4d4
    union
    {
        struct
        {
            volatile ULONG ExWorkerFullInit:1;                              //0x4d8
            volatile ULONG ExWorkerStructInit:1;                            //0x4d8
        };
        volatile ULONG ExWorkerFlags;                                       //0x4d8
    };
};
