#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _POOL_TRACKER_BIG_PAGES
{
    volatile ULONGLONG Va;                                                  //0x0
    ULONG Key;                                                              //0x8
    ULONG PoolType;                                                         //0xc
    ULONGLONG NumberOfBytes;                                                //0x10
};
