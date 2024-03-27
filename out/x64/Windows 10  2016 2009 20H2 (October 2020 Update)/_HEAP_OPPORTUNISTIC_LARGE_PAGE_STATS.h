#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS
{
    volatile ULONGLONG SmallPagesInUseWithinLarge;                          //0x0
    volatile ULONGLONG OpportunisticLargePageCount;                         //0x8
};
/* Used in */
// _HEAP_RUNTIME_MEMORY_STATS

