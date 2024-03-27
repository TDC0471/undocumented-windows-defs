#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _POOL_TRACKER_BIG_PAGES
{
    VOID* Va;                                                               //0x0
    ULONG Key;                                                              //0x4
    ULONG NumberOfPages;                                                    //0x8
};
