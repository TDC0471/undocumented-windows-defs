#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x14 bytes (sizeof)
struct _KDPC_DATA
{
    struct _LIST_ENTRY DpcListHead;                                         //0x0
    ULONG DpcLock;                                                          //0x8
    volatile LONG DpcQueueDepth;                                            //0xc
    ULONG DpcCount;                                                         //0x10
};
/* Used in */
// _KPRCB

