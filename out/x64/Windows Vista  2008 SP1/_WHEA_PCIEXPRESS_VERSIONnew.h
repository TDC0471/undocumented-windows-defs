#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEA_PCIEXPRESS_VERSION
{
    struct
    {
        UCHAR MinorVersion;                                                 //0x0
        UCHAR MajorVersion;                                                 //0x1
    };
    struct
    {
        USHORT Reserved;                                                    //0x2
    };
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_PCIEXPRESS_ERROR

