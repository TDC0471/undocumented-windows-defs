#pragma once
/* ------------------ */

#include <_POOL_TYPE.h>
#include <_FAST_MUTEX.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_LIST_ENTRY.h>

//0x1140 bytes (sizeof)
struct _POOL_DESCRIPTOR
{
    enum _POOL_TYPE PoolType;                                               //0x0
    union
    {
        struct _FAST_MUTEX PagedLock;                                       //0x4
        ULONG NonPagedLock;                                                 //0x4
    };
    volatile LONG RunningAllocs;                                            //0x40
    volatile LONG RunningDeAllocs;                                          //0x44
    volatile LONG TotalBigPages;                                            //0x48
    volatile LONG ThreadsProcessingDeferrals;                               //0x4c
    volatile ULONG TotalBytes;                                              //0x50
    ULONG PoolIndex;                                                        //0x80
    volatile LONG TotalPages;                                               //0xc0
    volatile struct _SINGLE_LIST_ENTRY PendingFrees;                        //0x100
    volatile LONG PendingFreeDepth;                                         //0x104
    struct _LIST_ENTRY ListHeads[512];                                      //0x140
};
/* Used in */
// _MM_SESSION_SPACE

