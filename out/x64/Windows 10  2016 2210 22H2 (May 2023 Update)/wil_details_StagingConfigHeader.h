#pragma once
/* ------------------ */

#include <wil_details_StagingConfigHeaderProperties.h>

//0x10 bytes (sizeof)
struct wil_details_StagingConfigHeader
{
    UCHAR version;                                                          //0x0
    UCHAR versionMinor;                                                     //0x1
    USHORT headerSizeBytes;                                                 //0x2
    USHORT featureCount;                                                    //0x4
    USHORT featureUsageTriggerCount;                                        //0x6
    struct wil_details_StagingConfigHeaderProperties sessionProperties;     //0x8
    struct wil_details_StagingConfigHeaderProperties properties;            //0xc
};
/* Used in */
// wil_details_StagingConfig

