#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_UNICODE_STRING.h>

//0x30 bytes (sizeof)
struct _CRITICAL_PROCESS_EXCEPTION_DATA
{
    struct _GUID ReportId;                                                  //0x0
    struct _UNICODE_STRING ModuleName;                                      //0x10
    ULONG ModuleTimestamp;                                                  //0x20
    ULONG ModuleSize;                                                       //0x24
    ULONGLONG Offset;                                                       //0x28
};
