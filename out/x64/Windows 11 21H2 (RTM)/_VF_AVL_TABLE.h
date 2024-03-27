#pragma once
/* ------------------ */

#include <_RTL_AVL_TABLE.h>
#include <_VF_AVL_TREE_NODE.h>

//0xc0 bytes (sizeof)
struct _VF_AVL_TABLE
{
    struct _RTL_AVL_TABLE RtlTable;                                         //0x0
    struct _VF_AVL_TREE_NODE* ReservedNode;                                 //0x68
    VOID* NodeToFree;                                                       //0x70
    volatile LONG Lock;                                                     //0x80
};
/* Used in */
// _VF_AVL_TREE

