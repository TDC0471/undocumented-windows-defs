#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_KGATE.h>
#include <_LIST_ENTRY.h>
#include <_MMWSL.h>
#include <_MMSUPPORT_FLAGS.h>

//0x90 bytes (sizeof)
struct _MMSUPPORT
{
    struct _EX_PUSH_LOCK WorkingSetMutex;                                   //0x0
    struct _KGATE* ExitGate;                                                //0x8
    VOID* AccessLog;                                                        //0x10
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x18
    ULONG AgeDistribution[7];                                               //0x28
    ULONG MinimumWorkingSetSize;                                            //0x44
    ULONG WorkingSetSize;                                                   //0x48
    ULONG WorkingSetPrivateSize;                                            //0x4c
    ULONG MaximumWorkingSetSize;                                            //0x50
    ULONG ChargedWslePages;                                                 //0x54
    ULONG ActualWslePages;                                                  //0x58
    ULONG WorkingSetSizeOverhead;                                           //0x5c
    ULONG PeakWorkingSetSize;                                               //0x60
    ULONG HardFaultCount;                                                   //0x64
    struct _MMWSL* VmWorkingSetList;                                        //0x68
    USHORT NextPageColor;                                                   //0x70
    USHORT LastTrimStamp;                                                   //0x72
    ULONG PageFaultCount;                                                   //0x74
    ULONG TrimmedPageCount;                                                 //0x78
    ULONG Spare;                                                            //0x7c
    ULONG ForceTrimPages;                                                   //0x80
    struct _MMSUPPORT_FLAGS Flags;                                          //0x84
    VOID* WsSwapSupport;                                                    //0x88
};
/* Used in */
// _EPROCESS
// _MI_SYSTEM_PTE_TYPE
// _MM_SESSION_SPACE

