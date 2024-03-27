#pragma once
/* ------------------ */


//0x48 bytes (sizeof)
struct _HEAP_TAG_ENTRY
{
    ULONG Allocs;                                                           //0x0
    ULONG Frees;                                                            //0x4
    ULONGLONG Size;                                                         //0x8
    USHORT TagIndex;                                                        //0x10
    USHORT CreatorBackTraceIndex;                                           //0x12
    USHORT TagName[24];                                                     //0x14
};
/* Used in */
// _HEAP

