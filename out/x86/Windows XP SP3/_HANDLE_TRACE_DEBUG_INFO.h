#pragma once
/* ------------------ */

#include <_HANDLE_TRACE_DB_ENTRY.h>

//0x50004 bytes (sizeof)
struct _HANDLE_TRACE_DEBUG_INFO
{
    ULONG CurrentStackIndex;                                                //0x0
    struct _HANDLE_TRACE_DB_ENTRY TraceDb[4096];                            //0x4
};
/* Used in */
// _HANDLE_TABLE

