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

//0x270 bytes (sizeof)
struct _WMI_LOGGER_CONTEXT
{
    union _LARGE_INTEGER StartTime;                                         //0x0
    VOID* LogFileHandle;                                                    //0x8
    struct _ETHREAD* LoggerThread;                                          //0xc
    LONG LoggerStatus;                                                      //0x10
    ULONG LoggerId;                                                         //0x14
    VOID* NBQHead;                                                          //0x18
    VOID* OverflowNBQHead;                                                  //0x1c
    union _SLIST_HEADER QueueBlockFreeList;                                 //0x20
    union _SLIST_HEADER GlobalList;                                         //0x28
    struct _UNICODE_STRING LoggerName;                                      //0x30
    struct _UNICODE_STRING LogFileName;                                     //0x38
    struct _UNICODE_STRING LogFilePattern;                                  //0x40
    struct _UNICODE_STRING NewLogFileName;                                  //0x48
    ULONG ClockType;                                                        //0x50
    LONG CollectionOn;                                                      //0x54
    ULONG MaximumFileSize;                                                  //0x58
    ULONG LoggerMode;                                                       //0x5c
    ULONG LastFlushedBuffer;                                                //0x60
    ULONG FlushTimer;                                                       //0x64
    union _LARGE_INTEGER ByteOffset;                                        //0x68
    union _LARGE_INTEGER FlushTimeStamp;                                    //0x70
    ULONG MinimumBuffers;                                                   //0x78
    volatile LONG BuffersAvailable;                                         //0x7c
    volatile LONG NumberOfBuffers;                                          //0x80
    ULONG MaximumBuffers;                                                   //0x84
    volatile ULONG EventsLost;                                              //0x88
    ULONG BuffersWritten;                                                   //0x8c
    ULONG LogBuffersLost;                                                   //0x90
    ULONG RealTimeBuffersDelivered;                                         //0x94
    ULONG RealTimeBuffersLost;                                              //0x98
    ULONG BufferSize;                                                       //0x9c
    ULONG MaximumEventSize;                                                 //0xa0
    LONG* SequencePtr;                                                      //0xa4
    ULONG LocalSequence;                                                    //0xa8
    struct _GUID InstanceGuid;                                              //0xac
    LONGLONG (*GetCpuClock)();                                              //0xbc
    LONG FileCounter;                                                       //0xc0
    VOID (* volatileBufferCallback)(struct _WMI_BUFFER_HEADER* arg1, VOID* arg2); //0xc4
    enum _POOL_TYPE PoolType;                                               //0xc8
    struct _ETW_REF_CLOCK ReferenceTime;                                    //0xd0
    UCHAR RealtimeLoggerContextFreed;                                       //0xe0
    struct _LIST_ENTRY Consumers;                                           //0xe4
    ULONG NumConsumers;                                                     //0xec
    struct _LIST_ENTRY Connecting;                                          //0xf0
    UCHAR NewConsumer;                                                      //0xf8
    VOID* RealtimeLogfileHandle;                                            //0xfc
    struct _UNICODE_STRING RealtimeLogfileName;                             //0x100
    union _LARGE_INTEGER RealtimeWriteOffset;                               //0x108
    union _LARGE_INTEGER RealtimeReadOffset;                                //0x110
    union _LARGE_INTEGER RealtimeLogfileSize;                               //0x118
    ULONGLONG RealtimeLogfileUsage;                                         //0x120
    ULONG RealtimeBuffersSaved;                                             //0x128
    struct _ETW_REF_CLOCK RealtimeReferenceTime;                            //0x130
    ULONG RealtimeDisconnectProcessId;                                      //0x140
    ULONG RealtimeDisconnectConsumerId;                                     //0x144
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;                                //0x148
    struct _KEVENT LoggerEvent;                                             //0x14c
    struct _KEVENT FlushEvent;                                              //0x15c
    struct _KDPC FlushDpc;                                                  //0x16c
    struct _KMUTANT LoggerMutex;                                            //0x18c
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x1ac
    struct _EX_FAST_REF SecurityDescriptor;                                 //0x1e8
    struct _WMI_BUFFER_HEADER DummyBufferForMarker;                         //0x1f0
    LONGLONG BufferSequenceNumber;                                          //0x238
    LONG AcceptNewEvents;                                                   //0x240
    union
    {
        ULONG Flags;                                                        //0x244
        struct
        {
            ULONG Persistent:1;                                             //0x244
            ULONG AutoLogger:1;                                             //0x244
            ULONG FsReady:1;                                                //0x244
            ULONG RealTime:1;                                               //0x244
            ULONG Wow:1;                                                    //0x244
            ULONG KernelTrace:1;                                            //0x244
            ULONG NoMoreEnable:1;                                           //0x244
        };
    };
    union
    {
        ULONG RequestFlag;                                                  //0x248
        struct
        {
            ULONG RequestNewFie:1;                                          //0x248
            ULONG RequestUpdateFile:1;                                      //0x248
            ULONG RequestFlush:1;                                           //0x248
            ULONG RequestDisableRealtime:1;                                 //0x248
            ULONG RequestDisconnectConsumer:1;                              //0x248
        };
    };
    USHORT StackTraceFilterHookCount;                                       //0x24c
    USHORT StackTraceFilter[16];                                            //0x24e
};
