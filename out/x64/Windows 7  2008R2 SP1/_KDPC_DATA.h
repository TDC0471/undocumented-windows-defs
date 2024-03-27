#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _KDPC_DATA
{
    struct _LIST_ENTRY DpcListHead;                                         //0x0
    ULONGLONG DpcLock;                                                      //0x10
    volatile LONG DpcQueueDepth;                                            //0x18
    ULONG DpcCount;                                                         //0x1c
};
/* Used in */
// _KPRCB

