#pragma once
/* ------------------ */

#include <_KDPC_LIST.h>
#include <_KDPC.h>

//0x18 bytes (sizeof)
struct _KDPC_DATA
{
    struct _KDPC_LIST DpcList;                                              //0x0
    ULONG DpcLock;                                                          //0x8
    volatile LONG DpcQueueDepth;                                            //0xc
    ULONG DpcCount;                                                         //0x10
    struct _KDPC* volatile ActiveDpc;                                       //0x14
};
/* Used in */
// _KPRCB

