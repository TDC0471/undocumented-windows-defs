#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _POOL_TRACKER_BIG_PAGES
{
    VOID* Va;                                                               //0x0
    ULONG Key;                                                              //0x4
    ULONG PoolType;                                                         //0x8
    ULONG NumberOfBytes;                                                    //0xc
};
