#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _EXT_IOMMU_S1_X64_DOMAIN_SETTINGS
{
    struct
    {
        UCHAR EnableTranslation:1;                                          //0x0
        UCHAR Blocked:1;                                                    //0x0
        UCHAR EnableDefaultPasid:1;                                         //0x0
        UCHAR Reserved:5;                                                   //0x0
    } Flags;                                                                //0x0
    ULONGLONG PageTableRoot;                                                //0x8
};
/* Used in */
// _EXT_IOMMU_DOMAIN_SETTINGS

