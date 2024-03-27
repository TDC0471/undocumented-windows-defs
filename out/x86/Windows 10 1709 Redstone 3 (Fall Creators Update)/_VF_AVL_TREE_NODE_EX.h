#pragma once
/* ------------------ */

#include <_VF_AVL_TREE_NODE.h>

//0xc bytes (sizeof)
struct _VF_AVL_TREE_NODE_EX
{
    struct _VF_AVL_TREE_NODE Base;                                          //0x0
    ULONG SessionId;                                                        //0x8
};
/* Used in */
// _VF_TARGET_DRIVER

