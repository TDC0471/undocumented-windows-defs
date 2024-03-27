#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x18 bytes (sizeof)
struct _RTL_BALANCED_NODE
{
    union
    {
        struct _RTL_BALANCED_NODE* Children[2];                             //0x0
        struct
        {
            struct _RTL_BALANCED_NODE* Left;                                //0x0
            struct _RTL_BALANCED_NODE* Right;                               //0x8
        };
    };
    union
    {
        struct
        {
            UCHAR Red:1;                                                    //0x10
            UCHAR Balance:2;                                                //0x10
        };
        ULONGLONG ParentValue;                                              //0x10
    };
};
/* Used in */
// _ETW_PROVIDER_TRAITS
// _KLOCK_ENTRY
// _KSCB
// _KTIMER2
// _LDR_DATA_TABLE_ENTRY
// _LOCK_TRACKER
// _MI_PAGEFILE_BITMAPS_CACHE_ENTRY
// _MI_PER_SESSION_PROTOS
// _MMCLONE_DESCRIPTOR
// _MMINPAGE_SUPPORT_FLOW_THROUGH
// _MMPAGING_FILE
// _MMPFN
// _MMVAD_SHORT
// _MSUBSECTION
// _RTL_AVL_TREE
// _RTL_BALANCED_NODE
// _RTL_RB_TREE
// _SECTION

