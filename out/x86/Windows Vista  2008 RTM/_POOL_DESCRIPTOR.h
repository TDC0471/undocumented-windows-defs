#pragma once
/* ------------------ */

#include <_POOL_TYPE.h>
#include <_LIST_ENTRY.h>

//0x1034 bytes (sizeof)
struct _POOL_DESCRIPTOR
{
    enum _POOL_TYPE PoolType;                                               //0x0
    ULONG PoolIndex;                                                        //0x4
    volatile LONG RunningAllocs;                                            //0x8
    volatile LONG RunningDeAllocs;                                          //0xc
    volatile LONG TotalPages;                                               //0x10
    volatile LONG TotalBigPages;                                            //0x14
    ULONG Threshold;                                                        //0x18
    VOID* LockAddress;                                                      //0x1c
    VOID** volatile PendingFrees;                                           //0x20
    volatile LONG ThreadsProcessingDeferrals;                               //0x24
    volatile LONG PendingFreeDepth;                                         //0x28
    volatile ULONG TotalBytes;                                              //0x2c
    ULONG Spare0;                                                           //0x30
    struct _LIST_ENTRY ListHeads[512];                                      //0x34
};
/* Used in */
// _MM_SESSION_SPACE

