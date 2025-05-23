#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _PROCESSOR_IDLE_CONSTRAINTS
{
    ULONGLONG TotalTime;                                                    //0x0
    ULONGLONG IdleTime;                                                     //0x8
    ULONGLONG ExpectedIdleDuration;                                         //0x10
    ULONGLONG MaxIdleDuration;                                              //0x18
    ULONG OverrideState;                                                    //0x20
    ULONG TimeCheck;                                                        //0x24
    UCHAR PromotePercent;                                                   //0x28
    UCHAR DemotePercent;                                                    //0x29
    UCHAR Parked;                                                           //0x2a
    UCHAR Interruptible;                                                    //0x2b
    UCHAR PlatformIdle;                                                     //0x2c
    ULONG IRHints;                                                          //0x30
    ULONG IRTruncatedHints;                                                 //0x34
    UCHAR ExpectedWakeReason;                                               //0x38
};
/* Used in */
// _PPM_IDLE_STATES
// _PROCESSOR_IDLE_PREPARE_INFO

