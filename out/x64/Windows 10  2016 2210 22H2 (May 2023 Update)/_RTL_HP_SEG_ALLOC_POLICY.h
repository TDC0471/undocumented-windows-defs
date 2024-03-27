#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _RTL_HP_SEG_ALLOC_POLICY
{
    ULONGLONG MinLargePages;                                                //0x0
    ULONGLONG MaxLargePages;                                                //0x8
    UCHAR MinUtilization;                                                   //0x10
};
/* Used in */
// _HEAP_RUNTIME_MEMORY_STATS

