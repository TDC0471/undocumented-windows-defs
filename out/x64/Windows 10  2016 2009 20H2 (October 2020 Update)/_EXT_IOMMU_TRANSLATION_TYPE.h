#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _EXT_IOMMU_TRANSLATION_TYPE
{
    ExtTranslationTypePassThrough = 0,
    ExtTranslationTypeBlocked = 1,
    ExtTranslationTypeTranslate = 2,
    ExtTranslationTypeSafePassThrough = 3,
    ExtTranslationTypeInvalid = 4
};
/* Used in */
// _ADAPTER_OBJECT
// _HALP_DMA_DOMAIN_OBJECT

