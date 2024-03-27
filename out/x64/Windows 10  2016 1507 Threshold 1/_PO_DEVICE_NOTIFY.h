#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>

//0x68 bytes (sizeof)
struct _PO_DEVICE_NOTIFY
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _LIST_ENTRY PowerChildren;                                       //0x10
    struct _LIST_ENTRY PowerParents;                                        //0x20
    struct _DEVICE_OBJECT* TargetDevice;                                    //0x30
    UCHAR OrderLevel;                                                       //0x38
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x40
    USHORT* DeviceName;                                                     //0x48
    USHORT* DriverName;                                                     //0x50
    ULONG ChildCount;                                                       //0x58
    ULONG ActiveChild;                                                      //0x5c
    ULONG ParentCount;                                                      //0x60
    ULONG ActiveParent;                                                     //0x64
};
/* Used in */
// _DEVICE_NODE
// _POP_IRP_DATA

