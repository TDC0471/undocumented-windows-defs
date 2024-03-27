#pragma once
/* ------------------ */

#include <wil_details_FeaturePropertyCache.h>

//0x8 bytes (sizeof)
struct wil_details_FeatureVariantPropertyCache
{
    union wil_details_FeaturePropertyCache propertyCache;                   //0x0
    ULONG payloadId;                                                        //0x4
};
