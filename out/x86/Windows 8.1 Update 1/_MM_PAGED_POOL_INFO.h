#pragma once
/* ------------------ */

#include <_FAST_MUTEX.h>
#include <_RTL_BITMAP.h>
#include <_MMPTE.h>

//0x38 bytes (sizeof)
struct _MM_PAGED_POOL_INFO
{
    struct _FAST_MUTEX Mutex;                                               //0x0
    struct _RTL_BITMAP PagedPoolAllocationMap;                              //0x20
    struct _MMPTE* FirstPteForPagedPool;                                    //0x28
    ULONG MaximumSize;                                                      //0x2c
    ULONG PagedPoolHint;                                                    //0x30
    ULONG AllocatedPagedPool;                                               //0x34
};
/* Used in */
// _MM_SESSION_SPACE

