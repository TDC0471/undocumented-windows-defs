#pragma once
/* ------------------ */

#include <_VF_AVL_TABLE.h>

//0x28 bytes (sizeof)
struct _VF_AVL_TREE
{
    ULONGLONG NodeRangeSize;                                                //0x0
    volatile ULONGLONG NodeCount;                                           //0x8
    struct _VF_AVL_TABLE* Tables;                                           //0x10
    ULONG TablesNo;                                                         //0x18
    UCHAR UseSessionId;                                                     //0x1c
    union
    {
        ULONG NodeSize;                                                     //0x20
        ULONG UseLookaside;                                                 //0x20
    } u1;                                                                   //0x20
};
