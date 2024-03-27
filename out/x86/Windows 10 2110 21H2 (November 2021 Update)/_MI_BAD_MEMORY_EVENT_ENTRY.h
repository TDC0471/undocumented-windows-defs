#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_WORK_QUEUE_ITEM.h>

//0x28 bytes (sizeof)
struct _MI_BAD_MEMORY_EVENT_ENTRY
{
    ULONG BugCheckCode;                                                     //0x0
    LONG Active;                                                            //0x4
    ULONG Data;                                                             //0x8
    union _LARGE_INTEGER PhysicalAddress;                                   //0x10
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x18
};
/* Used in */
// _MI_ERROR_STATE

