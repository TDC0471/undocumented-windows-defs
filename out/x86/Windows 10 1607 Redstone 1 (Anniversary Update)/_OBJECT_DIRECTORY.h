#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_DEVICE_MAP.h>
#include <_OBJECT_DIRECTORY.h>

//0xac bytes (sizeof)
struct _OBJECT_DIRECTORY
{
    struct _OBJECT_DIRECTORY_ENTRY* HashBuckets[37];                        //0x0
    struct _EX_PUSH_LOCK Lock;                                              //0x94
    struct _DEVICE_MAP* DeviceMap;                                          //0x98
    struct _OBJECT_DIRECTORY* ShadowDirectory;                              //0x9c
    ULONG SessionId;                                                        //0xa0
    VOID* NamespaceEntry;                                                   //0xa4
    ULONG Flags;                                                            //0xa8
};
/* Used in */
// _DEVICE_MAP
// _OBJECT_DIRECTORY
// _OBJECT_HEADER_NAME_INFO
// _OBP_LOOKUP_CONTEXT

