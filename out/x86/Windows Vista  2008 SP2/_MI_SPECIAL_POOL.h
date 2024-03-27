#pragma once
/* ------------------ */

#include <_MMPTE.h>
#include <_RTL_BITMAP.h>

//0x18 bytes (sizeof)
struct _MI_SPECIAL_POOL
{
    struct _MMPTE* PteBase;                                                 //0x0
    struct _MMPTE FreePteHead;                                              //0x4
    struct _MMPTE FreePteTail;                                              //0x8
    volatile LONG PagesInUse;                                               //0xc
    struct _RTL_BITMAP SpecialPoolPdes;                                     //0x10
};
/* Used in */
// _MM_SESSION_SPACE

