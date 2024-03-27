#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x48 bytes (sizeof)
struct _PO_DEVICE_NOTIFY
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x10
    UCHAR WakeNeeded;                                                       //0x18
    UCHAR OrderLevel;                                                       //0x19
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x20
    VOID* Node;                                                             //0x28
    USHORT* DeviceName;                                                     //0x30
    USHORT* DriverName;                                                     //0x38
    ULONG ChildCount;                                                       //0x40
    ULONG ActiveChild;                                                      //0x44
};
/* Used in */
// _DEVICE_NODE
// _POP_DEVICE_POWER_IRP

