#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KEVENT.h>

//0x38 bytes (sizeof)
struct _FAST_MUTEX
{
    LONG Count;                                                             //0x0
    struct _KTHREAD* Owner;                                                 //0x8
    ULONG Contention;                                                       //0x10
    struct _KEVENT Gate;                                                    //0x18
    ULONG OldIrql;                                                          //0x30
};
/* Used in */
// _HANDLE_TRACE_DEBUG_INFO

