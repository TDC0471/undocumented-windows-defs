#pragma once
/* ------------------ */

#include <_MI_DYNAMIC_BITMAP.h>
#include <_MI_WSLE.h>
#include <_KEVENT.h>
#include <_MMWSL_INSTANCE.h>

//0x4c0 bytes (sizeof)
struct _MI_SYSTEM_VA_STATE
{
    ULONGLONG SystemTablesLock;                                             //0x0
    ULONGLONG AvailableSystemCacheVa;                                       //0x8
    struct _MI_DYNAMIC_BITMAP DynamicBitMapKernelStacks;                    //0x10
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;                      //0x58
    struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages[2];                 //0xa0
    struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;                       //0x130
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;                     //0x178
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSecureNonPagedPool;              //0x1c0
    VOID* HalPrivateVaStart;                                                //0x208
    ULONGLONG HalPrivateVaSize;                                             //0x210
    ULONG SystemVaAssignment[8];                                            //0x218
    ULONG SystemVaAssignmentHint;                                           //0x238
    ULONG TopLevelPteLockBits[32];                                          //0x23c
    volatile LONG DeleteKvaLock;                                            //0x2bc
    struct _MI_WSLE* WsleArrays[8];                                         //0x2c0
    VOID* PagableHyperSpace;                                                //0x300
    VOID* HyperSpaceEnd;                                                    //0x308
    ULONGLONG PagableHyperSpaceBytes;                                       //0x310
    ULONGLONG PageTableCommitmentOffset[2];                                 //0x318
    struct _KEVENT FreeSystemCacheVa;                                       //0x328
    ULONGLONG SystemVaLock;                                                 //0x340
    ULONGLONG SystemCacheViewLock;                                          //0x348
    struct _MMWSL_INSTANCE SystemWorkingSetList[8];                         //0x350
    ULONGLONG SelfmapLock[4];                                               //0x490
};
/* Used in */
// _MI_SYSTEM_INFORMATION

