#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KEVENT.h>

//0x20 bytes (sizeof)
struct _FAST_MUTEX
{
    volatile LONG Count;                                                    //0x0
    struct _KTHREAD* Owner;                                                 //0x4
    ULONG Contention;                                                       //0x8
    struct _KEVENT Event;                                                   //0xc
    ULONG OldIrql;                                                          //0x1c
};
/* Used in */
// _CMHIVE
// _FSRTL_ADVANCED_FCB_HEADER
// _HANDLE_TRACE_DEBUG_INFO
// _KTM
// _PAGED_LOOKASIDE_LIST

