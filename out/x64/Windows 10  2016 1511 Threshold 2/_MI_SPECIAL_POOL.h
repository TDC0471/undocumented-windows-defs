#pragma once
/* ------------------ */

#include <_MI_PTE_CHAIN_HEAD.h>
#include <_RTL_BITMAP.h>

//0x50 bytes (sizeof)
struct _MI_SPECIAL_POOL
{
    ULONGLONG Lock;                                                         //0x0
    struct _MI_PTE_CHAIN_HEAD Paged;                                        //0x8
    struct _MI_PTE_CHAIN_HEAD NonPaged;                                     //0x20
    volatile ULONGLONG PagesInUse;                                          //0x38
    struct _RTL_BITMAP SpecialPoolPdes;                                     //0x40
};
/* Used in */
// _MI_VISIBLE_STATE
// _MM_SESSION_SPACE

