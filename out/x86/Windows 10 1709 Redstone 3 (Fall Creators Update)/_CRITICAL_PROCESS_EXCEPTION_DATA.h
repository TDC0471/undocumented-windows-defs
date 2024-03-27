#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_UNICODE_STRING.h>

//0x28 bytes (sizeof)
struct _CRITICAL_PROCESS_EXCEPTION_DATA
{
    struct _GUID ReportId;                                                  //0x0
    struct _UNICODE_STRING ModuleName;                                      //0x10
    ULONG ModuleTimestamp;                                                  //0x18
    ULONG ModuleSize;                                                       //0x1c
    ULONGLONG Offset;                                                       //0x20
};
