#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>

//0x18 bytes (sizeof)
struct _CACHED_KSTACK_LIST
{
    union _SLIST_HEADER SListHead;                                          //0x0
    LONG MinimumFree;                                                       //0x8
    ULONG Misses;                                                           //0xc
    ULONG MissesLast;                                                       //0x10
};
/* Used in */
// _KNODE

