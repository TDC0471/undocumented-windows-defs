#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _EXT_IOMMU_ADDRESS_TRANSLATION_POLICY
{
    ExtIommuAddressTranslationPolicyDisable = 0,
    ExtIommuAddressTranslationPolicyEnableDefaultBypass = 1,
    ExtIommuAddressTranslationPolicyEnableDefaultBlock = 2,
    ExtIommuAddressTranslationPolicyEnableDefaultTranslate = 3
};
/* Used in */
// _EXT_IOMMU_SETTINGS

