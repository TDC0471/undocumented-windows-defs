#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>

//0x58 bytes (sizeof)
struct _VPB
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    USHORT Flags;                                                           //0x4
    USHORT VolumeLabelLength;                                               //0x6
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    struct _DEVICE_OBJECT* RealDevice;                                      //0xc
    ULONG SerialNumber;                                                     //0x10
    ULONG ReferenceCount;                                                   //0x14
    USHORT VolumeLabel[32];                                                 //0x18
};
/* Used in */
// _DEVICE_OBJECT
// _DEVOBJ_EXTENSION
// _FILE_OBJECT
// _IO_STACK_LOCATION

