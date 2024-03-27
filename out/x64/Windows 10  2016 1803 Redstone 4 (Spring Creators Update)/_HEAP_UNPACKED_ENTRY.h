#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HEAP_UNPACKED_ENTRY
{
    VOID* PreviousBlockPrivateData;                                         //0x0
    union
    {
        struct
        {
            USHORT Size;                                                    //0x8
            UCHAR Flags;                                                    //0xa
            UCHAR SmallTagIndex;                                            //0xb
        };
        struct
        {
            ULONG SubSegmentCode;                                           //0x8
            USHORT PreviousSize;                                            //0xc
            union
            {
                UCHAR SegmentOffset;                                        //0xe
                UCHAR LFHFlags;                                             //0xe
            };
            UCHAR UnusedBytes;                                              //0xf
        };
        ULONGLONG CompactHeader;                                            //0x8
    };
};
/* Used in */
// _HEAP_ENTRY
// _HEAP_FREE_ENTRY

