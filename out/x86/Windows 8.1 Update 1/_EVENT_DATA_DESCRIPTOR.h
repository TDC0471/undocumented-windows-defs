#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _EVENT_DATA_DESCRIPTOR
{
    ULONGLONG Ptr;                                                          //0x0
    ULONG Size;                                                             //0x8
    ULONG Reserved;                                                         //0xc
};
