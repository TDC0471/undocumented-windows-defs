#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>

//0x14 bytes (sizeof)
struct _MI_COMBINE_WORKITEM
{
    VOID* NextEntry;                                                        //0x0
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x4
};
/* Used in */
// _MI_PAGE_COMBINING_SUPPORT

