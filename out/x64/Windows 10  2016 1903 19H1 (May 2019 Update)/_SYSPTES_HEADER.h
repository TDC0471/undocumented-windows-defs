#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x118 bytes (sizeof)
struct _SYSPTES_HEADER
{
    struct _LIST_ENTRY ListHead[16];                                        //0x0
    ULONGLONG Count;                                                        //0x100
    ULONGLONG NumberOfEntries;                                              //0x108
    ULONGLONG NumberOfEntriesPeak;                                          //0x110
};
/* Used in */
// _MI_VISIBLE_STATE

