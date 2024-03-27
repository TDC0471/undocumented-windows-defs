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
    volatile ULONG PagesAllocated;                                          //0x44
    volatile ULONG BigPagesAllocated;                                       //0x48
    volatile ULONG BytesAllocated;                                          //0x4c
    volatile LONG RunningDeallocs;                                          //0x80
    volatile ULONG PagesDeallocated;                                        //0x84
    volatile ULONG BigPagesDeallocated;                                     //0x88
    volatile ULONG BytesDeallocated;                                        //0x8c
    ULONG PoolIndex;                                                        //0xc0
    enum _POOL_TYPE PoolTypeCopy;                                           //0xc4
    struct _SINGLE_LIST_ENTRY PendingFrees;                                 //0x100
    volatile LONG ThreadsProcessingDeferrals;                               //0x104
    volatile LONG PendingFreeDepth;                                         //0x108
    struct _LIST_ENTRY ListHeads[512];                                      //0x140
};
/* Used in */
// _MM_SESSION_SPACE

