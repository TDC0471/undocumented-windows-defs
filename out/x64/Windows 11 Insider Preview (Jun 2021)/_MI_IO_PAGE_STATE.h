#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_MI_IO_CACHE_STATS.h>

//0xc0 bytes (sizeof)
struct _MI_IO_PAGE_STATE
{
    struct _RTL_AVL_TREE IoPfnRoot[2];                                      //0x0
    ULONGLONG UnmappedNodeCount[2];                                         //0x10
    ULONGLONG UnmappedNodeCountMaximum;                                     //0x40
    ULONGLONG TotalNodeCount[2];                                            //0x48
    struct _RTL_AVL_TREE InvariantIoSpace;                                  //0x58
    volatile LONG IoPfnPruneLock;                                           //0x60
    ULONGLONG ResumePageForDeleteScans[2];                                  //0x68
    struct _WORK_QUEUE_ITEM UnmappedNodeWorkItem;                           //0x78
    struct _MI_IO_CACHE_STATS IoCacheStats;                                 //0x98
};
/* Used in */
// _MI_SYSTEM_INFORMATION

