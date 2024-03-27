#pragma once
/* ------------------ */

#include <_RTL_SPLAY_LINKS.h>

//0xc bytes (sizeof)
struct _RTL_SPLAY_LINKS
{
    struct _RTL_SPLAY_LINKS* Parent;                                        //0x0
    struct _RTL_SPLAY_LINKS* LeftChild;                                     //0x4
    struct _RTL_SPLAY_LINKS* RightChild;                                    //0x8
};
/* Used in */
// _RTL_SPLAY_LINKS

