#pragma once
/* ------------------ */

#include <_SID_AND_ATTRIBUTES.h>

//0x110 bytes (sizeof)
struct _SID_AND_ATTRIBUTES_HASH
{
    ULONG SidCount;                                                         //0x0
    struct _SID_AND_ATTRIBUTES* SidAttr;                                    //0x8
    ULONGLONG Hash[32];                                                     //0x10
};
/* Used in */
// _TOKEN

