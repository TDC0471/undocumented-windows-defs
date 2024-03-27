#pragma once
/* ------------------ */

#include <_MI_PARTITION.h>
#include <_LIST_ENTRY.h>
#include <_MI_COMBINE_WORKITEM.h>
#include <_MI_COMBINE_PAGE_LISTHEAD.h>
#include <_MI_PAGE_COMBINE_STATISTICS.h>

//0x190 bytes (sizeof)
struct _MI_PAGE_COMBINING_SUPPORT
{
    struct _MI_PARTITION* Partition;                                        //0x0
    struct _LIST_ENTRY ArbitraryPfnMapList;                                 //0x8
    struct _MI_COMBINE_WORKITEM FreeCombinePoolItem;                        //0x18
    ULONG CombiningThreadCount;                                             //0x40
    struct _LIST_ENTRY CombinePageFreeList;                                 //0x48
    ULONGLONG CombineFreeListLock;                                          //0x58
    struct _MI_COMBINE_PAGE_LISTHEAD CombinePageListHeads[16];              //0x60
    ULONGLONG CommonPageCombineDomain;                                      //0x160
    struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats;                    //0x168
};
/* Used in */
// _MI_PARTITION

