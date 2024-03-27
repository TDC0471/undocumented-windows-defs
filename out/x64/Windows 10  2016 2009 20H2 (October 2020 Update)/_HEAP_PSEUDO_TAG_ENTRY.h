#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HEAP_PSEUDO_TAG_ENTRY
{
    ULONG Allocs;                                                           //0x0
    ULONG Frees;                                                            //0x4
    ULONGLONG Size;                                                         //0x8
};
/* Used in */
// _HEAP

