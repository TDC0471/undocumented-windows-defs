#pragma once
/* ------------------ */

#include <_SLIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _NBQUEUE_BLOCK
{
    struct _SLIST_ENTRY SListEntry;                                         //0x0
    ULONGLONG Next;                                                         //0x10
    ULONGLONG Data;                                                         //0x18
};
