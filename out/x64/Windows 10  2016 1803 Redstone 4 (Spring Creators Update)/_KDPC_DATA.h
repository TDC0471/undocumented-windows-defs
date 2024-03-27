#pragma once
/* ------------------ */

#include <_KDPC_LIST.h>
#include <_KDPC.h>

//0x28 bytes (sizeof)
struct _KDPC_DATA
{
    struct _KDPC_LIST DpcList;                                              //0x0
    ULONGLONG DpcLock;                                                      //0x10
    volatile LONG DpcQueueDepth;                                            //0x18
    ULONG DpcCount;                                                         //0x1c
    struct _KDPC* volatile ActiveDpc;                                       //0x20
};
/* Used in */
// _KPRCB

