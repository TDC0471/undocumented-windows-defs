#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_KEVENT.h>

//0x18 bytes (sizeof)
struct _EVENT_COUNTER
{
    struct _SINGLE_LIST_ENTRY ListEntry;                                    //0x0
    ULONG RefCount;                                                         //0x4
    struct _KEVENT Event;                                                   //0x8
};
/* Used in */
// _CONTROL_AREA
// _LARGE_CONTROL_AREA

