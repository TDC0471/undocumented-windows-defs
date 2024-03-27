#pragma once
/* ------------------ */

#include <_MMPTE.h>
#include <_MMWSLE_HASH.h>
#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_KEVENT.h>
#include <_MI_PTE_CHAIN_HEAD.h>
#include <_EX_PUSH_LOCK.h>
#include <_MMSUPPORT_INSTANCE.h>

//0x14c0 bytes (sizeof)
struct _MI_SYSTEM_VA_STATE
{
    ULONG SystemTablesLock;                                                 //0x0
    ULONG SystemVaBias;                                                     //0x4
    ULONG SystemAvailableVaLow;                                             //0x8
    ULONG VirtualBias;                                                      //0xc
    struct _MMPTE* HyperSpaceEndPte;                                        //0x10
    VOID* SystemRangeStart;                                                 //0x14
    UCHAR SystemCachePdeCount[1024];                                        //0x18
    VOID* SystemCacheReverseMaps[1024];                                     //0x418
    VOID* HyperSpaceEnd;                                                    //0x1418
    struct _MMWSLE_HASH* WorkingSetListHashStart;                           //0x141c
    struct _MMWSLE_HASH* WorkingSetListHashEnd;                             //0x1420
    struct _MMWSLE_NONDIRECT_HASH* WorkingSetListIndirectHashStart;         //0x1424
    struct _KEVENT FreeSystemCacheVa;                                       //0x1428
    ULONG SystemVaLock;                                                     //0x1438
    volatile LONG DeleteKvaLock;                                            //0x143c
    struct _MI_PTE_CHAIN_HEAD FreeSystemCache;                              //0x1440
    ULONG SystemCacheViewLock;                                              //0x1458
    struct _EX_PUSH_LOCK SystemCacheInitLock;                               //0x145c
    ULONG UnusableWsles[5];                                                 //0x1460
    ULONG PossibleWsles[5];                                                 //0x1474
    struct _MMSUPPORT_INSTANCE* SystemWs[3];                                //0x1488
};
/* Used in */
// _MI_SYSTEM_INFORMATION

