#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_DEVICE_MAP.h>

//0xa4 bytes (sizeof)
struct _OBJECT_DIRECTORY
{
    struct _OBJECT_DIRECTORY_ENTRY* HashBuckets[37];                        //0x0
    struct _EX_PUSH_LOCK Lock;                                              //0x94
    struct _DEVICE_MAP* DeviceMap;                                          //0x98
    ULONG SessionId;                                                        //0x9c
    USHORT Reserved;                                                        //0xa0
    USHORT SymbolicLinkUsageCount;                                          //0xa2
};
/* Used in */
// _DEVICE_MAP
// _OBJECT_HEADER_NAME_INFO

