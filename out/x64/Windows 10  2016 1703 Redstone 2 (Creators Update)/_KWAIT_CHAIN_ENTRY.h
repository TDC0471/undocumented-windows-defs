#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KEVENT.h>

//0x28 bytes (sizeof)
struct _KWAIT_CHAIN_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _KEVENT Event;                                                   //0x10
};
