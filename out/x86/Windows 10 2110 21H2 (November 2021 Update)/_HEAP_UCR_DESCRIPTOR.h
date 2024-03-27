#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _HEAP_UCR_DESCRIPTOR
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _LIST_ENTRY SegmentEntry;                                        //0x8
    VOID* Address;                                                          //0x10
    ULONG Size;                                                             //0x14
};
