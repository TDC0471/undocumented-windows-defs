#pragma once
/* ------------------ */

#include <_GROUP_AFFINITY.h>
#include <_flags.h>
#include <_KHETERO_PROCESSOR_SET.h>

//0x180 bytes (sizeof)
struct _KNODE
{
    ULONGLONG IdleNonParkedCpuSet;                                          //0x0
    ULONGLONG IdleSmtSet;                                                   //0x8
    ULONGLONG IdleCpuSet;                                                   //0x10
    ULONGLONG DeepIdleSet;                                                  //0x40
    ULONGLONG IdleConstrainedSet;                                           //0x48
    ULONGLONG NonParkedSet;                                                 //0x50
    ULONGLONG NonIsrTargetedSet;                                            //0x58
    LONG ParkLock;                                                          //0x60
    ULONG Seed;                                                             //0x64
    ULONG SiblingMask;                                                      //0x80
    union
    {
        struct _GROUP_AFFINITY Affinity;                                    //0x88
        struct
        {
            UCHAR AffinityFill[10];                                         //0x88
            USHORT NodeNumber;                                              //0x92
            USHORT PrimaryNodeNumber;                                       //0x94
            UCHAR Stride;                                                   //0x96
            UCHAR Spare0;                                                   //0x97
        };
    };
    ULONGLONG SharedReadyQueueLeaders;                                      //0x98
    ULONG ProximityId;                                                      //0xa0
    ULONG Lowest;                                                           //0xa4
    ULONG Highest;                                                          //0xa8
    UCHAR MaximumProcessors;                                                //0xac
    struct _flags Flags;                                                    //0xad
    UCHAR Spare10;                                                          //0xae
    struct _KHETERO_PROCESSOR_SET HeteroSets[5];                            //0xb0
    ULONGLONG PpmConfiguredQosSets[4];                                      //0x128
};
/* Used in */
// _ENODE
// _KPRCB

