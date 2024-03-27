#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x10 bytes (sizeof)
struct _RTL_RB_TREE
{
    struct _RTL_BALANCED_NODE* Root;                                        //0x0
    union
    {
        UCHAR Encoded:1;                                                    //0x8
        struct _RTL_BALANCED_NODE* Min;                                     //0x8
    };
};
/* Used in */
// _EJOB
// _ETW_PRIV_HANDLE_DEMUX_TABLE
// _HEAP_SEG_CONTEXT
// _HEAP_VAMGR_ALLOCATOR
// _HEAP_VS_CONTEXT
// _HVP_VIEW_MAP
// _KLOCK_ENTRY
// _KPRCB
// _KSCB
// _KTIMER2_COLLECTION
// _MI_SLAB_ALLOCATOR_CONTEXT
// _MMPAGING_FILE
// _SEGMENT_HEAP

