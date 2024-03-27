#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_MMPTE.h>

//0x24 bytes (sizeof)
struct _MM_PAGED_POOL_INFO
{
    struct _RTL_BITMAP* PagedPoolAllocationMap;                             //0x0
    struct _RTL_BITMAP* EndOfPagedPoolBitmap;                               //0x4
    struct _RTL_BITMAP* PagedPoolLargeSessionAllocationMap;                 //0x8
    struct _MMPTE* FirstPteForPagedPool;                                    //0xc
    struct _MMPTE* LastPteForPagedPool;                                     //0x10
    struct _MMPTE* NextPdeForPagedPoolExpansion;                            //0x14
    ULONG PagedPoolHint;                                                    //0x18
    ULONG PagedPoolCommit;                                                  //0x1c
    ULONG AllocatedPagedPool;                                               //0x20
};
/* Used in */
// _MM_SESSION_SPACE

