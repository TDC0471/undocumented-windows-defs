#pragma once
/* ------------------ */

#include <_VI_POOL_ENTRY_INUSE.h>

//0x10 bytes (sizeof)
struct _VI_POOL_ENTRY
{
    union
    {
        struct _VI_POOL_ENTRY_INUSE InUse;                                  //0x0
        ULONG FreeListNext;                                                 //0x0
    };
};
/* Used in */
// _MI_VERIFIER_DRIVER_ENTRY

