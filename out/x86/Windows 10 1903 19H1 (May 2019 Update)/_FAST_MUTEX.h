#pragma once
/* ------------------ */

#include <_KEVENT.h>

//0x20 bytes (sizeof)
struct _FAST_MUTEX
{
    LONG Count;                                                             //0x0
    VOID* Owner;                                                            //0x4
    ULONG Contention;                                                       //0x8
    struct _KEVENT Event;                                                   //0xc
    ULONG OldIrql;                                                          //0x1c
};
/* Used in */
// _FSRTL_ADVANCED_FCB_HEADER
// _HANDLE_TRACE_DEBUG_INFO
// _KTM
// _NONOPAQUE_OPLOCK
// _PAGED_LOOKASIDE_LIST
// _PNP_DEVICE_EVENT_LIST
// _PNP_WATCHDOG
// _SHARED_CACHE_MAP

