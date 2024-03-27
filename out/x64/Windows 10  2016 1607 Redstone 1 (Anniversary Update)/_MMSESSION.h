#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_RTL_AVL_TREE.h>

//0x20 bytes (sizeof)
struct _MMSESSION
{
    struct _EX_PUSH_LOCK SystemSpaceViewLock;                               //0x0
    struct _EX_PUSH_LOCK* SystemSpaceViewLockPointer;                       //0x8
    struct _RTL_AVL_TREE ViewRoot;                                          //0x10
    ULONG ViewCount;                                                        //0x18
    ULONG BitmapFailures;                                                   //0x1c
};
/* Used in */
// _MI_SESSION_STATE
// _MM_SESSION_SPACE

