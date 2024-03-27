#pragma once
/* ------------------ */

#include <_RTL_AVL_TABLE.h>
#include <_VF_AVL_TREE_NODE.h>

//0x80 bytes (sizeof)
struct _VF_AVL_TABLE
{
    struct _RTL_AVL_TABLE RtlTable;                                         //0x0
    struct _VF_AVL_TREE_NODE* ReservedNode;                                 //0x38
    VOID* NodeToFree;                                                       //0x3c
    volatile LONG Lock;                                                     //0x40
};
/* Used in */
// _VF_AVL_TREE

