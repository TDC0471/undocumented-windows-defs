#pragma once
/* ------------------ */

#include <_EX_RUNDOWN_REF.h>

//0x18 bytes (sizeof)
struct _EX_RUNDOWN_REF_CACHE_AWARE
{
    struct _EX_RUNDOWN_REF* RunRefs;                                        //0x0
    VOID* PoolToFree;                                                       //0x8
    ULONG RunRefSize;                                                       //0x10
    ULONG Number;                                                           //0x14
};
/* Used in */
// _ETW_SILODRIVERSTATE
// _MI_PARTITION_SEGMENTS

