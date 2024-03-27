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
#include <_ETW_SOFT_RESTART_CONTEXT.h>
#include <_ETW_SILODRIVERSTATE.h>
#include <_WORK_QUEUE_ITEM.h>
#include <ETW_COMPRESSION_RESUMPTION_MODE.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x2f0 bytes (sizeof)
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
    struct _ETW_BUFFER_QUEUE OverflowQueue;                                 //0x38
    struct _LIST_ENTRY GlobalList;                                          //0x40
    struct _LIST_ENTRY ProviderBinaryList;                                  //0x48
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
    ULONG LastFlushedBuffer;                                                //0x78
    ULONG FlushTimer;                                                       //0x7c
    ULONG FlushThreshold;                                                   //0x80
    union _LARGE_INTEGER ByteOffset;                                        //0x88
    ULONG MinimumBuffers;                                                   //0x90
    volatile LONG BuffersAvailable;                                         //0x94
    volatile LONG NumberOfBuffers;                                          //0x98
    ULONG MaximumBuffers;                                                   //0x9c
    volatile ULONG EventsLost;                                              //0xa0
    volatile LONG PeakBuffersCount;                                         //0xa4
    ULONG BuffersWritten;                                                   //0xa8
    ULONG LogBuffersLost;                                                   //0xac
    ULONG RealTimeBuffersDelivered;                                         //0xb0
    ULONG RealTimeBuffersLost;                                              //0xb4
    LONG* SequencePtr;                                                      //0xb8
    ULONG LocalSequence;                                                    //0xbc
    struct _GUID InstanceGuid;                                              //0xc0
    ULONG MaximumFileSize;                                                  //0xd0
    LONG FileCounter;                                                       //0xd4
    enum _POOL_TYPE PoolType;                                               //0xd8
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
    struct _TOKEN_ACCESS_INFORMATION* TokenAccessInformation;               //0x22c
    struct _EX_FAST_REF SecurityDescriptor;                                 //0x230
    union _LARGE_INTEGER StartTime;                                         //0x238
    VOID* LogFileHandle;                                                    //0x240
    LONGLONG BufferSequenceNumber;                                          //0x248
    union
    {
        ULONG Flags;                                                        //0x250
        struct
        {
            ULONG Persistent:1;                                             //0x250
            ULONG AutoLogger:1;                                             //0x250
            ULONG FsReady:1;                                                //0x250
            ULONG RealTime:1;                                               //0x250
            ULONG Wow:1;                                                    //0x250
            ULONG KernelTrace:1;                                            //0x250
            ULONG NoMoreEnable:1;                                           //0x250
            ULONG StackTracing:1;                                           //0x250
            ULONG ErrorLogged:1;                                            //0x250
            ULONG RealtimeLoggerContextFreed:1;                             //0x250
            ULONG PebsTracing:1;                                            //0x250
            ULONG PmcCounters:1;                                            //0x250
            ULONG PageAlignBuffers:1;                                       //0x250
            ULONG StackLookasideListAllocated:1;                            //0x250
            ULONG SecurityTrace:1;                                          //0x250
            ULONG SpareFlags1:1;                                            //0x250
            ULONG SystemLoggerIndex:8;                                      //0x250
            ULONG StackCaching:1;                                           //0x250
            ULONG SpareFlags2:7;                                            //0x250
        };
    };
    union
    {
        volatile ULONG RequestFlag;                                         //0x254
        struct
        {
            ULONG DbgRequestNewFile:1;                                      //0x254
            ULONG DbgRequestUpdateFile:1;                                   //0x254
            ULONG DbgRequestFlush:1;                                        //0x254
            ULONG DbgRequestDisableRealtime:1;                              //0x254
            ULONG DbgRequestDisconnectConsumer:1;                           //0x254
            ULONG DbgRequestConnectConsumer:1;                              //0x254
            ULONG DbgRequestNotifyConsumer:1;                               //0x254
            ULONG DbgRequestUpdateHeader:1;                                 //0x254
            ULONG DbgRequestDeferredFlush:1;                                //0x254
            ULONG DbgRequestDeferredFlushTimer:1;                           //0x254
            ULONG DbgRequestFlushTimer:1;                                   //0x254
            ULONG DbgRequestUpdateDebugger:1;                               //0x254
            ULONG DbgSpareRequestFlags:20;                                  //0x254
        };
    };
    struct _RTL_BITMAP HookIdMap;                                           //0x258
    struct _ETW_STACK_CACHE* StackCache;                                    //0x260
    struct _ETW_PMC_SUPPORT* PmcData;                                       //0x264
    struct _LIST_ENTRY WinRtProviderBinaryList;                             //0x268
    struct _WMI_BUFFER_HEADER** ScratchArray;                               //0x270
    struct _DISALLOWED_GUIDS DisallowedGuids;                               //0x274
    struct _ETW_SOFT_RESTART_CONTEXT* SoftRestartContext;                   //0x27c
    struct _ETW_SILODRIVERSTATE* SiloState;                                 //0x280
    struct _WORK_QUEUE_ITEM CompressionWorkItem;                            //0x284
    LONG CompressionWorkItemState;                                          //0x294
    struct _EX_PUSH_LOCK CompressionLock;                                   //0x298
    struct _WMI_BUFFER_HEADER* CompressionTarget;                           //0x29c
    VOID* CompressionWorkspace;                                             //0x2a0
    LONG CompressionOn;                                                     //0x2a4
    ULONG CompressionRatioGuess;                                            //0x2a8
    ULONG PartialBufferCompressionLevel;                                    //0x2ac
    enum ETW_COMPRESSION_RESUMPTION_MODE CompressionResumptionMode;         //0x2b0
    struct _SINGLE_LIST_ENTRY PlaceholderList;                              //0x2b4
    struct _KDPC CompressionDpc;                                            //0x2b8
    union _LARGE_INTEGER LastBufferSwitchTime;                              //0x2d8
    union _LARGE_INTEGER BufferWriteDuration;                               //0x2e0
    union _LARGE_INTEGER BufferCompressDuration;                            //0x2e8
};
/* Used in */
// _ETW_SILODRIVERSTATE

