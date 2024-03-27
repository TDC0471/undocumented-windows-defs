#pragma once
/* ------------------ */

#include <_HEAP_VAMGR_VASPACE.h>
#include <_HEAP_VAMGR_ALLOCATOR.h>

//0x1c1c bytes (sizeof)
struct _HEAP_VAMGR_CTX
{
    struct _HEAP_VAMGR_VASPACE VaSpace;                                     //0x0
    ULONG AllocatorLock;                                                    //0x30
    ULONG AllocatorCount;                                                   //0x34
    struct _HEAP_VAMGR_ALLOCATOR Allocators[255];                           //0x38
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

