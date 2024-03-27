#pragma once
/* ------------------ */

#include <_KPRCB_TRACEPOINT_LOG_ENTRY.h>

//0x2008 bytes (sizeof)
struct _KPRCB_TRACEPOINT_LOG
{
    struct _KPRCB_TRACEPOINT_LOG_ENTRY Entries[256];                        //0x0
    ULONG LogIndex;                                                         //0x2000
};
/* Used in */
// _KPRCB

