#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0x8 bytes (sizeof)
struct _LDRP_CSLIST
{
    struct _SINGLE_LIST_ENTRY* Tail;                                        //0x0
};
/* Used in */
// _LDR_DDAG_NODE

