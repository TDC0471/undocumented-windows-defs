#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KDPC.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_WHEAP_WORK_QUEUE.h>

//0x88 bytes (sizeof)
struct _WHEAP_WORK_QUEUE
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONGLONG ListLock;                                                     //0x10
    volatile LONG ItemCount;                                                //0x18
    struct _KDPC Dpc;                                                       //0x20
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x60
    VOID (*WorkRoutine)(struct _WHEAP_WORK_QUEUE* arg1, struct _LIST_ENTRY* arg2); //0x80
};
/* Used in */
// _WHEAP_INFO_BLOCK
// _WHEAP_WORK_QUEUE

