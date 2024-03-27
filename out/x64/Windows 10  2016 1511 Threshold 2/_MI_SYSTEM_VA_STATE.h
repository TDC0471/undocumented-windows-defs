#pragma once
/* ------------------ */

#include <_MI_DYNAMIC_BITMAP.h>
#include <_MMWSLE_HASH.h>
#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_KEVENT.h>
#include <_MI_PTE_CHAIN_HEAD.h>

//0x2c0 bytes (sizeof)
struct _MI_SYSTEM_VA_STATE
{
    ULONGLONG SystemTablesLock;                                             //0x0
    ULONGLONG AvailableSystemCacheVa;                                       //0x8
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;                      //0x10
    struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages[2];                 //0x60
    struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;                       //0x100
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSpecialPool;                     //0x150
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;                     //0x1a0
    struct _MMWSLE_HASH* WorkingSetListHashStart;                           //0x1f0
    struct _MMWSLE_HASH* WorkingSetListHashEnd;                             //0x1f8
    struct _MMWSLE_NONDIRECT_HASH* WorkingSetListIndirectHashStart;         //0x200
    struct _KEVENT FreeSystemCacheVa;                                       //0x208
    ULONGLONG SystemVaLock;                                                 //0x220
    volatile LONG DeleteKvaLock;                                            //0x228
    struct _MI_PTE_CHAIN_HEAD FreeSystemCache;                              //0x230
    ULONGLONG SystemCacheViewLock;                                          //0x248
    ULONGLONG UnusableWsles[5];                                             //0x250
    ULONGLONG PossibleWsles[5];                                             //0x278
};
/* Used in */
// _MI_SYSTEM_INFORMATION

