#pragma once
/* ------------------ */

#include <_KDPC.h>

//0x50 bytes (sizeof)
struct _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO
{
    struct _KDPC EventDpc;                                                  //0x0
    VOID* DeferredRoutine;                                                  //0x40
    volatile ULONG TickCount;                                               //0x48
};
/* Used in */
// _KPRCB

