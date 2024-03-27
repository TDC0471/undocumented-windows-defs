#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_LIST_ENTRY.h>

//0x38 bytes (sizeof)
struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY
{
    union
    {
        struct _RTL_BALANCED_NODE LengthTreeNode;                           //0x0
        struct _LIST_ENTRY FreeListEntry;                                   //0x0
    };
    struct _RTL_BALANCED_NODE LocationTreeNode;                             //0x18
    ULONG StartingIndex;                                                    //0x30
    ULONG Length;                                                           //0x34
};
/* Used in */
// _MMPAGING_FILE

