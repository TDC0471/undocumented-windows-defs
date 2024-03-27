#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HEAP_ENTRY
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
};
/* Used in */
// _HEAP
// _HEAP_SEGMENT
// _HEAP_VIRTUAL_ALLOC_ENTRY

