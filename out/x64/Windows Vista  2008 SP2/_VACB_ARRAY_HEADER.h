#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _VACB_ARRAY_HEADER
{
    struct _LIST_ENTRY Links;                                               //0x0
    ULONG MappingCount;                                                     //0x10
    ULONG Reserved;                                                         //0x14
};
/* Used in */
// _VACB

