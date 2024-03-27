#pragma once
/* ------------------ */

#include <wil_details_StagingConfigWnfStateName.h>

//0x10 bytes (sizeof)
struct wil_details_StagingConfigUsageTrigger
{
    ULONG featureId;                                                        //0x0
    struct wil_details_StagingConfigWnfStateName trigger;                   //0x4
    ULONG serviceReportingKind:16;                                          //0xc
    ULONG isVariantConfig:1;                                                //0xc
    ULONG unused:15;                                                        //0xc
};
/* Used in */
// wil_details_StagingConfig

