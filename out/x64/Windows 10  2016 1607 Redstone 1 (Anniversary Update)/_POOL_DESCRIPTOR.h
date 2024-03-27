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
        struct _FAST_MUTEX PagedLock;                                       //0x8
        ULONGLONG NonPagedLock;                                             //0x8
    };
    volatile LONG RunningAllocs;                                            //0x40
    volatile ULONGLONG PagesAllocated;                                      //0x48
    volatile ULONGLONG BigPagesAllocated;                                   //0x50
    volatile ULONGLONG BytesAllocated;                                      //0x58
    volatile LONG RunningDeallocs;                                          //0x80
    volatile ULONGLONG PagesDeallocated;                                    //0x88
    volatile ULONGLONG BigPagesDeallocated;                                 //0x90
    volatile ULONGLONG BytesDeallocated;                                    //0x98
    ULONG PoolIndex;                                                        //0xc0
    enum _POOL_TYPE PoolTypeCopy;                                           //0xc4
    struct _SINGLE_LIST_ENTRY PendingFrees;                                 //0x100
    volatile LONG ThreadsProcessingDeferrals;                               //0x108
    volatile LONG PendingFreeDepth;                                         //0x10c
    struct _LIST_ENTRY ListHeads[256];                                      //0x140
};
/* Used in */
// _MM_SESSION_SPACE

