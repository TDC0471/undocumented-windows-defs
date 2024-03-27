#pragma once
/* ------------------ */

#include <_RTL_BALANCED_LINKS.h>

//0x20 bytes (sizeof)
struct _RTL_BALANCED_LINKS
{
    struct _RTL_BALANCED_LINKS* Parent;                                     //0x0
    struct _RTL_BALANCED_LINKS* LeftChild;                                  //0x8
    struct _RTL_BALANCED_LINKS* RightChild;                                 //0x10
    CHAR Balance;                                                           //0x18
    UCHAR Reserved[3];                                                      //0x19
};
/* Used in */
// _KTMOBJECT_NAMESPACE_LINK
// _RTL_AVL_TABLE
// _RTL_BALANCED_LINKS

