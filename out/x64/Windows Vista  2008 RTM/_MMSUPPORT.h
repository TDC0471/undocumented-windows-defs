#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MMSUPPORT_FLAGS.h>
#include <_MMWSL.h>
#include <_KEVENT.h>
#include <_EX_PUSH_LOCK.h>

//0x68 bytes (sizeof)
struct _MMSUPPORT
{
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x0
    USHORT LastTrimStamp;                                                   //0x10
    USHORT NextPageColor;                                                   //0x12
    struct _MMSUPPORT_FLAGS Flags;                                          //0x14
    ULONG PageFaultCount;                                                   //0x18
    ULONG PeakWorkingSetSize;                                               //0x1c
    ULONG Spare0;                                                           //0x20
    ULONG MinimumWorkingSetSize;                                            //0x24
    ULONG MaximumWorkingSetSize;                                            //0x28
    struct _MMWSL* VmWorkingSetList;                                        //0x30
    ULONG Claim;                                                            //0x38
    ULONG Spare[1];                                                         //0x3c
    ULONG WorkingSetPrivateSize;                                            //0x40
    ULONG WorkingSetSizeOverhead;                                           //0x44
    ULONG WorkingSetSize;                                                   //0x48
    struct _KEVENT* ExitEvent;                                              //0x50
    struct _EX_PUSH_LOCK WorkingSetMutex;                                   //0x58
    VOID* AccessLog;                                                        //0x60
};
/* Used in */
// _EPROCESS
// _MM_SESSION_SPACE

