#pragma once
/* ------------------ */

#include <_MI_LARGE_PAGE_LISTS_CHANGING.h>
#include <_KGATE.h>

//0x14 bytes (sizeof)
struct _MI_LARGE_PAGE_LISTS_CHANGING
{
    struct _MI_LARGE_PAGE_LISTS_CHANGING* Next;                             //0x0
    struct _KGATE Gate;                                                     //0x4
};
/* Used in */
// _MI_LARGE_PAGE_LISTS_CHANGING
// _MI_NODE_INFORMATION

