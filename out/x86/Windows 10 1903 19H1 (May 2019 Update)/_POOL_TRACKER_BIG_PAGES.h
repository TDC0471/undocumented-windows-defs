#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _POOL_TRACKER_BIG_PAGES
{
    volatile ULONG Va;                                                      //0x0
    ULONG Key;                                                              //0x4
    ULONG Pattern:8;                                                        //0x8
    ULONG PoolType:12;                                                      //0x8
    ULONG SlushSize:12;                                                     //0x8
    ULONG NumberOfBytes;                                                    //0xc
};
