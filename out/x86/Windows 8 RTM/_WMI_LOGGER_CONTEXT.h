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
#include <_RTL_BITMAP.h>
#include <_ETW_STACK_CACHE.h>
#include <_ETW_PMC_SUPPORT.h>

//0x270 bytes (sizeof)
struct _WMI_LOGGER_CONTEXT
{
    ULONG LoggerId;                                                         //0x0
    ULONG BufferSize;                                                       //0x4
    ULONG MaximumEventSize;                                                 //0x8
    ULONG LoggerMode;                                                       //0xc
    LONG AcceptNewEvents;                                                   //0x10
    ULONG EventMarker[1];                                                   //0x14
    ULONG ErrorMarker;                                                      //0x18
    ULONG SizeMask;                                                         //0x1c
    LONGLONG (*GetCpuClock)();                                              //0x20
    struct _ETHREAD* LoggerThread;                                          //0x24
    LONG LoggerStatus;                                                      //0x28
    ULONG FailureReason;                                                    //0x2c
    struct _ETW_BUFFER_QUEUE BufferQueue;                                   //0x30
    struct _ETW_BUFFER_QUEUE OverflowQueue;                                 //0x3c
    struct _LIST_ENTRY GlobalList;                                          //0x48
    struct _LIST_ENTRY ProviderBinaryList;                                  //0x50
    union
    {
        struct _WMI_BUFFER_HEADER* BatchedBufferList;                       //0x58
        struct _EX_FAST_REF CurrentBuffer;                                  //0x58
    };
    struct _UNICODE_STRING LoggerName;                                      //0x5c
    struct _UNICODE_STRING LogFileName;                                     //0x64
    struct _UNICODE_STRING LogFilePattern;                                  //0x6c
    struct _UNICODE_STRING NewLogFileName;                                  //0x74
    ULONG ClockType;                                                        //0x7c
    ULONG LastFlushedBuffer;                                                //0x80
    ULONG FlushTimer;                                                       //0x84
    ULONG FlushThreshold;                                                   //0x88
    union _LARGE_INTEGER ByteOffset;                                        //0x90
    ULONG MinimumBuffers;                                                   //0x98
    volatile LONG BuffersAvailable;                                         //0x9c
    volatile LONG NumberOfBuffers;                                          //0xa0
    ULONG MaximumBuffers;                                                   //0xa4
    volatile ULONG EventsLost;                                              //0xa8
    ULONG BuffersWritten;                                                   //0xac
    ULONG LogBuffersLost;                                                   //0xb0
    ULONG RealTimeBuffersDelivered;                                         //0xb4
    ULONG RealTimeBuffersLost;                                              //0xb8
    LONG* SequencePtr;                                                      //0xbc
    ULONG LocalSequence;                                                    //0xc0
    struct _GUID InstanceGuid;                                              //0xc4
    ULONG MaximumFileSize;                                                  //0xd4
    LONG FileCounter;                                                       //0xd8
    enum _POOL_TYPE PoolType;                                               //0xdc
    struct _ETW_REF_CLOCK ReferenceTime;                                    //0xe0
    LONG CollectionOn;                                                      //0xf0
    ULONG ProviderInfoSize;                                                 //0xf4
    struct _LIST_ENTRY Consumers;                                           //0xf8
    ULONG NumConsumers;                                                     //0x100
    struct _ETW_REALTIME_CONSUMER* TransitionConsumer;                      //0x104
    VOID* RealtimeLogfileHandle;                                            //0x108
    struct _UNICODE_STRING RealtimeLogfileName;                             //0x10c
    union _LARGE_INTEGER RealtimeWriteOffset;                               //0x118
    union _LARGE_INTEGER RealtimeReadOffset;                                //0x120
    union _LARGE_INTEGER RealtimeLogfileSize;                               //0x128
    ULONGLONG RealtimeLogfileUsage;                                         //0x130
    ULONGLONG RealtimeMaximumFileSize;                                      //0x138
    ULONG RealtimeBuffersSaved;                                             //0x140
    struct _ETW_REF_CLOCK RealtimeReferenceTime;                            //0x148
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;                                //0x158
    struct _KEVENT LoggerEvent;                                             //0x15c
    struct _KEVENT FlushEvent;                                              //0x16c
    struct _KTIMER FlushTimeOutTimer;                                       //0x180
    struct _KDPC LoggerDpc;                                                 //0x1a8
    struct _KMUTANT LoggerMutex;                                            //0x1c8
    struct _EX_PUSH_LOCK LoggerLock;                                        //0x1e8
    union
    {
        ULONG BufferListSpinLock;                                           //0x1ec
        struct _EX_PUSH_LOCK BufferListPushLock;                            //0x1ec
    };
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x1f0
    struct _EX_FAST_REF SecurityDescriptor;                                 //0x22c
    union _LARGE_INTEGER StartTime;                                         //0x230
    VOID* LogFileHandle;                                                    //0x238
    LONGLONG BufferSequenceNumber;                                          //0x240
    union
    {
        ULONG Flags;                                                        //0x248
        struct
        {
            ULONG Persistent:1;                                             //0x248
            ULONG AutoLogger:1;                                             //0x248
            ULONG FsReady:1;                                                //0x248
            ULONG RealTime:1;                                               //0x248
            ULONG Wow:1;                                                    //0x248
            ULONG KernelTrace:1;                                            //0x248
            ULONG NoMoreEnable:1;                                           //0x248
            ULONG StackTracing:1;                                           //0x248
            ULONG ErrorLogged:1;                                            //0x248
            ULONG RealtimeLoggerContextFreed:1;                             //0x248
            ULONG PebsTracing:1;                                            //0x248
            ULONG PmcCounters:1;                                            //0x248
            ULONG PageAlignBuffers:1;                                       //0x248
            ULONG SpareFlags1:3;                                            //0x248
            ULONG SystemLoggerIndex:8;                                      //0x248
            ULONG StackCaching:1;                                           //0x248
            ULONG SpareFlags2:7;                                            //0x248
        };
    };
    union
    {
        volatile ULONG RequestFlag;                                         //0x24c
        struct
        {
            ULONG DbgRequestNewFie:1;                                       //0x24c
            ULONG DbgRequestUpdateFile:1;                                   //0x24c
            ULONG DbgRequestFlush:1;                                        //0x24c
            ULONG DbgRequestDisableRealtime:1;                              //0x24c
            ULONG DbgRequestDisconnectConsumer:1;                           //0x24c
            ULONG DbgRequestConnectConsumer:1;                              //0x24c
            ULONG DbgRequestNotifyConsumer:1;                               //0x24c
            ULONG DbgRequestUpdateHeader:1;                                 //0x24c
            ULONG DbgRequestDefferdFlush:1;                                 //0x24c
            ULONG DbgRequestDefferdFlushTimer:1;                            //0x24c
            ULONG DbgRequestFlushTimer:1;                                   //0x24c
            ULONG DbgRequestUpdateDebugger:1;                               //0x24c
            ULONG DbgSpareRequestFlags:20;                                  //0x24c
        };
    };
    struct _RTL_BITMAP HookIdMap;                                           //0x250
    struct _ETW_STACK_CACHE* StackCache;                                    //0x258
    struct _ETW_PMC_SUPPORT* PmcData;                                       //0x25c
    struct _LIST_ENTRY WinRtProviderBinaryList;                             //0x260
    struct _WMI_BUFFER_HEADER** ScratchArray;                               //0x268
};
