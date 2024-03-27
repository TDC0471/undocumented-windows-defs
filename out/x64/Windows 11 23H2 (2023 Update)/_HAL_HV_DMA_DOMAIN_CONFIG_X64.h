#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x10 bytes (sizeof)
struct _HAL_HV_DMA_DOMAIN_CONFIG_X64
{
    union _LARGE_INTEGER FirstLevelPageTableRoot;                           //0x0
    UCHAR TranslationEnabled;                                               //0x8
    UCHAR Blocked;                                                          //0x9
};
/* Used in */
// _HAL_HV_DMA_DOMAIN_CONFIG

