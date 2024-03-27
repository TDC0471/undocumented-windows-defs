#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x14 bytes (sizeof)
struct _CALL_HASH_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    VOID* CallersAddress;                                                   //0x8
    VOID* CallersCaller;                                                    //0xc
    ULONG CallCount;                                                        //0x10
};
