#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_HEAP_SUBSEGMENT.h>

//0x10 bytes (sizeof)
struct _HEAP_USERDATA_HEADER
{
    union
    {
        struct _SINGLE_LIST_ENTRY SFreeListEntry;                           //0x0
        struct _HEAP_SUBSEGMENT* SubSegment;                                //0x0
    };
    VOID* HeapHandle;                                                       //0x4
    ULONG SizeIndex;                                                        //0x8
    ULONG Signature;                                                        //0xc
};
/* Used in */
// _HEAP_SUBSEGMENT

