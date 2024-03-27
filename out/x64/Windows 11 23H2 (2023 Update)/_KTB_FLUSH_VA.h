#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _KTB_FLUSH_VA
{
    union
    {
        ULONGLONG NumberOfEntries:10;                                       //0x0
        ULONGLONG PageSize:2;                                               //0x0
        VOID* Va;                                                           //0x0
        ULONGLONG VaLong;                                                   //0x0
    } u1;                                                                   //0x0
};
/* Used in */
// _EXT_IOMMU_FUNCTION_TABLE
// _EXT_IOMMU_FUNCTION_TABLE_EXTENDED
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION
// _HAL_IOMMU_DISPATCH

