#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum wil_details_StagingConfigFeatureFields
{
    wil_details_StagingConfigFeatureFields_None = 0,
    wil_details_StagingConfigFeatureFields_ServiceState = 1,
    wil_details_StagingConfigFeatureFields_UserState = 2,
    wil_details_StagingConfigFeatureFields_TestState = 4,
    wil_details_StagingConfigFeatureFields_Variant = 8
};
