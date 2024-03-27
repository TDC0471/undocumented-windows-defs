#pragma once
/* ------------------ */

#include <_MMPTE.h>
#include <_MMWSLE_HASH.h>
#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_KEVENT.h>
#include <_MI_PTE_CHAIN_HEAD.h>

//0x14c0 bytes (sizeof)
struct _MI_SYSTEM_VA_STATE
{
    ULONG SystemTablesLock;                                                 //0x0
    ULONG SystemVaBias;                                                     //0x4
    ULONG SystemAvailableVaLow;                                             //0x8
    ULONG VirtualBias;                                                      //0xc
    VOID* HyperSpaceEnd;                                                    //0x10
    struct _MMPTE* HyperSpaceEndPte;                                        //0x14
    VOID* SystemRangeStart;                                                 //0x18
    UCHAR SystemCachePdeCount[1024];                                        //0x1c
    VOID* SystemCacheReverseMaps[1024];                                     //0x41c
    struct _MMWSLE_HASH* WorkingSetListHashStart;                           //0x141c
    struct _MMWSLE_HASH* WorkingSetListHashEnd;                             //0x1420
    struct _MMWSLE_NONDIRECT_HASH* WorkingSetListIndirectHashStart;         //0x1424
    struct _KEVENT FreeSystemCacheVa;                                       //0x1428
    ULONG SystemVaLock;                                                     //0x1438
    volatile LONG DeleteKvaLock;                                            //0x143c
    struct _MI_PTE_CHAIN_HEAD FreeSystemCache;                              //0x1440
    ULONG SystemCacheViewLock;                                              //0x1458
    ULONG UnusableWsles[5];                                                 //0x145c
    ULONG PossibleWsles[5];                                                 //0x1470
};
/* Used in */
// _MI_SYSTEM_INFORMATION

