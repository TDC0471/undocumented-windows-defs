#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>
#include <_MI_LARGE_PAGE_REBUILD_WAIT_BLOCK.h>

//0x1c bytes (sizeof)
struct _MI_REBUILD_LARGE_PAGE_TIMER
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    UCHAR SecondsLeft;                                                      //0x10
    UCHAR RebuildActive;                                                    //0x11
    UCHAR NextPassDelta;                                                    //0x12
    UCHAR LargeSubPagesActive;                                              //0x13
    ULONG SequenceNumber;                                                   //0x14
    struct _MI_LARGE_PAGE_REBUILD_WAIT_BLOCK* WaitList;                     //0x18
};
/* Used in */
// _MI_NODE_INFORMATION

