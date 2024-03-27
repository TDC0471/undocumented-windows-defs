#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _EXT_IOMMU_FLUSH_CONTEXT
{
    union
    {
        UCHAR InProgress;                                                   //0x0
        struct
        {
            UCHAR LowCompletionDataBit:1;                                   //0x0
            UCHAR Reserved0:7;                                              //0x0
        };
    };
    union
    {
        volatile ULONGLONG Status;                                          //0x8
        ULONGLONG* StatusPointer;                                           //0x8
    };
    ULONGLONG PhysicalAddress;                                              //0x10
};
/* Used in */
// _EXT_IOMMU_FUNCTION_TABLE

