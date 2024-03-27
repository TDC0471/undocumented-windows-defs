#pragma once
/* ------------------ */

#include <_FAST_MUTEX.h>
#include <_RTL_BITMAP_EX.h>
#include <_MMPTE.h>

//0x68 bytes (sizeof)
struct _MM_PAGED_POOL_INFO
{
    struct _FAST_MUTEX Mutex;                                               //0x0
    struct _RTL_BITMAP_EX PagedPoolAllocationMap;                           //0x38
    struct _MMPTE* FirstPteForPagedPool;                                    //0x48
    ULONGLONG MaximumSize;                                                  //0x50
    ULONGLONG PagedPoolHint;                                                //0x58
    ULONGLONG AllocatedPagedPool;                                           //0x60
};
/* Used in */
// _MM_SESSION_SPACE

