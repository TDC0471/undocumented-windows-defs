#pragma once
/* ------------------ */

#include <_MMADDRESS_NODE.h>

//0x14 bytes (sizeof)
struct _MMADDRESS_NODE
{
    union
    {
        LONG Balance:2;                                                     //0x0
        struct _MMADDRESS_NODE* Parent;                                     //0x0
    } u1;                                                                   //0x0
    struct _MMADDRESS_NODE* LeftChild;                                      //0x4
    struct _MMADDRESS_NODE* RightChild;                                     //0x8
    ULONG StartingVpn;                                                      //0xc
    ULONG EndingVpn;                                                        //0x10
};
/* Used in */
// _MMADDRESS_NODE
// _MM_AVL_TABLE

