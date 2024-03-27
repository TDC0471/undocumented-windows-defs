#pragma once
/* ------------------ */

#include <_ENERGY_STATE_DURATION.h>

//0x110 bytes (sizeof)
struct _PROCESS_ENERGY_VALUES
{
    ULONGLONG Cycles[4][2];                                                 //0x0
    ULONGLONG DiskEnergy;                                                   //0x40
    ULONGLONG NetworkTailEnergy;                                            //0x48
    ULONGLONG MBBTailEnergy;                                                //0x50
    ULONGLONG NetworkTxRxBytes;                                             //0x58
    ULONGLONG MBBTxRxBytes;                                                 //0x60
    union
    {
        union _ENERGY_STATE_DURATION Durations[3];                          //0x68
        struct
        {
            union _ENERGY_STATE_DURATION ForegroundDuration;                //0x68
            union _ENERGY_STATE_DURATION DesktopVisibleDuration;            //0x70
            union _ENERGY_STATE_DURATION PSMForegroundDuration;             //0x78
        };
    };
    ULONG CompositionRendered;                                              //0x80
    ULONG CompositionDirtyGenerated;                                        //0x84
    ULONG CompositionDirtyPropagated;                                       //0x88
    ULONG Reserved1;                                                        //0x8c
    ULONGLONG AttributedCycles[4][2];                                       //0x90
    ULONGLONG WorkOnBehalfCycles[4][2];                                     //0xd0
};
/* Used in */
// _PROCESS_EXTENDED_ENERGY_VALUES

