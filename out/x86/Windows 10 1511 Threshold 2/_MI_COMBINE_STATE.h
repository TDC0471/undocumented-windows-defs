#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>

//0x18 bytes (sizeof)
struct _MI_COMBINE_STATE
{
    volatile LONG ActiveSpinLock;                                           //0x0
    ULONG CombiningThreadCount;                                             //0x4
    struct _RTL_AVL_TREE ActiveThreadTree;                                  //0x8
    ULONGLONG ZeroPageHashValue;                                            //0x10
};
/* Used in */
// _MI_SYSTEM_INFORMATION

