#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>

//0x18 bytes (sizeof)
struct _KAFFINITY_ENUMERATION_CONTEXT
{
    struct _KAFFINITY_EX* Affinity;                                         //0x0
    ULONGLONG CurrentMask;                                                  //0x8
    USHORT CurrentIndex;                                                    //0x10
};
