#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>
#include <_IO_WORKITEM.h>
#include <_GUID.h>

//0x30 bytes (sizeof)
struct _IO_WORKITEM
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    VOID (*Routine)(VOID* arg1, VOID* arg2, struct _IO_WORKITEM* arg3);     //0x10
    VOID* IoObject;                                                         //0x14
    VOID* Context;                                                          //0x18
    ULONG Type;                                                             //0x1c
    struct _GUID ActivityId;                                                //0x20
};
/* Used in */
// _IO_WORKITEM

