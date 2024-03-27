#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _HVIEW_MAP_ENTRY
{
    union
    {
        VOID* ViewStart;                                                    //0x0
        ULONGLONG IsPinned:1;                                               //0x0
    };
    VOID* Bcb;                                                              //0x8
    ULONGLONG PinnedPages;                                                  //0x10
    ULONG Size;                                                             //0x18
};
/* Used in */
// _HVIEW_MAP_TABLE

