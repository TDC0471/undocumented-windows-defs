#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_MMPFN.h>

//0x88 bytes (sizeof)
struct _MI_PAGELIST_STATE
{
    volatile LONG ActiveSpinLock;                                           //0x0
    struct _RTL_AVL_TREE ActiveThreadTree;                                  //0x8
    volatile LONG ActiveZeroSpinLock;                                       //0x10
    struct _RTL_AVL_TREE ActiveZeroThreadTree;                              //0x18
    struct _MMPFN LargePfnTemplate;                                         //0x20
    struct _MMPFN LargePfnBasePageTemplate;                                 //0x50
    ULONG NumberOfLargePageListHeads;                                       //0x80
};
/* Used in */
// _MI_SYSTEM_INFORMATION

