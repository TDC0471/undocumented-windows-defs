#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x28 bytes (sizeof)
struct _HEAP_LARGE_ALLOC_DATA
{
    struct _RTL_BALANCED_NODE TreeNode;                                     //0x0
    union
    {
        ULONGLONG VirtualAddress;                                           //0x18
        ULONGLONG UnusedBytes:16;                                           //0x18
    };
    ULONGLONG ExtraPresent:1;                                               //0x20
    ULONGLONG GuardPageCount:1;                                             //0x20
    ULONGLONG GuardPageAlignment:6;                                         //0x20
    ULONGLONG Spare:4;                                                      //0x20
    ULONGLONG AllocatedPages:52;                                            //0x20
};
