#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _ETW_BOOT_CONFIG
{
    ULONG MaxLoggers;                                                       //0x0
    struct _LIST_ENTRY BootLoggersList;                                     //0x8
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

