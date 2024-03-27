#pragma once
/* ------------------ */

#include <_KGATE.h>
#include <_LIST_ENTRY.h>
#include <_MMWSL.h>
#include <_MMSUPPORT_FLAGS.h>

//0xf8 bytes (sizeof)
struct _MMSUPPORT
{
    volatile LONG WorkingSetLock;                                           //0x0
    struct _KGATE* ExitOutswapGate;                                         //0x8
    VOID* AccessLog;                                                        //0x10
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x18
    ULONGLONG AgeDistribution[7];                                           //0x28
    ULONGLONG MinimumWorkingSetSize;                                        //0x60
    ULONGLONG WorkingSetLeafSize;                                           //0x68
    ULONGLONG WorkingSetLeafPrivateSize;                                    //0x70
    ULONGLONG WorkingSetSize;                                               //0x78
    ULONGLONG WorkingSetPrivateSize;                                        //0x80
    ULONGLONG MaximumWorkingSetSize;                                        //0x88
    ULONGLONG ChargedWslePages;                                             //0x90
    ULONGLONG ActualWslePages;                                              //0x98
    ULONGLONG WorkingSetSizeOverhead;                                       //0xa0
    ULONGLONG PeakWorkingSetSize;                                           //0xa8
    ULONG HardFaultCount;                                                   //0xb0
    USHORT PartitionId;                                                     //0xb4
    USHORT Pad0;                                                            //0xb6
    struct _MMWSL* VmWorkingSetList;                                        //0xb8
    USHORT NextPageColor;                                                   //0xc0
    USHORT LastTrimStamp;                                                   //0xc2
    ULONG PageFaultCount;                                                   //0xc4
    ULONGLONG TrimmedPageCount;                                             //0xc8
    ULONGLONG ForceTrimPages;                                               //0xd0
    struct _MMSUPPORT_FLAGS Flags;                                          //0xd8
    ULONGLONG ReleasedCommitDebt;                                           //0xe0
    VOID* WsSwapSupport;                                                    //0xe8
    VOID* CommitReAcquireFailSupport;                                       //0xf0
};
/* Used in */
// _EPROCESS
// _MI_DYNAMIC_BITMAP
// _MI_SYSTEM_PTE_TYPE
// _MI_VISIBLE_STATE
// _MM_SESSION_SPACE

