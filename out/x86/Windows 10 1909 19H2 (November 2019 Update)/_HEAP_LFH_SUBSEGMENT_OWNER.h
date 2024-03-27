#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x1c bytes (sizeof)
struct _HEAP_LFH_SUBSEGMENT_OWNER
{
    UCHAR IsBucket:1;                                                       //0x0
    UCHAR Spare0:7;                                                         //0x0
    UCHAR BucketIndex;                                                      //0x1
    union
    {
        UCHAR SlotCount;                                                    //0x2
        UCHAR SlotIndex;                                                    //0x2
    };
    UCHAR Spare1;                                                           //0x3
    ULONG AvailableSubsegmentCount;                                         //0x4
    ULONG Lock;                                                             //0x8
    struct _LIST_ENTRY AvailableSubsegmentList;                             //0xc
    struct _LIST_ENTRY FullSubsegmentList;                                  //0x14
};
/* Used in */
// _HEAP_LFH_AFFINITY_SLOT
// _HEAP_LFH_BUCKET
// _HEAP_LFH_SUBSEGMENT

