#pragma once
/* ------------------ */

#include <_MM_AVL_NODE.h>

//0x18 bytes (sizeof)
struct _MM_AVL_TABLE
{
    struct _MM_AVL_NODE BalancedRoot;                                       //0x0
    ULONG DepthOfTree:5;                                                    //0xc
    ULONG TableType:3;                                                      //0xc
    ULONG NumberGenericTableElements:24;                                    //0xc
    VOID* NodeHint;                                                         //0x10
    VOID* NodeFreeHint;                                                     //0x14
};
/* Used in */
// _CONTROL_AREA
// _EPROCESS
// _MSUBSECTION
// _SUBSECTION

