#pragma once
/* ------------------ */

#include <wil_details_FeatureStateCache.h>
#include <wil_details_FeatureReportingCache.h>
#include <wil_details_FeatureDescriptor.h>

//0x14 bytes (sizeof)
struct wil_details_FeatureDescriptor
{
    union wil_details_FeatureStateCache* featureStateCache;                 //0x0
    struct wil_details_FeatureReportingCache* featureReportingCache;        //0x4
    ULONG featureId;                                                        //0x8
    UCHAR changeTime;                                                       //0xc
    UCHAR isAlwaysDisabled;                                                 //0xd
    UCHAR isAlwaysEnabled;                                                  //0xe
    UCHAR isEnabledByDefault;                                               //0xf
    struct wil_details_FeatureDescriptor** requiresFeatures;                //0x10
};
/* Used in */
// wil_details_FeatureDescriptor

