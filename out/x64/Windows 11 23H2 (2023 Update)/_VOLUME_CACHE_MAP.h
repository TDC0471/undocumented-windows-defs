#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_LOG_HANDLE_CONTEXT.h>
#include <_CC_VOLUME_TELEMETRY.h>

//0xa90 bytes (sizeof)
struct _VOLUME_CACHE_MAP
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteCode;                                                     //0x2
    ULONG UseCount;                                                         //0x4
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    struct _LIST_ENTRY VolumeCacheMapLinks;                                 //0x10
    ULONGLONG DirtyPages;                                                   //0x20
    struct _LOG_HANDLE_CONTEXT LogHandleContext;                            //0x28
    ULONG Flags;                                                            //0xc0
    ULONG PagesQueuedToDisk;                                                //0xc4
    ULONG LoggedPagesQueuedToDisk;                                          //0xc8
    ULONG VolumeId;                                                         //0xcc
    struct _LIST_ENTRY PrivateVolumeList;                                   //0xd0
    struct _CC_VOLUME_TELEMETRY VolumeTelemetry;                            //0xe0
};
/* Used in */
// _PRIVATE_VOLUME_CACHEMAP
// _SHARED_CACHE_MAP

