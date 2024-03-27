#pragma once
/* ------------------ */

#include <_KGUARDED_MUTEX.h>
#include <_RTL_BITMAP.h>
#include <_MMPTE.h>

//0x68 bytes (sizeof)
struct _MM_PAGED_POOL_INFO
{
    struct _KGUARDED_MUTEX Mutex;                                           //0x0
    struct _RTL_BITMAP PagedPoolAllocationMap;                              //0x38
    struct _MMPTE* FirstPteForPagedPool;                                    //0x48
    ULONG PagedPoolHint;                                                    //0x50
    volatile ULONGLONG PagedPoolCommit;                                     //0x58
    volatile ULONGLONG AllocatedPagedPool;                                  //0x60
};
/* Used in */
// _MM_SESSION_SPACE

