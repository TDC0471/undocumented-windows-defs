#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_HEAP_SUBSEGMENT.h>

//0x20 bytes (sizeof)
struct _HEAP_USERDATA_HEADER
{
    union
    {
        struct _SINGLE_LIST_ENTRY SFreeListEntry;                           //0x0
        struct _HEAP_SUBSEGMENT* SubSegment;                                //0x0
    };
    VOID* HeapHandle;                                                       //0x8
    ULONGLONG SizeIndex;                                                    //0x10
    ULONGLONG Signature;                                                    //0x18
};
/* Used in */
// _HEAP_SUBSEGMENT

