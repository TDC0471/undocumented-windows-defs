#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_CACHED_PTE
{
    union
    {
        struct
        {
            ULONG GlobalTimeStamp;                                          //0x0
            ULONG PteIndex;                                                 //0x4
        };
        LONGLONG Long;                                                      //0x0
    };
};
/* Used in */
// _MI_CACHED_PTES

