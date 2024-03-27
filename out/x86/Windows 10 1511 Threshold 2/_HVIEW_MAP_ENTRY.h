#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _HVIEW_MAP_ENTRY
{
    union
    {
        VOID* ViewStart;                                                    //0x0
        ULONG IsPinned:1;                                                   //0x0
    };
    VOID* Bcb;                                                              //0x4
    ULONGLONG PinnedPages;                                                  //0x8
    ULONG Size;                                                             //0x10
};
/* Used in */
// _HVIEW_MAP_TABLE

