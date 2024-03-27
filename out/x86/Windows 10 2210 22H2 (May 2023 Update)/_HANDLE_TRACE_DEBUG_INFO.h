#pragma once
/* ------------------ */

#include <_FAST_MUTEX.h>
#include <_HANDLE_TRACE_DB_ENTRY.h>

//0x80 bytes (sizeof)
struct _HANDLE_TRACE_DEBUG_INFO
{
    LONG RefCount;                                                          //0x0
    ULONG TableSize;                                                        //0x4
    ULONG BitMaskFlags;                                                     //0x8
    struct _FAST_MUTEX CloseCompactionLock;                                 //0xc
    ULONG CurrentStackIndex;                                                //0x2c
    struct _HANDLE_TRACE_DB_ENTRY TraceDb[1];                               //0x30
};
/* Used in */
// _HANDLE_TABLE

