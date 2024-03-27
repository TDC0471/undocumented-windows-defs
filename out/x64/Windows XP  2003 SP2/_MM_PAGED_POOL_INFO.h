#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_MMPTE.h>

//0x40 bytes (sizeof)
struct _MM_PAGED_POOL_INFO
{
    struct _RTL_BITMAP* PagedPoolAllocationMap;                             //0x0
    struct _RTL_BITMAP* EndOfPagedPoolBitmap;                               //0x8
    struct _MMPTE* FirstPteForPagedPool;                                    //0x10
    struct _MMPTE* LastPteForPagedPool;                                     //0x18
    struct _MMPTE* NextPdeForPagedPoolExpansion;                            //0x20
    ULONG PagedPoolHint;                                                    //0x28
    ULONGLONG PagedPoolCommit;                                              //0x30
    ULONGLONG AllocatedPagedPool;                                           //0x38
};
/* Used in */
// _MM_SESSION_SPACE

