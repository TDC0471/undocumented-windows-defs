#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>
#include <_FILE_OBJECT.h>

//0x38 bytes (sizeof)
struct _MI_LDW_WORK_CONTEXT
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    struct _FILE_OBJECT* FileObject;                                        //0x20
    LONG ErrorStatus;                                                       //0x28
    volatile LONG Active;                                                   //0x2c
    UCHAR FreeWhenDone;                                                     //0x30
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS

