#pragma once
/* ------------------ */

#include <_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.h>

//0x48 bytes (sizeof)
struct _LOADER_FEATURE_CONFIGURATION_INFORMATION
{
    VOID* FeatureConfigurationBuffer;                                       //0x0
    ULONGLONG FeatureConfigurationBufferSize;                               //0x8
    VOID* UsageSubscriptionBuffer;                                          //0x10
    ULONGLONG UsageSubscriptionBufferSize;                                  //0x18
    VOID* DelayedUsageReportBuffer;                                         //0x20
    ULONGLONG DelayedUsageReportBufferSize;                                 //0x28
    struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION DiagnosticInformation; //0x30
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

