#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CMP_VOLUME_MANAGER.h>
#include <_GUID.h>
#include <_CMSI_RW_LOCK.h>

//0x48 bytes (sizeof)
struct _CMP_VOLUME_CONTEXT
{
    struct _LIST_ENTRY VolumeContextListEntry;                              //0x0
    struct _CMP_VOLUME_MANAGER* VolumeManager;                              //0x10
    LONGLONG RefCount;                                                      //0x18
    struct _GUID VolumeGuid;                                                //0x20
    VOID* VolumeFileObject;                                                 //0x30
    struct _CMSI_RW_LOCK VolumeContextLock;                                 //0x38
    UCHAR DeviceUsageNotificationSent;                                      //0x40
};
/* Used in */
// _CMHIVE

