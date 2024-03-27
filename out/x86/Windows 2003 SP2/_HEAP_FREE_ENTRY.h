#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _HEAP_FREE_ENTRY
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
    UCHAR SegmentIndex;                                                     //0x7
    struct _LIST_ENTRY FreeList;                                            //0x8
};
