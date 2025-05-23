#pragma once
/* ------------------ */

#include <_CLIENT_ID.h>

//0x50 bytes (sizeof)
struct _HANDLE_TRACE_DB_ENTRY
{
    struct _CLIENT_ID ClientId;                                             //0x0
    VOID* Handle;                                                           //0x8
    ULONG Type;                                                             //0xc
    VOID* StackTrace[16];                                                   //0x10
};
/* Used in */
// _HANDLE_TRACE_DEBUG_INFO

