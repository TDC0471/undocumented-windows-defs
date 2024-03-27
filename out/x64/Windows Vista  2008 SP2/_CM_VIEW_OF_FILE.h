#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CMHIVE.h>

//0x58 bytes (sizeof)
struct _CM_VIEW_OF_FILE
{
    struct _LIST_ENTRY MappedViewLinks;                                     //0x0
    struct _LIST_ENTRY PinnedViewLinks;                                     //0x10
    struct _LIST_ENTRY FlushedViewLinks;                                    //0x20
    struct _CMHIVE* CmHive;                                                 //0x30
    VOID* Bcb;                                                              //0x38
    VOID* ViewAddress;                                                      //0x40
    ULONG FileOffset;                                                       //0x48
    ULONG Size;                                                             //0x4c
    ULONG UseCount;                                                         //0x50
};
/* Used in */
// _HMAP_ENTRY

