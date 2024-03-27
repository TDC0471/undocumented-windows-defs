#pragma once
/* ------------------ */

#include <_CM_KEY_CONTROL_BLOCK.h>

//0x8 bytes (sizeof)
struct _CACHED_CHILD_LIST
{
    ULONG Count;                                                            //0x0
    union
    {
        ULONG ValueList;                                                    //0x4
        struct _CM_KEY_CONTROL_BLOCK* RealKcb;                              //0x4
    };
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK

