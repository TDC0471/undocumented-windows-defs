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

//0x280 bytes (sizeof)
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
    struct _WMI_BUFFER_HEADER* BatchedBufferList;                           //0x30
    struct _UNICODE_STRING LoggerName;                                      //0x34
    struct _UNICODE_STRING LogFileName;                                     //0x3c
    struct _UNICODE_STRING LogFilePattern;                                  //0x44
    struct _UNICODE_STRING NewLogFileName;                                  //0x4c
    ULONG ClockType;                                                        //0x54
    LONG CollectionOn;                                                      //0x58
    ULONG MaximumFileSize;                                                  //0x5c
    ULONG LoggerMode;                                                       //0x60
    ULONG LastFlushedBuffer;                                                //0x64
    ULONG FlushTimer;                                                       //0x68
    ULONG FlushThreshold;                                                   //0x6c
    union _LARGE_INTEGER ByteOffset;                                        //0x70
    union _LARGE_INTEGER FlushTimeStamp;                                    //0x78
    ULONG MinimumBuffers;                                                   //0x80
    volatile LONG BuffersAvailable;                                         //0x84
    volatile LONG NumberOfBuffers;                                          //0x88
    ULONG MaximumBuffers;                                                   //0x8c
    volatile ULONG EventsLost;                                              //0x90
    ULONG BuffersWritten;                                                   //0x94
    ULONG LogBuffersLost;                                                   //0x98
    ULONG RealTimeBuffersDelivered;                                         //0x9c
    ULONG RealTimeBuffersLost;                                              //0xa0
    ULONG BufferSize;                                                       //0xa4
    ULONG MaximumEventSize;                                                 //0xa8
    LONG* SequencePtr;                                                      //0xac
    ULONG LocalSequence;                                                    //0xb0
    struct _GUID InstanceGuid;                                              //0xb4
    LONGLONG (*GetCpuClock)();                                              //0xc4
    LONG FileCounter;                                                       //0xc8
    VOID (* volatileBufferCallback)(struct _WMI_BUFFER_HEADER* arg1, VOID* arg2); //0xcc
    enum _POOL_TYPE PoolType;                                               //0xd0
    struct _ETW_REF_CLOCK ReferenceTime;                                    //0xd8
    UCHAR RealtimeLoggerContextFreed;                                       //0xe8
    struct _LIST_ENTRY Consumers;                                           //0xec
    ULONG NumConsumers;                                                     //0xf4
    struct _LIST_ENTRY Connecting;                                          //0xf8
    UCHAR NewConsumer;                                                      //0x100
    VOID* RealtimeLogfileHandle;                                            //0x104
    struct _UNICODE_STRING RealtimeLogfileName;                             //0x108
    union _LARGE_INTEGER RealtimeWriteOffset;                               //0x110
    union _LARGE_INTEGER RealtimeReadOffset;                                //0x118
    union _LARGE_INTEGER RealtimeLogfileSize;                               //0x120
    ULONGLONG RealtimeLogfileUsage;                                         //0x128
    ULONGLONG RealtimeMaximumFileSize;                                      //0x130
    ULONG RealtimeBuffersSaved;                                             //0x138
    struct _ETW_REF_CLOCK RealtimeReferenceTime;                            //0x140
    ULONG RealtimeDisconnectProcessId;                                      //0x150
    ULONG RealtimeDisconnectConsumerId;                                     //0x154
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;                                //0x158
    struct _KEVENT LoggerEvent;                                             //0x15c
    struct _KEVENT FlushEvent;                                              //0x16c
    struct _KDPC FlushDpc;                                                  //0x17c
    struct _KMUTANT LoggerMutex;                                            //0x19c
    struct _EX_PUSH_LOCK LoggerLock;                                        //0x1bc
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x1c0
    struct _EX_FAST_REF SecurityDescriptor;                                 //0x1fc
    struct _WMI_BUFFER_HEADER DummyBufferForMarker;                         //0x200
    LONGLONG BufferSequenceNumber;                                          //0x248
    LONG AcceptNewEvents;                                                   //0x250
    union
    {
        ULONG Flags;                                                        //0x254
        struct
        {
            ULONG Persistent:1;                                             //0x254
            ULONG AutoLogger:1;                                             //0x254
            ULONG FsReady:1;                                                //0x254
            ULONG RealTime:1;                                               //0x254
            ULONG Wow:1;                                                    //0x254
            ULONG KernelTrace:1;                                            //0x254
            ULONG NoMoreEnable:1;                                           //0x254
        };
    };
    union
    {
        ULONG RequestFlag;                                                  //0x258
        struct
        {
            ULONG RequestNewFie:1;                                          //0x258
            ULONG RequestUpdateFile:1;                                      //0x258
            ULONG RequestFlush:1;                                           //0x258
            ULONG RequestDisableRealtime:1;                                 //0x258
            ULONG RequestDisconnectConsumer:1;                              //0x258
        };
    };
    USHORT StackTraceFilterHookCount;                                       //0x25c
    USHORT StackTraceFilter[16];                                            //0x25e
};
