#pragma once
/* ------------------ */

#include <_MI_PTE_CHAIN_HEAD.h>

//0x40 bytes (sizeof)
struct _MI_SPECIAL_POOL
{
    ULONG Lock;                                                             //0x0
    struct _MI_PTE_CHAIN_HEAD Paged;                                        //0x8
    struct _MI_PTE_CHAIN_HEAD NonPaged;                                     //0x20
    volatile ULONG PagesInUse;                                              //0x38
};
/* Used in */
// _MI_VISIBLE_STATE
// _MM_SESSION_SPACE

