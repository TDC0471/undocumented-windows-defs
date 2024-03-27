#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _FAKE_HEAP_ENTRY
{
    ULONG Size;                                                             //0x0
    ULONG PreviousSize;                                                     //0x4
};
/* Used in */
// _HEAP_FAILURE_INFORMATION

