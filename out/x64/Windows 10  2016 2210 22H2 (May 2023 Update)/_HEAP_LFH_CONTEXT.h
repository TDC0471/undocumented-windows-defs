#pragma once
/* ------------------ */

#include <_HEAP_SUBALLOCATOR_CALLBACKS.h>
#include <_RTL_HP_LFH_CONFIG.h>
#include <_HEAP_LFH_SUBSEGMENT_STATS.h>
#include <_HEAP_LFH_BUCKET.h>

//0x4c0 bytes (sizeof)
struct _HEAP_LFH_CONTEXT
{
    VOID* BackendCtx;                                                       //0x0
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;                          //0x8
    UCHAR* AffinityModArray;                                                //0x30
    UCHAR MaxAffinity;                                                      //0x38
    UCHAR LockType;                                                         //0x39
    SHORT MemStatsOffset;                                                   //0x3a
    struct _RTL_HP_LFH_CONFIG Config;                                       //0x3c
    union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;                           //0x40
    ULONGLONG SubsegmentCreationLock;                                       //0x48
    struct _HEAP_LFH_BUCKET* Buckets[129];                                  //0x80
};
/* Used in */
// _SEGMENT_HEAP

