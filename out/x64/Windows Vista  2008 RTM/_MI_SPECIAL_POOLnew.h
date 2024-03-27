#pragma once
/* ------------------ */

#include <_MMPTE.h>
#include <_RTL_BITMAP.h>

//0x30 bytes (sizeof)
struct _MI_SPECIAL_POOL
{
    struct _MMPTE* PteBase;                                                 //0x0
    struct _MMPTE FreePteHead;                                              //0x8
    struct _MMPTE FreePteTail;                                              //0x10
    volatile LONGLONG PagesInUse;                                           //0x18
    struct _RTL_BITMAP SpecialPoolPdes;                                     //0x20
};
/* Used in */
// _MM_SESSION_SPACE

