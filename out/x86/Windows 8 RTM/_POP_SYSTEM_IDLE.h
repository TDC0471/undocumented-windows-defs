#pragma once
/* ------------------ */

#include <POWER_ACTION_POLICY.h>
#include <_SYSTEM_POWER_STATE.h>

//0x40 bytes (sizeof)
struct _POP_SYSTEM_IDLE
{
    LONG AverageIdleness;                                                   //0x0
    LONG LowestIdleness;                                                    //0x4
    ULONG Time;                                                             //0x8
    ULONG Timeout;                                                          //0xc
    ULONG LastUserInput;                                                    //0x10
    struct POWER_ACTION_POLICY Action;                                      //0x14
    enum _SYSTEM_POWER_STATE MinState;                                      //0x20
    ULONG SystemRequired;                                                   //0x24
    UCHAR IdleWorker;                                                       //0x28
    UCHAR Sampling;                                                         //0x29
    ULONGLONG LastTick;                                                     //0x30
    ULONG LastSystemRequiredTime;                                           //0x38
};
