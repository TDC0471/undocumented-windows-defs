#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct _POOL_TRACKER_TABLE
{
    volatile LONG Key;                                                      //0x0
    ULONGLONG NonPagedBytes;                                                //0x8
    ULONGLONG NonPagedAllocs;                                               //0x10
    ULONGLONG NonPagedFrees;                                                //0x18
    ULONGLONG PagedBytes;                                                   //0x20
    ULONGLONG PagedAllocs;                                                  //0x28
    ULONGLONG PagedFrees;                                                   //0x30
};
