#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>

//0x18 bytes (sizeof)
struct _ARBITER_CONFLICT_INFO
{
    struct _DEVICE_OBJECT* OwningObject;                                    //0x0
    ULONGLONG Start;                                                        //0x8
    ULONGLONG End;                                                          //0x10
};
/* Used in */
// _ARBITER_QUERY_CONFLICT_PARAMETERS

