#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>
#include <_FILE_OBJECT.h>

//0x20 bytes (sizeof)
struct _MI_LDW_WORK_CONTEXT
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    struct _FILE_OBJECT* FileObject;                                        //0x10
    LONG ErrorStatus;                                                       //0x14
    volatile LONG Active;                                                   //0x18
    UCHAR FreeWhenDone;                                                     //0x1c
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS

