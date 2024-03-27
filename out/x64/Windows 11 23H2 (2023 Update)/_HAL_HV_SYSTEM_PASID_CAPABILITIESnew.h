#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _HAL_HV_SYSTEM_PASID_CAPABILITIES
{
    ULONG SvmSupported:1;                                                   //0x0
    ULONG GpaAlwaysValid:1;                                                 //0x0
    ULONG PasidSupported:1;                                                 //0x0
    ULONG MaxPasidSpaceCount;                                               //0x4
    ULONG MaxPasidSpacePasidCount;                                          //0x8
    ULONG MaxPrqSize;                                                       //0xc
    ULONG SvmIommuCount;                                                    //0x10
    ULONG MinIommuPasidCount;                                               //0x14
};
/* Used in */
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION

