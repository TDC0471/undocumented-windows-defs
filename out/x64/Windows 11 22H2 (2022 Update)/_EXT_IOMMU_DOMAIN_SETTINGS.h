#pragma once
/* ------------------ */

#include <_EXT_IOMMU_S1_X64_DOMAIN_SETTINGS.h>

//0x20 bytes (sizeof)
struct _EXT_IOMMU_DOMAIN_SETTINGS
{
    struct _EXT_IOMMU_S1_X64_DOMAIN_SETTINGS S1;                            //0x0
    struct
    {
        UCHAR PageTableRootLevel;                                           //0x10
        UCHAR InputSize;                                                    //0x11
        ULONGLONG PageTableRoot;                                            //0x18
    } S2;                                                                   //0x10
};
/* Used in */
// _EXT_IOMMU_DOMAIN

