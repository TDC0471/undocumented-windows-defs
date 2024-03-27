#pragma once
/* ------------------ */

#include <wil_details_FeatureStateCache.h>
#include <wil_details_FeatureDescriptor.h>

//0x10 bytes (sizeof)
struct wil_details_FeatureDescriptor
{
    union wil_details_FeatureStateCache* featureStateCache;                 //0x0
    ULONG featureId;                                                        //0x4
    UCHAR changeTime;                                                       //0x8
    UCHAR isAlwaysDisabled;                                                 //0x9
    UCHAR isAlwaysEnabled;                                                  //0xa
    UCHAR isEnabledByDefault;                                               //0xb
    struct wil_details_FeatureDescriptor** requiresFeatures;                //0xc
};
/* Used in */
// wil_details_FeatureDescriptor

