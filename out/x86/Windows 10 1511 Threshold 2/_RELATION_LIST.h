#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT_LIST.h>

//0x8 bytes (sizeof)
struct _RELATION_LIST
{
    struct _DEVICE_OBJECT_LIST* DeviceObjectList;                           //0x0
    UCHAR Sorted;                                                           //0x4
};
/* Used in */
// _PENDING_RELATIONS_LIST_ENTRY

