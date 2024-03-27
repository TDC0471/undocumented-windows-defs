#pragma once
/* ------------------ */

#include <_MI_SYSTEM_REGION_REFERENCE.h>
#include <_MI_WSLE.h>
#include <_KEVENT.h>
#include <_MMWSL_INSTANCE.h>

//0x2740 bytes (sizeof)
struct _MI_SYSTEM_VA_STATE
{
    ULONG SystemTablesLock;                                                 //0x0
    ULONG SystemVaBias;                                                     //0x4
    ULONG SystemAvailableVaLow;                                             //0x8
    ULONG VirtualBias;                                                      //0xc
    VOID* SystemRangeStart;                                                 //0x10
    UCHAR SystemCachePdeCount[1024];                                        //0x14
    VOID* SystemCacheReverseMaps[1024];                                     //0x414
    struct _MI_SYSTEM_REGION_REFERENCE VaRegion[1024];                      //0x1414
    ULONG TopLevelPteLockBits[128];                                         //0x2414
    ULONG TopLevelPteAlternateLockBits[4];                                  //0x2614
    volatile LONG DeleteKvaLock;                                            //0x2624
    struct _MI_WSLE* WsleArrays[8];                                         //0x2628
    VOID* PagableHyperSpace;                                                //0x2648
    VOID* HyperSpaceEnd;                                                    //0x264c
    ULONG PagableHyperSpaceBytes;                                           //0x2650
    struct _KEVENT FreeSystemCacheVa;                                       //0x2654
    ULONG SystemVaLock;                                                     //0x2664
    ULONG SystemCacheViewLock;                                              //0x2668
    struct _MMWSL_INSTANCE SystemWorkingSetList[8];                         //0x266c
};
/* Used in */
// _MI_SYSTEM_INFORMATION

