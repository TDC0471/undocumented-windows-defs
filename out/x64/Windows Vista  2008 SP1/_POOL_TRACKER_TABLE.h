#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _POOL_TRACKER_TABLE
{
    volatile LONG Key;                                                      //0x0
    volatile LONG NonPagedAllocs;                                           //0x4
    volatile LONG NonPagedFrees;                                            //0x8
    ULONGLONG NonPagedBytes;                                                //0x10
    ULONG PagedAllocs;                                                      //0x18
    ULONG PagedFrees;                                                       //0x1c
    ULONGLONG PagedBytes;                                                   //0x20
};