#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>

//0xc bytes (sizeof)
struct _RELATION_LIST_ENTRY
{
    ULONG Count;                                                            //0x0
    ULONG MaxCount;                                                         //0x4
    struct _DEVICE_OBJECT* Devices[1];                                      //0x8
};
/* Used in */
// _RELATION_LIST

