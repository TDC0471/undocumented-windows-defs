#pragma once
/* ------------------ */

#include <_HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS.h>
#include <_RTL_HP_SEG_ALLOC_POLICY.h>

//0x58 bytes (sizeof)
struct _HEAP_RUNTIME_MEMORY_STATS
{
    volatile ULONGLONG TotalReservedPages;                                  //0x0
    volatile ULONGLONG TotalCommittedPages;                                 //0x8
    ULONGLONG FreeCommittedPages;                                           //0x10
    ULONGLONG LfhFreeCommittedPages;                                        //0x18
    struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS LargePageStats[2];          //0x20
    struct _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;             //0x40
};
/* Used in */
// _SEGMENT_HEAP

