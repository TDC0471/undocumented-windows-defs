#pragma once
/* ------------------ */

#include <_EPROCESS.h>

//0x10 bytes (sizeof)
struct _POOL_HEADER
{
    union
    {
        struct
        {
            ULONG PreviousSize:8;                                           //0x0
            ULONG PoolIndex:8;                                              //0x0
            ULONG BlockSize:8;                                              //0x0
            ULONG PoolType:8;                                               //0x0
        };
        ULONG Ulong1;                                                       //0x0
    };
    ULONG PoolTag;                                                          //0x4
    union
    {
        struct _EPROCESS* ProcessBilled;                                    //0x8
        struct
        {
            USHORT AllocatorBackTraceIndex;                                 //0x8
            USHORT PoolTagHash;                                             //0xa
        };
    };
};
/* Used in */
// _POOL_BLOCK_HEAD
// _POOL_HACKER

