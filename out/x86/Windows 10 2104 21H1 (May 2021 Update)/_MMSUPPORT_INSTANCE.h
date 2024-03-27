#pragma once
/* ------------------ */

#include <_MMWSL_INSTANCE.h>
#include <_LIST_ENTRY.h>
#include <_KGATE.h>
#include <_MMSUPPORT_FLAGS.h>

//0x64 bytes (sizeof)
struct _MMSUPPORT_INSTANCE
{
    ULONG NextPageColor;                                                    //0x0
    ULONG PageFaultCount;                                                   //0x4
    ULONG TrimmedPageCount;                                                 //0x8
    struct _MMWSL_INSTANCE* VmWorkingSetList;                               //0xc
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x10
    ULONG AgeDistribution[8];                                               //0x18
    struct _KGATE* ExitOutswapGate;                                         //0x38
    ULONG MinimumWorkingSetSize;                                            //0x3c
    ULONG WorkingSetLeafSize;                                               //0x40
    ULONG WorkingSetLeafPrivateSize;                                        //0x44
    ULONG WorkingSetSize;                                                   //0x48
    ULONG WorkingSetPrivateSize;                                            //0x4c
    ULONG MaximumWorkingSetSize;                                            //0x50
    ULONG PeakWorkingSetSize;                                               //0x54
    ULONG HardFaultCount;                                                   //0x58
    USHORT LastTrimStamp;                                                   //0x5c
    USHORT Unused0;                                                         //0x5e
    struct _MMSUPPORT_FLAGS Flags;                                          //0x60
};
/* Used in */
// _MI_VISIBLE_PARTITION
// _MMSUPPORT_FULL

