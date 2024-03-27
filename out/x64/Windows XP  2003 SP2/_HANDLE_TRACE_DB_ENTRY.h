#pragma once
/* ------------------ */

#include <_CLIENT_ID.h>

//0xa0 bytes (sizeof)
struct _HANDLE_TRACE_DB_ENTRY
{
    struct _CLIENT_ID ClientId;                                             //0x0
    VOID* Handle;                                                           //0x10
    ULONG Type;                                                             //0x18
    VOID* StackTrace[16];                                                   //0x20
};
/* Used in */
// _HANDLE_TRACE_DEBUG_INFO

