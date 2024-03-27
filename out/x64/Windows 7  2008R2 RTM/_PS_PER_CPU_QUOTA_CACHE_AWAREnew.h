#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x40 bytes (sizeof)
struct _PS_PER_CPU_QUOTA_CACHE_AWARE
{
    struct _LIST_ENTRY SortedListEntry;                                     //0x0
    struct _LIST_ENTRY IdleOnlyListHead;                                    //0x10
    ULONGLONG CycleBaseAllowance;                                           //0x20
    LONGLONG CyclesRemaining;                                               //0x28
    ULONG CurrentGeneration;                                                //0x30
};
/* Used in */
// _PS_CPU_QUOTA_BLOCK

