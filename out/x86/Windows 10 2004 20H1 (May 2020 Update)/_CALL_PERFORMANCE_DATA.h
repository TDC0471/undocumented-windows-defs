#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x204 bytes (sizeof)
struct _CALL_PERFORMANCE_DATA
{
    ULONG SpinLock;                                                         //0x0
    struct _LIST_ENTRY HashTable[64];                                       //0x4
};
