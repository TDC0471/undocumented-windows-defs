#pragma once
/* ------------------ */

#include <_MI_PARTITION.h>
#include <_LIST_ENTRY.h>
#include <_MI_COMBINE_WORKITEM.h>
#include <_MI_COMBINE_PAGE_LISTHEAD.h>
#include <_MI_PAGE_COMBINE_STATISTICS.h>

//0xd8 bytes (sizeof)
struct _MI_PAGE_COMBINING_SUPPORT
{
    struct _MI_PARTITION* Partition;                                        //0x0
    struct _LIST_ENTRY ArbitraryPfnMapList;                                 //0x4
    struct _MI_COMBINE_WORKITEM FreeCombinePoolItem;                        //0xc
    ULONG CombiningThreadCount;                                             //0x20
    struct _LIST_ENTRY CombinePageFreeList;                                 //0x24
    ULONG CombineFreeListLock;                                              //0x2c
    struct _MI_COMBINE_PAGE_LISTHEAD CombinePageListHeads[16];              //0x30
    struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats;                    //0xb0
};
/* Used in */
// _MI_PARTITION

