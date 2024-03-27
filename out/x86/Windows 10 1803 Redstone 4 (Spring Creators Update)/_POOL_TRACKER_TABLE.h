#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _POOL_TRACKER_TABLE
{
    volatile LONG Key;                                                      //0x0
    ULONG NonPagedBytes;                                                    //0x4
    ULONGLONG NonPagedAllocs;                                               //0x8
    ULONGLONG NonPagedFrees;                                                //0x10
    ULONG PagedBytes;                                                       //0x18
    ULONGLONG PagedAllocs;                                                  //0x20
    ULONGLONG PagedFrees;                                                   //0x28
};
