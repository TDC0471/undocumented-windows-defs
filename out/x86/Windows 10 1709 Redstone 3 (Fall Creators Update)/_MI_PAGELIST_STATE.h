#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>

//0x8 bytes (sizeof)
struct _MI_PAGELIST_STATE
{
    volatile LONG ActiveSpinLock;                                           //0x0
    struct _RTL_AVL_TREE ActiveThreadTree;                                  //0x4
};
/* Used in */
// _MI_SYSTEM_INFORMATION

