#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MMFREE_POOL_ENTRY.h>

//0x14 bytes (sizeof)
struct _MMFREE_POOL_ENTRY
{
    struct _LIST_ENTRY List;                                                //0x0
    ULONG Size;                                                             //0x8
    ULONG Signature;                                                        //0xc
    struct _MMFREE_POOL_ENTRY* Owner;                                       //0x10
};
/* Used in */
// _MMFREE_POOL_ENTRY

