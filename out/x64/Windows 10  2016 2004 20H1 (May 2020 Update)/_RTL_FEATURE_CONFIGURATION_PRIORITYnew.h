#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _RTL_FEATURE_CONFIGURATION_PRIORITY
{
    FeatureConfigurationPriorityAll = 0,
    FeatureConfigurationPriorityService = 4,
    FeatureConfigurationPriorityUser = 8,
    FeatureConfigurationPriorityTest = 12,
    FeatureConfigurationPriorityMax = 15
};
