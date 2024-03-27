#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0xc bytes (sizeof)
struct _RTL_BALANCED_NODE
{
    union
    {
        struct _RTL_BALANCED_NODE* Children[2];                             //0x0
        struct
        {
            struct _RTL_BALANCED_NODE* Left;                                //0x0
            struct _RTL_BALANCED_NODE* Right;                               //0x4
        };
    };
    union
    {
        struct
        {
            UCHAR Red:1;                                                    //0x8
            UCHAR Balance:2;                                                //0x8
        };
        ULONG ParentValue;                                                  //0x8
    };
};
/* Used in */
// _KLOCK_ENTRY
// _KSCB
// _LDR_DATA_TABLE_ENTRY
// _LOCK_TRACKER
// _MMVAD_SHORT
// _RTL_AVL_TREE
// _RTL_BALANCED_NODE
// _RTL_RB_TREE

