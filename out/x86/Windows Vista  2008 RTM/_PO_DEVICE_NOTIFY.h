#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x24 bytes (sizeof)
struct _PO_DEVICE_NOTIFY
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x8
    UCHAR OrderLevel;                                                       //0xc
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x10
    USHORT* DeviceName;                                                     //0x14
    USHORT* DriverName;                                                     //0x18
    ULONG ChildCount;                                                       //0x1c
    ULONG ActiveChild;                                                      //0x20
};
/* Used in */
// _DEVICE_NODE

