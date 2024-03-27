#pragma once
/* ------------------ */

#include <_SLIST_ENTRY.h>
#include <_KAPC.h>

//0x60 bytes (sizeof)
struct _ETW_APC_ENTRY
{
    union
    {
        struct _SLIST_ENTRY SListEntry;                                     //0x0
        struct _KAPC Apc;                                                   //0x0
    };
};
/* Used in */
// _ETW_STACK_TRACE_BLOCK

