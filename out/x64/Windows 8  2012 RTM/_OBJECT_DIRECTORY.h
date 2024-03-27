#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_DEVICE_MAP.h>
#include <_OBJECT_DIRECTORY.h>

//0x150 bytes (sizeof)
struct _OBJECT_DIRECTORY
{
    struct _OBJECT_DIRECTORY_ENTRY* HashBuckets[37];                        //0x0
    struct _EX_PUSH_LOCK Lock;                                              //0x128
    union
    {
        struct _DEVICE_MAP* DeviceMap;                                      //0x130
        struct _OBJECT_DIRECTORY* ShadowDirectory;                          //0x130
    };
    ULONG SessionId;                                                        //0x138
    VOID* NamespaceEntry;                                                   //0x140
    ULONG Flags;                                                            //0x148
};
/* Used in */
// _DEVICE_MAP
// _OBJECT_DIRECTORY
// _OBJECT_HEADER_NAME_INFO
// _OBP_LOOKUP_CONTEXT

