#pragma once
/* ------------------ */

#include <_MMADDRESS_NODE.h>

//0x28 bytes (sizeof)
struct _MMADDRESS_NODE
{
    union
    {
        LONGLONG Balance:2;                                                 //0x0
        struct _MMADDRESS_NODE* Parent;                                     //0x0
    } u1;                                                                   //0x0
    struct _MMADDRESS_NODE* LeftChild;                                      //0x8
    struct _MMADDRESS_NODE* RightChild;                                     //0x10
    ULONGLONG StartingVpn;                                                  //0x18
    ULONGLONG EndingVpn;                                                    //0x20
};
/* Used in */
// _MMADDRESS_NODE
// _MM_AVL_TABLE

