#pragma once
/* ------------------ */

#include <_MMPTE.h>

//0x8 bytes (sizeof)
struct _MI_SPECIAL_POOL_PTE_LIST
{
    struct _MMPTE FreePteHead;                                              //0x0
    struct _MMPTE FreePteTail;                                              //0x4
};
/* Used in */
// _MI_SPECIAL_POOL

