#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _GROUP_FAULT_REFERENCE
{
    union
    {
        struct
        {
            ULONG Count;                                                    //0x0
        ULONG Pending:1;                                                    //0x4
        ULONG Asid:20;                                                      //0x4
        ULONG LastInGroupSeen:1;                                            //0x4
        ULONG Error:1;                                                      //0x4
            ULONG Unused:9;                                                 //0x4
        };
        ULONGLONG Long;                                                     //0x0
    } u1;                                                                   //0x0
};
/* Used in */
// _IOMMU_TRACKED_DEVICE

