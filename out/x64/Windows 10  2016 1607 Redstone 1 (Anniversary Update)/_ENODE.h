#pragma once
/* ------------------ */

#include <_KNODE.h>
#include <_EX_WORK_QUEUE.h>
#include <_KEVENT.h>
#include <_KTIMER.h>
#include <_KWAIT_BLOCK.h>
#include <_ETHREAD.h>

//0x840 bytes (sizeof)
struct _ENODE
{
    struct _KNODE Ncb;                                                      //0x0
    struct _EX_WORK_QUEUE* volatile ExWorkQueues[8];                        //0x140
    struct _EX_WORK_QUEUE ExWorkQueue;                                      //0x180
    struct _EX_WORK_QUEUE IoWorkQueue;                                      //0x450
    struct _KEVENT ExpThreadSetManagerEvent;                                //0x720
    struct _KTIMER ExpDeadlockTimer;                                        //0x738
    struct _KEVENT ExpThreadReaperEvent;                                    //0x778
    struct _KWAIT_BLOCK WaitBlocks[3];                                      //0x790
    struct _ETHREAD* ExpWorkerThreadBalanceManagerPtr;                      //0x820
    ULONG ExpWorkerSeed;                                                    //0x828
    union
    {
        struct
        {
            volatile ULONG ExWorkerFullInit:1;                              //0x82c
            volatile ULONG ExWorkerStructInit:1;                            //0x82c
        };
        volatile ULONG ExWorkerFlags;                                       //0x82c
    };
};
/* Used in */
// _EX_WORK_QUEUE

