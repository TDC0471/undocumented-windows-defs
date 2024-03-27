#pragma once
/* ------------------ */

#include <_RTL_HP_LFH_CONFIG.h>
#include <_RTL_HP_VS_CONFIG.h>

//0x10 bytes (sizeof)
struct _RTL_HP_SUB_ALLOCATOR_CONFIGS
{
    struct _RTL_HP_LFH_CONFIG LfhConfigs;                                   //0x0
    struct _RTL_HP_VS_CONFIG VsConfigs;                                     //0xc
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

