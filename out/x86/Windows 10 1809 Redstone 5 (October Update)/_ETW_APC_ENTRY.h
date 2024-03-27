#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_KAPC.h>

//0x30 bytes (sizeof)
struct _ETW_APC_ENTRY
{
    union
    {
        struct _SINGLE_LIST_ENTRY SListEntry;                               //0x0
        struct _KAPC Apc;                                                   //0x0
    };
};
/* Used in */
// _ETW_STACK_TRACE_BLOCK

