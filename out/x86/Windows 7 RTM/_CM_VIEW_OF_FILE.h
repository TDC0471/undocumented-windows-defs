#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CMHIVE.h>

//0x30 bytes (sizeof)
struct _CM_VIEW_OF_FILE
{
    struct _LIST_ENTRY MappedViewLinks;                                     //0x0
    struct _LIST_ENTRY PinnedViewLinks;                                     //0x8
    struct _LIST_ENTRY FlushedViewLinks;                                    //0x10
    struct _CMHIVE* CmHive;                                                 //0x18
    VOID* Bcb;                                                              //0x1c
    VOID* ViewAddress;                                                      //0x20
    ULONG FileOffset;                                                       //0x24
    ULONG Size;                                                             //0x28
    ULONG UseCount;                                                         //0x2c
};
/* Used in */
// _HMAP_ENTRY

