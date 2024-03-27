#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>

//0x10 bytes (sizeof)
struct _DEVICE_RELATIONS
{
    ULONG Count;                                                            //0x0
    struct _DEVICE_OBJECT* Objects[1];                                      //0x8
};
/* Used in */
// _DEVICE_NODE

