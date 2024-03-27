#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _HEAP_TAG_ENTRY
{
    ULONG Allocs;                                                           //0x0
    ULONG Frees;                                                            //0x4
    ULONG Size;                                                             //0x8
    USHORT TagIndex;                                                        //0xc
    USHORT CreatorBackTraceIndex;                                           //0xe
    USHORT TagName[24];                                                     //0x10
};
/* Used in */
// _HEAP

