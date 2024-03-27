#pragma once
/* ------------------ */

#include <PROCESSOR_IDLE_TIMES.h>

//0x28 bytes (sizeof)
struct PPM_IDLE_STATE
{
    LONG (*IdleHandler)(ULONGLONG arg1, struct PROCESSOR_IDLE_TIMES* arg2); //0x0
    ULONGLONG Context;                                                      //0x8
    ULONG Latency;                                                          //0x10
    ULONG Power;                                                            //0x14
    ULONG TimeCheck;                                                        //0x18
    ULONG StateFlags;                                                       //0x1c
    UCHAR PromotePercent;                                                   //0x20
    UCHAR DemotePercent;                                                    //0x21
    UCHAR PromotePercentBase;                                               //0x22
    UCHAR DemotePercentBase;                                                //0x23
    UCHAR StateType;                                                        //0x24
};
/* Used in */
// PPM_IDLE_STATES

