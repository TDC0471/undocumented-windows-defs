#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _HEAP_VAMGR_RANGE
{
    union
    {
        struct _RTL_BALANCED_NODE RbNode;                                   //0x0
        struct _SINGLE_LIST_ENTRY Next;                                     //0x0
        struct
        {
            UCHAR Allocated:1;                                              //0x0
            UCHAR Internal:1;                                               //0x0
            UCHAR Standalone:1;                                             //0x0
            UCHAR Spare0:5;                                                 //0x0
            UCHAR AllocatorIndex;                                           //0x1
            ULONG OwnerCtx[2];                                              //0x4
        };
    };
    union
    {
        ULONG SizeInChunks;                                                 //0xc
        struct
        {
            USHORT ChunkCount;                                              //0xc
            USHORT PrevChunkCount;                                          //0xe
        };
        ULONG Signature;                                                    //0xc
    };
};
