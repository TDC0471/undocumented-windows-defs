#pragma once
/* ------------------ */

#include <_SLIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _VI_POOL_PAGE_HEADER
{
    struct _SLIST_ENTRY* NextPage;                                          //0x0
    VOID* VerifierEntry;                                                    //0x8
    ULONGLONG Signature;                                                    //0x10
};
/* Used in */
// _VI_POOL_ENTRY

