#pragma once
/* ------------------ */

#include <_RELATION_LIST_ENTRY.h>

//0x14 bytes (sizeof)
struct _RELATION_LIST
{
    ULONG Count;                                                            //0x0
    ULONG TagCount;                                                         //0x4
    ULONG FirstLevel;                                                       //0x8
    ULONG MaxLevel;                                                         //0xc
    struct _RELATION_LIST_ENTRY* Entries[1];                                //0x10
};
/* Used in */
// _PENDING_RELATIONS_LIST_ENTRY

