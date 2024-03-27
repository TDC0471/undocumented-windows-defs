#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _NBQUEUE_BLOCK
{
    struct _SINGLE_LIST_ENTRY SListEntry;                                   //0x0
    ULONGLONG Next;                                                         //0x8
    ULONGLONG Data;                                                         //0x10
};
