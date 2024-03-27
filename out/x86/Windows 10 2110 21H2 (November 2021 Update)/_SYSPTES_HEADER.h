#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x8c bytes (sizeof)
struct _SYSPTES_HEADER
{
    struct _LIST_ENTRY ListHead[16];                                        //0x0
    ULONG Count;                                                            //0x80
    ULONG NumberOfEntries;                                                  //0x84
    ULONG NumberOfEntriesPeak;                                              //0x88
};
/* Used in */
// _MI_VISIBLE_STATE

