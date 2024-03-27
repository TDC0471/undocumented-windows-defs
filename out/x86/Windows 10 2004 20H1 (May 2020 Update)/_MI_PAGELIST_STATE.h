#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>

//0x14 bytes (sizeof)
struct _MI_PAGELIST_STATE
{
    volatile LONG ActiveSpinLock;                                           //0x0
    struct _RTL_AVL_TREE ActiveThreadTree;                                  //0x4
    volatile LONG ActiveZeroSpinLock;                                       //0x8
    struct _RTL_AVL_TREE ActiveZeroThreadTree;                              //0xc
    ULONG NumberOfLargePageListHeads;                                       //0x10
};
/* Used in */
// _MI_SYSTEM_INFORMATION

