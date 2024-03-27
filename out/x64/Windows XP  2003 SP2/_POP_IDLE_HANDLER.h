#pragma once
/* ------------------ */

#include <PROCESSOR_IDLE_TIMES.h>

//0x28 bytes (sizeof)
struct _POP_IDLE_HANDLER
{
    ULONG Latency;                                                          //0x0
    ULONG TimeCheck;                                                        //0x4
    ULONG DemoteLimit;                                                      //0x8
    ULONG PromoteLimit;                                                     //0xc
    ULONG PromoteCount;                                                     //0x10
    UCHAR Demote;                                                           //0x14
    UCHAR Promote;                                                          //0x15
    UCHAR PromotePercent;                                                   //0x16
    UCHAR DemotePercent;                                                    //0x17
    UCHAR State;                                                            //0x18
    UCHAR Spare[3];                                                         //0x19
    UCHAR (*IdleFunction)(struct PROCESSOR_IDLE_TIMES* arg1);               //0x20
};
