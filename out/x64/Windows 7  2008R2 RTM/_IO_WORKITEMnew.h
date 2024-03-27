#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>
#include <_IO_WORKITEM.h>

//0x40 bytes (sizeof)
struct _IO_WORKITEM
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    VOID (*Routine)(VOID* arg1, VOID* arg2, struct _IO_WORKITEM* arg3);     //0x20
    VOID* IoObject;                                                         //0x28
    VOID* Context;                                                          //0x30
    ULONG Type;                                                             //0x38
};
/* Used in */
// _IO_WORKITEM

