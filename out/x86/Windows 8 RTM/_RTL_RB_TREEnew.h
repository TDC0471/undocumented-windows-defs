#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x8 bytes (sizeof)
struct _RTL_RB_TREE
{
    struct _RTL_BALANCED_NODE* Root;                                        //0x0
    struct _RTL_BALANCED_NODE* Min;                                         //0x4
};
/* Used in */
// _KPRCB

