#pragma once
/* ------------------ */

#include <_MMWSL_INSTANCE.h>
#include <_LIST_ENTRY.h>
#include <_KGATE.h>
#include <_MMSUPPORT_FLAGS.h>

//0xc8 bytes (sizeof)
struct _MMSUPPORT_INSTANCE
{
    USHORT NextPageColor;                                                   //0x0
    USHORT LastTrimStamp;                                                   //0x2
    ULONG PageFaultCount;                                                   //0x4
    ULONGLONG TrimmedPageCount;                                             //0x8
    struct _MMWSL_INSTANCE* VmWorkingSetList;                               //0x10
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x18
    ULONGLONG AgeDistribution[8];                                           //0x28
    struct _KGATE* ExitOutswapGate;                                         //0x68
    ULONGLONG MinimumWorkingSetSize;                                        //0x70
    ULONGLONG WorkingSetLeafSize;                                           //0x78
    ULONGLONG WorkingSetLeafPrivateSize;                                    //0x80
    ULONGLONG WorkingSetSize;                                               //0x88
    ULONGLONG WorkingSetPrivateSize;                                        //0x90
    ULONGLONG MaximumWorkingSetSize;                                        //0x98
    ULONGLONG PeakWorkingSetSize;                                           //0xa0
    ULONG HardFaultCount;                                                   //0xa8
    USHORT PartitionId;                                                     //0xac
    USHORT Pad0;                                                            //0xae
    union
    {
        VOID* InstancedWorkingSet;                                          //0xb0
    } u1;                                                                   //0xb0
    ULONGLONG Reserved0;                                                    //0xb8
    struct _MMSUPPORT_FLAGS Flags;                                          //0xc0
};
/* Used in */
// _MI_SYSTEM_PTE_TYPE
// _MI_VISIBLE_PARTITION
// _MMSUPPORT_FULL

