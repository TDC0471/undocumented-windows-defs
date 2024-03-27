#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_HEAP_DESCRIPTOR_KEY.h>

//0x20 bytes (sizeof)
struct _HEAP_PAGE_RANGE_DESCRIPTOR
{
    union
    {
        struct _RTL_BALANCED_NODE TreeNode;                                 //0x0
        struct
        {
            ULONG TreeSignature;                                            //0x0
            ULONG UnusedBytes;                                              //0x4
            USHORT ExtraPresent:1;                                          //0x8
            USHORT Spare0:15;                                               //0x8
        };
    };
    volatile UCHAR RangeFlags;                                              //0x18
    UCHAR CommittedPageCount;                                               //0x19
    USHORT Spare;                                                           //0x1a
    union
    {
        struct _HEAP_DESCRIPTOR_KEY Key;                                    //0x1c
        struct
        {
            UCHAR Align[3];                                                 //0x1c
            union
            {
                UCHAR UnitOffset;                                           //0x1f
                UCHAR UnitSize;                                             //0x1f
            };
        };
    };
};
/* Used in */
// _HEAP_PAGE_SEGMENT

