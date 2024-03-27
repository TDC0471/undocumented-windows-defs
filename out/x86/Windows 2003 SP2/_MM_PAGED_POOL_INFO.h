#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_MMPTE.h>

//0x20 bytes (sizeof)
struct _MM_PAGED_POOL_INFO
{
    struct _RTL_BITMAP* PagedPoolAllocationMap;                             //0x0
    struct _RTL_BITMAP* EndOfPagedPoolBitmap;                               //0x4
    struct _MMPTE* FirstPteForPagedPool;                                    //0x8
    struct _MMPTE* LastPteForPagedPool;                                     //0xc
    struct _MMPTE* NextPdeForPagedPoolExpansion;                            //0x10
    ULONG PagedPoolHint;                                                    //0x14
    ULONG PagedPoolCommit;                                                  //0x18
    ULONG AllocatedPagedPool;                                               //0x1c
};
/* Used in */
// _MM_SESSION_SPACE

