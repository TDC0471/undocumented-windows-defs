#pragma once
/* ------------------ */

#include <_GROUP_AFFINITY.h>
#include <_flags.h>
#include <_KHETERO_PROCESSOR_SET.h>
#include <_KQOS_GROUPING_SETS.h>

//0x180 bytes (sizeof)
struct _KSCHEDULER_SUBNODE
{
    ULONGLONG SubNodeLock;                                                  //0x0
    ULONGLONG IdleNonParkedCpuSet;                                          //0x8
    union
    {
        struct
        {
            ULONGLONG IdleCpuSet;                                           //0x10
            ULONGLONG IdleSmtSet;                                           //0x18
            ULONGLONG IdleModuleSet;                                        //0x20
        };
        ULONGLONG IdleIsolationUnitSet[2];                                  //0x10
    };
    ULONGLONG NonPairedSmtSet;                                              //0x28
    ULONGLONG DeepIdleSet;                                                  //0x40
    ULONGLONG IdleConstrainedSet;                                           //0x48
    ULONGLONG NonParkedSet;                                                 //0x50
    ULONGLONG ParkRequestSet;                                               //0x58
    ULONGLONG SoftParkRequestSet;                                           //0x60
    ULONGLONG NonIsrTargetedSet;                                            //0x68
    LONG ParkLock;                                                          //0x70
    UCHAR ProcessSeed;                                                      //0x74
    UCHAR Spare5[3];                                                        //0x75
    union
    {
        struct _GROUP_AFFINITY Affinity;                                    //0x80
        struct
        {
            UCHAR AffinityFill[10];                                         //0x80
            USHORT ParentNodeNumber;                                        //0x8a
            USHORT SubNodeNumber;                                           //0x8c
            USHORT Spare;                                                   //0x8e
        };
    };
    ULONGLONG SiblingMask;                                                  //0x90
    ULONGLONG SharedReadyQueueMask;                                         //0x98
    ULONGLONG StrideMask;                                                   //0xa0
    ULONGLONG LLCLeaders;                                                   //0xa8
    ULONG Lowest;                                                           //0xb0
    ULONG Highest;                                                          //0xb4
    struct _flags Flags;                                                    //0xb8
    UCHAR WorkloadClasses;                                                  //0xb9
    struct _KHETERO_PROCESSOR_SET* HeteroSets;                              //0xc0
    ULONGLONG PpmConfiguredQosSets[7];                                      //0xc8
    union _KQOS_GROUPING_SETS QosGroupingSets;                              //0x100
    UCHAR SoftParkRanks[64];                                                //0x140
};
/* Used in */
// _KNODE
// _KPRCB

