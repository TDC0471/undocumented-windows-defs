#pragma once
/* ------------------ */

#include <_POOL_TYPE.h>
#include <_LIST_ENTRY.h>

//0x1048 bytes (sizeof)
struct _POOL_DESCRIPTOR
{
    enum _POOL_TYPE PoolType;                                               //0x0
    ULONG PoolIndex;                                                        //0x4
    volatile LONG RunningAllocs;                                            //0x8
    volatile LONG RunningDeAllocs;                                          //0xc
    volatile LONG TotalPages;                                               //0x10
    volatile LONG TotalBigPages;                                            //0x14
    ULONG Threshold;                                                        //0x18
    VOID* LockAddress;                                                      //0x20
    VOID** volatile PendingFrees;                                           //0x28
    volatile LONG ThreadsProcessingDeferrals;                               //0x30
    volatile LONG PendingFreeDepth;                                         //0x34
    volatile ULONGLONG TotalBytes;                                          //0x38
    ULONGLONG Spare0;                                                       //0x40
    struct _LIST_ENTRY ListHeads[256];                                      //0x48
};
/* Used in */
// _MM_SESSION_SPACE

