#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>

//0x20 bytes (sizeof)
struct _CACHED_KSTACK_LIST
{
    union _SLIST_HEADER SListHead;                                          //0x0
    LONG MinimumFree;                                                       //0x10
    ULONG Misses;                                                           //0x14
    ULONG MissesLast;                                                       //0x18
};
/* Used in */
// _KNODE

