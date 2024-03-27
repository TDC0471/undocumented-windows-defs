#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x38 bytes (sizeof)
struct _PO_DIRECTED_DRIPS_STATE
{
    struct _LIST_ENTRY QueueLink;                                           //0x0
    struct _LIST_ENTRY VisitedQueueLink;                                    //0x10
    volatile ULONG Flags;                                                   //0x20
    ULONG CachedFlags;                                                      //0x24
    ULONG DeviceUsageCount;                                                 //0x28
    VOID* Diagnostic;                                                       //0x30
};
/* Used in */
// _DEVICE_NODE

