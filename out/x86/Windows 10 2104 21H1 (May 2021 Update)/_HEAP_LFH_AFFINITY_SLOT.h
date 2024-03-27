#pragma once
/* ------------------ */

#include <_HEAP_LFH_SUBSEGMENT_OWNER.h>
#include <_HEAP_LFH_FAST_REF.h>

//0x20 bytes (sizeof)
struct _HEAP_LFH_AFFINITY_SLOT
{
    struct _HEAP_LFH_SUBSEGMENT_OWNER State;                                //0x0
    struct _HEAP_LFH_FAST_REF ActiveSubsegment;                             //0x1c
};
/* Used in */
// _HEAP_LFH_BUCKET

