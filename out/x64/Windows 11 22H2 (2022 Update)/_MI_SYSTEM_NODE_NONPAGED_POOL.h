#pragma once
/* ------------------ */

#include <_MI_DYNAMIC_BITMAP.h>
#include <_MMPFN.h>
#include <_MI_PFN_CACHE_ATTRIBUTE.h>
#include <_MI_ZERO_COST_COUNTS.h>
#include <_MI_SYSTEM_NODE_INFORMATION.h>

//0x178 bytes (sizeof)
struct _MI_SYSTEM_NODE_NONPAGED_POOL
{
    struct _MI_DYNAMIC_BITMAP DynamicBitMapNonPagedPool;                    //0x0
    ULONGLONG CachedNonPagedPoolCount;                                      //0x48
    ULONGLONG NonPagedPoolSpinLock;                                         //0x50
    struct _MMPFN* CachedNonPagedPool;                                      //0x58
    VOID* NonPagedPoolFirstVa;                                              //0x60
    VOID* NonPagedPoolLastVa;                                               //0x68
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];             //0x70
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[3][2][2];                    //0xb0
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x170
};
/* Used in */
// _MI_HARDWARE_STATE

