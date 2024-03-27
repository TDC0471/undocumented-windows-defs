#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_ETHREAD.h>
#include <_SLIST_HEADER.h>
#include <_WMI_BUFFER_HEADER.h>
#include <_UNICODE_STRING.h>
#include <_GUID.h>
#include <_POOL_TYPE.h>
#include <_ETW_REF_CLOCK.h>
#include <_LIST_ENTRY.h>
#include <_ETW_RT_EVENT_LOSS.h>
#include <_KEVENT.h>
#include <_KDPC.h>
#include <_KMUTANT.h>
#include <_EX_PUSH_LOCK.h>
#include <_SECURITY_CLIENT_CONTEXT.h>
#include <_EX_FAST_REF.h>

//0x370 bytes (sizeof)
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
    struct _WMI_BUFFER_HEADER* BatchedBufferList;                           //0x50
    struct _UNICODE_STRING LoggerName;                                      //0x58
    struct _UNICODE_STRING LogFileName;                                     //0x68
    struct _UNICODE_STRING LogFilePattern;                                  //0x78
    struct _UNICODE_STRING NewLogFileName;                                  //0x88
    ULONG ClockType;                                                        //0x98
    LONG CollectionOn;                                                      //0x9c
    ULONG MaximumFileSize;                                                  //0xa0
    ULONG LoggerMode;                                                       //0xa4
    ULONG LastFlushedBuffer;                                                //0xa8
    ULONG FlushTimer;                                                       //0xac
    ULONG FlushThreshold;                                                   //0xb0
    union _LARGE_INTEGER ByteOffset;                                        //0xb8
    union _LARGE_INTEGER FlushTimeStamp;                                    //0xc0
    ULONG MinimumBuffers;                                                   //0xc8
    volatile LONG BuffersAvailable;                                         //0xcc
    volatile LONG NumberOfBuffers;                                          //0xd0
    ULONG MaximumBuffers;                                                   //0xd4
    volatile ULONG EventsLost;                                              //0xd8
    ULONG BuffersWritten;                                                   //0xdc
    ULONG LogBuffersLost;                                                   //0xe0
    ULONG RealTimeBuffersDelivered;                                         //0xe4
    ULONG RealTimeBuffersLost;                                              //0xe8
    ULONG BufferSize;                                                       //0xec
    ULONG MaximumEventSize;                                                 //0xf0
    LONG* SequencePtr;                                                      //0xf8
    ULONG LocalSequence;                                                    //0x100
    struct _GUID InstanceGuid;                                              //0x104
    LONGLONG (*GetCpuClock)();                                              //0x118
    LONG FileCounter;                                                       //0x120
    VOID (* volatileBufferCallback)(struct _WMI_BUFFER_HEADER* arg1, VOID* arg2); //0x128
    enum _POOL_TYPE PoolType;                                               //0x130
    struct _ETW_REF_CLOCK ReferenceTime;                                    //0x138
    UCHAR RealtimeLoggerContextFreed;                                       //0x148
    struct _LIST_ENTRY Consumers;                                           //0x150
    ULONG NumConsumers;                                                     //0x160
    struct _LIST_ENTRY Connecting;                                          //0x168
    UCHAR NewConsumer;                                                      //0x178
    VOID* RealtimeLogfileHandle;                                            //0x180
    struct _UNICODE_STRING RealtimeLogfileName;                             //0x188
    union _LARGE_INTEGER RealtimeWriteOffset;                               //0x198
    union _LARGE_INTEGER RealtimeReadOffset;                                //0x1a0
    union _LARGE_INTEGER RealtimeLogfileSize;                               //0x1a8
    ULONGLONG RealtimeLogfileUsage;                                         //0x1b0
    ULONGLONG RealtimeMaximumFileSize;                                      //0x1b8
    ULONG RealtimeBuffersSaved;                                             //0x1c0
    struct _ETW_REF_CLOCK RealtimeReferenceTime;                            //0x1c8
    ULONG RealtimeDisconnectProcessId;                                      //0x1d8
    ULONG RealtimeDisconnectConsumerId;                                     //0x1dc
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;                                //0x1e0
    struct _KEVENT LoggerEvent;                                             //0x1e8
    struct _KEVENT FlushEvent;                                              //0x200
    struct _KDPC FlushDpc;                                                  //0x218
    struct _KMUTANT LoggerMutex;                                            //0x258
    struct _EX_PUSH_LOCK LoggerLock;                                        //0x290
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x298
    struct _EX_FAST_REF SecurityDescriptor;                                 //0x2e0
    struct _WMI_BUFFER_HEADER DummyBufferForMarker;                         //0x2e8
    LONGLONG BufferSequenceNumber;                                          //0x330
    LONG AcceptNewEvents;                                                   //0x338
    union
    {
        ULONG Flags;                                                        //0x33c
        struct
        {
            ULONG Persistent:1;                                             //0x33c
            ULONG AutoLogger:1;                                             //0x33c
            ULONG FsReady:1;                                                //0x33c
            ULONG RealTime:1;                                               //0x33c
            ULONG Wow:1;                                                    //0x33c
            ULONG KernelTrace:1;                                            //0x33c
            ULONG NoMoreEnable:1;                                           //0x33c
        };
    };
    union
    {
        ULONG RequestFlag;                                                  //0x340
        struct
        {
            ULONG RequestNewFie:1;                                          //0x340
            ULONG RequestUpdateFile:1;                                      //0x340
            ULONG RequestFlush:1;                                           //0x340
            ULONG RequestDisableRealtime:1;                                 //0x340
            ULONG RequestDisconnectConsumer:1;                              //0x340
        };
    };
    USHORT StackTraceFilterHookCount;                                       //0x344
    USHORT StackTraceFilter[16];                                            //0x346
};
