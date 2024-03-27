#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>

//0x10 bytes (sizeof)
struct _LOCK_HEADER
{
    struct _RTL_AVL_TREE LockTree;                                          //0x0
    ULONG Count;                                                            //0x4
    ULONG Lock;                                                             //0x8
    ULONG Valid;                                                            //0xc
};
