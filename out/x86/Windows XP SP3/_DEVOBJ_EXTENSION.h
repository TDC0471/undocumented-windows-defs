#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_DEVICE_OBJECT_POWER_EXTENSION.h>
#include <_VPB.h>

//0x2c bytes (sizeof)
struct _DEVOBJ_EXTENSION
{
    SHORT Type;                                                             //0x0
    USHORT Size;                                                            //0x2
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x4
    ULONG PowerFlags;                                                       //0x8
    struct _DEVICE_OBJECT_POWER_EXTENSION* Dope;                            //0xc
    ULONG ExtensionFlags;                                                   //0x10
    VOID* DeviceNode;                                                       //0x14
    struct _DEVICE_OBJECT* AttachedTo;                                      //0x18
    LONG StartIoCount;                                                      //0x1c
    LONG StartIoKey;                                                        //0x20
    ULONG StartIoFlags;                                                     //0x24
    struct _VPB* Vpb;                                                       //0x28
};
/* Used in */
// _DEVICE_OBJECT

