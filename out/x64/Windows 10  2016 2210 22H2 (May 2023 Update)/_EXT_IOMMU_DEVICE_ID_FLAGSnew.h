#pragma once
/* ------------------ */


//0x2 bytes (sizeof)
union _EXT_IOMMU_DEVICE_ID_FLAGS
{
    USHORT AsUSHORT;                                                        //0x0
    USHORT IsAliased:1;                                                     //0x0
    USHORT HasMultipleIds:1;                                                //0x0
    USHORT Reserved:14;                                                     //0x0
};
/* Used in */
// _EXT_IOMMU_DEVICE_ID

