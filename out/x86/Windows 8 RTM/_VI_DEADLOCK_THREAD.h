#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_VI_DEADLOCK_NODE.h>
#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _VI_DEADLOCK_THREAD
{
    struct _KTHREAD* Thread;                                                //0x0
    struct _VI_DEADLOCK_NODE* CurrentSpinNode;                              //0x4
    struct _VI_DEADLOCK_NODE* CurrentOtherNode;                             //0x8
    union
    {
        struct _LIST_ENTRY ListEntry;                                       //0xc
        struct _LIST_ENTRY FreeListEntry;                                   //0xc
    };
    ULONG NodeCount;                                                        //0x14
    ULONG PagingCount;                                                      //0x18
    UCHAR ThreadUsesEresources;                                             //0x1c
};
/* Used in */
// _VI_DEADLOCK_NODE
// _VI_DEADLOCK_RESOURCE

