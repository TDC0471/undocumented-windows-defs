#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _ALPC_PROCESS_CONTEXT
{
    struct _EX_PUSH_LOCK Lock;                                              //0x0
    struct _LIST_ENTRY ViewListHead;                                        //0x4
    volatile ULONG PagedPoolQuotaCache;                                     //0xc
};
/* Used in */
// _EPROCESS

