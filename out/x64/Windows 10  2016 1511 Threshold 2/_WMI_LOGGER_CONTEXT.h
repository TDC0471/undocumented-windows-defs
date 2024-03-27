#pragma once
/* ------------------ */

#include <_ETHREAD.h>
#include <_ETW_BUFFER_QUEUE.h>
#include <_LIST_ENTRY.h>
#include <_WMI_BUFFER_HEADER.h>
#include <_EX_FAST_REF.h>
#include <_UNICODE_STRING.h>
#include <_LARGE_INTEGER.h>
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
#include <_TOKEN_ACCESS_INFORMATION.h>
#include <_RTL_BITMAP.h>
#include <_ETW_STACK_CACHE.h>
#include <_ETW_PMC_SUPPORT.h>
#include <_DISALLOWED_GUIDS.h>

//0x390 bytes (sizeof)
struct _WMI_LOGGER_CONTEXT
{
    ULONG LoggerId;                                                         //0x0
    ULONG BufferSize;                                                       //0x4
    ULONG MaximumEventSize;                                                 //0x8
    ULONG LoggerMode;                                                       //0xc
    LONG AcceptNewEvents;                                                   //0x10
    ULONG EventMarker[2];                                                   //0x14
    ULONG ErrorMarker;                                                      //0x1c
    ULONG SizeMask;                                                         //0x20
    LONGLONG (*GetCpuClock)();                                              //0x28
    struct _ETHREAD* LoggerThread;                                          //0x30
    LONG LoggerStatus;                                                      //0x38
    ULONG FailureReason;                                                    //0x3c
    struct _ETW_BUFFER_QUEUE BufferQueue;                                   //0x40
    struct _ETW_BUFFER_QUEUE OverflowQueue;                                 //0x58
    struct _LIST_ENTRY GlobalList;                                          //0x70
    struct _LIST_ENTRY ProviderBinaryList;                                  //0x80
    union
    {
        struct _WMI_BUFFER_HEADER* BatchedBufferList;                       //0x90
        struct _EX_FAST_REF CurrentBuffer;                                  //0x90
    };
    struct _UNICODE_STRING LoggerName;                                      //0x98
    struct _UNICODE_STRING LogFileName;                                     //0xa8
    struct _UNICODE_STRING LogFilePattern;                                  //0xb8
    struct _UNICODE_STRING NewLogFileName;                                  //0xc8
    ULONG ClockType;                                                        //0xd8
    ULONG LastFlushedBuffer;                                                //0xdc
    ULONG FlushTimer;                                                       //0xe0
    ULONG FlushThreshold;                                                   //0xe4
    union _LARGE_INTEGER ByteOffset;                                        //0xe8
    ULONG MinimumBuffers;                                                   //0xf0
    volatile LONG BuffersAvailable;                                         //0xf4
    volatile LONG NumberOfBuffers;                                          //0xf8
    ULONG MaximumBuffers;                                                   //0xfc
    volatile ULONG EventsLost;                                              //0x100
    volatile LONG PeakBuffersCount;                                         //0x104
    ULONG BuffersWritten;                                                   //0x108
    ULONG LogBuffersLost;                                                   //0x10c
    ULONG RealTimeBuffersDelivered;                                         //0x110
    ULONG RealTimeBuffersLost;                                              //0x114
    LONG* SequencePtr;                                                      //0x118
    ULONG LocalSequence;                                                    //0x120
    struct _GUID InstanceGuid;                                              //0x124
    ULONG MaximumFileSize;                                                  //0x134
    LONG FileCounter;                                                       //0x138
    enum _POOL_TYPE PoolType;                                               //0x13c
    struct _ETW_REF_CLOCK ReferenceTime;                                    //0x140
    LONG CollectionOn;                                                      //0x150
    ULONG ProviderInfoSize;                                                 //0x154
    struct _LIST_ENTRY Consumers;                                           //0x158
    ULONG NumConsumers;                                                     //0x168
    struct _ETW_REALTIME_CONSUMER* TransitionConsumer;                      //0x170
    VOID* RealtimeLogfileHandle;                                            //0x178
    struct _UNICODE_STRING RealtimeLogfileName;                             //0x180
    union _LARGE_INTEGER RealtimeWriteOffset;                               //0x190
    union _LARGE_INTEGER RealtimeReadOffset;                                //0x198
    union _LARGE_INTEGER RealtimeLogfileSize;                               //0x1a0
    ULONGLONG RealtimeLogfileUsage;                                         //0x1a8
    ULONGLONG RealtimeMaximumFileSize;                                      //0x1b0
    ULONG RealtimeBuffersSaved;                                             //0x1b8
    struct _ETW_REF_CLOCK RealtimeReferenceTime;                            //0x1c0
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;                                //0x1d0
    struct _KEVENT LoggerEvent;                                             //0x1d8
    struct _KEVENT FlushEvent;                                              //0x1f0
    struct _KTIMER FlushTimeOutTimer;                                       //0x208
    struct _KDPC LoggerDpc;                                                 //0x248
    struct _KMUTANT LoggerMutex;                                            //0x288
    struct _EX_PUSH_LOCK LoggerLock;                                        //0x2c0
    union
    {
        ULONGLONG BufferListSpinLock;                                       //0x2c8
        struct _EX_PUSH_LOCK BufferListPushLock;                            //0x2c8
    };
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x2d0
    struct _TOKEN_ACCESS_INFORMATION* TokenAccessInformation;               //0x318
    struct _EX_FAST_REF SecurityDescriptor;                                 //0x320
    union _LARGE_INTEGER StartTime;                                         //0x328
    VOID* LogFileHandle;                                                    //0x330
    LONGLONG BufferSequenceNumber;                                          //0x338
    union
    {
        ULONG Flags;                                                        //0x340
        struct
        {
            ULONG Persistent:1;                                             //0x340
            ULONG AutoLogger:1;                                             //0x340
            ULONG FsReady:1;                                                //0x340
            ULONG RealTime:1;                                               //0x340
            ULONG Wow:1;                                                    //0x340
            ULONG KernelTrace:1;                                            //0x340
            ULONG NoMoreEnable:1;                                           //0x340
            ULONG StackTracing:1;                                           //0x340
            ULONG ErrorLogged:1;                                            //0x340
            ULONG RealtimeLoggerContextFreed:1;                             //0x340
            ULONG PebsTracing:1;                                            //0x340
            ULONG PmcCounters:1;                                            //0x340
            ULONG PageAlignBuffers:1;                                       //0x340
            ULONG StackLookasideListAllocated:1;                            //0x340
            ULONG SecurityTrace:1;                                          //0x340
            ULONG SpareFlags1:1;                                            //0x340
            ULONG SystemLoggerIndex:8;                                      //0x340
            ULONG StackCaching:1;                                           //0x340
            ULONG SpareFlags2:7;                                            //0x340
        };
    };
    union
    {
        volatile ULONG RequestFlag;                                         //0x344
        struct
        {
            ULONG DbgRequestNewFile:1;                                      //0x344
            ULONG DbgRequestUpdateFile:1;                                   //0x344
            ULONG DbgRequestFlush:1;                                        //0x344
            ULONG DbgRequestDisableRealtime:1;                              //0x344
            ULONG DbgRequestDisconnectConsumer:1;                           //0x344
            ULONG DbgRequestConnectConsumer:1;                              //0x344
            ULONG DbgRequestNotifyConsumer:1;                               //0x344
            ULONG DbgRequestUpdateHeader:1;                                 //0x344
            ULONG DbgRequestDeferredFlush:1;                                //0x344
            ULONG DbgRequestDeferredFlushTimer:1;                           //0x344
            ULONG DbgRequestFlushTimer:1;                                   //0x344
            ULONG DbgRequestUpdateDebugger:1;                               //0x344
            ULONG DbgSpareRequestFlags:20;                                  //0x344
        };
    };
    struct _RTL_BITMAP HookIdMap;                                           //0x348
    struct _ETW_STACK_CACHE* StackCache;                                    //0x358
    struct _ETW_PMC_SUPPORT* PmcData;                                       //0x360
    struct _LIST_ENTRY WinRtProviderBinaryList;                             //0x368
    struct _WMI_BUFFER_HEADER** ScratchArray;                               //0x378
    struct _DISALLOWED_GUIDS DisallowedGuids;                               //0x380
};
/* Used in */
// _ETW_SILODRIVERSTATE

