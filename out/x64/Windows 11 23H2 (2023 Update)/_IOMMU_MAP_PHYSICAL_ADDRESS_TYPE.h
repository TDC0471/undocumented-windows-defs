#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE
{
    MapPhysicalAddressTypeMdl = 0,
    MapPhysicalAddressTypeContiguousRange = 1,
    MapPhysicalAddressTypePfn = 2,
    MapPhysicalAddressTypeMax = 3
};
/* Used in */
// _IOMMU_MAP_PHYSICAL_ADDRESS

