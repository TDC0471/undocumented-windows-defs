#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _DBGKD_QUERY_MEMORY
{
    ULONGLONG Address;                                                      //0x0
    ULONGLONG Reserved;                                                     //0x8
    ULONG AddressSpace;                                                     //0x10
    ULONG Flags;                                                            //0x14
};
/* Used in */
// _DBGKD_MANIPULATE_STATE64

