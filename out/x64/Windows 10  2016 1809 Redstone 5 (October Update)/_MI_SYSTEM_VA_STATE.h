#pragma once
/* ------------------ */

#include <_MI_DYNAMIC_BITMAP.h>
#include <_MI_WSLE.h>
#include <_MI_HYPER_SPACE.h>
#include <_KEVENT.h>
#include <_MMWSL_INSTANCE.h>

//0x500 bytes (sizeof)
struct _MI_SYSTEM_VA_STATE
{
    ULONGLONG SystemTablesLock;                                             //0x0
    ULONGLONG AvailableSystemCacheVa;                                       //0x8
    struct _MI_DYNAMIC_BITMAP DynamicBitMapKernelStacks;                    //0x10
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;                      //0x58
    struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages[2];                 //0xa0
    struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;                       //0x130
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSpecialPool[2];                  //0x178
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;                     //0x208
    VOID* HalPrivateVaStart;                                                //0x250
    ULONGLONG HalPrivateVaSize;                                             //0x258
    ULONG SystemVaAssignment[8];                                            //0x260
    ULONG SystemVaAssignmentHint;                                           //0x280
    ULONG TopLevelPteLockBits[32];                                          //0x284
    volatile LONG DeleteKvaLock;                                            //0x304
    struct _MI_WSLE* WsleArrays[8];                                         //0x308
    struct _MI_HYPER_SPACE* PagableHyperSpace;                              //0x348
    VOID* HyperSpaceEnd;                                                    //0x350
    struct _KEVENT FreeSystemCacheVa;                                       //0x358
    ULONGLONG SystemVaLock;                                                 //0x370
    ULONGLONG SystemCacheViewLock;                                          //0x378
    struct _MMWSL_INSTANCE SystemWorkingSetList[8];                         //0x380
    ULONGLONG SelfmapLock[4];                                               //0x4c0
};
/* Used in */
// _MI_SYSTEM_INFORMATION

