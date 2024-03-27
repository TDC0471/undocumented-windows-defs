#pragma once
/* ------------------ */

#include <_WNF_LOCK.h>
#include <_LIST_ENTRY.h>

//0xc bytes (sizeof)
struct _WNF_SCOPE_MAP_ENTRY
{
    struct _WNF_LOCK MapEntryLock;                                          //0x0
    struct _LIST_ENTRY MapEntryHead;                                        //0x4
};
/* Used in */
// _WNF_SCOPE_MAP

