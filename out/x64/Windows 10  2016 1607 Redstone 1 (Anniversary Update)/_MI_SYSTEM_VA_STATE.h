#pragma once
/* ------------------ */

#include <_MI_DYNAMIC_BITMAP.h>
#include <_MMWSLE_HASH.h>
#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_KEVENT.h>
#include <_MI_PTE_CHAIN_HEAD.h>
#include <_EX_PUSH_LOCK.h>
#include <_MMSUPPORT_INSTANCE.h>

//0x300 bytes (sizeof)
struct _MI_SYSTEM_VA_STATE
{
    ULONGLONG SystemTablesLock;                                             //0x0
    ULONGLONG AvailableSystemCacheVa;                                       //0x8
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;                      //0x10
    struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages[2];                 //0x60
    struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;                       //0x100
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSpecialPool;                     //0x150
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;                     //0x1a0
    ULONG SystemVaAssignment[8];                                            //0x1f0
    ULONG SystemVaAssignmentHint;                                           //0x210
    VOID* HyperSpaceEnd;                                                    //0x218
    struct _MMWSLE_HASH* WorkingSetListHashStart;                           //0x220
    struct _MMWSLE_HASH* WorkingSetListHashEnd;                             //0x228
    struct _MMWSLE_NONDIRECT_HASH* WorkingSetListIndirectHashStart;         //0x230
    struct _KEVENT FreeSystemCacheVa;                                       //0x238
    ULONGLONG SystemVaLock;                                                 //0x250
    volatile LONG DeleteKvaLock;                                            //0x258
    struct _MI_PTE_CHAIN_HEAD FreeSystemCache;                              //0x260
    ULONGLONG SystemCacheViewLock;                                          //0x278
    struct _EX_PUSH_LOCK SystemCacheInitLock;                               //0x280
    ULONGLONG UnusableWsles[5];                                             //0x288
    ULONGLONG PossibleWsles[5];                                             //0x2b0
    struct _MMSUPPORT_INSTANCE* SystemWs[3];                                //0x2d8
};
/* Used in */
// _MI_SYSTEM_INFORMATION

