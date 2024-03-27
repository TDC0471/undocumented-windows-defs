#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _KDEVICE_QUEUE_ENTRY
{
    struct _LIST_ENTRY DeviceListEntry;                                     //0x0
    ULONG SortKey;                                                          //0x8
    UCHAR Inserted;                                                         //0xc
};
/* Used in */
// _IRP
// _WAIT_CONTEXT_BLOCK

