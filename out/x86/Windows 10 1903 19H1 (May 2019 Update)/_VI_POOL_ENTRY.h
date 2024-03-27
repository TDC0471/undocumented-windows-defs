#pragma once
/* ------------------ */

#include <_VI_POOL_PAGE_HEADER.h>
#include <_VI_POOL_ENTRY_INUSE.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _VI_POOL_ENTRY
{
    union
    {
        struct _VI_POOL_PAGE_HEADER PageHeader;                             //0x0
        struct _VI_POOL_ENTRY_INUSE InUse;                                  //0x0
        struct _SINGLE_LIST_ENTRY* NextFree;                                //0x0
    };
};
/* Used in */
// _VI_VERIFIER_POOL_HEADER

