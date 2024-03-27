#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KSEMAPHORE.h>

//0x50 bytes (sizeof)
struct _PNP_DEVICE_COMPLETION_QUEUE
{
    ULONGLONG SpinLock;                                                     //0x0
    ULONG DispatchedCount;                                                  //0x8
    struct _LIST_ENTRY DispatchedList;                                      //0x10
    struct _KSEMAPHORE CompletedSemaphore;                                  //0x20
    struct _LIST_ENTRY CompletedList;                                       //0x40
};
