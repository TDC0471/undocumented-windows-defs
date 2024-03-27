#pragma once
/* ------------------ */

#include <_KNODE.h>
#include <_EX_WORK_QUEUE.h>
#include <_KEVENT.h>
#include <_ETHREAD.h>

//0x280 bytes (sizeof)
struct _ENODE
{
    struct _KNODE Ncb;                                                      //0x0
    struct _EX_WORK_QUEUE ExWorkerQueues[7];                                //0xc0
    struct _KEVENT ExpThreadSetManagerEvent;                                //0x248
    struct _ETHREAD* ExpWorkerThreadBalanceManagerPtr;                      //0x258
    ULONG ExpWorkerSeed;                                                    //0x25c
    union
    {
        struct
        {
            volatile ULONG ExWorkerFullInit:1;                              //0x260
            volatile ULONG ExWorkerStructInit:1;                            //0x260
        };
        volatile ULONG ExWorkerFlags;                                       //0x260
    };
};
