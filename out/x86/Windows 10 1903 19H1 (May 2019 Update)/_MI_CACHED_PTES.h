#pragma once
/* ------------------ */

#include <_MI_CACHED_PTE.h>

//0x48 bytes (sizeof)
struct _MI_CACHED_PTES
{
    struct _MI_CACHED_PTE Bins[8];                                          //0x0
    LONG CachedPteCount;                                                    //0x40
};
/* Used in */
// _MI_SYSTEM_PTE_STATE
// _MI_SYSTEM_PTE_TYPE

