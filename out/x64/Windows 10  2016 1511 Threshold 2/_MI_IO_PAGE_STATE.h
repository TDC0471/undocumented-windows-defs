#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_LIST_ENTRY.h>
#include <_MI_IO_CACHE_STATS.h>

//0x58 bytes (sizeof)
struct _MI_IO_PAGE_STATE
{
    ULONGLONG IoPfnLock;                                                    //0x0
    struct _RTL_AVL_TREE IoPfnRoot[3];                                      //0x8
    struct _LIST_ENTRY UnusedCachedMaps;                                    //0x20
    ULONG OldestCacheFlushTimeStamp;                                        //0x30
    struct _MI_IO_CACHE_STATS IoCacheStats;                                 //0x38
};
/* Used in */
// _MI_SYSTEM_INFORMATION

