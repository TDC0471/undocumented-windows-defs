#pragma once
/* ------------------ */

#include <_MMPTE.h>
#include <_MI_SPECIAL_POOL_PTE_LIST.h>
#include <_RTL_BITMAP.h>

//0x48 bytes (sizeof)
struct _MI_SPECIAL_POOL
{
    struct _MMPTE* PteBase;                                                 //0x0
    ULONGLONG Lock;                                                         //0x8
    struct _MI_SPECIAL_POOL_PTE_LIST Paged;                                 //0x10
    struct _MI_SPECIAL_POOL_PTE_LIST NonPaged;                              //0x20
    volatile LONGLONG PagesInUse;                                           //0x30
    struct _RTL_BITMAP SpecialPoolPdes;                                     //0x38
};
/* Used in */
// _MM_SESSION_SPACE

