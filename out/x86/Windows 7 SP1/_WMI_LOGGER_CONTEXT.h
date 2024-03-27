#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_ETHREAD.h>
#include <_SLIST_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_WMI_BUFFER_HEADER.h>
#include <_EX_FAST_REF.h>
#include <_UNICODE_STRING.h>
#include <_GUID.h>
#include <_POOL_TYPE.h>
#include <_ETW_REF_CLOCK.h>
#include <_ETW_REALTIME_CONSUMER.h>
#include <_ETW_RT_EVENT_LOSS.h>
#include <_KEVENT.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <_KMUTANT.h>
#include <_EX_PUSH_LOCK.h>
#include <_SECURITY_CLIENT_CONTEXT.h>
#include <_RTL_BITMAP.h>

//0x238 bytes (sizeof)
struct _WMI_LOGGER_CONTEXT
{
    ULONG LoggerId;                                                         //0x0
    ULONG BufferSize;                                                       //0x4
    ULONG MaximumEventSize;                                                 //0x8
    LONG CollectionOn;                                                      //0xc
    ULONG LoggerMode;                                                       //0x10
    LONG AcceptNewEvents;                                                   //0x14
    LONGLONG (*GetCpuClock)();                                              //0x18
    union _LARGE_INTEGER StartTime;                                         //0x20
    VOID* LogFileHandle;                                                    //0x28
    struct _ETHREAD* LoggerThread;                                          //0x2c
    LONG LoggerStatus;                                                      //0x30
    VOID* NBQHead;                                                          //0x34
    VOID* OverflowNBQHead;                                                  //0x38
    union _SLIST_HEADER QueueBlockFreeList;                                 //0x40
    struct _LIST_ENTRY GlobalList;                                          //0x48
    union
    {
        struct _WMI_BUFFER_HEADER* BatchedBufferList;                       //0x50
        struct _EX_FAST_REF CurrentBuffer;                                  //0x50
    };
    struct _UNICODE_STRING LoggerName;                                      //0x54
    struct _UNICODE_STRING LogFileName;                                     //0x5c
    struct _UNICODE_STRING LogFilePattern;                                  //0x64
    struct _UNICODE_STRING NewLogFileName;                                  //0x6c
    ULONG ClockType;                                                        //0x74
    ULONG MaximumFileSize;                                                  //0x78
    ULONG LastFlushedBuffer;                                                //0x7c
    ULONG FlushTimer;                                                       //0x80
    ULONG FlushThreshold;                                                   //0x84
    union _LARGE_INTEGER ByteOffset;                                        //0x88
    ULONG MinimumBuffers;                                                   //0x90
    volatile LONG BuffersAvailable;                                         //0x94
    volatile LONG NumberOfBuffers;                                          //0x98
    ULONG MaximumBuffers;                                                   //0x9c
    volatile ULONG EventsLost;                                              //0xa0
    ULONG BuffersWritten;                                                   //0xa4
    ULONG LogBuffersLost;                                                   //0xa8
    ULONG RealTimeBuffersDelivered;                                         //0xac
    ULONG RealTimeBuffersLost;                                              //0xb0
    LONG* SequencePtr;                                                      //0xb4
    ULONG LocalSequence;                                                    //0xb8
    struct _GUID InstanceGuid;                                              //0xbc
    LONG FileCounter;                                                       //0xcc
    VOID (* volatileBufferCallback)(struct _WMI_BUFFER_HEADER* arg1, VOID* arg2); //0xd0
    enum _POOL_TYPE PoolType;                                               //0xd4
    struct _ETW_REF_CLOCK ReferenceTime;                                    //0xd8
    struct _LIST_ENTRY Consumers;                                           //0xe8
    ULONG NumConsumers;                                                     //0xf0
    struct _ETW_REALTIME_CONSUMER* TransitionConsumer;                      //0xf4
    VOID* RealtimeLogfileHandle;                                            //0xf8
    struct _UNICODE_STRING RealtimeLogfileName;                             //0xfc
    union _LARGE_INTEGER RealtimeWriteOffset;                               //0x108
    union _LARGE_INTEGER RealtimeReadOffset;                                //0x110
    union _LARGE_INTEGER RealtimeLogfileSize;                               //0x118
    ULONGLONG RealtimeLogfileUsage;                                         //0x120
    ULONGLONG RealtimeMaximumFileSize;                                      //0x128
    ULONG RealtimeBuffersSaved;                                             //0x130
    struct _ETW_REF_CLOCK RealtimeReferenceTime;                            //0x138
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;                                //0x148
    struct _KEVENT LoggerEvent;                                             //0x14c
    struct _KEVENT FlushEvent;                                              //0x15c
    struct _KTIMER FlushTimeOutTimer;                                       //0x170
    struct _KDPC FlushDpc;                                                  //0x198
    struct _KMUTANT LoggerMutex;                                            //0x1b8
    struct _EX_PUSH_LOCK LoggerLock;                                        //0x1d8
    union
    {
        ULONG BufferListSpinLock;                                           //0x1dc
        struct _EX_PUSH_LOCK BufferListPushLock;                            //0x1dc
    };
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x1e0
    struct _EX_FAST_REF SecurityDescriptor;                                 //0x21c
    LONGLONG BufferSequenceNumber;                                          //0x220
    union
    {
        ULONG Flags;                                                        //0x228
        struct
        {
            ULONG Persistent:1;                                             //0x228
            ULONG AutoLogger:1;                                             //0x228
            ULONG FsReady:1;                                                //0x228
            ULONG RealTime:1;                                               //0x228
            ULONG Wow:1;                                                    //0x228
            ULONG KernelTrace:1;                                            //0x228
            ULONG NoMoreEnable:1;                                           //0x228
            ULONG StackTracing:1;                                           //0x228
            ULONG ErrorLogged:1;                                            //0x228
            ULONG RealtimeLoggerContextFreed:1;                             //0x228
        };
    };
    union
    {
        ULONG RequestFlag;                                                  //0x22c
        struct
        {
            ULONG RequestNewFie:1;                                          //0x22c
            ULONG RequestUpdateFile:1;                                      //0x22c
            ULONG RequestFlush:1;                                           //0x22c
            ULONG RequestDisableRealtime:1;                                 //0x22c
            ULONG RequestDisconnectConsumer:1;                              //0x22c
            ULONG RequestConnectConsumer:1;                                 //0x22c
        };
    };
    struct _RTL_BITMAP HookIdMap;                                           //0x230
};
