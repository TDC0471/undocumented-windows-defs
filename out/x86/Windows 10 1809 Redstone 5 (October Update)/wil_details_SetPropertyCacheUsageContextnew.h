#pragma once
/* ------------------ */

#include <wil_details_RecordUsageResult.h>
#include <wil_details_ServiceReportingKind.h>

//0xc bytes (sizeof)
struct wil_details_SetPropertyCacheUsageContext
{
    struct wil_details_RecordUsageResult* result;                           //0x0
    enum wil_details_ServiceReportingKind kind;                             //0x4
    ULONG addend;                                                           //0x8
};
