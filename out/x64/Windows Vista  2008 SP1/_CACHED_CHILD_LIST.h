#pragma once
/* ------------------ */

#include <_CM_KEY_CONTROL_BLOCK.h>

//0x10 bytes (sizeof)
struct _CACHED_CHILD_LIST
{
    ULONG Count;                                                            //0x0
    union
    {
        ULONGLONG ValueList;                                                //0x8
        struct _CM_KEY_CONTROL_BLOCK* RealKcb;                              //0x8
    };
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK

