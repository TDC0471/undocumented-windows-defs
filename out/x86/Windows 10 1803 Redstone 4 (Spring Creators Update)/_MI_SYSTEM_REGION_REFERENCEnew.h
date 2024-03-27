#pragma once
/* ------------------ */

#include <_MI_SYSTEM_REGION_ANCHOR.h>

//0x4 bytes (sizeof)
struct _MI_SYSTEM_REGION_REFERENCE
{
    struct
    {
        union
        {
            struct _MI_SYSTEM_REGION_ANCHOR Anchor;                         //0x0
            ULONG EntireReference;                                          //0x0
        };
    } u1;                                                                   //0x0
};
/* Used in */
// _MI_SYSTEM_VA_STATE

