#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x10 bytes (sizeof)
struct _RTL_RB_TREE
{
    struct _RTL_BALANCED_NODE* Root;                                        //0x0
    struct _RTL_BALANCED_NODE* Min;                                         //0x8
};
/* Used in */
// _KLOCK_ENTRY
// _KPRCB

