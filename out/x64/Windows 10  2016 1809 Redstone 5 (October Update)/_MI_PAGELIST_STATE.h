#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>

//0x28 bytes (sizeof)
struct _MI_PAGELIST_STATE
{
    volatile LONG ActiveSpinLock;                                           //0x0
    struct _RTL_AVL_TREE ActiveThreadTree;                                  //0x8
    volatile LONG ActiveZeroSpinLock;                                       //0x10
    struct _RTL_AVL_TREE ActiveZeroThreadTree;                              //0x18
    ULONG NumberOfLargePageListHeads;                                       //0x20
};
/* Used in */
// _MI_SYSTEM_INFORMATION

