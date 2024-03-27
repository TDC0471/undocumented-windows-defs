#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_MMSUPPORT_FLAGS.h>
#include <_MMWSL.h>
#include <_EX_PUSH_LOCK.h>

//0x58 bytes (sizeof)
struct _MMSUPPORT
{
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x0
    union _LARGE_INTEGER LastTrimTime;                                      //0x10
    struct _MMSUPPORT_FLAGS Flags;                                          //0x18
    ULONG PageFaultCount;                                                   //0x1c
    ULONG PeakWorkingSetSize;                                               //0x20
    ULONG GrowthSinceLastEstimate;                                          //0x24
    ULONG MinimumWorkingSetSize;                                            //0x28
    ULONG MaximumWorkingSetSize;                                            //0x2c
    struct _MMWSL* VmWorkingSetList;                                        //0x30
    ULONG Claim;                                                            //0x38
    ULONG NextEstimationSlot;                                               //0x3c
    ULONG NextAgingSlot;                                                    //0x40
    ULONG EstimatedAvailable;                                               //0x44
    ULONG WorkingSetSize;                                                   //0x48
    struct _EX_PUSH_LOCK WorkingSetMutex;                                   //0x50
};
/* Used in */
// _EPROCESS
// _MM_SESSION_SPACE

