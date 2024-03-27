#pragma once
/* ------------------ */

#include <_RELATIVE_SYMLINK_INFO.h>
#include <_UNICODE_STRING.h>

//0x14 bytes (sizeof)
struct _RELATIVE_SYMLINK_INFO
{
    USHORT ExposedNamespaceLength;                                          //0x0
    USHORT Flags;                                                           //0x2
    USHORT DeviceNameLength;                                                //0x4
    USHORT Reserved;                                                        //0x6
    struct _RELATIVE_SYMLINK_INFO* InteriorMountPoint;                      //0x8
    struct _UNICODE_STRING OpenedName;                                      //0xc
};
/* Used in */
// _RELATIVE_SYMLINK_INFO

