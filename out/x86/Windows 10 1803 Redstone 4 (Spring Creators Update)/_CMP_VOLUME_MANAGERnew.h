#pragma once
/* ------------------ */

#include <_CMSI_RW_LOCK.h>
#include <_LIST_ENTRY.h>

//0xc bytes (sizeof)
struct _CMP_VOLUME_MANAGER
{
    struct _CMSI_RW_LOCK VolumeContextListLock;                             //0x0
    struct _LIST_ENTRY VolumeContextListHead;                               //0x4
};
/* Used in */
// _CMP_VOLUME_CONTEXT

