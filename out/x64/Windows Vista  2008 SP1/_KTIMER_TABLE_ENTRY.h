#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ULARGE_INTEGER.h>

//0x18 bytes (sizeof)
struct _KTIMER_TABLE_ENTRY
{
    struct _LIST_ENTRY Entry;                                               //0x0
    union _ULARGE_INTEGER Time;                                             //0x10
};
