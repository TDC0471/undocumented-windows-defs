#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>

//0x28 bytes (sizeof)
struct _LOCK_HEADER
{
    struct _RTL_AVL_TREE LockTree;                                          //0x0
    struct _RTL_AVL_TREE LockMdlSwitchedTree;                               //0x8
    ULONGLONG Count;                                                        //0x10
    ULONGLONG Lock;                                                         //0x18
    ULONG Valid;                                                            //0x20
};
