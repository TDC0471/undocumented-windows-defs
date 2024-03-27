#pragma once
/* ------------------ */

#include <wil_FeatureStore.h>
#include <wil_details_StagingConfigHeader.h>
#include <wil_details_StagingConfigFeature.h>
#include <wil_details_StagingConfigUsageTrigger.h>

//0x58 bytes (sizeof)
struct wil_details_StagingConfig
{
    enum wil_FeatureStore store;                                            //0x0
    LONG forUpdate;                                                         //0x4
    ULONG readChangeStamp;                                                  //0x8
    UCHAR readVersion;                                                      //0xc
    LONG modified;                                                          //0x10
    struct wil_details_StagingConfigHeader* header;                         //0x18
    struct wil_details_StagingConfigFeature* features;                      //0x20
    struct wil_details_StagingConfigUsageTrigger* triggers;                 //0x28
    LONG changedInSession;                                                  //0x30
    VOID* buffer;                                                           //0x38
    ULONGLONG bufferSize;                                                   //0x40
    ULONGLONG bufferAlloc;                                                  //0x48
    LONG bufferOwned;                                                       //0x50
};
