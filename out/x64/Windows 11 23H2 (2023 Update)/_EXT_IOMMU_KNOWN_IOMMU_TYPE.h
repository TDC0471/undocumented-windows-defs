#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _EXT_IOMMU_KNOWN_IOMMU_TYPE
{
    ExtIommuInvalid = 0,
    ExtIommuAmd = 1,
    ExtIommuIntel = 2,
    ExtIommuSmmuv1 = 3,
    ExtIommuSmmuv2 = 4,
    ExtIommuSmmuv3 = 5,
    ExtIommuIts = 6,
    ExtIommuUnknown = 4096
};
/* Used in */
// _EXT_IOMMU
// _REGISTERED_IOMMU

