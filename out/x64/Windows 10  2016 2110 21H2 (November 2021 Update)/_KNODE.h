#pragma once
/* ------------------ */

#include <_GROUP_AFFINITY.h>
#include <_flags.h>
#include <_KHETERO_PROCESSOR_SET.h>
#include <_KQOS_GROUPING_SETS.h>

//0x180 bytes (sizeof)
struct _KNODE
{
    ULONGLONG IdleNonParkedCpuSet;                                          //0x0
    ULONGLONG IdleSmtSet;                                                   //0x8
    ULONGLONG NonPairedSmtSet;                                              //0x10
    ULONGLONG IdleCpuSet;                                                   //0x18
    ULONGLONG DeepIdleSet;                                                  //0x40
    ULONGLONG IdleConstrainedSet;                                           //0x48
    ULONGLONG NonParkedSet;                                                 //0x50
    ULONGLONG SoftParkedSet;                                                //0x58
    ULONGLONG NonIsrTargetedSet;                                            //0x60
    LONG ParkLock;                                                          //0x68
    USHORT ThreadSeed;                                                      //0x6c
    USHORT ProcessSeed;                                                     //0x6e
    ULONG SiblingMask;                                                      //0x80
    union
    {
        struct _GROUP_AFFINITY Affinity;                                    //0x88
        struct
        {
            UCHAR AffinityFill[10];                                         //0x88
            USHORT NodeNumber;                                              //0x92
            USHORT PrimaryNodeNumber;                                       //0x94
            USHORT Spare0;                                                  //0x96
        };
    };
    ULONGLONG SharedReadyQueueMask;                                         //0x98
    ULONGLONG StrideMask;                                                   //0xa0
    ULONG ProximityId;                                                      //0xa8
    ULONG Lowest;                                                           //0xac
    ULONG Highest;                                                          //0xb0
    UCHAR MaximumProcessors;                                                //0xb4
    struct _flags Flags;                                                    //0xb5
    UCHAR Spare10;                                                          //0xb6
    struct _KHETERO_PROCESSOR_SET HeteroSets[5];                            //0xb8
    ULONGLONG PpmConfiguredQosSets[5];                                      //0x130
    ULONGLONG Spare11;                                                      //0x158
    union _KQOS_GROUPING_SETS QosGroupingSets;                              //0x160
    ULONGLONG QosPreemptibleSet;                                            //0x170
    ULONGLONG LLCLeaders;                                                   //0x178
};
/* Used in */
// _ENODE
// _KPRCB

