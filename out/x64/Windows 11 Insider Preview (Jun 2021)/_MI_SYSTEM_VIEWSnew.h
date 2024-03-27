#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_RTL_AVL_TREE.h>

//0x18 bytes (sizeof)
struct _MI_SYSTEM_VIEWS
{
    struct _EX_PUSH_LOCK SystemSpaceViewLock;                               //0x0
    struct _RTL_AVL_TREE ViewRoot;                                          //0x8
    ULONG ViewCount;                                                        //0x10
};
/* Used in */
// _MI_SESSION_STATE

