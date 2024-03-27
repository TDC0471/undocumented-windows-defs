#pragma once
/* ------------------ */

#include <_VF_AVL_TABLE.h>

//0x14 bytes (sizeof)
struct _VF_AVL_TREE
{
    ULONG NodeRangeSize;                                                    //0x0
    volatile ULONG NodeCount;                                               //0x4
    struct _VF_AVL_TABLE* Tables;                                           //0x8
    ULONG TablesNo;                                                         //0xc
    union
    {
        ULONG NodeSize;                                                     //0x10
        ULONG UseLookaside;                                                 //0x10
    } u1;                                                                   //0x10
};
