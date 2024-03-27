#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_LIST_ENTRY.h>
#include <_MI_IO_CACHE_STATS.h>

//0x34 bytes (sizeof)
struct _MI_IO_PAGE_STATE
{
    ULONG IoPfnLock;                                                        //0x0
    struct _RTL_AVL_TREE IoPfnRoot[3];                                      //0x4
    struct _LIST_ENTRY UnusedCachedMaps;                                    //0x10
    ULONG OldestCacheFlushTimeStamp;                                        //0x18
    struct _MI_IO_CACHE_STATS IoCacheStats;                                 //0x1c
};
/* Used in */
// _MI_SYSTEM_INFORMATION

