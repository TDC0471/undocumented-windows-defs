#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _HAL_CLOCK_TIMER_CONFIGURATION
{
    union
    {
        UCHAR Flags;                                                        //0x0
        struct
        {
            UCHAR AlwaysOnTimer:1;                                          //0x0
            UCHAR HighLatency:1;                                            //0x0
            UCHAR PerCpuTimer:1;                                            //0x0
            UCHAR DynamicTickSupported:1;                                   //0x0
        };
    };
    ULONG KnownType;                                                        //0x4
    ULONG Capabilities;                                                     //0x8
    ULONGLONG MaxIncrement;                                                 //0x10
    ULONG MinIncrement;                                                     //0x18
};
/* Used in */
// HAL_PRIVATE_DISPATCH

