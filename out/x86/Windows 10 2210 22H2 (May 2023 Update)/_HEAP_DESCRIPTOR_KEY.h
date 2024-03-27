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
            ULONG Ignore:8;                                                 //0x0
            ULONG EncodedCommittedPageCount:16;                             //0x0
            ULONG UnitCount:8;                                              //0x0
        };
    };
};
/* Used in */
// _HEAP_PAGE_RANGE_DESCRIPTOR

