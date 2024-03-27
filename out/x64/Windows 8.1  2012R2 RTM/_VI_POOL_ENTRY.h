#pragma once
/* ------------------ */

#include <_VI_POOL_PAGE_HEADER.h>
#include <_VI_POOL_ENTRY_INUSE.h>
#include <_SLIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _VI_POOL_ENTRY
{
    union
    {
        struct _VI_POOL_PAGE_HEADER PageHeader;                             //0x0
        struct _VI_POOL_ENTRY_INUSE InUse;                                  //0x0
        struct _SLIST_ENTRY* NextFree;                                      //0x0
    };
};
/* Used in */
// _MI_VERIFIER_POOL_HEADER

