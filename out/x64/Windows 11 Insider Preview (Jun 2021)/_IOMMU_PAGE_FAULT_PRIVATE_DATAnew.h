#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _IOMMU_PAGE_FAULT_PRIVATE_DATA
{
    ULONGLONG Data[2];                                                      //0x0
    UCHAR DataSize;                                                         //0x10
};
/* Used in */
// _EXT_IOMMU_FUNCTION_TABLE_EXTENDED
// _IOMMU_PAGE_HANDLING_DATA

