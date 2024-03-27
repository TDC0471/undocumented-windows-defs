#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _EXT_IOMMU_FLUSH_CONTEXT
{
    union
    {
        struct
        {
            ULONG Status;                                                   //0x0
            ULONGLONG PhysicalAddress;                                      //0x8
        } Intel;                                                            //0x0
        struct
        {
            ULONGLONG* StatusAddr;                                          //0x0
            ULONGLONG OldStatus;                                            //0x8
        } Amd;                                                              //0x0
    };
};
/* Used in */
// _EXT_IOMMU_FUNCTION_TABLE

