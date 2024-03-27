#pragma once
/* ------------------ */

#include <_VF_AVL_TABLE.h>

//0x40 bytes (sizeof)
struct _VF_AVL_TREE
{
    volatile LONG Lock;                                                     //0x0
    VOID* NodeToFree;                                                       //0x8
    ULONGLONG NodeRangeSize;                                                //0x10
    ULONGLONG NodeCount;                                                    //0x18
    struct _VF_AVL_TABLE* Tables;                                           //0x20
    ULONG TablesNo;                                                         //0x28
    union
    {
        ULONG NodeSize;                                                     //0x2c
        ULONG UseLookaside;                                                 //0x2c
    } u1;                                                                   //0x2c
};
