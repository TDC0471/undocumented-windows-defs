#pragma once
/* ------------------ */

#include <wil_details_ReportedState.h>
#include <wil_details_RecordedState.h>

//0x8 bytes (sizeof)
struct wil_details_FeatureReportingCache
{
    union wil_details_ReportedState reported;                               //0x0
    union wil_details_RecordedState recorded;                               //0x4
};
/* Used in */
// wil_details_FeatureDescriptor

