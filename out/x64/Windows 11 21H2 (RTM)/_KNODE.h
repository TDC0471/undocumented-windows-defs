#pragma once
/* ------------------ */

#include <_KSCHEDULER_SUBNODE.h>

//0x118 bytes (sizeof)
struct _KNODE
{
    USHORT NodeNumber;                                                      //0x0
    USHORT PrimaryNodeNumber;                                               //0x2
    ULONG ProximityId;                                                      //0x4
    USHORT MaximumProcessors;                                               //0x8
    struct
    {
        UCHAR ProcessorOnly:1;                                              //0xa
        UCHAR GroupsAssigned:1;                                             //0xa
        UCHAR MeasurableDistance:1;                                         //0xa
    } Flags;                                                                //0xa
    UCHAR GroupSeed;                                                        //0xb
    UCHAR PrimaryGroup;                                                     //0xc
    ULONG ActiveGroups;                                                     //0x10
    struct _KSCHEDULER_SUBNODE* SchedulerSubNodes[32];                      //0x18
};
/* Used in */
// _ENODE

