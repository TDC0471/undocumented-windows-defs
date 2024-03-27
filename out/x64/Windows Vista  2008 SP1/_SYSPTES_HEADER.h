#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _SYSPTES_HEADER
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONGLONG Count;                                                        //0x10
    ULONGLONG NumberOfEntries;                                              //0x18
    ULONGLONG NumberOfEntriesPeak;                                          //0x20
};
