#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _EXT_IOMMU_CREATE_DEVICE_FLAGS
{
    ULONG AsUINT32;                                                         //0x0
    ULONG WildCard:1;                                                       //0x0
    ULONG ForceCreate:1;                                                    //0x0
    ULONG LiveTraffic:1;                                                    //0x0
    ULONG Reserved:29;                                                      //0x0
};
/* Used in */
// _EXT_IOMMU_FUNCTION_TABLE

