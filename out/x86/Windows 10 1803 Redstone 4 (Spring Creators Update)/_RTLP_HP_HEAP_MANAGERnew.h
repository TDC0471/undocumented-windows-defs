#pragma once
/* ------------------ */

#include <_RTLP_HP_HEAP_GLOBALS.h>
#include <_RTLP_HP_ALLOC_TRACKER.h>
#include <_HEAP_VAMGR_CTX.h>
#include <_RTLP_HP_METADATA_HEAP_CTX.h>
#include <_RTL_HP_SUB_ALLOCATOR_CONFIGS.h>

//0x1c6c bytes (sizeof)
struct _RTLP_HP_HEAP_MANAGER
{
    struct _RTLP_HP_HEAP_GLOBALS* Globals;                                  //0x0
    struct _RTLP_HP_ALLOC_TRACKER AllocTracker;                             //0x4
    struct _HEAP_VAMGR_CTX VaMgr;                                           //0x28
    struct _RTLP_HP_METADATA_HEAP_CTX MetadataHeaps[3];                     //0x1c44
    struct _RTL_HP_SUB_ALLOCATOR_CONFIGS SubAllocConfigs;                   //0x1c5c
};
