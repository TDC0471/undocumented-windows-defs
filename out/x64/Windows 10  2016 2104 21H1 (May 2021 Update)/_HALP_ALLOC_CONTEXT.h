#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _HALP_ALLOC_CONTEXT
{
    struct _LIST_ENTRY BufferList;                                          //0x0
    ULONGLONG Lock;                                                         //0x10
};
