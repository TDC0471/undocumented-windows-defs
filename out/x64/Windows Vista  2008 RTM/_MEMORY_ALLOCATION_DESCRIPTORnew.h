#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_TYPE_OF_MEMORY.h>

//0x20 bytes (sizeof)
struct _MEMORY_ALLOCATION_DESCRIPTOR
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    enum _TYPE_OF_MEMORY MemoryType;                                        //0x10
    ULONG BasePage;                                                         //0x14
    ULONG PageCount;                                                        //0x18
};
