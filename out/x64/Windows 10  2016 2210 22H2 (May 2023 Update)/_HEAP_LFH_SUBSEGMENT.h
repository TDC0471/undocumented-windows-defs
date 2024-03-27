#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_HEAP_LFH_SUBSEGMENT_OWNER.h>
#include <_HEAP_LFH_SUBSEGMENT_DELAY_FREE.h>
#include <_HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS.h>

//0x38 bytes (sizeof)
struct _HEAP_LFH_SUBSEGMENT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    union
    {
        struct _HEAP_LFH_SUBSEGMENT_OWNER* Owner;                           //0x10
        union _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;                    //0x10
    };
    ULONGLONG CommitLock;                                                   //0x18
    union
    {
        struct
        {
            USHORT FreeCount;                                               //0x20
            USHORT BlockCount;                                              //0x22
        };
        volatile SHORT InterlockedShort;                                    //0x20
        volatile LONG InterlockedLong;                                      //0x20
    };
    USHORT FreeHint;                                                        //0x24
    UCHAR Location;                                                         //0x26
    UCHAR WitheldBlockCount;                                                //0x27
    struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;               //0x28
    UCHAR CommitUnitShift;                                                  //0x2c
    UCHAR CommitUnitCount;                                                  //0x2d
    USHORT CommitStateOffset;                                               //0x2e
    ULONGLONG BlockBitmap[1];                                               //0x30
};
