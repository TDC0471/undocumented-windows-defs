#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_LIST_ENTRY.h>
#include <_MI_IO_CACHE_STATS.h>

//0x40 bytes (sizeof)
struct _MI_IO_PAGE_STATE
{
    volatile LONG IoPfnLock;                                                //0x0
    struct _RTL_AVL_TREE IoPfnRoot[3];                                      //0x4
    struct _LIST_ENTRY UnusedCachedMaps;                                    //0x10
    ULONG OldestCacheFlushTimeStamp;                                        //0x18
    struct _MI_IO_CACHE_STATS IoCacheStats;                                 //0x1c
    struct _RTL_AVL_TREE InvariantIoSpace;                                  //0x3c
};
/* Used in */
// _MI_SYSTEM_INFORMATION
