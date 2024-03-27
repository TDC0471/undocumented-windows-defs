#pragma once
/* ------------------ */

#include <_HEAP_LFH_SUBSEGMENT_STAT.h>

//0x8 bytes (sizeof)
union _HEAP_LFH_SUBSEGMENT_STATS
{
    struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[4];                            //0x0
    VOID* AllStats;                                                         //0x0
};
/* Used in */
// _HEAP_LFH_CONTEXT

