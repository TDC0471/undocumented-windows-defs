#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_DRIVER_EXTENSION.h>
#include <_UNICODE_STRING.h>
#include <_FAST_IO_DISPATCH.h>
#include <_DRIVER_OBJECT.h>
#include <_IRP.h>

//0xa8 bytes (sizeof)
struct _DRIVER_OBJECT
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x4
    ULONG Flags;                                                            //0x8
    VOID* DriverStart;                                                      //0xc
    ULONG DriverSize;                                                       //0x10
    VOID* DriverSection;                                                    //0x14
    struct _DRIVER_EXTENSION* DriverExtension;                              //0x18
    struct _UNICODE_STRING DriverName;                                      //0x1c
    struct _UNICODE_STRING* HardwareDatabase;                               //0x24
    struct _FAST_IO_DISPATCH* FastIoDispatch;                               //0x28
    LONG (*DriverInit)(struct _DRIVER_OBJECT* arg1, struct _UNICODE_STRING* arg2); //0x2c
    VOID (*DriverStartIo)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2);  //0x30
    VOID (*DriverUnload)(struct _DRIVER_OBJECT* arg1);                      //0x34
    LONG (*MajorFunction[28])(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2); //0x38
};
/* Used in */
// _DEVICE_OBJECT
// _DRIVER_EXTENSION
// _DRIVER_OBJECT
// _MM_SESSION_SPACE

