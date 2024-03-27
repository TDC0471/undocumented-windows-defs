#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>

//0x28 bytes (sizeof)
struct _MI_REBUILD_LARGE_PAGE_TIMER
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    UCHAR SecondsLeft;                                                      //0x20
    UCHAR RebuildActive;                                                    //0x21
    UCHAR NextPassDelta;                                                    //0x22
    UCHAR LargeSubPagesActive;                                              //0x23
};
/* Used in */
// _MI_NODE_INFORMATION

