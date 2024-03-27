#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_INTERRUPT_TRACKING_ROOT.h>
#include <_KINTERRUPT.h>
#include <_INTERRUPT_VECTOR_DATA.h>

//0x98 bytes (sizeof)
struct _INTERRUPT_TRACKING_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _INTERRUPT_TRACKING_ROOT* IntTrackRoot;                          //0x10
    ULONG InterruptObjectCount;                                             //0x18
    struct _KINTERRUPT** InterruptObjectArray;                              //0x20
    ULONGLONG IsrTime;                                                      //0x28
    ULONGLONG DpcTime;                                                      //0x30
    UCHAR IsPrimaryInterrupt;                                               //0x38
    struct _INTERRUPT_VECTOR_DATA VectorData;                               //0x40
};
