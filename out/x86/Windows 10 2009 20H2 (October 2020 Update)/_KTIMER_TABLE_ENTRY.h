#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ULARGE_INTEGER.h>

//0x18 bytes (sizeof)
struct _KTIMER_TABLE_ENTRY
{
    ULONG Lock;                                                             //0x0
    struct _LIST_ENTRY Entry;                                               //0x4
    union _ULARGE_INTEGER Time;                                             //0x10
};
/* Used in */
// _KTIMER_TABLE

