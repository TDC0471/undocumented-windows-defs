#pragma once
/* ------------------ */

#include <_VF_AVL_TABLE.h>

//0x18 bytes (sizeof)
struct _VF_AVL_TREE
{
    ULONG NodeRangeSize;                                                    //0x0
    volatile ULONG NodeCount;                                               //0x4
    struct _VF_AVL_TABLE* Tables;                                           //0x8
    ULONG TablesNo;                                                         //0xc
    UCHAR UseSessionId;                                                     //0x10
    union
    {
        ULONG NodeSize;                                                     //0x14
        ULONG UseLookaside;                                                 //0x14
    } u1;                                                                   //0x14
};
