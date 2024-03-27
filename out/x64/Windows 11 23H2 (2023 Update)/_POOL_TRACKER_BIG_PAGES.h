#pragma once
/* ------------------ */

#include <_EPROCESS.h>

//0x20 bytes (sizeof)
struct _POOL_TRACKER_BIG_PAGES
{
    volatile ULONGLONG Va;                                                  //0x0
    ULONG Key;                                                              //0x8
    ULONG Pattern:8;                                                        //0xc
    ULONG PoolType:12;                                                      //0xc
    ULONG SlushSize:12;                                                     //0xc
    ULONGLONG NumberOfBytes;                                                //0x10
    struct _EPROCESS* ProcessBilled;                                        //0x18
};
