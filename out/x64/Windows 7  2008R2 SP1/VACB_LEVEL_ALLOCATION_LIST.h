#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct VACB_LEVEL_ALLOCATION_LIST
{
    struct _LIST_ENTRY VacbLevelList;                                       //0x0
    VOID* VacbLevelWithBcbListHeads;                                        //0x10
    ULONG VacbLevelsAllocated;                                              //0x18
};
