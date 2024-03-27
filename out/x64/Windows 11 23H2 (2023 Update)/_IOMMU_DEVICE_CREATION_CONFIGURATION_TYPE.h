#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE
{
    IommuDeviceCreationConfigTypeNone = 0,
    IommuDeviceCreationConfigTypeAcpi = 1,
    IommuDeviceCreationConfigTypeDeviceId = 2,
    IommuDeviceCreationConfigTypePasid = 3,
    IommuDeviceCreationConfigTypeMax = 4
};
/* Used in */
// _IOMMU_DEVICE_CREATION_CONFIGURATION

