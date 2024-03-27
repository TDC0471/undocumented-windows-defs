#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x40 bytes (sizeof)
struct _PO_DEVICE_NOTIFY
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x10
    UCHAR OrderLevel;                                                       //0x18
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x20
    USHORT* DeviceName;                                                     //0x28
    USHORT* DriverName;                                                     //0x30
    ULONG ChildCount;                                                       //0x38
    ULONG ActiveChild;                                                      //0x3c
};
/* Used in */
// _DEVICE_NODE

