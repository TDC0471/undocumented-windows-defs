#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _PROCESSOR_IDLE_CONSTRAINTS
{
    ULONGLONG TotalTime;                                                    //0x0
    ULONGLONG IdleTime;                                                     //0x8
    ULONGLONG ExpectedIdleDuration;                                         //0x10
    ULONG MaxIdleDuration;                                                  //0x18
    ULONG OverrideState;                                                    //0x1c
    ULONG TimeCheck;                                                        //0x20
    UCHAR PromotePercent;                                                   //0x24
    UCHAR DemotePercent;                                                    //0x25
    UCHAR Parked;                                                           //0x26
    UCHAR Interruptible;                                                    //0x27
    UCHAR PlatformIdle;                                                     //0x28
};
/* Used in */
// _PROCESSOR_IDLE_PREPARE_INFO

