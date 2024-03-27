#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_KGATE.h>
#include <_LIST_ENTRY.h>
#include <_MMWSL.h>
#include <_MMSUPPORT_FLAGS.h>

//0x70 bytes (sizeof)
struct _MMSUPPORT
{
    struct _EX_PUSH_LOCK WorkingSetMutex;                                   //0x0
    struct _KGATE* ExitGate;                                                //0x4
    VOID* AccessLog;                                                        //0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0xc
    ULONG AgeDistribution[7];                                               //0x14
    ULONG MinimumWorkingSetSize;                                            //0x30
    ULONG WorkingSetSize;                                                   //0x34
    ULONG WorkingSetPrivateSize;                                            //0x38
    ULONG MaximumWorkingSetSize;                                            //0x3c
    ULONG ChargedWslePages;                                                 //0x40
    ULONG ActualWslePages;                                                  //0x44
    ULONG WorkingSetSizeOverhead;                                           //0x48
    ULONG PeakWorkingSetSize;                                               //0x4c
    ULONG HardFaultCount;                                                   //0x50
    struct _MMWSL* VmWorkingSetList;                                        //0x54
    USHORT NextPageColor;                                                   //0x58
    USHORT LastTrimStamp;                                                   //0x5a
    ULONG PageFaultCount;                                                   //0x5c
    ULONG TrimmedPageCount;                                                 //0x60
    ULONG ForceTrimPages;                                                   //0x64
    struct _MMSUPPORT_FLAGS Flags;                                          //0x68
    VOID* WsSwapSupport;                                                    //0x6c
};
/* Used in */
// _EPROCESS
// _MI_SYSTEM_PTE_TYPE
// _MM_SESSION_SPACE

