#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_HALP_EMERGENCY_LA_QUEUE_TYPE.h>

//0x18 bytes (sizeof)
struct _HALP_EMERGENCY_LA_QUEUE_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    enum _HALP_EMERGENCY_LA_QUEUE_TYPE EntryType;                           //0x10
};
/* Used in */
// _ADAPTER_OBJECT

