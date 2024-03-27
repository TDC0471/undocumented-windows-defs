#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KSEMAPHORE.h>

//0x2c bytes (sizeof)
struct _PNP_DEVICE_COMPLETION_QUEUE
{
    struct _LIST_ENTRY DispatchedList;                                      //0x0
    ULONG DispatchedCount;                                                  //0x8
    struct _LIST_ENTRY CompletedList;                                       //0xc
    struct _KSEMAPHORE CompletedSemaphore;                                  //0x14
    ULONG SpinLock;                                                         //0x28
};
