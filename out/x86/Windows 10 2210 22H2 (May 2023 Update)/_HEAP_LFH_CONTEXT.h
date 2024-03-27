#pragma once
/* ------------------ */

#include <_HEAP_SUBALLOCATOR_CALLBACKS.h>
#include <_RTL_HP_LFH_CONFIG.h>
#include <_HEAP_LFH_SUBSEGMENT_STATS.h>
#include <_HEAP_LFH_BUCKET.h>

//0x2c0 bytes (sizeof)
struct _HEAP_LFH_CONTEXT
{
    VOID* BackendCtx;                                                       //0x0
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;                          //0x4
    UCHAR* AffinityModArray;                                                //0x18
    UCHAR MaxAffinity;                                                      //0x1c
    UCHAR LockType;                                                         //0x1d
    SHORT MemStatsOffset;                                                   //0x1e
    struct _RTL_HP_LFH_CONFIG Config;                                       //0x20
    union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;                           //0x40
    ULONG SubsegmentCreationLock;                                           //0x44
    struct _HEAP_LFH_BUCKET* Buckets[129];                                  //0x80
};
/* Used in */
// _SEGMENT_HEAP

