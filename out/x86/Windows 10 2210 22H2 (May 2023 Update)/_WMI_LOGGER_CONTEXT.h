#pragma once
/* ------------------ */

#include <_ETHREAD.h>
#include <_ETW_BUFFER_QUEUE.h>
#include <_LIST_ENTRY.h>
#include <_ETW_DECODE_CONTROL_ENTRY.h>
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
#include <_ETW_STACK_TRACE_BLOCK.h>
#include <_RTL_BITMAP.h>
#include <_ETW_STACK_CACHE.h>
#include <_ETW_PMC_SUPPORT.h>
#include <_ETW_LBR_SUPPORT.h>
#include <_ETW_IPT_SUPPORT.h>
#include <_DISALLOWED_GUIDS.h>
#include <PERIODIC_CAPTURE_STATE_CONTEXT.h>
#include <_ETW_SOFT_RESTART_CONTEXT.h>
#include <_ETW_SILODRIVERSTATE.h>
#include <_WORK_QUEUE_ITEM.h>
#include <ETW_COMPRESSION_RESUMPTION_MODE.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_ETW_EVENT_CALLBACK_CONTEXT.h>
#include <_ETW_PARTITION_CONTEXT.h>
#include <_MDL.h>

//0x380 bytes (sizeof)
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
    ULONG GetCpuClock;                                                      //0x20
    struct _ETHREAD* LoggerThread;                                          //0x24
    LONG LoggerStatus;                                                      //0x28
    ULONG FailureReason;                                                    //0x2c
    struct _ETW_BUFFER_QUEUE BufferQueue;                                   //0x30
    struct _ETW_BUFFER_QUEUE OverflowQueue;                                 //0x38
    struct _LIST_ENTRY GlobalList;                                          //0x40
    struct _LIST_ENTRY DebugIdTrackingList;                                 //0x48
    struct _ETW_DECODE_CONTROL_ENTRY* DecodeControlList;                    //0x50
    ULONG DecodeControlCount;                                               //0x54
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
    volatile LONG PeakBuffersCount;                                         //0xac
    ULONG BuffersWritten;                                                   //0xb0
    ULONG LogBuffersLost;                                                   //0xb4
    ULONG RealTimeBuffersDelivered;                                         //0xb8
    ULONG RealTimeBuffersLost;                                              //0xbc
    LONG* SequencePtr;                                                      //0xc0
    ULONG LocalSequence;                                                    //0xc4
    struct _GUID InstanceGuid;                                              //0xc8
    ULONG MaximumFileSize;                                                  //0xd8
    LONG FileCounter;                                                       //0xdc
    enum _POOL_TYPE PoolType;                                               //0xe0
    struct _ETW_REF_CLOCK ReferenceTime;                                    //0xe8
    LONG CollectionOn;                                                      //0xf8
    ULONG ProviderInfoSize;                                                 //0xfc
    struct _LIST_ENTRY Consumers;                                           //0x100
    ULONG NumConsumers;                                                     //0x108
    struct _ETW_REALTIME_CONSUMER* TransitionConsumer;                      //0x10c
    VOID* RealtimeLogfileHandle;                                            //0x110
    struct _UNICODE_STRING RealtimeLogfileName;                             //0x114
    union _LARGE_INTEGER RealtimeWriteOffset;                               //0x120
    union _LARGE_INTEGER RealtimeReadOffset;                                //0x128
    union _LARGE_INTEGER RealtimeLogfileSize;                               //0x130
    ULONGLONG RealtimeLogfileUsage;                                         //0x138
    ULONGLONG RealtimeMaximumFileSize;                                      //0x140
    ULONG RealtimeBuffersSaved;                                             //0x148
    struct _ETW_REF_CLOCK RealtimeReferenceTime;                            //0x150
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;                                //0x160
    struct _KEVENT LoggerEvent;                                             //0x164
    struct _KEVENT FlushEvent;                                              //0x174
    struct _KTIMER FlushTimeOutTimer;                                       //0x188
    struct _KDPC LoggerDpc;                                                 //0x1b0
    struct _KMUTANT LoggerMutex;                                            //0x1d0
    struct _EX_PUSH_LOCK LoggerLock;                                        //0x1f0
    union
    {
        ULONG BufferListSpinLock;                                           //0x1f4
        struct _EX_PUSH_LOCK BufferListPushLock;                            //0x1f4
    };
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x1f8
    struct _TOKEN_ACCESS_INFORMATION* TokenAccessInformation;               //0x234
    struct _EX_FAST_REF SecurityDescriptor;                                 //0x238
    union _LARGE_INTEGER StartTime;                                         //0x240
    VOID* LogFileHandle;                                                    //0x248
    LONGLONG BufferSequenceNumber;                                          //0x250
    union
    {
        ULONG Flags;                                                        //0x258
        struct
        {
            ULONG Persistent:1;                                             //0x258
            ULONG AutoLogger:1;                                             //0x258
            ULONG FsReady:1;                                                //0x258
            ULONG RealTime:1;                                               //0x258
            ULONG Wow:1;                                                    //0x258
            ULONG KernelTrace:1;                                            //0x258
            ULONG NoMoreEnable:1;                                           //0x258
            ULONG StackTracing:1;                                           //0x258
            ULONG ErrorLogged:1;                                            //0x258
            ULONG RealtimeLoggerContextFreed:1;                             //0x258
            ULONG PebsTracing:1;                                            //0x258
            ULONG PmcCounters:1;                                            //0x258
            ULONG PageAlignBuffers:1;                                       //0x258
            ULONG StackLookasideListAllocated:1;                            //0x258
            ULONG SecurityTrace:1;                                          //0x258
            ULONG LastBranchTracing:1;                                      //0x258
            ULONG SystemLoggerIndex:8;                                      //0x258
            ULONG StackCaching:1;                                           //0x258
            ULONG ProviderTracking:1;                                       //0x258
            ULONG ProcessorTrace:1;                                         //0x258
            ULONG QpcDeltaTracking:1;                                       //0x258
            ULONG MarkerBufferSaved:1;                                      //0x258
            ULONG LargeMdlPages:1;                                          //0x258
            ULONG ExcludeKernelStack:1;                                     //0x258
            ULONG SpareFlags2:1;                                            //0x258
        };
    };
    union
    {
        volatile ULONG RequestFlag;                                         //0x25c
        struct
        {
            ULONG DbgRequestNewFile:1;                                      //0x25c
            ULONG DbgRequestUpdateFile:1;                                   //0x25c
            ULONG DbgRequestFlush:1;                                        //0x25c
            ULONG DbgRequestDisableRealtime:1;                              //0x25c
            ULONG DbgRequestDisconnectConsumer:1;                           //0x25c
            ULONG DbgRequestConnectConsumer:1;                              //0x25c
            ULONG DbgRequestNotifyConsumer:1;                               //0x25c
            ULONG DbgRequestUpdateHeader:1;                                 //0x25c
            ULONG DbgRequestDeferredFlush:1;                                //0x25c
            ULONG DbgRequestDeferredFlushTimer:1;                           //0x25c
            ULONG DbgRequestFlushTimer:1;                                   //0x25c
            ULONG DbgRequestUpdateDebugger:1;                               //0x25c
            ULONG DbgSpareRequestFlags:20;                                  //0x25c
        };
    };
    struct _ETW_STACK_TRACE_BLOCK StackTraceBlock;                          //0x260
    struct _RTL_BITMAP HookIdMap;                                           //0x2b0
    struct _ETW_STACK_CACHE* StackCache;                                    //0x2b8
    struct _ETW_PMC_SUPPORT* PmcData;                                       //0x2bc
    struct _ETW_LBR_SUPPORT* LbrData;                                       //0x2c0
    struct _ETW_IPT_SUPPORT* IptData;                                       //0x2c4
    struct _LIST_ENTRY BinaryTrackingList;                                  //0x2c8
    struct _WMI_BUFFER_HEADER** ScratchArray;                               //0x2d0
    struct _DISALLOWED_GUIDS DisallowedGuids;                               //0x2d4
    struct PERIODIC_CAPTURE_STATE_CONTEXT* PeriodicCaptureStateContext;     //0x2dc
    struct _ETW_SOFT_RESTART_CONTEXT* SoftRestartContext;                   //0x2e0
    struct _ETW_SILODRIVERSTATE* SiloState;                                 //0x2e4
    struct _WORK_QUEUE_ITEM CompressionWorkItem;                            //0x2e8
    LONG CompressionWorkItemState;                                          //0x2f8
    struct _EX_PUSH_LOCK CompressionLock;                                   //0x2fc
    struct _WMI_BUFFER_HEADER* CompressionTarget;                           //0x300
    VOID* CompressionWorkspace;                                             //0x304
    LONG CompressionOn;                                                     //0x308
    ULONG CompressionRatioGuess;                                            //0x30c
    ULONG PartialBufferCompressionLevel;                                    //0x310
    enum ETW_COMPRESSION_RESUMPTION_MODE CompressionResumptionMode;         //0x314
    struct _SINGLE_LIST_ENTRY PlaceholderList;                              //0x318
    struct _KDPC CompressionDpc;                                            //0x31c
    union _LARGE_INTEGER LastBufferSwitchTime;                              //0x340
    union _LARGE_INTEGER BufferWriteDuration;                               //0x348
    union _LARGE_INTEGER BufferCompressDuration;                            //0x350
    LONGLONG ReferenceQpcDelta;                                             //0x358
    struct _ETW_EVENT_CALLBACK_CONTEXT* CallbackContext;                    //0x360
    union _LARGE_INTEGER* LastDroppedTime;                                  //0x364
    union _LARGE_INTEGER* FlushingLastDroppedTime;                          //0x368
    LONGLONG FlushingSequenceNumber;                                        //0x370
    struct _ETW_PARTITION_CONTEXT PartitionContext;                         //0x378
    struct _MDL* BufferMdl;                                                 //0x37c
};
/* Used in */
// _ETW_SILODRIVERSTATE

