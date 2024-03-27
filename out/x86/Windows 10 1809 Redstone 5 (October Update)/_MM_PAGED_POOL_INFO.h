#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_RTL_BITMAP.h>
#include <_MMPTE.h>

//0x1c bytes (sizeof)
struct _MM_PAGED_POOL_INFO
{
    struct _EX_PUSH_LOCK Lock;                                              //0x0
    struct _RTL_BITMAP PagedPoolAllocationMap;                              //0x4
    struct _MMPTE* FirstPteForPagedPool;                                    //0xc
    ULONG MaximumSize;                                                      //0x10
    ULONG PagedPoolHint;                                                    //0x14
    ULONG AllocatedPagedPool;                                               //0x18
};
/* Used in */
// _MI_VISIBLE_STATE
// _MM_SESSION_SPACE

