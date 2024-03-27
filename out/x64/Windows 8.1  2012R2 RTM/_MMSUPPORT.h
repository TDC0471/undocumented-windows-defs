#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_KGATE.h>
#include <_LIST_ENTRY.h>
#include <_MMWSL.h>
#include <_MMSUPPORT_FLAGS.h>

//0xd8 bytes (sizeof)
struct _MMSUPPORT
{
    struct _EX_PUSH_LOCK WorkingSetMutex;                                   //0x0
    struct _KGATE* ExitGate;                                                //0x8
    VOID* AccessLog;                                                        //0x10
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x18
    ULONGLONG AgeDistribution[7];                                           //0x28
    ULONGLONG MinimumWorkingSetSize;                                        //0x60
    ULONGLONG WorkingSetSize;                                               //0x68
    ULONGLONG WorkingSetPrivateSize;                                        //0x70
    ULONGLONG MaximumWorkingSetSize;                                        //0x78
    ULONGLONG ChargedWslePages;                                             //0x80
    ULONGLONG ActualWslePages;                                              //0x88
    ULONGLONG WorkingSetSizeOverhead;                                       //0x90
    ULONGLONG PeakWorkingSetSize;                                           //0x98
    ULONG HardFaultCount;                                                   //0xa0
    struct _MMWSL* VmWorkingSetList;                                        //0xa8
    USHORT NextPageColor;                                                   //0xb0
    USHORT LastTrimStamp;                                                   //0xb2
    ULONG PageFaultCount;                                                   //0xb4
    ULONGLONG TrimmedPageCount;                                             //0xb8
    ULONGLONG ForceTrimPages;                                               //0xc0
    struct _MMSUPPORT_FLAGS Flags;                                          //0xc8
    VOID* WsSwapSupport;                                                    //0xd0
};
/* Used in */
// _EPROCESS
// _MI_SYSTEM_PTE_TYPE
// _MM_SESSION_SPACE

