#pragma once
/* ------------------ */

#include <_DRIVER_OBJECT.h>
#include <_UNICODE_STRING.h>
#include <_DEVICE_OBJECT.h>
#include <_IRP.h>

//0x80 bytes (sizeof)
struct _VF_DRIVER_IO_CALLBACKS
{
    LONG (*DriverInit)(struct _DRIVER_OBJECT* arg1, struct _UNICODE_STRING* arg2); //0x0
    VOID (*DriverStartIo)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2);  //0x4
    VOID (*DriverUnload)(struct _DRIVER_OBJECT* arg1);                      //0x8
    LONG (*AddDevice)(struct _DRIVER_OBJECT* arg1, struct _DEVICE_OBJECT* arg2); //0xc
    LONG (*MajorFunction[28])(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2); //0x10
};
