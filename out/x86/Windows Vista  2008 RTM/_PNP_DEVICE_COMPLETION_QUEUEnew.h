#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KSEMAPHORE.h>

//0x2c bytes (sizeof)
struct _PNP_DEVICE_COMPLETION_QUEUE
{
    ULONG SpinLock;                                                         //0x0
    ULONG DispatchedCount;                                                  //0x4
    struct _LIST_ENTRY DispatchedList;                                      //0x8
    struct _KSEMAPHORE CompletedSemaphore;                                  //0x10
    struct _LIST_ENTRY CompletedList;                                       //0x24
};
