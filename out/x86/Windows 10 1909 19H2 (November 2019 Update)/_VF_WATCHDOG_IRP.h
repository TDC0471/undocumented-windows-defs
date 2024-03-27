#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>

//0x14 bytes (sizeof)
struct _VF_WATCHDOG_IRP
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _IRP* Irp;                                                       //0x8
    ULONG DueTickCount;                                                     //0xc
    volatile UCHAR Inserted;                                                //0x10
    CHAR TrackedStackLocation;                                              //0x11
    USHORT CancelTimeoutTicks;                                              //0x12
};
