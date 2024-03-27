#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ETHREAD.h>
#include <_IRP.h>
#include <_DEVICE_OBJECT.h>

//0x30 bytes (sizeof)
struct _POP_IRP_WORKER_ENTRY
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _ETHREAD* Thread;                                                //0x10
    struct _IRP* Irp;                                                       //0x18
    struct _DEVICE_OBJECT* Device;                                          //0x20
    UCHAR Static;                                                           //0x28
};
