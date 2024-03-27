#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_KEVENT.h>

//0x20 bytes (sizeof)
struct _KWAIT_CHAIN_ENTRY
{
    struct _SINGLE_LIST_ENTRY ListEntry;                                    //0x0
    struct _KEVENT Event;                                                   //0x8
};
