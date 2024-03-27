#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _IOMMU_DEVICE_PROPERTIES
{
    ULONG IsThunderbolt:1;                                                  //0x0
    ULONG DmaCapableAtBoot:1;                                               //0x0
    ULONG ForceDisableDmaRemapping:1;                                       //0x0
    ULONG IsUntrustedPort:1;                                                //0x0
    ULONG Rsvd:28;                                                          //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _IOMMU_BUS_INTERFACE

