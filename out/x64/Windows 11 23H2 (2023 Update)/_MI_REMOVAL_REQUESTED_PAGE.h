#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_LIST_ENTRY.h>
#include <_MMPFN.h>

//0x20 bytes (sizeof)
struct _MI_REMOVAL_REQUESTED_PAGE
{
    union
    {
        struct _RTL_BALANCED_NODE TreeNode;                                 //0x0
        struct _LIST_ENTRY Link;                                            //0x0
    };
    struct _MMPFN* Pfn;                                                     //0x18
};
