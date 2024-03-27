#pragma once
/* ------------------ */

#include <_MMPTE.h>
#include <_MI_SPECIAL_POOL_PTE_LIST.h>
#include <_RTL_BITMAP.h>

//0x24 bytes (sizeof)
struct _MI_SPECIAL_POOL
{
    struct _MMPTE* PteBase;                                                 //0x0
    ULONG Lock;                                                             //0x4
    struct _MI_SPECIAL_POOL_PTE_LIST Paged;                                 //0x8
    struct _MI_SPECIAL_POOL_PTE_LIST NonPaged;                              //0x10
    volatile LONG PagesInUse;                                               //0x18
    struct _RTL_BITMAP SpecialPoolPdes;                                     //0x1c
};
/* Used in */
// _MM_SESSION_SPACE

