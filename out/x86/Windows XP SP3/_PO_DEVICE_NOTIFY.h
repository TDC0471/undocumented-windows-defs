#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x28 bytes (sizeof)
struct _PO_DEVICE_NOTIFY
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x8
    UCHAR WakeNeeded;                                                       //0xc
    UCHAR OrderLevel;                                                       //0xd
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x10
    VOID* Node;                                                             //0x14
    USHORT* DeviceName;                                                     //0x18
    USHORT* DriverName;                                                     //0x1c
    ULONG ChildCount;                                                       //0x20
    ULONG ActiveChild;                                                      //0x24
};
/* Used in */
// _DEVICE_NODE
// _POP_DEVICE_POWER_IRP

