#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KEVENT.h>

//0x20 bytes (sizeof)
struct _FAST_MUTEX
{
    LONG Count;                                                             //0x0
    struct _KTHREAD* Owner;                                                 //0x4
    ULONG Contention;                                                       //0x8
    struct _KEVENT Gate;                                                    //0xc
    ULONG OldIrql;                                                          //0x1c
};
/* Used in */
// _HANDLE_TRACE_DEBUG_INFO
// _PAGED_LOOKASIDE_LIST

