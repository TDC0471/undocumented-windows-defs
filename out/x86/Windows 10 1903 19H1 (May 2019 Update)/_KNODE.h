#pragma once
/* ------------------ */

#include <_GROUP_AFFINITY.h>
#include <_flags.h>
#include <_KHETERO_PROCESSOR_SET.h>

//0x100 bytes (sizeof)
struct _KNODE
{
    ULONG IdleNonParkedCpuSet;                                              //0x0
    ULONG IdleSmtSet;                                                       //0x4
    ULONG IdleCpuSet;                                                       //0x8
    ULONG DeepIdleSet;                                                      //0x40
    ULONG IdleConstrainedSet;                                               //0x44
    ULONG NonParkedSet;                                                     //0x48
    ULONG NonIsrTargetedSet;                                                //0x4c
    LONG ParkLock;                                                          //0x50
    USHORT ThreadSeed;                                                      //0x54
    USHORT ProcessSeed;                                                     //0x56
    ULONG SiblingMask;                                                      //0x80
    union
    {
        struct _GROUP_AFFINITY Affinity;                                    //0x84
        struct
        {
            UCHAR AffinityFill[6];                                          //0x84
            USHORT NodeNumber;                                              //0x8a
            USHORT PrimaryNodeNumber;                                       //0x8c
            USHORT Spare0;                                                  //0x8e
        };
    };
    ULONG SharedReadyQueueMask;                                             //0x90
    ULONG StrideMask;                                                       //0x94
    ULONG ProximityId;                                                      //0x98
    ULONG Lowest;                                                           //0x9c
    ULONG Highest;                                                          //0xa0
    UCHAR MaximumProcessors;                                                //0xa4
    struct _flags Flags;                                                    //0xa5
    UCHAR Spare10;                                                          //0xa6
    struct _KHETERO_PROCESSOR_SET HeteroSets[5];                            //0xa8
    ULONG PpmConfiguredQosSets[4];                                          //0xe4
    ULONG LLCLeaders;                                                       //0xf4
};
/* Used in */
// _ENODE
// _KPRCB

