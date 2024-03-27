#pragma once
/* ------------------ */

#include <_HEAP_VAMGR_VASPACE.h>
#include <_HEAP_VAMGR_ALLOCATOR.h>

//0x3040 bytes (sizeof)
struct _HEAP_VAMGR_CTX
{
    struct _HEAP_VAMGR_VASPACE VaSpace;                                     //0x0
    ULONGLONG AllocatorLock;                                                //0x60
    ULONG AllocatorCount;                                                   //0x68
    struct _HEAP_VAMGR_ALLOCATOR Allocators[255];                           //0x70
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

