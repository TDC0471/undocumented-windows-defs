#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>

//0x38 bytes (sizeof)
struct _VOLUME_CACHE_MAP
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteCode;                                                     //0x2
    ULONG UseCount;                                                         //0x4
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    struct _LIST_ENTRY VolumeCacheMapLinks;                                 //0x10
    ULONG Flags;                                                            //0x20
    ULONGLONG DirtyPages;                                                   //0x28
    ULONG PagesQueuedToDisk;                                                //0x30
};
/* Used in */
// _SHARED_CACHE_MAP

