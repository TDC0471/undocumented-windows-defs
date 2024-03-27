#pragma once
/* ------------------ */


//0xc0 bytes (sizeof)
struct _PCW_PROCESSOR_INFO
{
    ULONGLONG IdleTime;                                                     //0x0
    ULONGLONG AvailableTime;                                                //0x8
    ULONGLONG UserTime;                                                     //0x10
    ULONGLONG KernelTime;                                                   //0x18
    ULONG Interrupts;                                                       //0x20
    ULONGLONG DpcTime;                                                      //0x28
    ULONGLONG InterruptTime;                                                //0x30
    ULONG ClockInterrupts;                                                  //0x38
    ULONG DpcCount;                                                         //0x3c
    ULONG DpcRate;                                                          //0x40
    ULONGLONG C1Time;                                                       //0x48
    ULONGLONG C2Time;                                                       //0x50
    ULONGLONG C3Time;                                                       //0x58
    ULONGLONG C1Transitions;                                                //0x60
    ULONGLONG C2Transitions;                                                //0x68
    ULONGLONG C3Transitions;                                                //0x70
    ULONGLONG StallTime;                                                    //0x78
    ULONG ParkingStatus;                                                    //0x80
    ULONG CurrentFrequency;                                                 //0x84
    ULONG PercentMaxFrequency;                                              //0x88
    ULONG StateFlags;                                                       //0x8c
    ULONG NominalThroughput;                                                //0x90
    ULONG ActiveThroughput;                                                 //0x94
    ULONGLONG ScaledThroughput;                                             //0x98
    ULONGLONG ScaledKernelThroughput;                                       //0xa0
    ULONGLONG AverageIdleTime;                                              //0xa8
    ULONGLONG IdleBreakEvents;                                              //0xb0
    ULONG PerformanceLimit;                                                 //0xb8
    ULONG PerformanceLimitFlags;                                            //0xbc
};
