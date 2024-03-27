#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_PPM_IDLE_STATE.h>

//0xa0 bytes (sizeof)
struct _PPM_IDLE_STATES
{
    ULONG Count;                                                            //0x0
    union
    {
        ULONG AsULONG;                                                      //0x4
        ULONG AllowScaling:1;                                               //0x4
        ULONG Disabled:1;                                                   //0x4
        ULONG HvMaxCState:4;                                                //0x4
        ULONG Reserved:26;                                                  //0x4
    } Flags;                                                                //0x4
    ULONG TargetState;                                                      //0x8
    ULONG ActualState;                                                      //0xc
    ULONG OldState;                                                         //0x10
    UCHAR NewlyUnparked;                                                    //0x14
    struct _KAFFINITY_EX TargetProcessors;                                  //0x18
    struct _PPM_IDLE_STATE State[1];                                        //0x40
};
/* Used in */
// _PROCESSOR_POWER_STATE

