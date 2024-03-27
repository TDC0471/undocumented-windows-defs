#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_DEVICE_RELATION_LEVEL.h>

//0x10 bytes (sizeof)
struct _DEVICE_OBJECT_LIST_ENTRY
{
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x0
    enum _DEVICE_RELATION_LEVEL RelationLevel;                              //0x4
    ULONG Ordinal;                                                          //0x8
    ULONG Flags;                                                            //0xc
};
/* Used in */
// _DEVICE_OBJECT_LIST

