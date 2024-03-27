#pragma once
/* ------------------ */


//0x1c bytes (sizeof)
struct _POOL_TRACKER_TABLE
{
    volatile LONG Key;                                                      //0x0
    volatile LONG NonPagedAllocs;                                           //0x4
    volatile LONG NonPagedFrees;                                            //0x8
    ULONG NonPagedBytes;                                                    //0xc
    ULONG PagedAllocs;                                                      //0x10
    ULONG PagedFrees;                                                       //0x14
    ULONG PagedBytes;                                                       //0x18
};
