#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_GUID.h>
#include <_RTL_TIME_ZONE_INFORMATION.h>

//0x118 bytes (sizeof)
struct _TRACE_LOGFILE_HEADER
{
    ULONG BufferSize;                                                       //0x0
    union
    {
        ULONG Version;                                                      //0x4
        struct
        {
            UCHAR MajorVersion;                                             //0x4
            UCHAR MinorVersion;                                             //0x5
            UCHAR SubVersion;                                               //0x6
            UCHAR SubMinorVersion;                                          //0x7
        } VersionDetail;                                                    //0x4
    };
    ULONG ProviderVersion;                                                  //0x8
    ULONG NumberOfProcessors;                                               //0xc
    union _LARGE_INTEGER EndTime;                                           //0x10
    ULONG TimerResolution;                                                  //0x18
    ULONG MaximumFileSize;                                                  //0x1c
    ULONG LogFileMode;                                                      //0x20
    ULONG BuffersWritten;                                                   //0x24
    union
    {
        struct _GUID LogInstanceGuid;                                       //0x28
        struct
        {
            ULONG StartBuffers;                                             //0x28
            ULONG PointerSize;                                              //0x2c
            ULONG EventsLost;                                               //0x30
            ULONG CpuSpeedInMHz;                                            //0x34
        };
    };
    USHORT* LoggerName;                                                     //0x38
    USHORT* LogFileName;                                                    //0x40
    struct _RTL_TIME_ZONE_INFORMATION TimeZone;                             //0x48
    union _LARGE_INTEGER BootTime;                                          //0xf8
    union _LARGE_INTEGER PerfFreq;                                          //0x100
    union _LARGE_INTEGER StartTime;                                         //0x108
    ULONG ReservedFlags;                                                    //0x110
    ULONG BuffersLost;                                                      //0x114
};
