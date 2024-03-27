#pragma once
/* ------------------ */

#include <_EPROCESS.h>

//0x10 bytes (sizeof)
struct _OBJECT_HANDLE_COUNT_ENTRY
{
    struct _EPROCESS* Process;                                              //0x0
    ULONG HandleCount:24;                                                   //0x8
    ULONG LockCount:8;                                                      //0x8
};
/* Used in */
// _OBJECT_HANDLE_COUNT_DATABASE
// _OBJECT_HEADER_HANDLE_INFO

