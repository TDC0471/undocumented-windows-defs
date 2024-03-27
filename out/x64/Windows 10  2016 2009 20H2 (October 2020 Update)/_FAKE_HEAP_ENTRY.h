#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _FAKE_HEAP_ENTRY
{
    ULONGLONG Size;                                                         //0x0
    ULONGLONG PreviousSize;                                                 //0x8
};
/* Used in */
// _HEAP_FAILURE_INFORMATION

