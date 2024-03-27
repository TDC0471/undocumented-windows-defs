#pragma once
/* ------------------ */

#include <_KEVENT.h>

//0x14 bytes (sizeof)
struct _MI_AVAILABLE_PAGE_WAIT_STATES
{
    struct _KEVENT Event;                                                   //0x0
    ULONG EventSets;                                                        //0x10
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS

