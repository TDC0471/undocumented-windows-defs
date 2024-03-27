#pragma once
/* ------------------ */

#include <_KNODE.h>
#include <_EX_WORK_QUEUE.h>
#include <_KEVENT.h>
#include <_ETHREAD.h>

//0x340 bytes (sizeof)
struct _ENODE
{
    struct _KNODE Ncb;                                                      //0x0
    struct _EX_WORK_QUEUE ExWorkerQueues[7];                                //0xc0
    struct _KEVENT ExpThreadSetManagerEvent;                                //0x2f0
    struct _ETHREAD* ExpWorkerThreadBalanceManagerPtr;                      //0x308
    ULONG ExpWorkerSeed;                                                    //0x310
    union
    {
        struct
        {
            volatile ULONG ExWorkerFullInit:1;                              //0x314
            volatile ULONG ExWorkerStructInit:1;                            //0x314
        };
        volatile ULONG ExWorkerFlags;                                       //0x314
    };
};
