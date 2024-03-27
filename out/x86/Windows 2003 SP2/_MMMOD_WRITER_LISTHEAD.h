#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KEVENT.h>

//0x18 bytes (sizeof)
struct _MMMOD_WRITER_LISTHEAD
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    struct _KEVENT Event;                                                   //0x8
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

