#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CMP_VOLUME_MANAGER.h>
#include <_GUID.h>
#include <_CMSI_RW_LOCK.h>

//0x2c bytes (sizeof)
struct _CMP_VOLUME_CONTEXT
{
    struct _LIST_ENTRY VolumeContextListEntry;                              //0x0
    struct _CMP_VOLUME_MANAGER* VolumeManager;                              //0x8
    LONG RefCount;                                                          //0xc
    struct _GUID VolumeGuid;                                                //0x10
    VOID* VolumeFileObject;                                                 //0x20
    struct _CMSI_RW_LOCK VolumeContextLock;                                 //0x24
    UCHAR DeviceUsageNotificationSent;                                      //0x28
};
/* Used in */
// _CMHIVE

