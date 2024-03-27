#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _HALP_DMA_TRANSLATION_TYPE
{
    DmaTranslationTypePassthrough = 0,
    DmaTranslationTypeSafePassthrough = 1,
    DmaTranslationTypeHybridPassthrough = 2,
    DmaTranslationTypeTranslate = 3,
    DmaTranslationTypeMax = 4
};
/* Used in */
// _ADAPTER_OBJECT
// _HALP_DMA_DOMAIN_OBJECT

