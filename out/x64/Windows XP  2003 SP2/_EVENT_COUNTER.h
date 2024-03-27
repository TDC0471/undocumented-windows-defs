#pragma once
/* ------------------ */

#include <_SLIST_ENTRY.h>
#include <_KEVENT.h>

//0x30 bytes (sizeof)
struct _EVENT_COUNTER
{
    struct _SLIST_ENTRY ListEntry;                                          //0x0
    ULONG RefCount;                                                         //0x10
    struct _KEVENT Event;                                                   //0x18
};
/* Used in */
// _CONTROL_AREA
// _LARGE_CONTROL_AREA

