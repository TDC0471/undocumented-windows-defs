#pragma once
/* ------------------ */

#include <_EX_RUNDOWN_REF.h>

//0x10 bytes (sizeof)
struct _EX_RUNDOWN_REF_CACHE_AWARE
{
    struct _EX_RUNDOWN_REF* RunRefs;                                        //0x0
    VOID* PoolToFree;                                                       //0x4
    ULONG RunRefSize;                                                       //0x8
    ULONG Number;                                                           //0xc
};
/* Used in */
// _ETW_SILODRIVERSTATE
// _MI_PARTITION_SEGMENTS

