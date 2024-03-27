#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>

//0x20 bytes (sizeof)
struct _VF_WATCHDOG_IRP
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _IRP* Irp;                                                       //0x10
    ULONG DueTickCount;                                                     //0x18
    volatile UCHAR Inserted;                                                //0x1c
    CHAR TrackedStackLocation;                                              //0x1d
    USHORT CancelTimeoutTicks;                                              //0x1e
};
