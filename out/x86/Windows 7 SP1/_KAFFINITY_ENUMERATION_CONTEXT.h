#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>

//0xc bytes (sizeof)
struct _KAFFINITY_ENUMERATION_CONTEXT
{
    struct _KAFFINITY_EX* Affinity;                                         //0x0
    ULONG CurrentMask;                                                      //0x4
    USHORT CurrentIndex;                                                    //0x8
};
