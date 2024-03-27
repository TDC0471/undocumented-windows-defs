#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_ETHREAD.h>
#include <_SLIST_HEADER.h>
#include <_UNICODE_STRING.h>
#include <_GUID.h>
#include <_WMI_BUFFER_HEADER.h>
#include <_POOL_TYPE.h>
#include <_ETW_REF_CLOCK.h>
#include <_LIST_ENTRY.h>
#include <_ETW_RT_EVENT_LOSS.h>
#include <_KEVENT.h>
#include <_KDPC.h>
#include <_KMUTANT.h>
#include <_SECURITY_CLIENT_CONTEXT.h>
#include <_EX_FAST_REF.h>

//0x350 bytes (sizeof)
struct _WMI_LOGGER_CONTEXT
{
    union _LARGE_INTEGER StartTime;                                         //0x0
    VOID* LogFileHandle;                                                    //0x8
    struct _ETHREAD* LoggerThread;                                          //0x10
    LONG LoggerStatus;                                                      //0x18
    ULONG LoggerId;                                                         //0x1c
    VOID* NBQHead;                                                          //0x20
    VOID* OverflowNBQHead;                                                  //0x28
    union _SLIST_HEADER QueueBlockFreeList;                                 //0x30
    union _SLIST_HEADER GlobalList;                                         //0x40
    struct _UNICODE_STRING LoggerName;                                      //0x50
    struct _UNICODE_STRING LogFileName;                                     //0x60
    struct _UNICODE_STRING LogFilePattern;                                  //0x70
    struct _UNICODE_STRING NewLogFileName;                                  //0x80
    ULONG ClockType;                                                        //0x90
    LONG CollectionOn;                                                      //0x94
    ULONG MaximumFileSize;                                                  //0x98
    ULONG LoggerMode;                                                       //0x9c
    ULONG LastFlushedBuffer;                                                //0xa0
    ULONG FlushTimer;                                                       //0xa4
    union _LARGE_INTEGER ByteOffset;                                        //0xa8
    union _LARGE_INTEGER FlushTimeStamp;                                    //0xb0
    ULONG MinimumBuffers;                                                   //0xb8
    volatile LONG BuffersAvailable;                                         //0xbc
    volatile LONG NumberOfBuffers;                                          //0xc0
    ULONG MaximumBuffers;                                                   //0xc4
    volatile ULONG EventsLost;                                              //0xc8
    ULONG BuffersWritten;                                                   //0xcc
    ULONG LogBuffersLost;                                                   //0xd0
    ULONG RealTimeBuffersDelivered;                                         //0xd4
    ULONG RealTimeBuffersLost;                                              //0xd8
    ULONG BufferSize;                                                       //0xdc
    ULONG MaximumEventSize;                                                 //0xe0
    LONG* SequencePtr;                                                      //0xe8
    ULONG LocalSequence;                                                    //0xf0
    struct _GUID InstanceGuid;                                              //0xf4
    LONGLONG (*GetCpuClock)();                                              //0x108
    LONG FileCounter;                                                       //0x110
    VOID (* volatileBufferCallback)(struct _WMI_BUFFER_HEADER* arg1, VOID* arg2); //0x118
    enum _POOL_TYPE PoolType;                                               //0x120
    struct _ETW_REF_CLOCK ReferenceTime;                                    //0x128
    UCHAR RealtimeLoggerContextFreed;                                       //0x138
    struct _LIST_ENTRY Consumers;                                           //0x140
    ULONG NumConsumers;                                                     //0x150
    struct _LIST_ENTRY Connecting;                                          //0x158
    UCHAR NewConsumer;                                                      //0x168
    VOID* RealtimeLogfileHandle;                                            //0x170
    struct _UNICODE_STRING RealtimeLogfileName;                             //0x178
    union _LARGE_INTEGER RealtimeWriteOffset;                               //0x188
    union _LARGE_INTEGER RealtimeReadOffset;                                //0x190
    union _LARGE_INTEGER RealtimeLogfileSize;                               //0x198
    ULONGLONG RealtimeLogfileUsage;                                         //0x1a0
    ULONG RealtimeBuffersSaved;                                             //0x1a8
    struct _ETW_REF_CLOCK RealtimeReferenceTime;                            //0x1b0
    ULONG RealtimeDisconnectProcessId;                                      //0x1c0
    ULONG RealtimeDisconnectConsumerId;                                     //0x1c4
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;                                //0x1c8
    struct _KEVENT LoggerEvent;                                             //0x1d0
    struct _KEVENT FlushEvent;                                              //0x1e8
    struct _KDPC FlushDpc;                                                  //0x200
    struct _KMUTANT LoggerMutex;                                            //0x240
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x278
    struct _EX_FAST_REF SecurityDescriptor;                                 //0x2c0
    struct _WMI_BUFFER_HEADER DummyBufferForMarker;                         //0x2c8
    LONGLONG BufferSequenceNumber;                                          //0x310
    LONG AcceptNewEvents;                                                   //0x318
    union
    {
        ULONG Flags;                                                        //0x31c
        struct
        {
            ULONG Persistent:1;                                             //0x31c
            ULONG AutoLogger:1;                                             //0x31c
            ULONG FsReady:1;                                                //0x31c
            ULONG RealTime:1;                                               //0x31c
            ULONG Wow:1;                                                    //0x31c
            ULONG KernelTrace:1;                                            //0x31c
            ULONG NoMoreEnable:1;                                           //0x31c
        };
    };
    union
    {
        ULONG RequestFlag;                                                  //0x320
        struct
        {
            ULONG RequestNewFie:1;                                          //0x320
            ULONG RequestUpdateFile:1;                                      //0x320
            ULONG RequestFlush:1;                                           //0x320
            ULONG RequestDisableRealtime:1;                                 //0x320
            ULONG RequestDisconnectConsumer:1;                              //0x320
        };
    };
    USHORT StackTraceFilterHookCount;                                       //0x324
    USHORT StackTraceFilter[16];                                            //0x326
};
