#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>

//0x8 bytes (sizeof)
struct _HEAP_VS_DELAY_FREE_CONTEXT
{
    union _SLIST_HEADER ListHead;                                           //0x0
};
/* Used in */
// _HEAP_VS_CONTEXT

