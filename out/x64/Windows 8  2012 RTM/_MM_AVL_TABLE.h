#pragma once
/* ------------------ */

#include <_MM_AVL_NODE.h>

//0x30 bytes (sizeof)
struct _MM_AVL_TABLE
{
    struct _MM_AVL_NODE BalancedRoot;                                       //0x0
    ULONGLONG DepthOfTree:5;                                                //0x18
    ULONGLONG TableType:3;                                                  //0x18
    ULONGLONG NumberGenericTableElements:56;                                //0x18
    VOID* NodeHint;                                                         //0x20
    VOID* NodeFreeHint;                                                     //0x28
};
/* Used in */
// _CONTROL_AREA
// _EPROCESS
// _MSUBSECTION
// _SUBSECTION

