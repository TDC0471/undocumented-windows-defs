#pragma once
/* ------------------ */

#include <_MMWSL_INSTANCE.h>
#include <_LIST_ENTRY.h>
#include <_KGATE.h>
#include <_MMSUPPORT_FLAGS.h>

//0x64 bytes (sizeof)
struct _MMSUPPORT_INSTANCE
{
    USHORT NextPageColor;                                                   //0x0
    USHORT LastTrimStamp;                                                   //0x2
    ULONG PageFaultCount;                                                   //0x4
    ULONG TrimmedPageCount;                                                 //0x8
    struct _MMWSL_INSTANCE* VmWorkingSetList;                               //0xc
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x10
    ULONG AgeDistribution[7];                                               //0x18
    struct _KGATE* ExitOutswapGate;                                         //0x34
    ULONG MinimumWorkingSetSize;                                            //0x38
    ULONG WorkingSetLeafSize;                                               //0x3c
    ULONG WorkingSetLeafPrivateSize;                                        //0x40
    ULONG WorkingSetSize;                                                   //0x44
    ULONG WorkingSetPrivateSize;                                            //0x48
    ULONG MaximumWorkingSetSize;                                            //0x4c
    ULONG PeakWorkingSetSize;                                               //0x50
    ULONG HardFaultCount;                                                   //0x54
    union
    {
        VOID* InstancedWorkingSet;                                          //0x58
    } u1;                                                                   //0x58
    ULONG Reserved0;                                                        //0x5c
    struct _MMSUPPORT_FLAGS Flags;                                          //0x60
};
/* Used in */
// _MI_SYSTEM_PTE_TYPE
// _MI_SYSTEM_VA_STATE
// _MI_VISIBLE_PARTITION
// _MMSUPPORT_FULL

