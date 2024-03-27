#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_LOG_HANDLE_CONTEXT.h>

//0x78 bytes (sizeof)
struct _VOLUME_CACHE_MAP
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteCode;                                                     //0x2
    ULONG UseCount;                                                         //0x4
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    struct _LIST_ENTRY VolumeCacheMapLinks;                                 //0xc
    ULONG DirtyPages;                                                       //0x14
    struct _LOG_HANDLE_CONTEXT LogHandleContext;                            //0x18
    ULONG Flags;                                                            //0x68
    ULONG PagesQueuedToDisk;                                                //0x6c
    ULONG LoggedPagesQueuedToDisk;                                          //0x70
};
/* Used in */
// _SHARED_CACHE_MAP

