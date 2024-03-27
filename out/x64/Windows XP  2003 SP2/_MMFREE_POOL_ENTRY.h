#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MMFREE_POOL_ENTRY.h>

//0x28 bytes (sizeof)
struct _MMFREE_POOL_ENTRY
{
    struct _LIST_ENTRY List;                                                //0x0
    ULONGLONG Size;                                                         //0x10
    ULONG Signature;                                                        //0x18
    struct _MMFREE_POOL_ENTRY* Owner;                                       //0x20
};
/* Used in */
// _MMFREE_POOL_ENTRY

