#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _VI_POOL_ENTRY_INUSE
{
    VOID* VirtualAddress;                                                   //0x0
    VOID* CallingAddress;                                                   //0x4
    ULONG NumberOfBytes;                                                    //0x8
    ULONG Tag;                                                              //0xc
};
/* Used in */
// _VI_POOL_ENTRY

