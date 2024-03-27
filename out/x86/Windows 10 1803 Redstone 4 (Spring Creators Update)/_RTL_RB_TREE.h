#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x8 bytes (sizeof)
struct _RTL_RB_TREE
{
    struct _RTL_BALANCED_NODE* Root;                                        //0x0
    union
    {
        UCHAR Encoded:1;                                                    //0x4
        struct _RTL_BALANCED_NODE* Min;                                     //0x4
    };
};
/* Used in */
// _EJOB
// _ETW_PRIV_HANDLE_DEMUX_TABLE
// _HEAP_VAMGR_ALLOCATOR
// _HVP_VIEW_MAP
// _KLOCK_ENTRY
// _KPRCB
// _KSCB
// _KTIMER2_COLLECTION
// _MMPAGING_FILE

