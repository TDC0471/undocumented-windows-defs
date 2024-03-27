#pragma once
/* ------------------ */

#include <_KGATE.h>
#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_MMWSL.h>
#include <_MMSUPPORT_FLAGS.h>

//0x78 bytes (sizeof)
struct _MMSUPPORT
{
    struct _KGATE* ExitGate;                                                //0x0
    VOID* AccessLog;                                                        //0x4
    struct _EX_PUSH_LOCK WorkingSetMutex;                                   //0x8
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
    VOID* WsSwapSupport;                                                    //0x74
};
/* Used in */
// _EPROCESS
// _MI_SYSTEM_PTE_TYPE
// _MM_SESSION_SPACE

