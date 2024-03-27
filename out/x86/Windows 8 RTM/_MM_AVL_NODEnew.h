#pragma once
/* ------------------ */

#include <_MM_AVL_NODE.h>

//0xc bytes (sizeof)
struct _MM_AVL_NODE
{
    union
    {
        LONG Balance:2;                                                     //0x0
        struct _MM_AVL_NODE* Parent;                                        //0x0
    } u1;                                                                   //0x0
    struct _MM_AVL_NODE* LeftChild;                                         //0x4
    struct _MM_AVL_NODE* RightChild;                                        //0x8
};
/* Used in */
// _MMVAD_SHORT
// _MM_AVL_NODE
// _MM_AVL_TABLE
// _MSUBSECTION

