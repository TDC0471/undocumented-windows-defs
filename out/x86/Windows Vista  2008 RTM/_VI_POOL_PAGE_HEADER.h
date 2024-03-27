#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0xc bytes (sizeof)
struct _VI_POOL_PAGE_HEADER
{
    struct _SINGLE_LIST_ENTRY* NextPage;                                    //0x0
    VOID* VerifierEntry;                                                    //0x4
    ULONG Signature;                                                        //0x8
};
/* Used in */
// _VI_POOL_ENTRY

