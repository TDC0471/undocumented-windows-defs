#pragma once
/* ------------------ */

#include <wil_FeatureStore.h>
#include <wil_details_StagingConfigHeader.h>
#include <wil_details_StagingConfigFeature.h>
#include <wil_details_StagingConfigUsageTrigger.h>

//0x34 bytes (sizeof)
struct wil_details_StagingConfig
{
    enum wil_FeatureStore store;                                            //0x0
    LONG forUpdate;                                                         //0x4
    ULONG readChangeStamp;                                                  //0x8
    UCHAR readVersion;                                                      //0xc
    LONG modified;                                                          //0x10
    struct wil_details_StagingConfigHeader* header;                         //0x14
    struct wil_details_StagingConfigFeature* features;                      //0x18
    struct wil_details_StagingConfigUsageTrigger* triggers;                 //0x1c
    LONG changedInSession;                                                  //0x20
    VOID* buffer;                                                           //0x24
    ULONG bufferSize;                                                       //0x28
    ULONG bufferAlloc;                                                      //0x2c
    LONG bufferOwned;                                                       //0x30
};
