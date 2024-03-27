#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ETHREAD.h>
#include <_IRP.h>
#include <_DEVICE_OBJECT.h>

//0x18 bytes (sizeof)
struct _POP_IRP_WORKER_ENTRY
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _ETHREAD* Thread;                                                //0x8
    struct _IRP* Irp;                                                       //0xc
    struct _DEVICE_OBJECT* Device;                                          //0x10
    UCHAR Static;                                                           //0x14
};
