#pragma once
/* ------------------ */

#include <_MI_DYNAMIC_BITMAP.h>
#include <_MI_WSLE.h>
#include <_KEVENT.h>
#include <_MMWSL_INSTANCE.h>

//0x480 bytes (sizeof)
struct _MI_SYSTEM_VA_STATE
{
    ULONGLONG SystemTablesLock;                                             //0x0
    ULONGLONG AvailableSystemCacheVa;                                       //0x8
    struct _MI_DYNAMIC_BITMAP DynamicBitMapKernelStacks;                    //0x10
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;                      //0x58
    struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages[2];                 //0xa0
    struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;                       //0x130
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;                     //0x178
    VOID* HalPrivateVaStart;                                                //0x1c0
    ULONGLONG HalPrivateVaSize;                                             //0x1c8
    ULONG SystemVaAssignment[8];                                            //0x1d0
    ULONG SystemVaAssignmentHint;                                           //0x1f0
    ULONG TopLevelPteLockBits[32];                                          //0x1f4
    volatile LONG DeleteKvaLock;                                            //0x274
    struct _MI_WSLE* WsleArrays[8];                                         //0x278
    VOID* PagableHyperSpace;                                                //0x2b8
    VOID* HyperSpaceEnd;                                                    //0x2c0
    ULONGLONG PagableHyperSpaceBytes;                                       //0x2c8
    ULONGLONG PageTableCommitmentOffset[2];                                 //0x2d0
    struct _KEVENT FreeSystemCacheVa;                                       //0x2e0
    ULONGLONG SystemVaLock;                                                 //0x2f8
    ULONGLONG SystemCacheViewLock;                                          //0x300
    struct _MMWSL_INSTANCE SystemWorkingSetList[8];                         //0x308
    ULONGLONG SelfmapLock[4];                                               //0x448
};
/* Used in */
// _MI_SYSTEM_INFORMATION

