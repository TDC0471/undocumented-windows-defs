#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_DRIVER_EXTENSION.h>
#include <_UNICODE_STRING.h>
#include <_FAST_IO_DISPATCH.h>
#include <_DRIVER_OBJECT.h>
#include <_IRP.h>

//0x150 bytes (sizeof)
struct _DRIVER_OBJECT
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    ULONG Flags;                                                            //0x10
    VOID* DriverStart;                                                      //0x18
    ULONG DriverSize;                                                       //0x20
    VOID* DriverSection;                                                    //0x28
    struct _DRIVER_EXTENSION* DriverExtension;                              //0x30
    struct _UNICODE_STRING DriverName;                                      //0x38
    struct _UNICODE_STRING* HardwareDatabase;                               //0x48
    struct _FAST_IO_DISPATCH* FastIoDispatch;                               //0x50
    LONG (*DriverInit)(struct _DRIVER_OBJECT* arg1, struct _UNICODE_STRING* arg2); //0x58
    VOID (*DriverStartIo)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2);  //0x60
    VOID (*DriverUnload)(struct _DRIVER_OBJECT* arg1);                      //0x68
    LONG (*MajorFunction[28])(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2); //0x70
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _BUS_HANDLER
// _DEVICE_OBJECT
// _DRIVER_EXTENSION
// _DRIVER_OBJECT
// _MI_SESSION_DRIVER_UNLOAD
// _POP_FX_DEVICE
// _VF_DRIVER_IO_CALLBACKS

