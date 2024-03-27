#pragma once
/* ------------------ */

#include <_HEAP_USERDATA_HEADER.h>
#include <_INTERLOCK_SEQ.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x30 bytes (sizeof)
struct _HEAP_SUBSEGMENT
{
    VOID* Bucket;                                                           //0x0
    struct _HEAP_USERDATA_HEADER* UserBlocks;                               //0x8
    struct _INTERLOCK_SEQ AggregateExchg;                                   //0x10
    union
    {
        struct
        {
            USHORT BlockSize;                                               //0x18
            USHORT FreeThreshold;                                           //0x1a
            USHORT BlockCount;                                              //0x1c
            UCHAR SizeIndex;                                                //0x1e
            UCHAR AffinityIndex;                                            //0x1f
        };
        ULONG Alignment[2];                                                 //0x18
    };
    struct _SINGLE_LIST_ENTRY SFreeListEntry;                               //0x20
    volatile ULONG Lock;                                                    //0x28
};
/* Used in */
// _HEAP_USERDATA_HEADER

