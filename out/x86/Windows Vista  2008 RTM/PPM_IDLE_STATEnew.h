#pragma once
/* ------------------ */

#include <PROCESSOR_IDLE_TIMES.h>

//0x20 bytes (sizeof)
struct PPM_IDLE_STATE
{
    LONG (*IdleHandler)(ULONG arg1, struct PROCESSOR_IDLE_TIMES* arg2);     //0x0
    ULONG Context;                                                          //0x4
    ULONG Latency;                                                          //0x8
    ULONG Power;                                                            //0xc
    ULONG TimeCheck;                                                        //0x10
    ULONG StateFlags;                                                       //0x14
    UCHAR PromotePercent;                                                   //0x18
    UCHAR DemotePercent;                                                    //0x19
    UCHAR PromotePercentBase;                                               //0x1a
    UCHAR DemotePercentBase;                                                //0x1b
    UCHAR StateType;                                                        //0x1c
};
/* Used in */
// PPM_IDLE_STATES

