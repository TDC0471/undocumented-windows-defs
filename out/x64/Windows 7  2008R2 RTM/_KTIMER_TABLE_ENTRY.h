#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ULARGE_INTEGER.h>

//0x20 bytes (sizeof)
struct _KTIMER_TABLE_ENTRY
{
    ULONGLONG Lock;                                                         //0x0
    struct _LIST_ENTRY Entry;                                               //0x8
    union _ULARGE_INTEGER Time;                                             //0x18
};
/* Used in */
// _KTIMER_TABLE

