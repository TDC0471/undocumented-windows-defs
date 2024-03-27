#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_HEAP_SEGMENT_MGR_COMMIT_STATE.h>
#include <_HEAP_PAGE_RANGE_DESCRIPTOR.h>

//0x1000 bytes (sizeof)
union _HEAP_PAGE_SEGMENT
{
    struct
    {
        struct _LIST_ENTRY ListEntry;                                       //0x0
        ULONG Signature;                                                    //0x8
    };
    struct
    {
        union _HEAP_SEGMENT_MGR_COMMIT_STATE* SegmentCommitState;           //0xc
        UCHAR UnusedWatermark;                                              //0x10
    };
    struct _HEAP_PAGE_RANGE_DESCRIPTOR DescArray[256];                      //0x0
};
