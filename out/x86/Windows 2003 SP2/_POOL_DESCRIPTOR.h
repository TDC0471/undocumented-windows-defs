#pragma once
/* ------------------ */

#include <_POOL_TYPE.h>
#include <_LIST_ENTRY.h>

//0x1030 bytes (sizeof)
struct _POOL_DESCRIPTOR
{
    enum _POOL_TYPE PoolType;                                               //0x0
    ULONG PoolIndex;                                                        //0x4
    ULONG RunningAllocs;                                                    //0x8
    ULONG RunningDeAllocs;                                                  //0xc
    ULONG TotalPages;                                                       //0x10
    ULONG TotalBigPages;                                                    //0x14
    ULONG Threshold;                                                        //0x18
    VOID* LockAddress;                                                      //0x1c
    VOID* PendingFrees;                                                     //0x20
    LONG PendingFreeDepth;                                                  //0x24
    ULONG TotalBytes;                                                       //0x28
    ULONG Spare0;                                                           //0x2c
    struct _LIST_ENTRY ListHeads[512];                                      //0x30
};
/* Used in */
// _MM_SESSION_SPACE

