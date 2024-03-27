#pragma once
/* ------------------ */

#include <_MMLISTS.h>

//0x14 bytes (sizeof)
struct _MMPFNLIST
{
    ULONG Total;                                                            //0x0
    enum _MMLISTS ListName;                                                 //0x4
    ULONG Flink;                                                            //0x8
    ULONG Blink;                                                            //0xc
    ULONG Lock;                                                             //0x10
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS
// _MI_SECTION_STATE
// _MI_SLAB_ALLOCATOR_CONTEXT
// _MI_VISIBLE_PARTITION

