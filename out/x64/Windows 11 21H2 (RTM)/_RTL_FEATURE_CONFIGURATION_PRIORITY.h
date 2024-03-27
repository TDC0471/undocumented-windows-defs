#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _RTL_FEATURE_CONFIGURATION_PRIORITY
{
    FeatureConfigurationPriorityImageDefault = 0,
    FeatureConfigurationPriorityEnrollment = 2,
    FeatureConfigurationPriorityService = 4,
    FeatureConfigurationPriorityUser = 8,
    FeatureConfigurationPriorityUserPolicy = 10,
    FeatureConfigurationPriorityTest = 12,
    FeatureConfigurationPriorityImageOverride = 15,
    FeatureConfigurationPriorityMax = 15
};
