#pragma once
/* ------------------ */

#include <_KEVENT.h>

//0x20 bytes (sizeof)
struct _MI_AVAILABLE_PAGE_WAIT_STATES
{
    struct _KEVENT Event;                                                   //0x0
    ULONG EventSets;                                                        //0x18
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS

