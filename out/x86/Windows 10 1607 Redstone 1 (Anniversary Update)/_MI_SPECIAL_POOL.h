#pragma once
/* ------------------ */

#include <_MI_PTE_CHAIN_HEAD.h>
#include <_RTL_BITMAP.h>

//0x48 bytes (sizeof)
struct _MI_SPECIAL_POOL
{
    ULONG Lock;                                                             //0x0
    struct _MI_PTE_CHAIN_HEAD Paged;                                        //0x8
    struct _MI_PTE_CHAIN_HEAD NonPaged;                                     //0x20
    volatile ULONG PagesInUse;                                              //0x38
    struct _RTL_BITMAP SpecialPoolPdes;                                     //0x3c
};
/* Used in */
// _MI_VISIBLE_STATE
// _MM_SESSION_SPACE

