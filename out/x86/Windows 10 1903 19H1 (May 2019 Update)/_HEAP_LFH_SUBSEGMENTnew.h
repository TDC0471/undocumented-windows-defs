#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_HEAP_LFH_SUBSEGMENT_OWNER.h>
#include <_HEAP_LFH_SUBSEGMENT_DELAY_FREE.h>
#include <_HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS.h>

//0x24 bytes (sizeof)
struct _HEAP_LFH_SUBSEGMENT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    union
    {
        struct _HEAP_LFH_SUBSEGMENT_OWNER* Owner;                           //0x8
        union _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;                    //0x8
    };
    ULONG CommitLock;                                                       //0xc
    union
    {
        struct
        {
            USHORT FreeCount;                                               //0x10
            USHORT BlockCount;                                              //0x12
        };
        volatile SHORT InterlockedShort;                                    //0x10
        volatile LONG InterlockedLong;                                      //0x10
    };
    USHORT FreeHint;                                                        //0x14
    UCHAR Location;                                                         //0x16
    UCHAR WitheldBlockCount;                                                //0x17
    struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;               //0x18
    UCHAR CommitUnitShift;                                                  //0x1c
    UCHAR CommitUnitCount;                                                  //0x1d
    USHORT CommitStateOffset;                                               //0x1e
    ULONG BlockBitmap[1];                                                   //0x20
};
