#pragma once
/* ------------------ */

#include <wil_details_FeatureStateCache.h>
#include <wil_details_FeatureDescriptor.h>
#include <wil_FeatureVariantPayloadKind.h>

//0x28 bytes (sizeof)
struct wil_details_FeatureDescriptor
{
    union wil_details_FeatureStateCache* featureStateCache;                 //0x0
    ULONG featureId;                                                        //0x8
    UCHAR changeTime;                                                       //0xc
    UCHAR isAlwaysDisabled;                                                 //0xd
    UCHAR isAlwaysEnabled;                                                  //0xe
    UCHAR isEnabledByDefault;                                               //0xf
    struct wil_details_FeatureDescriptor** requiresFeatures;                //0x10
    UCHAR variant;                                                          //0x18
    enum wil_FeatureVariantPayloadKind payloadKind;                         //0x1c
    ULONG payload;                                                          //0x20
};
/* Used in */
// wil_details_FeatureDescriptor

