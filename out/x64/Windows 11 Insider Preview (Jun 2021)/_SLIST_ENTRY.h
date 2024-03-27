#pragma once
/* ------------------ */

#include <_SLIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _SLIST_ENTRY
{
    struct _SLIST_ENTRY* Next;                                              //0x0
};
/* Used in */
// _BLOB
// _MMCLONE_DESCRIPTOR
// _MMINPAGE_SUPPORT
// _POOL_LIMIT_TABLE_ENTRY
// _SLIST_ENTRY
// _VI_POOL_ENTRY
// _VI_POOL_PAGE_HEADER

