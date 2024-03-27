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
#include <_PERIODIC_CAPTURE_STATE_GUIDS.h>
#include <_EX_TIMER.h>
#include <_ETW_PERIODIC_TIMER_STATE.h>
#include <_ETW_SOFT_RESTART_CONTEXT.h>
#include <_ETW_SILODRIVERSTATE.h>
#include <_WORK_QUEUE_ITEM.h>
#include <ETW_COMPRESSION_RESUMPTION_MODE.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x468 bytes (sizeof)
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
    struct _ETW_BUFFER_QUEUE OverflowQueue;                                 //0x50
    struct _LIST_ENTRY GlobalList;                                          //0x60
    struct _LIST_ENTRY ProviderBinaryList;                                  //0x70
    union
    {
        struct _WMI_BUFFER_HEADER* BatchedBufferList;                       //0x80
        struct _EX_FAST_REF CurrentBuffer;                                  //0x80
    };
    struct _UNICODE_STRING LoggerName;                                      //0x88
    struct _UNICODE_STRING LogFileName;                                     //0x98
    struct _UNICODE_STRING LogFilePattern;                                  //0xa8
    struct _UNICODE_STRING NewLogFileName;                                  //0xb8
    ULONG ClockType;                                                        //0xc8
    ULONG LastFlushedBuffer;                                                //0xcc
    ULONG FlushTimer;                                                       //0xd0
    ULONG FlushThreshold;                                                   //0xd4
    union _LARGE_INTEGER ByteOffset;                                        //0xd8
    ULONG MinimumBuffers;                                                   //0xe0
    volatile LONG BuffersAvailable;                                         //0xe4
    volatile LONG NumberOfBuffers;                                          //0xe8
    ULONG MaximumBuffers;                                                   //0xec
    volatile ULONG EventsLost;                                              //0xf0
    volatile LONG PeakBuffersCount;                                         //0xf4
    ULONG BuffersWritten;                                                   //0xf8
    ULONG LogBuffersLost;                                                   //0xfc
    ULONG RealTimeBuffersDelivered;                                         //0x100
    ULONG RealTimeBuffersLost;                                              //0x104
    LONG* SequencePtr;                                                      //0x108
    ULONG LocalSequence;                                                    //0x110
    struct _GUID InstanceGuid;                                              //0x114
    ULONG MaximumFileSize;                                                  //0x124
    LONG FileCounter;                                                       //0x128
    enum _POOL_TYPE PoolType;                                               //0x12c
    struct _ETW_REF_CLOCK ReferenceTime;                                    //0x130
    LONG CollectionOn;                                                      //0x140
    ULONG ProviderInfoSize;                                                 //0x144
    struct _LIST_ENTRY Consumers;                                           //0x148
    ULONG NumConsumers;                                                     //0x158
    struct _ETW_REALTIME_CONSUMER* TransitionConsumer;                      //0x160
    VOID* RealtimeLogfileHandle;                                            //0x168
    struct _UNICODE_STRING RealtimeLogfileName;                             //0x170
    union _LARGE_INTEGER RealtimeWriteOffset;                               //0x180
    union _LARGE_INTEGER RealtimeReadOffset;                                //0x188
    union _LARGE_INTEGER RealtimeLogfileSize;                               //0x190
    ULONGLONG RealtimeLogfileUsage;                                         //0x198
    ULONGLONG RealtimeMaximumFileSize;                                      //0x1a0
    ULONG RealtimeBuffersSaved;                                             //0x1a8
    struct _ETW_REF_CLOCK RealtimeReferenceTime;                            //0x1b0
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;                                //0x1c0
    struct _KEVENT LoggerEvent;                                             //0x1c8
    struct _KEVENT FlushEvent;                                              //0x1e0
    struct _KTIMER FlushTimeOutTimer;                                       //0x1f8
    struct _KDPC LoggerDpc;                                                 //0x238
    struct _KMUTANT LoggerMutex;                                            //0x278
    struct _EX_PUSH_LOCK LoggerLock;                                        //0x2b0
    union
    {
        ULONGLONG BufferListSpinLock;                                       //0x2b8
        struct _EX_PUSH_LOCK BufferListPushLock;                            //0x2b8
    };
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x2c0
    struct _TOKEN_ACCESS_INFORMATION* TokenAccessInformation;               //0x308
    struct _EX_FAST_REF SecurityDescriptor;                                 //0x310
    union _LARGE_INTEGER StartTime;                                         //0x318
    VOID* LogFileHandle;                                                    //0x320
    LONGLONG BufferSequenceNumber;                                          //0x328
    union
    {
        ULONG Flags;                                                        //0x330
        struct
        {
            ULONG Persistent:1;                                             //0x330
            ULONG AutoLogger:1;                                             //0x330
            ULONG FsReady:1;                                                //0x330
            ULONG RealTime:1;                                               //0x330
            ULONG Wow:1;                                                    //0x330
            ULONG KernelTrace:1;                                            //0x330
            ULONG NoMoreEnable:1;                                           //0x330
            ULONG StackTracing:1;                                           //0x330
            ULONG ErrorLogged:1;                                            //0x330
            ULONG RealtimeLoggerContextFreed:1;                             //0x330
            ULONG PebsTracing:1;                                            //0x330
            ULONG PmcCounters:1;                                            //0x330
            ULONG PageAlignBuffers:1;                                       //0x330
            ULONG StackLookasideListAllocated:1;                            //0x330
            ULONG SecurityTrace:1;                                          //0x330
            ULONG SpareFlags1:1;                                            //0x330
            ULONG SystemLoggerIndex:8;                                      //0x330
            ULONG StackCaching:1;                                           //0x330
            ULONG SpareFlags2:7;                                            //0x330
        };
    };
    union
    {
        volatile ULONG RequestFlag;                                         //0x334
        struct
        {
            ULONG DbgRequestNewFile:1;                                      //0x334
            ULONG DbgRequestUpdateFile:1;                                   //0x334
            ULONG DbgRequestFlush:1;                                        //0x334
            ULONG DbgRequestDisableRealtime:1;                              //0x334
            ULONG DbgRequestDisconnectConsumer:1;                           //0x334
            ULONG DbgRequestConnectConsumer:1;                              //0x334
            ULONG DbgRequestNotifyConsumer:1;                               //0x334
            ULONG DbgRequestUpdateHeader:1;                                 //0x334
            ULONG DbgRequestDeferredFlush:1;                                //0x334
            ULONG DbgRequestDeferredFlushTimer:1;                           //0x334
            ULONG DbgRequestFlushTimer:1;                                   //0x334
            ULONG DbgRequestUpdateDebugger:1;                               //0x334
            ULONG DbgSpareRequestFlags:20;                                  //0x334
        };
    };
    struct _RTL_BITMAP HookIdMap;                                           //0x338
    struct _ETW_STACK_CACHE* StackCache;                                    //0x348
    struct _ETW_PMC_SUPPORT* PmcData;                                       //0x350
    struct _LIST_ENTRY WinRtProviderBinaryList;                             //0x358
    struct _WMI_BUFFER_HEADER** ScratchArray;                               //0x368
    struct _DISALLOWED_GUIDS DisallowedGuids;                               //0x370
    LONGLONG RelativeTimerDueTime;                                          //0x380
    struct _PERIODIC_CAPTURE_STATE_GUIDS PeriodicCaptureStateGuids;         //0x388
    struct _EX_TIMER* PeriodicCaptureStateTimer;                            //0x398
    enum _ETW_PERIODIC_TIMER_STATE PeriodicCaptureStateTimerState;          //0x3a0
    struct _ETW_SOFT_RESTART_CONTEXT* SoftRestartContext;                   //0x3a8
    struct _ETW_SILODRIVERSTATE* SiloState;                                 //0x3b0
    struct _WORK_QUEUE_ITEM CompressionWorkItem;                            //0x3b8
    LONG CompressionWorkItemState;                                          //0x3d8
    struct _EX_PUSH_LOCK CompressionLock;                                   //0x3e0
    struct _WMI_BUFFER_HEADER* CompressionTarget;                           //0x3e8
    VOID* CompressionWorkspace;                                             //0x3f0
    LONG CompressionOn;                                                     //0x3f8
    ULONG CompressionRatioGuess;                                            //0x3fc
    ULONG PartialBufferCompressionLevel;                                    //0x400
    enum ETW_COMPRESSION_RESUMPTION_MODE CompressionResumptionMode;         //0x404
    struct _SINGLE_LIST_ENTRY PlaceholderList;                              //0x408
    struct _KDPC CompressionDpc;                                            //0x410
    union _LARGE_INTEGER LastBufferSwitchTime;                              //0x450
    union _LARGE_INTEGER BufferWriteDuration;                               //0x458
    union _LARGE_INTEGER BufferCompressDuration;                            //0x460
};
/* Used in */
// _ETW_SILODRIVERSTATE

