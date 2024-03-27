#pragma once
/* ------------------ */

#include <_MMADDRESS_NODE.h>

//0x40 bytes (sizeof)
struct _MM_AVL_TABLE
{
    struct _MMADDRESS_NODE BalancedRoot;                                    //0x0
    ULONGLONG DepthOfTree:5;                                                //0x28
    ULONGLONG Unused:3;                                                     //0x28
    ULONGLONG NumberGenericTableElements:56;                                //0x28
    VOID* NodeHint;                                                         //0x30
    VOID* NodeFreeHint;                                                     //0x38
};
/* Used in */
// _EPROCESS

