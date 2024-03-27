#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _RTL_HP_SEG_ALLOC_POLICY
{
    ULONG MinLargePages;                                                    //0x0
    ULONG MaxLargePages;                                                    //0x4
    UCHAR MinUtilization;                                                   //0x8
};
/* Used in */
// _HEAP_RUNTIME_MEMORY_STATS

