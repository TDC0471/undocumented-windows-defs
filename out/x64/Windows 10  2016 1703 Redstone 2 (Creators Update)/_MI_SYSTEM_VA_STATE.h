#pragma once
/* ------------------ */

#include <_MI_DYNAMIC_BITMAP.h>
#include <_MI_WSLE.h>
#include <_MI_HYPER_SPACE.h>
#include <_KEVENT.h>
#include <_MMWSL_INSTANCE.h>

//0x380 bytes (sizeof)
struct _MI_SYSTEM_VA_STATE
{
    ULONGLONG SystemTablesLock;                                             //0x0
    ULONGLONG AvailableSystemCacheVa;                                       //0x8
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;                      //0x10
    struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages[2];                 //0x58
    struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;                       //0xe8
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSpecialPool[2];                  //0x130
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;                     //0x1c0
    VOID* HalPrivateVaStart;                                                //0x208
    ULONGLONG HalPrivateVaSize;                                             //0x210
    ULONG SystemVaAssignment[8];                                            //0x218
    ULONG SystemVaAssignmentHint;                                           //0x238
    volatile LONG DeleteKvaLock;                                            //0x23c
    struct _MI_WSLE* WsleArrays[5];                                         //0x240
    struct _MI_HYPER_SPACE* PagableHyperSpace;                              //0x268
    VOID* HyperSpaceEnd;                                                    //0x270
    struct _KEVENT FreeSystemCacheVa;                                       //0x278
    ULONGLONG SystemVaLock;                                                 //0x290
    ULONGLONG SystemCacheViewLock;                                          //0x298
    struct _MMWSL_INSTANCE SystemWorkingSetList[5];                         //0x2a0
};
/* Used in */
// _MI_SYSTEM_INFORMATION

