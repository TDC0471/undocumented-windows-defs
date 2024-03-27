#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS
{
    volatile ULONG SmallPagesInUseWithinLarge;                              //0x0
    volatile ULONG OpportunisticLargePageCount;                             //0x4
};
/* Used in */
// _HEAP_RUNTIME_MEMORY_STATS

