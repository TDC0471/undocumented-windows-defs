#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_LOG_HANDLE_CONTEXT.h>

//0xb8 bytes (sizeof)
struct _VOLUME_CACHE_MAP
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteCode;                                                     //0x2
    ULONG UseCount;                                                         //0x4
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    struct _LIST_ENTRY VolumeCacheMapLinks;                                 //0x10
    ULONGLONG DirtyPages;                                                   //0x20
    struct _LOG_HANDLE_CONTEXT LogHandleContext;                            //0x28
    ULONG Flags;                                                            //0xa8
    ULONG PagesQueuedToDisk;                                                //0xac
    ULONG LoggedPagesQueuedToDisk;                                          //0xb0
};
/* Used in */
// _SHARED_CACHE_MAP

