#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _EXT_IOMMU_TRANSLATION_TYPE
{
    ExtTranslationTypePassThrough = 0,
    ExtTranslationTypeBlocked = 1,
    ExtTranslationTypeTranslate = 2,
    ExtTranslationTypeInvalid = 3
};
/* Used in */
// _EXT_IOMMU_DOMAIN
// _IOMMU_DMA_DOMAIN

