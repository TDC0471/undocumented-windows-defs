#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _KTB_FLUSH_VA
{
    union
    {
        ULONG NumberOfEntries:10;                                           //0x0
        ULONG PageSize:2;                                                   //0x0
        VOID* Va;                                                           //0x0
        ULONG VaLong;                                                       //0x0
    } u1;                                                                   //0x0
};
/* Used in */
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION
// _HAL_IOMMU_DISPATCH

