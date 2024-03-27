#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _EVENT_FILTER_DESCRIPTOR
{
    ULONGLONG Ptr;                                                          //0x0
    ULONG Size;                                                             //0x8
    ULONG Type;                                                             //0xc
};
/* Used in */
// _tlgProvider_t

