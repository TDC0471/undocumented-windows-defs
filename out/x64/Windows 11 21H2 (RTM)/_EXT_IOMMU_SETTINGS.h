#pragma once
/* ------------------ */

#include <_EXT_IOMMU_ADDRESS_TRANSLATION_POLICY.h>
#include <_EXT_IOMMU_INTERRUPT_REMAPPING_POLICY.h>

//0x18 bytes (sizeof)
struct _EXT_IOMMU_SETTINGS
{
    struct
    {
        ULONGLONG BroadcastTlbMaintenance:1;                                //0x0
    } EnabledCapabilities;                                                  //0x0
    enum _EXT_IOMMU_ADDRESS_TRANSLATION_POLICY TranslationPolicy;           //0x8
    enum _EXT_IOMMU_INTERRUPT_REMAPPING_POLICY RemappingPolicy;             //0xc
    ULONG RemappingTableEntries;                                            //0x10
};
/* Used in */
// _EXT_IOMMU_FUNCTION_TABLE

