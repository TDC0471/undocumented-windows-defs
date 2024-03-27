#pragma once
/* ------------------ */

#include <wil_details_RecordUsageResult.h>
#include <wil_details_ServiceReportingKind.h>

//0x18 bytes (sizeof)
struct wil_details_SetPropertyCacheUsageContext
{
    struct wil_details_RecordUsageResult* result;                           //0x0
    enum wil_details_ServiceReportingKind kind;                             //0x8
    ULONGLONG addend;                                                       //0x10
};
