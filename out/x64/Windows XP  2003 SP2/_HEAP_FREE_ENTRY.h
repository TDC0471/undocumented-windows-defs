#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _HEAP_FREE_ENTRY
{
    VOID* PreviousBlockPrivateData;                                         //0x0
    union
    {
        struct
        {
            USHORT Size;                                                    //0x8
            USHORT PreviousSize;                                            //0xa
            UCHAR SmallTagIndex;                                            //0xc
            UCHAR Flags;                                                    //0xd
            UCHAR UnusedBytes;                                              //0xe
            UCHAR SegmentIndex;                                             //0xf
        };
        ULONGLONG CompactHeader;                                            //0x8
    };
    struct _LIST_ENTRY FreeList;                                            //0x10
};
