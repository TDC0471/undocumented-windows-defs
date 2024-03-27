#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_HEAP_DESCRIPTOR_KEY.h>

//0x10 bytes (sizeof)
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
    union
    {
        volatile UCHAR RangeFlags;                                          //0xc
        struct
        {
            UCHAR RangeFlagBits:5;                                          //0xc
            UCHAR CommittedPageCount:3;                                     //0xc
        };
        struct _HEAP_DESCRIPTOR_KEY Key;                                    //0xc
        struct
        {
            UCHAR Align[3];                                                 //0xc
            union
            {
                UCHAR UnitOffset;                                           //0xf
                UCHAR UnitSize;                                             //0xf
            };
        };
    };
};
/* Used in */
// _HEAP_PAGE_SEGMENT

