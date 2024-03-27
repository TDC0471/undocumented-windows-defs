#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_WORK_QUEUE_ITEM.h>

//0x20 bytes (sizeof)
struct _MI_RESUME_WORKITEM
{
    struct _KEVENT ResumeCompleteEvent;                                     //0x0
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x10
};
/* Used in */
// _MI_SHUTDOWN_STATE

