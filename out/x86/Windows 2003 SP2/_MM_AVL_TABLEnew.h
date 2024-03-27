#pragma once
/* ------------------ */

#include <_MMADDRESS_NODE.h>

//0x20 bytes (sizeof)
struct _MM_AVL_TABLE
{
    struct _MMADDRESS_NODE BalancedRoot;                                    //0x0
    ULONG DepthOfTree:5;                                                    //0x14
    ULONG Unused:3;                                                         //0x14
    ULONG NumberGenericTableElements:24;                                    //0x14
    VOID* NodeHint;                                                         //0x18
    VOID* NodeFreeHint;                                                     //0x1c
};
/* Used in */
// _EPROCESS

