#pragma once
/* ------------------ */

#include <_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.h>

//0x30 bytes (sizeof)
struct _LOADER_FEATURE_CONFIGURATION_INFORMATION
{
    VOID* FeatureConfigurationBuffer;                                       //0x0
    ULONG FeatureConfigurationBufferSize;                                   //0x4
    VOID* UsageSubscriptionBuffer;                                          //0x8
    ULONG UsageSubscriptionBufferSize;                                      //0xc
    VOID* DelayedUsageReportBuffer;                                         //0x10
    ULONG DelayedUsageReportBufferSize;                                     //0x14
    struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION DiagnosticInformation; //0x18
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

