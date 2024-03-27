#pragma once
/* ------------------ */

#include <_RTL_AVL_TABLE.h>
#include <_VF_AVL_TREE_NODE.h>

//0x3c bytes (sizeof)
struct _VF_AVL_TABLE
{
    struct _RTL_AVL_TABLE RtlTable;                                         //0x0
    struct _VF_AVL_TREE_NODE* ReservedNode;                                 //0x38
};
/* Used in */
// _VF_AVL_TREE

