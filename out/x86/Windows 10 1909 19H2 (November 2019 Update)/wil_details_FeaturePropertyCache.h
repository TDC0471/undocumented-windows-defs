#pragma once
/* ------------------ */

#include <wil_details_FeatureProperties.h>
#include <wil_details_VariantProperties.h>

//0x4 bytes (sizeof)
union wil_details_FeaturePropertyCache
{
    struct wil_details_FeatureProperties cache;                             //0x0
    struct wil_details_VariantProperties variant;                           //0x0
    volatile LONG var;                                                      //0x0
};
/* Used in */
// wil_details_FeatureVariantPropertyCache

