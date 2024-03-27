#pragma once
/* ------------------ */

#include <_EPROCESS.h>

//0x8 bytes (sizeof)
struct _OBJECT_HANDLE_COUNT_ENTRY
{
    struct _EPROCESS* Process;                                              //0x0
    ULONG HandleCount:24;                                                   //0x4
    ULONG LockCount:8;                                                      //0x4
};
/* Used in */
// _OBJECT_HANDLE_COUNT_DATABASE
// _OBJECT_HEADER_HANDLE_INFO

