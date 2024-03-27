#pragma once
/* ------------------ */

#include <_VF_AVL_TABLE.h>

//0x40 bytes (sizeof)
struct _VF_AVL_TREE
{
    volatile LONG Lock;                                                     //0x0
    VOID* NodeToFree;                                                       //0x4
    ULONG NodeRangeSize;                                                    //0x8
    ULONG NodeCount;                                                        //0xc
    struct _VF_AVL_TABLE* Tables;                                           //0x10
    ULONG TablesNo;                                                         //0x14
    union
    {
        ULONG NodeSize;                                                     //0x18
        ULONG UseLookaside;                                                 //0x18
    } u1;                                                                   //0x18
};
