#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _OBJECT_HEADER_CREATOR_INFO
{
    struct _LIST_ENTRY TypeList;                                            //0x0
    VOID* CreatorUniqueProcess;                                             //0x10
    USHORT CreatorBackTraceIndex;                                           //0x18
    USHORT Reserved;                                                        //0x1a
};
