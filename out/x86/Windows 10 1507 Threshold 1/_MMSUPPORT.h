#pragma once
/* ------------------ */

#include <_KGATE.h>
#include <_LIST_ENTRY.h>
#include <_MMWSL.h>
#include <_MMSUPPORT_FLAGS.h>

//0x80 bytes (sizeof)
struct _MMSUPPORT
{
    volatile LONG WorkingSetLock;                                           //0x0
    struct _KGATE* ExitOutswapGate;                                         //0x4
    VOID* AccessLog;                                                        //0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0xc
    ULONG AgeDistribution[7];                                               //0x14
    ULONG MinimumWorkingSetSize;                                            //0x30
    ULONG WorkingSetLeafSize;                                               //0x34
    ULONG WorkingSetLeafPrivateSize;                                        //0x38
    ULONG WorkingSetSize;                                                   //0x3c
    ULONG WorkingSetPrivateSize;                                            //0x40
    ULONG MaximumWorkingSetSize;                                            //0x44
    ULONG ChargedWslePages;                                                 //0x48
    ULONG ActualWslePages;                                                  //0x4c
    ULONG WorkingSetSizeOverhead;                                           //0x50
    ULONG PeakWorkingSetSize;                                               //0x54
    ULONG HardFaultCount;                                                   //0x58
    struct _MMWSL* VmWorkingSetList;                                        //0x5c
    USHORT NextPageColor;                                                   //0x60
    USHORT LastTrimStamp;                                                   //0x62
    ULONG PageFaultCount;                                                   //0x64
    ULONG TrimmedPageCount;                                                 //0x68
    ULONG ForceTrimPages;                                                   //0x6c
    struct _MMSUPPORT_FLAGS Flags;                                          //0x70
    ULONG ReleasedCommitDebt;                                               //0x74
    VOID* WsSwapSupport;                                                    //0x78
    VOID* CommitReAcquireFailSupport;                                       //0x7c
};
/* Used in */
// _EPROCESS
// _MI_SYSTEM_PTE_TYPE
// _MI_VISIBLE_STATE
// _MM_SESSION_SPACE

