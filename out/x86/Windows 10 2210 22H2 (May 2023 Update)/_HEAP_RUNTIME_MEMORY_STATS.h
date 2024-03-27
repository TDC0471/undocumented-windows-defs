#pragma once
/* ------------------ */

#include <_HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS.h>
#include <_RTL_HP_SEG_ALLOC_POLICY.h>

//0x2c bytes (sizeof)
struct _HEAP_RUNTIME_MEMORY_STATS
{
    volatile ULONG TotalReservedPages;                                      //0x0
    volatile ULONG TotalCommittedPages;                                     //0x4
    ULONG FreeCommittedPages;                                               //0x8
    ULONG LfhFreeCommittedPages;                                            //0xc
    struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS LargePageStats[2];          //0x10
    struct _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;             //0x20
};
/* Used in */
// _SEGMENT_HEAP

