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

//0x330 bytes (sizeof)
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
    struct _ETHREAD* LoggerThread;                                          //0x30
    LONG LoggerStatus;                                                      //0x38
    VOID* NBQHead;                                                          //0x40
    VOID* OverflowNBQHead;                                                  //0x48
    union _SLIST_HEADER QueueBlockFreeList;                                 //0x50
    struct _LIST_ENTRY GlobalList;                                          //0x60
    union
    {
        struct _WMI_BUFFER_HEADER* BatchedBufferList;                       //0x70
        struct _EX_FAST_REF CurrentBuffer;                                  //0x70
    };
    struct _UNICODE_STRING LoggerName;                                      //0x78
    struct _UNICODE_STRING LogFileName;                                     //0x88
    struct _UNICODE_STRING LogFilePattern;                                  //0x98
    struct _UNICODE_STRING NewLogFileName;                                  //0xa8
    ULONG ClockType;                                                        //0xb8
    ULONG MaximumFileSize;                                                  //0xbc
    ULONG LastFlushedBuffer;                                                //0xc0
    ULONG FlushTimer;                                                       //0xc4
    ULONG FlushThreshold;                                                   //0xc8
    union _LARGE_INTEGER ByteOffset;                                        //0xd0
    ULONG MinimumBuffers;                                                   //0xd8
    volatile LONG BuffersAvailable;                                         //0xdc
    volatile LONG NumberOfBuffers;                                          //0xe0
    ULONG MaximumBuffers;                                                   //0xe4
    volatile ULONG EventsLost;                                              //0xe8
    ULONG BuffersWritten;                                                   //0xec
    ULONG LogBuffersLost;                                                   //0xf0
    ULONG RealTimeBuffersDelivered;                                         //0xf4
    ULONG RealTimeBuffersLost;                                              //0xf8
    LONG* SequencePtr;                                                      //0x100
    ULONG LocalSequence;                                                    //0x108
    struct _GUID InstanceGuid;                                              //0x10c
    LONG FileCounter;                                                       //0x11c
    VOID (* volatileBufferCallback)(struct _WMI_BUFFER_HEADER* arg1, VOID* arg2); //0x120
    enum _POOL_TYPE PoolType;                                               //0x128
    struct _ETW_REF_CLOCK ReferenceTime;                                    //0x130
    struct _LIST_ENTRY Consumers;                                           //0x140
    ULONG NumConsumers;                                                     //0x150
    struct _ETW_REALTIME_CONSUMER* TransitionConsumer;                      //0x158
    VOID* RealtimeLogfileHandle;                                            //0x160
    struct _UNICODE_STRING RealtimeLogfileName;                             //0x168
    union _LARGE_INTEGER RealtimeWriteOffset;                               //0x178
    union _LARGE_INTEGER RealtimeReadOffset;                                //0x180
    union _LARGE_INTEGER RealtimeLogfileSize;                               //0x188
    ULONGLONG RealtimeLogfileUsage;                                         //0x190
    ULONGLONG RealtimeMaximumFileSize;                                      //0x198
    ULONG RealtimeBuffersSaved;                                             //0x1a0
    struct _ETW_REF_CLOCK RealtimeReferenceTime;                            //0x1a8
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;                                //0x1b8
    struct _KEVENT LoggerEvent;                                             //0x1c0
    struct _KEVENT FlushEvent;                                              //0x1d8
    struct _KTIMER FlushTimeOutTimer;                                       //0x1f0
    struct _KDPC FlushDpc;                                                  //0x230
    struct _KMUTANT LoggerMutex;                                            //0x270
    struct _EX_PUSH_LOCK LoggerLock;                                        //0x2a8
    union
    {
        ULONGLONG BufferListSpinLock;                                       //0x2b0
        struct _EX_PUSH_LOCK BufferListPushLock;                            //0x2b0
    };
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x2b8
    struct _EX_FAST_REF SecurityDescriptor;                                 //0x300
    LONGLONG BufferSequenceNumber;                                          //0x308
    union
    {
        ULONG Flags;                                                        //0x310
        struct
        {
            ULONG Persistent:1;                                             //0x310
            ULONG AutoLogger:1;                                             //0x310
            ULONG FsReady:1;                                                //0x310
            ULONG RealTime:1;                                               //0x310
            ULONG Wow:1;                                                    //0x310
            ULONG KernelTrace:1;                                            //0x310
            ULONG NoMoreEnable:1;                                           //0x310
            ULONG StackTracing:1;                                           //0x310
            ULONG ErrorLogged:1;                                            //0x310
            ULONG RealtimeLoggerContextFreed:1;                             //0x310
        };
    };
    union
    {
        ULONG RequestFlag;                                                  //0x314
        struct
        {
            ULONG RequestNewFie:1;                                          //0x314
            ULONG RequestUpdateFile:1;                                      //0x314
            ULONG RequestFlush:1;                                           //0x314
            ULONG RequestDisableRealtime:1;                                 //0x314
            ULONG RequestDisconnectConsumer:1;                              //0x314
            ULONG RequestConnectConsumer:1;                                 //0x314
        };
    };
    struct _RTL_BITMAP HookIdMap;                                           //0x318
};
