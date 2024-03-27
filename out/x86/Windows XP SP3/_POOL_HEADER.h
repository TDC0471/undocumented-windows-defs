#pragma once
/* ------------------ */

#include <_EPROCESS.h>

//0x8 bytes (sizeof)
struct _POOL_HEADER
{
    union
    {
        struct
        {
            USHORT PreviousSize:9;                                          //0x0
            USHORT PoolIndex:7;                                             //0x0
            USHORT BlockSize:9;                                             //0x2
            USHORT PoolType:7;                                              //0x2
        };
        ULONG Ulong1;                                                       //0x0
    };
    union
    {
        struct _EPROCESS* ProcessBilled;                                    //0x4
        ULONG PoolTag;                                                      //0x4
        struct
        {
            USHORT AllocatorBackTraceIndex;                                 //0x4
            USHORT PoolTagHash;                                             //0x6
        };
    };
};
/* Used in */
// _POOL_BLOCK_HEAD
// _POOL_HACKER

