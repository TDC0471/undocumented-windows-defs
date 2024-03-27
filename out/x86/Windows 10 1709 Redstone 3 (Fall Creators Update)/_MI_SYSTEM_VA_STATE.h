#pragma once
/* ------------------ */

#include <_MI_WSLE.h>
#include <_MI_HYPER_SPACE.h>
#include <_KEVENT.h>
#include <_MMWSL_INSTANCE.h>

//0x1500 bytes (sizeof)
struct _MI_SYSTEM_VA_STATE
{
    ULONG SystemTablesLock;                                                 //0x0
    ULONG SystemVaBias;                                                     //0x4
    ULONG SystemAvailableVaLow;                                             //0x8
    ULONG VirtualBias;                                                      //0xc
    VOID* SystemRangeStart;                                                 //0x10
    UCHAR SystemCachePdeCount[1024];                                        //0x14
    VOID* SystemCacheReverseMaps[1024];                                     //0x414
    volatile LONG DeleteKvaLock;                                            //0x1414
    struct _MI_WSLE* WsleArrays[5];                                         //0x1418
    struct _MI_HYPER_SPACE* PagableHyperSpace;                              //0x142c
    VOID* HyperSpaceEnd;                                                    //0x1430
    struct _KEVENT FreeSystemCacheVa;                                       //0x1434
    ULONG SystemVaLock;                                                     //0x1444
    ULONG SystemCacheViewLock;                                              //0x1448
    struct _MMWSL_INSTANCE SystemWorkingSetList[5];                         //0x144c
};
/* Used in */
// _MI_SYSTEM_INFORMATION

