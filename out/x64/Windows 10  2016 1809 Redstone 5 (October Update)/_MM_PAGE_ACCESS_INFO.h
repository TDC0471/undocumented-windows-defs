#pragma once
/* ------------------ */

#include <_MM_PAGE_ACCESS_INFO_FLAGS.h>

//0x8 bytes (sizeof)
struct _MM_PAGE_ACCESS_INFO
{
    union
    {
        union _MM_PAGE_ACCESS_INFO_FLAGS Flags;                             //0x0
        ULONGLONG FileOffset;                                               //0x0
        VOID* VirtualAddress;                                               //0x0
        VOID* PointerProtoPte;                                              //0x0
    };
};
/* Used in */
// _MM_PAGE_ACCESS_INFO_HEADER

