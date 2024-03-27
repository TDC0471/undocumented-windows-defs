#pragma once
/* ------------------ */

#include <_OBJECT_HANDLE_COUNT_ENTRY.h>

//0xc bytes (sizeof)
struct _OBJECT_HANDLE_COUNT_DATABASE
{
    ULONG CountEntries;                                                     //0x0
    struct _OBJECT_HANDLE_COUNT_ENTRY HandleCountEntries[1];                //0x4
};
/* Used in */
// _OBJECT_HEADER_HANDLE_INFO

