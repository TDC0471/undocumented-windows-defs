#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>

//0x20 bytes (sizeof)
struct _LOCK_HEADER
{
    struct _RTL_AVL_TREE LockTree;                                          //0x0
    ULONGLONG Count;                                                        //0x8
    ULONGLONG Lock;                                                         //0x10
    ULONG Valid;                                                            //0x18
};
