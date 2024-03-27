#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _HEAP_ENTRY
{
    union
    {
        struct
        {
            USHORT Size;                                                    //0x0
            USHORT PreviousSize;                                            //0x2
        };
        VOID* volatile SubSegmentCode;                                      //0x0
    };
    UCHAR SmallTagIndex;                                                    //0x4
    UCHAR Flags;                                                            //0x5
    UCHAR UnusedBytes;                                                      //0x6
    volatile UCHAR SegmentIndex;                                            //0x7
};
/* Used in */
// _HEAP
// _HEAP_SEGMENT
// _HEAP_VIRTUAL_ALLOC_ENTRY

