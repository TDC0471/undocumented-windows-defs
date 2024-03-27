#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _OBJECT_HEADER_CREATOR_INFO
{
    struct _LIST_ENTRY TypeList;                                            //0x0
    VOID* CreatorUniqueProcess;                                             //0x8
    USHORT CreatorBackTraceIndex;                                           //0xc
    USHORT Reserved;                                                        //0xe
};
