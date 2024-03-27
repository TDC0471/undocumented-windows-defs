#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x408 bytes (sizeof)
struct _CALL_PERFORMANCE_DATA
{
    ULONGLONG SpinLock;                                                     //0x0
    struct _LIST_ENTRY HashTable[64];                                       //0x8
};
