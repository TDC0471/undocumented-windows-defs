#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_TYPE_OF_MEMORY.h>

//0x28 bytes (sizeof)
struct _MEMORY_ALLOCATION_DESCRIPTOR
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    enum _TYPE_OF_MEMORY MemoryType;                                        //0x10
    ULONGLONG BasePage;                                                     //0x18
    ULONGLONG PageCount;                                                    //0x20
};
