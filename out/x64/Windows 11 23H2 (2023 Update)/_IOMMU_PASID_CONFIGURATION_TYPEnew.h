#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IOMMU_PASID_CONFIGURATION_TYPE
{
    PasidConfigTypeDefaultPasidOnly = 0,
    PasidConfigTypePasidTaggedDma = 1,
    PasidConfigTypeMax = 2
};
/* Used in */
// _IOMMU_DEVICE_CREATION_CONFIGURATION_PASID

