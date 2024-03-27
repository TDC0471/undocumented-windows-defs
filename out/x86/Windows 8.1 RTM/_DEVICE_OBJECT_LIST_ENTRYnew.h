#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_DEVICE_RELATION_LEVEL.h>

//0xc bytes (sizeof)
struct _DEVICE_OBJECT_LIST_ENTRY
{
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x0
    enum _DEVICE_RELATION_LEVEL RelationLevel;                              //0x4
    ULONG Flags;                                                            //0x8
};
/* Used in */
// _RELATION_LIST_ENTRY

