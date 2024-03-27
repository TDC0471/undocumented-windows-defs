#pragma once
/* ------------------ */

#include <_HEAP_LOCAL_SEGMENT_INFO.h>
#include <_HEAP_USERDATA_HEADER.h>
#include <_INTERLOCK_SEQ.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _HEAP_SUBSEGMENT
{
    struct _HEAP_LOCAL_SEGMENT_INFO* LocalInfo;                             //0x0
    struct _HEAP_USERDATA_HEADER* UserBlocks;                               //0x4
    struct _INTERLOCK_SEQ AggregateExchg;                                   //0x8
    union
    {
        struct
        {
            USHORT BlockSize;                                               //0x10
            USHORT Flags;                                                   //0x12
            USHORT BlockCount;                                              //0x14
            UCHAR SizeIndex;                                                //0x16
            UCHAR AffinityIndex;                                            //0x17
        };
        ULONG Alignment[2];                                                 //0x10
    };
    struct _SINGLE_LIST_ENTRY SFreeListEntry;                               //0x18
    volatile ULONG Lock;                                                    //0x1c
};
/* Used in */
// _HEAP_USERDATA_HEADER

