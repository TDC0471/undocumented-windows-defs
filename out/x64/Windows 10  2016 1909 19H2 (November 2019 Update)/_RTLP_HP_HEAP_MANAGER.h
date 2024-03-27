#pragma once
/* ------------------ */

#include <_RTLP_HP_HEAP_GLOBALS.h>
#include <_RTLP_HP_ALLOC_TRACKER.h>
#include <_HEAP_VAMGR_CTX.h>
#include <_RTLP_HP_METADATA_HEAP_CTX.h>
#include <_RTL_HP_SUB_ALLOCATOR_CONFIGS.h>

//0x38d0 bytes (sizeof)
struct _RTLP_HP_HEAP_MANAGER
{
    struct _RTLP_HP_HEAP_GLOBALS* Globals;                                  //0x0
    struct _RTLP_HP_ALLOC_TRACKER AllocTracker;                             //0x8
    struct _HEAP_VAMGR_CTX VaMgr;                                           //0x58
    struct _RTLP_HP_METADATA_HEAP_CTX MetadataHeaps[3];                     //0x3898
    struct _RTL_HP_SUB_ALLOCATOR_CONFIGS SubAllocConfigs;                   //0x38c8
};
/* Used in */
// _EX_HEAP_SESSION_STATE
// _EX_POOL_HEAP_MANAGER_STATE

