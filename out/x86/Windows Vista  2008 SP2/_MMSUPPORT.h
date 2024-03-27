#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MMSUPPORT_FLAGS.h>
#include <_MMWSL.h>
#include <_KGATE.h>
#include <_EX_PUSH_LOCK.h>

//0x48 bytes (sizeof)
struct _MMSUPPORT
{
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x0
    USHORT LastTrimStamp;                                                   //0x8
    USHORT NextPageColor;                                                   //0xa
    struct _MMSUPPORT_FLAGS Flags;                                          //0xc
    ULONG PageFaultCount;                                                   //0x10
    ULONG PeakWorkingSetSize;                                               //0x14
    ULONG ChargedWslePages;                                                 //0x18
    ULONG MinimumWorkingSetSize;                                            //0x1c
    ULONG MaximumWorkingSetSize;                                            //0x20
    struct _MMWSL* VmWorkingSetList;                                        //0x24
    ULONG Claim;                                                            //0x28
    ULONG ActualWslePages;                                                  //0x2c
    ULONG WorkingSetPrivateSize;                                            //0x30
    ULONG WorkingSetSizeOverhead;                                           //0x34
    ULONG WorkingSetSize;                                                   //0x38
    struct _KGATE* ExitGate;                                                //0x3c
    struct _EX_PUSH_LOCK WorkingSetMutex;                                   //0x40
    VOID* AccessLog;                                                        //0x44
};
/* Used in */
// _EPROCESS
// _MI_SYSTEM_PTE_TYPE
// _MM_SESSION_SPACE

