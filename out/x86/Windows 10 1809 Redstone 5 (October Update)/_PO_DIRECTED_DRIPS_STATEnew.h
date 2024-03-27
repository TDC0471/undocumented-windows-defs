#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _PO_DIRECTED_DRIPS_STATE
{
    struct _LIST_ENTRY QueueLink;                                           //0x0
    struct _LIST_ENTRY VisitedQueueLink;                                    //0x8
    volatile ULONG Flags;                                                   //0x10
    ULONG CachedFlags;                                                      //0x14
    ULONG DeviceUsageCount;                                                 //0x18
    VOID* Diagnostic;                                                       //0x1c
};
/* Used in */
// _DEVICE_NODE

