#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_VI_DEADLOCK_NODE.h>
#include <_LIST_ENTRY.h>

//0x38 bytes (sizeof)
struct _VI_DEADLOCK_THREAD
{
    struct _KTHREAD* Thread;                                                //0x0
    struct _VI_DEADLOCK_NODE* CurrentSpinNode;                              //0x8
    struct _VI_DEADLOCK_NODE* CurrentOtherNode;                             //0x10
    union
    {
        struct _LIST_ENTRY ListEntry;                                       //0x18
        struct _LIST_ENTRY FreeListEntry;                                   //0x18
    };
    ULONG NodeCount;                                                        //0x28
    volatile ULONG PagingCount;                                             //0x2c
    UCHAR ThreadUsesEresources;                                             //0x30
};
/* Used in */
// _VI_DEADLOCK_NODE
// _VI_DEADLOCK_RESOURCE

