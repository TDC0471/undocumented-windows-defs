#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x24 bytes (sizeof)
struct _CM_VIEW_OF_FILE
{
    struct _LIST_ENTRY LRUViewList;                                         //0x0
    struct _LIST_ENTRY PinViewList;                                         //0x8
    ULONG FileOffset;                                                       //0x10
    ULONG Size;                                                             //0x14
    ULONG* ViewAddress;                                                     //0x18
    VOID* Bcb;                                                              //0x1c
    ULONG UseCount;                                                         //0x20
};
/* Used in */
// _HMAP_ENTRY

