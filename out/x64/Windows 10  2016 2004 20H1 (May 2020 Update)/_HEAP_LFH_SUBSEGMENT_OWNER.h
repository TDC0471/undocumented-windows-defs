#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x38 bytes (sizeof)
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
    ULONGLONG AvailableSubsegmentCount;                                     //0x8
    ULONGLONG Lock;                                                         //0x10
    struct _LIST_ENTRY AvailableSubsegmentList;                             //0x18
    struct _LIST_ENTRY FullSubsegmentList;                                  //0x28
};
/* Used in */
// _HEAP_LFH_AFFINITY_SLOT
// _HEAP_LFH_BUCKET
// _HEAP_LFH_SUBSEGMENT

