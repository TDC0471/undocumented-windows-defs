#pragma once
/* ------------------ */

#include <PPM_IDLE_STATE.h>

//0x3c bytes (sizeof)
struct PPM_IDLE_STATES
{
    ULONG Type;                                                             //0x0
    ULONG Count;                                                            //0x4
    union
    {
        ULONG AsULONG;                                                      //0x8
        ULONG AllowScaling:1;                                               //0x8
        ULONG Disabled:1;                                                   //0x8
        ULONG Reserved:30;                                                  //0x8
    } Flags;                                                                //0x8
    ULONG TargetState;                                                      //0xc
    ULONG ActualState;                                                      //0x10
    ULONG OldState;                                                         //0x14
    ULONG TargetProcessors;                                                 //0x18
    struct PPM_IDLE_STATE State[1];                                         //0x1c
};
/* Used in */
// _PROCESSOR_POWER_STATE

