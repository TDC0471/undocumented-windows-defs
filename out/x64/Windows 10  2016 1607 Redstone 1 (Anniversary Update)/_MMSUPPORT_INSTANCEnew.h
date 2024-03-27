#pragma once
/* ------------------ */

#include <_MMWSL_INSTANCE.h>
#include <_LIST_ENTRY.h>
#include <_KGATE.h>
#include <_MMSUPPORT_FLAGS.h>

//0xc0 bytes (sizeof)
struct _MMSUPPORT_INSTANCE
{
    USHORT NextPageColor;                                                   //0x0
    USHORT LastTrimStamp;                                                   //0x2
    ULONG PageFaultCount;                                                   //0x4
    ULONGLONG TrimmedPageCount;                                             //0x8
    struct _MMWSL_INSTANCE* VmWorkingSetList;                               //0x10
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x18
    ULONGLONG AgeDistribution[7];                                           //0x28
    struct _KGATE* ExitOutswapGate;                                         //0x60
    ULONGLONG MinimumWorkingSetSize;                                        //0x68
    ULONGLONG WorkingSetLeafSize;                                           //0x70
    ULONGLONG WorkingSetLeafPrivateSize;                                    //0x78
    ULONGLONG WorkingSetSize;                                               //0x80
    ULONGLONG WorkingSetPrivateSize;                                        //0x88
    ULONGLONG MaximumWorkingSetSize;                                        //0x90
    ULONGLONG PeakWorkingSetSize;                                           //0x98
    ULONG HardFaultCount;                                                   //0xa0
    USHORT PartitionId;                                                     //0xa4
    USHORT Pad0;                                                            //0xa6
    union
    {
        VOID* InstancedWorkingSet;                                          //0xa8
    } u1;                                                                   //0xa8
    ULONGLONG Reserved0;                                                    //0xb0
    struct _MMSUPPORT_FLAGS Flags;                                          //0xb8
};
/* Used in */
// _MI_DYNAMIC_BITMAP
// _MI_SYSTEM_PTE_TYPE
// _MI_SYSTEM_VA_STATE
// _MI_VISIBLE_PARTITION
// _MMSUPPORT_FULL

