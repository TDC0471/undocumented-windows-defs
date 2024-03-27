#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>

//0x14 bytes (sizeof)
struct _MI_REBUILD_LARGE_PAGE_TIMER
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    UCHAR SecondsLeft;                                                      //0x10
    UCHAR RebuildActive;                                                    //0x11
    UCHAR NextPassDelta;                                                    //0x12
    UCHAR LargeSubPagesActive;                                              //0x13
};
/* Used in */
// _MI_NODE_INFORMATION

