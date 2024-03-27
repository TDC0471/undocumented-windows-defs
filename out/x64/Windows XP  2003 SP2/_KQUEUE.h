#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>

//0x40 bytes (sizeof)
struct _KQUEUE
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY EntryListHead;                                       //0x18
    ULONG CurrentCount;                                                     //0x28
    ULONG MaximumCount;                                                     //0x2c
    struct _LIST_ENTRY ThreadListHead;                                      //0x30
};
/* Used in */
// _EX_WORK_QUEUE
// _KTHREAD

