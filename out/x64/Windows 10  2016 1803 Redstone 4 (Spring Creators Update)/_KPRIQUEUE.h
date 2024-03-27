#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>

//0x2b0 bytes (sizeof)
struct _KPRIQUEUE
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY EntryListHead[32];                                   //0x18
    volatile LONG CurrentCount[32];                                         //0x218
    ULONG MaximumCount;                                                     //0x298
    struct _LIST_ENTRY ThreadListHead;                                      //0x2a0
};
/* Used in */
// _EX_WORK_QUEUE
// _TRIAGE_EX_WORK_QUEUE

