#pragma once
/* ------------------ */

#include <_DRIVER_OBJECT.h>
#include <_UNICODE_STRING.h>
#include <_DEVICE_OBJECT.h>
#include <_IRP.h>

//0x100 bytes (sizeof)
struct _VF_DRIVER_IO_CALLBACKS
{
    LONG (*DriverInit)(struct _DRIVER_OBJECT* arg1, struct _UNICODE_STRING* arg2); //0x0
    VOID (*DriverStartIo)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2);  //0x8
    VOID (*DriverUnload)(struct _DRIVER_OBJECT* arg1);                      //0x10
    LONG (*AddDevice)(struct _DRIVER_OBJECT* arg1, struct _DEVICE_OBJECT* arg2); //0x18
    LONG (*MajorFunction[28])(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2); //0x20
};
