#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x20 bytes (sizeof)
struct _HAL_HV_DMA_DOMAIN_CONFIG_ARM64
{
    union _LARGE_INTEGER Ttbr0;                                             //0x0
    union _LARGE_INTEGER Ttbr1;                                             //0x8
    ULONG Mair0;                                                            //0x10
    ULONG Mair1;                                                            //0x14
    UCHAR InputSize0;                                                       //0x18
    UCHAR InputSize1;                                                       //0x19
    USHORT Asid;                                                            //0x1a
    UCHAR CoherentTableWalks;                                               //0x1c
    UCHAR TranslationEnabled;                                               //0x1d
};
/* Used in */
// _HAL_HV_DMA_DOMAIN_CONFIG

