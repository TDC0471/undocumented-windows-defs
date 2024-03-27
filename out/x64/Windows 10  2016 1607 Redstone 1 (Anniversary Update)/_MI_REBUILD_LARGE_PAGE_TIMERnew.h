#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>
#include <_MI_LARGE_PAGE_REBUILD_WAIT_BLOCK.h>

//0x30 bytes (sizeof)
struct _MI_REBUILD_LARGE_PAGE_TIMER
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    UCHAR SecondsLeft;                                                      //0x20
    UCHAR RebuildActive;                                                    //0x21
    UCHAR NextPassDelta;                                                    //0x22
    UCHAR LargeSubPagesActive;                                              //0x23
    ULONG SequenceNumber;                                                   //0x24
    struct _MI_LARGE_PAGE_REBUILD_WAIT_BLOCK* WaitList;                     //0x28
};
/* Used in */
// _MI_NODE_INFORMATION

