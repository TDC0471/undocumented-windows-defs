#pragma once
/* ------------------ */

#include <_MMLISTS.h>
#include <_MMPFN.h>

//0x58 bytes (sizeof)
struct _MMPFNLIST
{
    volatile ULONGLONG Total;                                               //0x0
    enum _MMLISTS ListName;                                                 //0x8
    ULONGLONG Flink;                                                        //0x10
    ULONGLONG Blink;                                                        //0x18
    volatile LONG Lock;                                                     //0x20
    struct _MMPFN EmbeddedPfn;                                              //0x28
};
/* Used in */
// _MI_NODE_INFORMATION
// _MI_PARTITION_PAGE_LISTS
// _MI_SECTION_STATE
// _MI_SLAB_ALLOCATOR_CONTEXT
// _MI_VISIBLE_PARTITION

