#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_MMSUPPORT_FLAGS.h>
#include <_MMWSL.h>
#include <_LIST_ENTRY.h>

//0x40 bytes (sizeof)
struct _MMSUPPORT
{
    union _LARGE_INTEGER LastTrimTime;                                      //0x0
    struct _MMSUPPORT_FLAGS Flags;                                          //0x8
    ULONG PageFaultCount;                                                   //0xc
    ULONG PeakWorkingSetSize;                                               //0x10
    ULONG WorkingSetSize;                                                   //0x14
    ULONG MinimumWorkingSetSize;                                            //0x18
    ULONG MaximumWorkingSetSize;                                            //0x1c
    struct _MMWSL* VmWorkingSetList;                                        //0x20
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x24
    ULONG Claim;                                                            //0x2c
    ULONG NextEstimationSlot;                                               //0x30
    ULONG NextAgingSlot;                                                    //0x34
    ULONG EstimatedAvailable;                                               //0x38
    ULONG GrowthSinceLastEstimate;                                          //0x3c
};
/* Used in */
// _EPROCESS
// _MM_SESSION_SPACE

