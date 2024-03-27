#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x8 bytes (sizeof)
struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE
{
    struct _LIST_ENTRY DispatchedList;                                      //0x0
};
/* Used in */
// _TRIAGE_9F_PNP

