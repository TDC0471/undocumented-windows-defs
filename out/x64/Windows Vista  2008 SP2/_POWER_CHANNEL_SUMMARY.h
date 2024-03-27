#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _POWER_CHANNEL_SUMMARY
{
    ULONG Signature;                                                        //0x0
    ULONG TotalCount;                                                       //0x4
    ULONG D0Count;                                                          //0x8
    struct _LIST_ENTRY NotifyList;                                          //0x10
};
/* Used in */
// _DEVICE_OBJECT_POWER_EXTENSION

