#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>

//0x14 bytes (sizeof)
struct _MI_QUEUED_DEADSTACK_WORKITEM
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    volatile LONG Active;                                                   //0x10
};
/* Used in */
// _MI_SYSTEM_PTE_STATE

