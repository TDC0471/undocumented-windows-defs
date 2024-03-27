#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum wil_FeatureStage
{
    wil_FeatureStage_AlwaysDisabled = 0,
    wil_FeatureStage_DisabledByDefault = 1,
    wil_FeatureStage_EnabledByDefault = 2,
    wil_FeatureStage_AlwaysEnabled = 3
};
