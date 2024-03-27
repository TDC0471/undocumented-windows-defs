#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_RTL_BITMAP_EX.h>
#include <_MMPTE.h>

//0x38 bytes (sizeof)
struct _MM_PAGED_POOL_INFO
{
    struct _EX_PUSH_LOCK Lock;                                              //0x0
    struct _RTL_BITMAP_EX PagedPoolAllocationMap;                           //0x8
    struct _MMPTE* FirstPteForPagedPool;                                    //0x18
    ULONGLONG MaximumSize;                                                  //0x20
    ULONGLONG PagedPoolHint;                                                //0x28
    ULONGLONG AllocatedPagedPool;                                           //0x30
};
/* Used in */
// _MI_VISIBLE_STATE
// _MM_SESSION_SPACE

