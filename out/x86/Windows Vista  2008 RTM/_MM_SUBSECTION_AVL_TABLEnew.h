#pragma once
/* ------------------ */

#include <_MMSUBSECTION_NODE.h>

//0x20 bytes (sizeof)
struct _MM_SUBSECTION_AVL_TABLE
{
    struct _MMSUBSECTION_NODE BalancedRoot;                                 //0x0
    ULONG DepthOfTree:5;                                                    //0x18
    ULONG Unused:3;                                                         //0x18
    ULONG NumberGenericTableElements:24;                                    //0x18
    VOID* NodeHint;                                                         //0x1c
};
/* Used in */
// _CONTROL_AREA

