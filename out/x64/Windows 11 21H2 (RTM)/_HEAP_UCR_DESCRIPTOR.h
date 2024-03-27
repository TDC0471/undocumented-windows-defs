#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x30 bytes (sizeof)
struct _HEAP_UCR_DESCRIPTOR
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _LIST_ENTRY SegmentEntry;                                        //0x10
    VOID* Address;                                                          //0x20
    ULONGLONG Size;                                                         //0x28
};
