#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_MMSUPPORT_FLAGS.h>
#include <_MMWSL.h>
#include <_EX_PUSH_LOCK.h>

//0x48 bytes (sizeof)
struct _MMSUPPORT
{
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x0
    union _LARGE_INTEGER LastTrimTime;                                      //0x8
    struct _MMSUPPORT_FLAGS Flags;                                          //0x10
    ULONG PageFaultCount;                                                   //0x14
    ULONG PeakWorkingSetSize;                                               //0x18
    ULONG GrowthSinceLastEstimate;                                          //0x1c
    ULONG MinimumWorkingSetSize;                                            //0x20
    ULONG MaximumWorkingSetSize;                                            //0x24
    struct _MMWSL* VmWorkingSetList;                                        //0x28
    ULONG Claim;                                                            //0x2c
    ULONG NextEstimationSlot;                                               //0x30
    ULONG NextAgingSlot;                                                    //0x34
    ULONG EstimatedAvailable;                                               //0x38
    ULONG WorkingSetSize;                                                   //0x3c
    struct _EX_PUSH_LOCK WorkingSetMutex;                                   //0x40
};
/* Used in */
// _EPROCESS
// _MM_SESSION_SPACE

