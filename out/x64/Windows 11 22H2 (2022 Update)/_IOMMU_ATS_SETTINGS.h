#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
union _IOMMU_ATS_SETTINGS
{
    UCHAR AtsSupported:1;                                                   //0x0
    UCHAR AtsRequired:1;                                                    //0x0
    UCHAR Rsvd:6;                                                           //0x0
    UCHAR AsUCHAR;                                                          //0x0
};
/* Used in */
// _HAL_IOMMU_DISPATCH

