#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x40 bytes (sizeof)
struct _CM_VIEW_OF_FILE
{
    struct _LIST_ENTRY LRUViewList;                                         //0x0
    struct _LIST_ENTRY PinViewList;                                         //0x10
    ULONG FileOffset;                                                       //0x20
    ULONG Size;                                                             //0x24
    ULONGLONG* ViewAddress;                                                 //0x28
    VOID* Bcb;                                                              //0x30
    ULONG UseCount;                                                         //0x38
};
/* Used in */
// _HMAP_ENTRY

