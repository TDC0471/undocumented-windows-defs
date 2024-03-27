#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _KQUEUE
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY EntryListHead;                                       //0x10
    volatile ULONG CurrentCount;                                            //0x18
    ULONG MaximumCount;                                                     //0x1c
    struct _LIST_ENTRY ThreadListHead;                                      //0x20
};
/* Used in */
// _ETW_REPLY_QUEUE
// _EX_WORK_QUEUE
// _KRESOURCEMANAGER
// _KTHREAD

