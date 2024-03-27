#pragma once
/* ------------------ */

#include <_MI_REBUILD_LARGE_PAGE_COUNTDOWN.h>
#include <_WORK_QUEUE_ITEM.h>

//0x228 bytes (sizeof)
struct _MI_REBUILD_LARGE_PAGES
{
    LONG Active;                                                            //0x0
    struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN Timer[64][4];                   //0x4
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x208
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS

