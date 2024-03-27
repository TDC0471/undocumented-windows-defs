#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_MMPFN.h>

//0x4c bytes (sizeof)
struct _MI_PAGELIST_STATE
{
    volatile LONG ActiveSpinLock;                                           //0x0
    struct _RTL_AVL_TREE ActiveThreadTree;                                  //0x4
    volatile LONG ActiveZeroSpinLock;                                       //0x8
    struct _RTL_AVL_TREE ActiveZeroThreadTree;                              //0xc
    struct _MMPFN LargePfnTemplate;                                         //0x10
    struct _MMPFN LargePfnBasePageTemplate;                                 //0x2c
    ULONG NumberOfLargePageListHeads;                                       //0x48
};
/* Used in */
// _MI_SYSTEM_INFORMATION

