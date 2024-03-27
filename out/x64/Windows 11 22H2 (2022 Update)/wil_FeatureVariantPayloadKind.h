#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum wil_FeatureVariantPayloadKind
{
    wil_FeatureVariantPayloadKind_None = 0,
    wil_FeatureVariantPayloadKind_Resident = 1,
    wil_FeatureVariantPayloadKind_External = 2
};
/* Used in */
// wil_FeatureState
// wil_details_FeatureDescriptor
// wil_details_FeatureTestState

