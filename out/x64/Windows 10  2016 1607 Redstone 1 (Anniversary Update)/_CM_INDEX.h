#pragma once
/* ------------------ */

#include <_CM_COMPONENT_HASH.h>

//0x8 bytes (sizeof)
struct _CM_INDEX
{
    ULONG Cell;                                                             //0x0
    union
    {
        UCHAR NameHint[4];                                                  //0x4
        struct _CM_COMPONENT_HASH HashKey;                                  //0x4
    };
};
