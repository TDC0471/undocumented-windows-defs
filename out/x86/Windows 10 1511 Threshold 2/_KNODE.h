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
    LONG ParkLock;                                                          //0x4c
    ULONG Seed;                                                             //0x50
    ULONG SiblingMask;                                                      //0x80
    union
    {
        struct _GROUP_AFFINITY Affinity;                                    //0x84
        struct
        {
            UCHAR AffinityFill[6];                                          //0x84
            USHORT NodeNumber;                                              //0x8a
            USHORT PrimaryNodeNumber;                                       //0x8c
            UCHAR Stride;                                                   //0x8e
            UCHAR Spare0;                                                   //0x8f
        };
    };
    ULONG SharedReadyQueueLeaders;                                          //0x90
    ULONG ProximityId;                                                      //0x94
    ULONG Lowest;                                                           //0x98
    ULONG Highest;                                                          //0x9c
    UCHAR MaximumProcessors;                                                //0xa0
    struct _flags Flags;                                                    //0xa1
    UCHAR Spare10;                                                          //0xa2
    struct _KHETERO_PROCESSOR_SET HeteroSets[5];                            //0xa4
};
/* Used in */
// _ENODE
// _KPRCB

