#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _CALL_HASH_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    VOID* CallersAddress;                                                   //0x10
    VOID* CallersCaller;                                                    //0x18
    ULONG CallCount;                                                        //0x20
};
