#pragma once
/* ------------------ */

#include <wil_details_FeatureStateCache.h>
#include <wil_details_FeatureReportingCache.h>
#include <wil_details_FeatureDescriptor.h>
#include <wil_FeatureVariantPayloadKind.h>

//0x30 bytes (sizeof)
struct wil_details_FeatureDescriptor
{
    union wil_details_FeatureStateCache* featureStateCache;                 //0x0
    struct wil_details_FeatureReportingCache* featureReportingCache;        //0x8
    ULONG featureId;                                                        //0x10
    UCHAR changeTime;                                                       //0x14
    UCHAR isAlwaysDisabled;                                                 //0x15
    UCHAR isAlwaysEnabled;                                                  //0x16
    UCHAR isEnabledByDefault;                                               //0x17
    struct wil_details_FeatureDescriptor** requiresFeatures;                //0x18
    UCHAR variant;                                                          //0x20
    enum wil_FeatureVariantPayloadKind payloadKind;                         //0x24
    ULONG payload;                                                          //0x28
};
/* Used in */
// wil_details_FeatureDescriptor

