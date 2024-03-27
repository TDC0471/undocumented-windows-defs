#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_SECONDARY_INTERRUPT_PROVIDER_INTERFACE.h>
#include <_KEVENT.h>
#include <_SECONDARY_INTERRUPT_LINE_STATE.h>

//0xb0 bytes (sizeof)
struct _SECONDARY_IC_LIST_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG GsivBase;                                                         //0x10
    ULONG GsivSize;                                                         //0x14
    struct _SECONDARY_INTERRUPT_PROVIDER_INTERFACE Interface;               //0x18
    volatile LONG BusyCount;                                                //0x70
    volatile LONG ExclusiveWaiterCount;                                     //0x74
    struct _KEVENT NotificationEvent;                                       //0x78
    struct _LIST_ENTRY SignalListEntry;                                     //0x90
    struct _SECONDARY_INTERRUPT_LINE_STATE State[1];                        //0xa0
};
