#pragma once
/* ------------------ */


//0x80 bytes (sizeof)
struct _PCW_PROCESSOR_INFO
{
    ULONGLONG IdleTime;                                                     //0x0
    ULONGLONG AvailableTime;                                                //0x8
    ULONGLONG UserTime;                                                     //0x10
    ULONGLONG KernelTime;                                                   //0x18
    ULONG Interrupts;                                                       //0x20
    ULONGLONG DpcTime;                                                      //0x28
    ULONGLONG InterruptTime;                                                //0x30
    ULONG DpcCount;                                                         //0x38
    ULONG DpcRate;                                                          //0x3c
    ULONGLONG C1Time;                                                       //0x40
    ULONGLONG C2Time;                                                       //0x48
    ULONGLONG C3Time;                                                       //0x50
    ULONGLONG C1Transitions;                                                //0x58
    ULONGLONG C2Transitions;                                                //0x60
    ULONGLONG C3Transitions;                                                //0x68
    ULONG ParkingStatus;                                                    //0x70
    ULONG CurrentFrequency;                                                 //0x74
    ULONG PercentMaxFrequency;                                              //0x78
    ULONG StateFlags;                                                       //0x7c
};
