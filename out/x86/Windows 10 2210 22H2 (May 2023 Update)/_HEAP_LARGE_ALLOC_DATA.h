#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x14 bytes (sizeof)
struct _HEAP_LARGE_ALLOC_DATA
{
    struct _RTL_BALANCED_NODE TreeNode;                                     //0x0
    union
    {
        ULONG VirtualAddress;                                               //0xc
        ULONG UnusedBytes:16;                                               //0xc
    };
    ULONG ExtraPresent:1;                                                   //0x10
    ULONG GuardPageCount:1;                                                 //0x10
    ULONG GuardPageAlignment:6;                                             //0x10
    ULONG Spare:4;                                                          //0x10
    ULONG AllocatedPages:20;                                                //0x10
};
