#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_RTL_BALANCED_NODE.h>
#include <_TYPE_OF_MEMORY.h>

//0x30 bytes (sizeof)
struct _MEMORY_ALLOCATION_DESCRIPTOR
{
    union
    {
        struct _LIST_ENTRY ListEntry;                                       //0x0
        struct _RTL_BALANCED_NODE Node;                                     //0x0
    };
    enum _TYPE_OF_MEMORY MemoryType;                                        //0x18
    ULONGLONG BasePage;                                                     //0x20
    ULONGLONG PageCount;                                                    //0x28
};
