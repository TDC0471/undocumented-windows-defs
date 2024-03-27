#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _HEAP_UNPACKED_ENTRY
{
    union
    {
        struct
        {
            USHORT Size;                                                    //0x0
            UCHAR Flags;                                                    //0x2
            UCHAR SmallTagIndex;                                            //0x3
        };
        ULONG SubSegmentCode;                                               //0x0
    };
    USHORT PreviousSize;                                                    //0x4
    union
    {
        UCHAR SegmentOffset;                                                //0x6
        UCHAR LFHFlags;                                                     //0x6
    };
    UCHAR UnusedBytes;                                                      //0x7
};
/* Used in */
// _HEAP_ENTRY
// _HEAP_FREE_ENTRY

