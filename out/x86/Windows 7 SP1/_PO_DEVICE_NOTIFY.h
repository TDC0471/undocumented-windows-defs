#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x3c bytes (sizeof)
struct _PO_DEVICE_NOTIFY
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _LIST_ENTRY PowerChildren;                                       //0x8
    struct _LIST_ENTRY PowerParents;                                        //0x10
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x18
    UCHAR OrderLevel;                                                       //0x1c
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x20
    USHORT* DeviceName;                                                     //0x24
    USHORT* DriverName;                                                     //0x28
    ULONG ChildCount;                                                       //0x2c
    ULONG ActiveChild;                                                      //0x30
    ULONG ParentCount;                                                      //0x34
    ULONG ActiveParent;                                                     //0x38
};
/* Used in */
// _DEVICE_NODE

