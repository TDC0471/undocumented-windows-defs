#pragma once
/* ------------------ */

#include <_MI_DYNAMIC_BITMAP.h>
#include <_MI_WSLE.h>
#include <_MI_HYPER_SPACE.h>
#include <_KEVENT.h>
#include <_MMWSL_INSTANCE.h>

//0x3c0 bytes (sizeof)
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
    volatile LONG DeleteKvaLock;                                            //0x284
    struct _MI_WSLE* WsleArrays[5];                                         //0x288
    struct _MI_HYPER_SPACE* PagableHyperSpace;                              //0x2b0
    VOID* HyperSpaceEnd;                                                    //0x2b8
    struct _KEVENT FreeSystemCacheVa;                                       //0x2c0
    ULONGLONG SystemVaLock;                                                 //0x2d8
    ULONGLONG SystemCacheViewLock;                                          //0x2e0
    struct _MMWSL_INSTANCE SystemWorkingSetList[5];                         //0x2e8
};
/* Used in */
// _MI_SYSTEM_INFORMATION

