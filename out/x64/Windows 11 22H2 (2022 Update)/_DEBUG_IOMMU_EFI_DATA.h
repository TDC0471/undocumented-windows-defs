#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _DEBUG_IOMMU_EFI_DATA
{
    VOID* PciIoProtocolHandle;                                              //0x0
    VOID* Mapping;                                                          //0x8
};
/* Used in */
// _DEBUG_DEVICE_DESCRIPTOR

