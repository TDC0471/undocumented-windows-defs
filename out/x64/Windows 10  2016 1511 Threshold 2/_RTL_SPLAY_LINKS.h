#pragma once
/* ------------------ */

#include <_RTL_SPLAY_LINKS.h>

//0x18 bytes (sizeof)
struct _RTL_SPLAY_LINKS
{
    struct _RTL_SPLAY_LINKS* Parent;                                        //0x0
    struct _RTL_SPLAY_LINKS* LeftChild;                                     //0x8
    struct _RTL_SPLAY_LINKS* RightChild;                                    //0x10
};
/* Used in */
// _RTL_SPLAY_LINKS

