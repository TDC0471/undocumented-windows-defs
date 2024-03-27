#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _VI_POOL_ENTRY_INUSE
{
    VOID* VirtualAddress;                                                   //0x0
    VOID* CallingAddress;                                                   //0x8
    ULONGLONG NumberOfBytes;                                                //0x10
    ULONGLONG Tag;                                                          //0x18
};
/* Used in */
// _VI_POOL_ENTRY

