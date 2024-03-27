#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KDPC.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_WHEAP_WORK_QUEUE.h>

//0x44 bytes (sizeof)
struct _WHEAP_WORK_QUEUE
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONG ListLock;                                                         //0x8
    volatile LONG ItemCount;                                                //0xc
    struct _KDPC Dpc;                                                       //0x10
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x30
    VOID (*WorkRoutine)(struct _WHEAP_WORK_QUEUE* arg1, struct _LIST_ENTRY* arg2); //0x40
};
/* Used in */
// _WHEAP_INFO_BLOCK
// _WHEAP_WORK_QUEUE

