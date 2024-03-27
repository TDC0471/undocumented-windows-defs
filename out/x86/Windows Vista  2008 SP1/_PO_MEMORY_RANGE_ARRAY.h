#pragma once
/* ------------------ */

#include <_PO_MEMORY_RANGE_ARRAY_RANGE.h>
#include <_PO_MEMORY_RANGE_ARRAY_LINK.h>

//0x10 bytes (sizeof)
struct _PO_MEMORY_RANGE_ARRAY
{
    union
    {
        struct _PO_MEMORY_RANGE_ARRAY_RANGE Range;                          //0x0
        struct _PO_MEMORY_RANGE_ARRAY_LINK Link;                            //0x0
    };
};
/* Used in */
// _POP_HIBER_CONTEXT
// _PO_MEMORY_RANGE_ARRAY_LINK

