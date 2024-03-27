#pragma once
/* ------------------ */

#include <_HEAP_VS_CHUNK_HEADER_SIZE.h>

//0x10 bytes (sizeof)
struct _HEAP_VS_CHUNK_HEADER
{
    union _HEAP_VS_CHUNK_HEADER_SIZE Sizes;                                 //0x0
    union
    {
        struct
        {
            ULONG EncodedSegmentPageOffset:8;                               //0x8
            ULONG UnusedBytes:1;                                            //0x8
            ULONG SkipDuringWalk:1;                                         //0x8
            ULONG Spare:22;                                                 //0x8
        };
        ULONG AllocatedChunkBits;                                           //0x8
    };
};
/* Used in */
// _HEAP_VS_CHUNK_FREE_HEADER

