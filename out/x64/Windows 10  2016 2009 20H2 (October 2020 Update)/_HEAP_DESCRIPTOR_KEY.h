#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _HEAP_DESCRIPTOR_KEY
{
    union
    {
        ULONG Key;                                                          //0x0
        struct
        {
            ULONG EncodedCommittedPageCount:16;                             //0x0
            ULONG LargePageCost:8;                                          //0x0
            ULONG UnitCount:8;                                              //0x0
        };
    };
};
/* Used in */
// _HEAP_PAGE_RANGE_DESCRIPTOR

