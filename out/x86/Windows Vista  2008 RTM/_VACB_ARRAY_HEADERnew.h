#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _VACB_ARRAY_HEADER
{
    struct _LIST_ENTRY Links;                                               //0x0
    ULONG MappingCount;                                                     //0x8
    ULONG Reserved;                                                         //0xc
};
/* Used in */
// _VACB

