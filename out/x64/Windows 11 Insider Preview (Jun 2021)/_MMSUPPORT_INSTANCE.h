#pragma once
/* ------------------ */

#include <_MMWSL_INSTANCE.h>
#include <_LIST_ENTRY.h>
#include <_KGATE.h>
#include <_MMSUPPORT_FLAGS.h>

//0xc0 bytes (sizeof)
struct _MMSUPPORT_INSTANCE
{
    ULONG NextPageColor;                                                    //0x0
    volatile ULONG PageFaultCount;                                          //0x4
    ULONGLONG TrimmedPageCount;                                             //0x8
    struct _MMWSL_INSTANCE* VmWorkingSetList;                               //0x10
    struct _LIST_ENTRY WorkingSetExpansionLinks;                            //0x18
    volatile ULONGLONG AgeDistribution[8];                                  //0x28
    struct _KGATE* ExitOutswapGate;                                         //0x68
    ULONGLONG MinimumWorkingSetSize;                                        //0x70
    ULONGLONG MaximumWorkingSetSize;                                        //0x78
    volatile ULONGLONG WorkingSetLeafSize;                                  //0x80
    volatile ULONGLONG WorkingSetLeafPrivateSize;                           //0x88
    volatile ULONGLONG WorkingSetSize;                                      //0x90
    volatile ULONGLONG WorkingSetPrivateSize;                               //0x98
    ULONGLONG PeakWorkingSetSize;                                           //0xa0
    ULONG HardFaultCount;                                                   //0xa8
    USHORT LastTrimStamp;                                                   //0xac
    USHORT PartitionId;                                                     //0xae
    ULONGLONG SelfmapLock;                                                  //0xb0
    struct _MMSUPPORT_FLAGS Flags;                                          //0xb8
    LONG InterlockedFlags;                                                  //0xbc
};
/* Used in */
// _MI_VISIBLE_PARTITION
// _MMSUPPORT_FULL

