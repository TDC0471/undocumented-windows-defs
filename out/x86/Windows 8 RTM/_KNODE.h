#pragma once
/* ------------------ */

#include <_flags.h>
#include <_GROUP_AFFINITY.h>

//0xc0 bytes (sizeof)
struct _KNODE
{
    ULONG DeepIdleSet;                                                      //0x0
    ULONG ProximityId;                                                      //0x40
    USHORT NodeNumber;                                                      //0x44
    USHORT PrimaryNodeNumber;                                               //0x46
    UCHAR MaximumProcessors;                                                //0x48
    struct _flags Flags;                                                    //0x49
    UCHAR Stride;                                                           //0x4a
    UCHAR NodePad0;                                                         //0x4b
    struct _GROUP_AFFINITY Affinity;                                        //0x4c
    ULONG IdleCpuSet;                                                       //0x58
    ULONG IdleSmtSet;                                                       //0x5c
    ULONG Seed;                                                             //0x80
    ULONG Lowest;                                                           //0x84
    ULONG Highest;                                                          //0x88
    LONG ParkLock;                                                          //0x8c
    ULONG NonParkedSet;                                                     //0x90
};
/* Used in */
// _ENODE
// _KPRCB

